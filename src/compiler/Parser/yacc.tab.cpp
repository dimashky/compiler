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


	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;
	extern Procedure* AST;

	Logger l("logs/parser.log");
	void yyerror(const char *);
		


/* Line 371 of yacc.c  */
#line 107 "yacc.tab.cpp"

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
#line 47 "yacc.y"

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

		queue<Node*>*exps;

		Procedure* proc;
		Symbol* symbol;
		Expression *exp;
		Statement* st;
		Operator op;
		Node* node;

		bool known_type;
        
		}r;
	

/* Line 387 of yacc.c  */
#line 323 "yacc.tab.cpp"
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
#line 351 "yacc.tab.cpp"

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
#define YYLAST   3300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  264
/* YYNRULES -- Number of rules.  */
#define YYNRULES  605
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1008

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
     660,   661,   668,   669,   670,   680,   686,   690,   691,   693,
     695,   698,   701,   703,   706,   710,   713,   715,   717,   719,
     721,   724,   730,   736,   737,   738,   746,   754,   762,   772,
     773,   775,   776,   778,   779,   781,   783,   785,   787,   789,
     791,   795,   804,   806,   808,   810,   812,   814,   817,   820,
     823,   826,   830,   835,   839,   843,   848,   852,   856,   860,
     861,   863,   867,   871,   875,   879,   884,   886,   889,   896,
     903,   906,   907,   909,   912,   915,   918,   924,   930,   932,
     934,   941,   943,   947,   951,   954,   957,   958,   960,   961,
     963,   964,   966,   967,   974,   975,   977,   979,   982,   985,
     989,   994,   996,   999,  1001,  1003,  1009,  1015,  1019,  1023,
    1025,  1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1043,
    1045,  1047,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,
    1066,  1068,  1070,  1072,  1074,  1076,  1078,  1079,  1088,  1089,
    1098,  1099,  1101,  1104,  1107,  1112,  1114,  1118,  1122,  1123,
    1125,  1127,  1130,  1132,  1134,  1136,  1138,  1140,  1142,  1144,
    1146,  1148,  1150,  1157,  1164,  1170,  1176,  1178,  1179,  1189,
    1190,  1200,  1201,  1211,  1212,  1222,  1231,  1240,  1249,  1258,
    1259,  1261,  1263,  1267,  1269,  1271,  1273,  1277,  1279,  1283,
    1285,  1287,  1292,  1296,  1300,  1301,  1303,  1305,  1310,  1320,
    1323,  1326,  1327,  1329,  1330,  1332,  1338,  1344,  1346,  1348,
    1355,  1366,  1369,  1372,  1378,  1384,  1393,  1399,  1405,  1408,
    1413,  1415,  1417,  1425,  1436,  1438,  1440,  1442,  1444,  1446,
    1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,
    1468,  1470,  1472,  1474,  1476,  1478,  1480,  1488,  1496,  1497,
    1507,  1508,  1510,  1516,  1522,  1530,  1532,  1534,  1536,  1538,
    1546,  1547,  1549,  1552,  1556,  1557,  1559,  1561,  1564,  1566,
    1568,  1570,  1572,  1574,  1576,  1578,  1580,  1582,  1586,  1591,
    1592,  1594,  1596,  1600,  1601,  1610,  1611,  1613,  1616,  1620,
    1621,  1623,  1625,  1628,  1630,  1632,  1634,  1636,  1645,  1654,
    1655,  1657,  1658,  1669,  1670,  1684,  1688,  1692,  1699,  1706,
    1713,  1715,  1718,  1726,  1727,  1729,  1732,  1736,  1741,  1742,
    1744,  1746,  1750,  1753,  1758,  1768,  1778,  1780,  1782,  1785,
    1792,  1800,  1801,  1803,  1806,  1808,  1810,  1812,  1814,  1816,
    1818,  1820,  1822,  1824,  1826,  1830,  1833,  1834,  1836,  1838,
    1842,  1843,  1844,  1845,  1846,  1847,  1848,  1850,  1852,  1854,
    1856,  1858,  1860,  1862,  1864,  1866
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     277,     0,    -1,   145,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    50,    -1,    73,    -1,    32,    -1,   284,
      -1,   284,    -1,   149,    -1,   157,    -1,   150,    -1,   147,
      -1,   151,    -1,   155,    -1,   156,    -1,   152,    -1,    12,
      -1,   153,    -1,   154,    -1,    22,    -1,    62,    -1,    14,
      -1,    64,    -1,    80,    -1,    42,    -1,    76,    -1,    47,
      -1,    77,    -1,    17,    -1,    35,    -1,    26,    -1,    51,
      -1,    68,    -1,   148,   111,    -1,    83,   111,    -1,   157,
     159,    -1,   150,   159,    -1,   284,   159,    -1,    -1,   159,
     158,    -1,     3,    -1,   208,    -1,   162,    -1,   161,    97,
     162,    -1,   208,    -1,    60,   160,    -1,    53,   160,    -1,
     165,    -1,   164,    -1,   144,    -1,   178,    -1,   166,    -1,
     167,    -1,   169,    -1,   172,    -1,   173,    -1,   176,    -1,
     180,    -1,   185,    -1,   181,    -1,   182,    -1,   102,   208,
     103,    -1,   163,   108,     4,    -1,   151,   108,     4,    -1,
     155,   108,     4,    -1,   164,   102,   168,   103,    -1,   284,
     102,   168,   103,    -1,    -1,   161,    -1,   163,    98,   171,
      99,    -1,   284,    98,   171,    99,    -1,    -1,   171,    -1,
     208,    -1,   171,    97,   208,    -1,    71,    -1,    11,   108,
       4,    -1,    11,    98,   171,    99,    -1,   186,   139,    -1,
     186,   140,    -1,   177,    -1,    49,   148,   102,   168,   103,
      -1,    49,   149,    98,   171,    99,   158,   179,    -1,    49,
     157,   357,    -1,    -1,   357,    -1,    75,   102,   148,   103,
      -1,    75,   102,    83,   103,    -1,    18,   102,   208,   103,
      -1,    78,   102,   208,   103,    -1,   186,   141,     4,    -1,
     114,   190,    -1,    65,   102,   148,   103,    -1,   163,    -1,
     284,    -1,   174,    -1,   175,    -1,   183,    -1,   116,   190,
      -1,   117,   190,    -1,   191,    -1,   186,    -1,   139,   190,
      -1,   140,   190,    -1,   109,   190,    -1,   110,   190,    -1,
     111,   190,    -1,   188,    -1,   189,    -1,   184,    -1,   187,
      -1,   102,   208,   103,   187,    -1,   102,   195,   111,   103,
     190,    -1,   102,   284,   159,   192,   103,   190,    -1,   102,
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
      -1,   228,    -1,   230,    -1,   242,    -1,   257,    -1,   264,
      -1,   269,    -1,   270,    -1,   271,    -1,   272,    -1,   243,
      -1,   274,    -1,    -1,   100,   214,   215,   101,    -1,   100,
       1,   101,    -1,    -1,   216,    -1,   211,    -1,   216,   211,
      -1,   106,    -1,     4,   107,   211,    -1,   220,   106,    -1,
     225,   106,    -1,   220,     1,    -1,   225,     1,    -1,   148,
     221,    -1,   222,    -1,   221,    97,   222,    -1,     4,    -1,
       4,   120,   223,    -1,   208,    -1,   357,    -1,   224,    -1,
      66,   148,    98,   208,    99,    -1,    20,   148,   226,    -1,
     227,    -1,   226,    97,   227,    -1,     4,   120,   209,    -1,
     167,   106,    -1,   177,   106,    -1,   206,   106,    -1,   174,
     106,    -1,   175,   106,    -1,   188,   106,    -1,   189,   106,
      -1,   167,     1,    -1,   177,     1,    -1,   206,     1,    -1,
     174,     1,    -1,   175,     1,    -1,   188,     1,    -1,   189,
       1,    -1,   167,    -1,   177,    -1,   206,    -1,   174,    -1,
     175,    -1,   188,    -1,   189,    -1,   231,    -1,   235,    -1,
      -1,    39,   403,   210,   404,   232,   212,    -1,    -1,    -1,
      39,   403,   210,   404,   233,   212,   234,    27,   212,    -1,
      70,   403,   208,   404,   236,    -1,   100,   237,   101,    -1,
      -1,   238,    -1,   239,    -1,   238,   239,    -1,   240,   216,
      -1,   241,    -1,   240,   241,    -1,    15,   209,   107,    -1,
      23,   107,    -1,   244,    -1,   247,    -1,   248,    -1,   256,
      -1,    79,   213,    -1,    85,   102,   210,   103,   212,    -1,
      85,   102,     1,   103,   212,    -1,    -1,    -1,    85,     1,
     245,   210,     1,   212,   246,    -1,    25,   212,    85,   102,
     210,   103,   106,    -1,    25,   212,    85,   102,   210,   103,
       1,    -1,    36,   403,   249,   405,   250,   405,   251,   404,
     212,    -1,    -1,   252,    -1,    -1,   253,    -1,    -1,   254,
      -1,   220,    -1,   255,    -1,   210,    -1,   255,    -1,   229,
      -1,   255,    97,   229,    -1,    37,   403,   148,     4,   406,
     208,   404,   212,    -1,   258,    -1,   259,    -1,   260,    -1,
     261,    -1,   263,    -1,    13,   106,    -1,    13,     1,    -1,
      21,   106,    -1,    21,     1,    -1,    38,     4,   106,    -1,
      38,    15,   209,   106,    -1,    38,    23,   106,    -1,    38,
       4,     1,    -1,    38,    15,   209,     1,    -1,    38,    23,
       1,    -1,    61,   262,   106,    -1,    61,   262,     1,    -1,
      -1,   208,    -1,    72,   262,   106,    -1,    72,   262,     1,
      -1,    74,   213,   265,    -1,    74,   213,   268,    -1,    74,
     213,   265,   268,    -1,   266,    -1,   265,   266,    -1,    16,
     102,   155,   267,   103,   213,    -1,    16,   102,   147,   267,
     103,   213,    -1,    16,   213,    -1,    -1,     4,    -1,    33,
     213,    -1,    18,   213,    -1,    78,   213,    -1,    46,   102,
     208,   103,   212,    -1,    81,   102,   273,   103,   212,    -1,
     220,    -1,   208,    -1,    34,   102,   148,   275,   103,   212,
      -1,   276,    -1,   275,    97,   276,    -1,     4,   120,   208,
      -1,   278,   279,    -1,   278,   291,    -1,    -1,   287,    -1,
      -1,   385,    -1,    -1,   291,    -1,    -1,   279,    48,   284,
     282,   286,   283,    -1,    -1,   106,    -1,     4,    -1,   285,
       4,    -1,     4,   108,    -1,   285,     4,   108,    -1,   100,
     278,   280,   101,    -1,   288,    -1,   287,   288,    -1,   289,
      -1,   290,    -1,    81,     4,   120,   284,   106,    -1,    81,
       4,   120,   284,     1,    -1,    81,   146,   106,    -1,    81,
     146,     1,    -1,   292,    -1,   291,   292,    -1,   281,    -1,
     293,    -1,   297,    -1,   350,    -1,   360,    -1,   377,    -1,
     384,    -1,    -1,   295,    -1,   296,    -1,   295,   296,    -1,
       9,    -1,    31,    -1,    44,    -1,    49,    -1,    54,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    63,    -1,
      67,    -1,    79,    -1,    82,    -1,    84,    -1,    -1,   279,
     294,   402,     4,   300,   298,   303,   283,    -1,    -1,   279,
     294,   402,     4,   300,   299,     1,   283,    -1,    -1,   301,
      -1,   107,   155,    -1,   107,   302,    -1,   107,   155,    97,
     302,    -1,   147,    -1,   302,    97,   147,    -1,   100,   304,
     101,    -1,    -1,   305,    -1,   306,    -1,   305,   306,    -1,
     307,    -1,   308,    -1,   309,    -1,   324,    -1,   331,    -1,
     335,    -1,   338,    -1,   343,    -1,   347,    -1,   293,    -1,
     279,   294,    20,   148,   226,   106,    -1,   279,   294,    20,
     148,   226,     1,    -1,   279,   294,   148,   221,   106,    -1,
     279,   294,   148,   221,     1,    -1,   310,    -1,    -1,   279,
     294,   148,   284,   102,   315,   103,   311,   213,    -1,    -1,
     279,   294,    83,   284,   102,   315,   103,   312,   213,    -1,
      -1,   279,   294,   148,   284,   102,     1,   103,   313,   213,
      -1,    -1,   279,   294,    83,   284,   102,     1,   103,   314,
     213,    -1,   279,   294,   148,   284,   102,   315,   103,   106,
      -1,   279,   294,    83,   284,   102,   315,   103,   106,    -1,
     279,   294,   148,   284,   102,     1,   103,   106,    -1,   279,
     294,    83,   284,   102,     1,   103,   106,    -1,    -1,   317,
      -1,   318,    -1,   317,    97,   318,    -1,   148,    -1,    83,
      -1,   319,    -1,   317,    97,   319,    -1,   321,    -1,   318,
      97,   321,    -1,   320,    -1,   323,    -1,   279,   322,   148,
       4,    -1,   320,   120,   223,    -1,   323,   120,   223,    -1,
      -1,    60,    -1,    53,    -1,   279,    55,   148,     4,    -1,
     279,   294,   148,   284,   400,   100,   325,   101,   401,    -1,
     328,   326,    -1,   329,   327,    -1,    -1,   329,    -1,    -1,
     328,    -1,   279,    93,   401,   330,   400,    -1,   279,    94,
     401,   330,   400,    -1,   213,    -1,   106,    -1,   279,   294,
      29,   148,   221,   106,    -1,   279,   294,    29,   148,   284,
     398,   100,   332,   101,   399,    -1,   333,   334,    -1,   334,
     333,    -1,   279,    95,   399,   213,   398,    -1,   279,    96,
     399,   213,   398,    -1,   279,   294,   336,   400,   100,   325,
     101,   401,    -1,   148,    71,    98,   317,    99,    -1,   148,
     337,    98,   317,    99,    -1,   285,    71,    -1,   279,   294,
     339,   348,    -1,   340,    -1,   342,    -1,   148,    52,   341,
     102,   148,     4,   103,    -1,   148,    52,   341,   102,   148,
       4,    97,   148,     4,   103,    -1,   109,    -1,   110,    -1,
     116,    -1,   117,    -1,   139,    -1,   140,    -1,    73,    -1,
      32,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     115,    -1,   119,    -1,   129,    -1,   130,    -1,   133,    -1,
     134,    -1,   104,    -1,   105,    -1,   136,    -1,   135,    -1,
      40,    52,   148,   102,   148,     4,   103,    -1,    30,    52,
     148,   102,   148,     4,   103,    -1,    -1,   279,   294,     4,
     102,   315,   103,   344,   345,   349,    -1,    -1,   346,    -1,
     107,    11,   102,   168,   103,    -1,   107,    71,   102,   168,
     103,    -1,   279,   294,   117,     4,   102,   103,   213,    -1,
     213,    -1,   106,    -1,   213,    -1,   106,    -1,   279,   294,
      69,     4,   351,   353,   283,    -1,    -1,   352,    -1,   107,
     302,    -1,   100,   354,   101,    -1,    -1,   355,    -1,   356,
      -1,   355,   356,    -1,   307,    -1,   308,    -1,   309,    -1,
     324,    -1,   331,    -1,   335,    -1,   338,    -1,   343,    -1,
     293,    -1,   100,   358,   101,    -1,   100,   359,    97,   101,
      -1,    -1,   359,    -1,   223,    -1,   359,    97,   223,    -1,
      -1,   279,   294,    43,     4,   362,   361,   364,   283,    -1,
      -1,   363,    -1,   107,   302,    -1,   100,   365,   101,    -1,
      -1,   366,    -1,   367,    -1,   366,   367,    -1,   368,    -1,
     370,    -1,   375,    -1,   372,    -1,   279,   369,   148,     4,
     102,   315,   103,   376,    -1,   279,   369,    83,     4,   102,
     315,   103,   376,    -1,    -1,    49,    -1,    -1,   279,   369,
     148,     4,   400,   100,   374,   101,   401,   371,    -1,    -1,
     279,   369,   148,    71,    98,   317,    99,   400,   100,   374,
     101,   401,   373,    -1,   279,    93,   376,    -1,   279,    94,
     376,    -1,   279,    93,   376,   279,    94,   376,    -1,   279,
      94,   376,   279,    93,   376,    -1,   279,   369,    29,   148,
       4,   376,    -1,   106,    -1,   100,   101,    -1,   279,   294,
      28,     4,   378,   380,   283,    -1,    -1,   379,    -1,   107,
     153,    -1,   100,   381,   101,    -1,   100,   382,    97,   101,
      -1,    -1,   382,    -1,   383,    -1,   382,    97,   383,    -1,
     279,     4,    -1,   279,     4,   120,   209,    -1,   279,   294,
      24,   316,     4,   102,   315,   103,   106,    -1,   279,   294,
      24,   316,     4,   102,   315,   103,     1,    -1,   386,    -1,
     387,    -1,   386,   387,    -1,   396,    98,   388,   391,    99,
     397,    -1,   396,    98,   388,   391,    97,    99,   397,    -1,
      -1,   389,    -1,   390,   107,    -1,    86,    -1,    87,    -1,
      29,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
      61,    -1,    92,    -1,   392,    -1,   391,    97,   392,    -1,
     394,   393,    -1,    -1,   395,    -1,   147,    -1,   102,   170,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
       1,    -1,   102,    -1,     1,    -1,   103,    -1,     1,    -1,
     106,    -1,     1,    -1,    41,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   141,   142,   143,   144,   145,   148,   149,
     155,   159,   164,   165,   169,   170,   174,   175,   176,   180,
     181,   185,   186,   187,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   202,   203,   206,   207,   210,   211,   214,
     215,   216,   219,   220,   223,   227,   231,   232,   235,   236,
     237,   240,   241,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   258,   261,   262,   263,   266,
     267,   270,   271,   274,   275,   278,   279,   282,   283,   286,
     289,   290,   293,   296,   299,   302,   305,   306,   309,   310,
     313,   314,   317,   320,   323,   326,   329,   332,   333,   334,
     335,   336,   339,   340,   341,   342,   345,   348,   351,   352,
     353,   354,   355,   356,   357,   365,   366,   367,   368,   369,
     370,   373,   374,   377,   378,   381,   382,   385,   386,   391,
     396,   404,   409,   414,   422,   427,   432,   440,   445,   450,
     455,   460,   465,   470,   478,   483,   488,   496,   501,   508,
     513,   521,   526,   534,   539,   547,   552,   561,   566,   574,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   595,   596,   599,   606,   610,   611,   612,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   630,   630,   631,   634,   635,   639,   640,   643,   646,
     649,   650,   651,   652,   655,   663,   670,   680,   685,   692,
     693,   694,   697,   700,   707,   716,   728,   737,   738,   739,
     740,   741,   742,   743,   745,   746,   747,   748,   749,   750,
     751,   754,   755,   756,   757,   758,   759,   760,   763,   764,
     767,   767,   768,   768,   768,   772,   775,   778,   779,   782,
     783,   786,   789,   790,   793,   794,   797,   798,   799,   800,
     803,   806,   807,   808,   808,   808,   811,   812,   816,   821,
     822,   825,   826,   829,   830,   833,   834,   837,   840,   843,
     844,   847,   850,   851,   852,   853,   854,   857,   858,   861,
     862,   865,   866,   867,   868,   869,   870,   873,   874,   877,
     878,   881,   882,   885,   886,   887,   890,   891,   894,   895,
     896,   899,   900,   903,   906,   909,   912,   915,   918,   919,
     923,   926,   927,   930,   933,   934,   937,   938,   941,   942,
     945,   946,   949,   949,   953,   954,   958,   962,   969,   970,
     974,   977,   978,   981,   982,   985,   986,   989,   990,   993,
     994,   997,   998,  1001,  1002,  1003,  1004,  1005,  1017,  1021,
    1028,  1034,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1053,  1054,  1055,  1066,  1065,  1071,  1070,
    1079,  1080,  1083,  1084,  1085,  1097,  1103,  1112,  1116,  1117,
    1120,  1121,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1132,  1133,  1136,  1141,  1149,  1154,  1162,  1167,  1166,  1174,
    1173,  1180,  1179,  1186,  1184,  1195,  1199,  1203,  1207,  1215,
    1218,  1222,  1226,  1235,  1236,  1248,  1253,  1260,  1265,  1272,
    1280,  1290,  1301,  1309,  1320,  1321,  1322,  1325,  1336,  1342,
    1343,  1346,  1347,  1350,  1351,  1354,  1360,  1366,  1367,  1370,
    1371,  1377,  1378,  1381,  1387,  1393,  1399,  1401,  1404,  1408,
    1411,  1412,  1415,  1416,  1419,  1420,  1421,  1422,  1423,  1424,
    1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,
    1435,  1436,  1437,  1438,  1439,  1440,  1443,  1444,  1448,  1447,
    1454,  1455,  1458,  1459,  1475,  1478,  1479,  1482,  1483,  1488,
    1491,  1492,  1495,  1498,  1501,  1502,  1505,  1506,  1509,  1510,
    1511,  1512,  1513,  1514,  1515,  1516,  1518,  1523,  1524,  1527,
    1528,  1531,  1532,  1538,  1537,  1545,  1546,  1549,  1552,  1555,
    1556,  1559,  1560,  1563,  1564,  1565,  1566,  1570,  1576,  1584,
    1585,  1591,  1588,  1598,  1594,  1602,  1603,  1604,  1605,  1608,
    1613,  1614,  1619,  1622,  1623,  1626,  1629,  1630,  1633,  1634,
    1637,  1638,  1641,  1642,  1647,  1648,  1653,  1656,  1657,  1660,
    1661,  1664,  1665,  1668,  1671,  1672,  1673,  1674,  1675,  1676,
    1677,  1678,  1679,  1682,  1683,  1686,  1689,  1690,  1693,  1696,
    1703,  1706,  1709,  1712,  1715,  1718,  1726,  1727,  1730,  1731,
    1734,  1735,  1738,  1739,  1742,  1743
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
  "$@3", "$@4", "switch_statement", "switch_block", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement", "$@5",
  "$@6", "do_statement", "for_statement", "for_initializer_opt",
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
  "namespace_declaration", "$@7", "comma_opt", "qualified_identifier",
  "qualifier", "namespace_body", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "modifiers_opt", "modifiers", "modifier",
  "class_declaration", "$@8", "$@9", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "$@10", "$@11", "$@12", "$@13",
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
     232,   231,   233,   234,   231,   235,   236,   237,   237,   238,
     238,   239,   240,   240,   241,   241,   242,   242,   242,   242,
     243,   244,   244,   245,   246,   244,   247,   247,   248,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   254,   255,
     255,   256,   257,   257,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   260,   260,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   264,   264,   265,   265,   266,   266,
     266,   267,   267,   268,   269,   270,   271,   272,   273,   273,
     274,   275,   275,   276,   277,   277,   278,   278,   279,   279,
     280,   280,   282,   281,   283,   283,   284,   284,   285,   285,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   291,
     291,   292,   292,   293,   293,   293,   293,   293,   294,   294,
     295,   295,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   298,   297,   299,   297,
     300,   300,   301,   301,   301,   302,   302,   303,   304,   304,
     305,   305,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   307,   307,   308,   308,   309,   311,   310,   312,
     310,   313,   310,   314,   310,   310,   310,   310,   310,   315,
     315,   315,   315,   316,   316,   317,   317,   318,   318,   319,
     319,   320,   321,   321,   322,   322,   322,   323,   324,   325,
     325,   326,   326,   327,   327,   328,   329,   330,   330,   331,
     331,   332,   332,   333,   334,   335,   336,   336,   337,   338,
     339,   339,   340,   340,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   342,   342,   344,   343,
     345,   345,   346,   346,   347,   348,   348,   349,   349,   350,
     351,   351,   352,   353,   354,   354,   355,   355,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   357,   357,   358,
     358,   359,   359,   361,   360,   362,   362,   363,   364,   365,
     365,   366,   366,   367,   367,   367,   367,   368,   368,   369,
     369,   371,   370,   373,   372,   374,   374,   374,   374,   375,
     376,   376,   377,   378,   378,   379,   380,   380,   381,   381,
     382,   382,   383,   383,   384,   384,   385,   386,   386,   387,
     387,   388,   388,   389,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   391,   391,   392,   393,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   402,   403,   403,
     404,   404,   405,   405,   406,   406
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
       0,     6,     0,     0,     9,     5,     3,     0,     1,     1,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       2,     5,     5,     0,     0,     7,     7,     7,     9,     0,
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
       1,     1,     1,     1,     1,     1,     0,     8,     0,     8,
       0,     1,     2,     2,     4,     1,     3,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     6,     5,     5,     1,     0,     9,     0,
       9,     0,     9,     0,     9,     8,     8,     8,     8,     0,
       1,     1,     3,     1,     1,     1,     3,     1,     3,     1,
       1,     4,     3,     3,     0,     1,     1,     4,     9,     2,
       2,     0,     1,     0,     1,     5,     5,     1,     1,     6,
      10,     2,     2,     5,     5,     8,     5,     5,     2,     4,
       1,     1,     7,    10,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     0,     9,
       0,     1,     5,     5,     7,     1,     1,     1,     1,     7,
       0,     1,     2,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     0,
       1,     1,     3,     0,     8,     0,     1,     2,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     8,     8,     0,
       1,     0,    10,     0,    13,     3,     3,     6,     6,     6,
       1,     2,     7,     0,     1,     2,     3,     4,     0,     1,
       1,     3,     2,     4,     9,     9,     1,     1,     2,     6,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     3,
       0,     0,     0,     0,     0,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     326,     0,     0,   328,   327,   341,   343,   344,   336,     0,
      10,     0,     1,   358,   351,   328,   349,   352,   353,   354,
     355,   356,   357,   329,   566,   567,     0,   342,   338,     0,
     348,   347,   337,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,     0,   359,
     360,   358,   350,   568,   571,   336,     0,   339,   332,   597,
     596,     0,     0,     0,     0,     0,   361,   576,   581,   574,
     575,   577,   578,   579,   580,   582,     0,   572,     0,   346,
     345,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   424,    15,   423,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   553,   525,   500,   380,   588,    11,     0,   583,   586,
     573,   326,   334,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   554,     0,   523,   526,     0,     0,   501,     0,
     376,   381,     0,   591,    75,   585,   587,   328,   335,   333,
     328,   555,   328,   334,   385,   527,     0,   502,   328,   334,
     382,   383,     0,     0,   591,   584,   569,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,     0,   328,   434,     0,   420,
     421,   425,   429,   427,   430,     0,     0,   559,   560,   552,
       0,   328,   334,   358,   516,   508,   509,   510,   406,   511,
     512,   513,   514,   515,     0,   328,   506,   499,     0,   328,
     334,   334,   570,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   589,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   340,   436,     0,   435,     0,     0,   328,   328,
       0,     0,   562,   556,   328,   386,   539,     0,   328,   531,
     533,   534,   536,   535,   524,     0,   503,   507,   384,   358,
     401,     0,   328,   390,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   377,   379,     0,    80,     0,    71,     0,
     519,    87,     0,     0,     0,     0,   126,   125,     0,   122,
     123,     0,     0,     0,    65,   121,    67,    68,     0,    66,
       0,     0,    72,    46,     0,    48,    78,    94,   159,   128,
     129,   130,   127,   132,   133,   135,   136,   143,   142,   139,
     138,   140,   141,   145,   146,   148,   150,   152,   154,     0,
     156,     0,     0,     0,     0,   565,   564,   422,   426,     0,
     428,     0,     0,   209,   432,   211,   210,   433,     0,   557,
     561,   540,     0,   528,   532,   336,     0,     0,     0,     0,
       0,     0,   594,     0,   460,   461,     0,   387,   391,    81,
      92,     0,     0,   521,     0,   520,    96,    91,    90,    93,
       0,   124,     0,     0,     0,   115,     0,    73,    50,    45,
      49,     0,    69,     0,    74,    70,   437,   431,     0,   173,
     563,     0,     0,     0,   328,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   205,   594,     0,     0,     0,     0,
     496,   495,   459,     0,    85,    42,   517,     0,   120,   118,
     119,   116,     0,    47,   158,     0,     0,     0,   594,     0,
       0,     0,     0,   214,     0,   592,     0,     0,     0,     0,
     471,   470,   482,   483,   464,   465,   472,   473,   474,   475,
     476,   466,   467,   477,   478,   479,   480,   481,   485,   484,
     468,   469,     0,   328,   405,     0,   404,     0,     0,   458,
     328,   328,     0,   194,     0,    88,    42,   518,   522,   117,
       0,     0,   328,   328,     0,   328,   488,     0,   403,     0,
     402,   449,     0,     0,     0,     0,     0,   208,     0,     0,
     429,   430,   207,   206,     0,     0,   328,     0,     0,     0,
     328,   328,   193,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,     0,   299,     0,     0,
       0,     0,     0,   198,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   177,   178,     0,   195,
     179,   175,   176,     0,     0,   180,   181,   238,   239,   182,
     189,   256,   257,   258,   259,   183,   282,   283,   284,   285,
     286,   184,   185,   186,   187,   188,   190,    98,     0,    86,
      89,    43,   212,     0,   550,   549,     0,     0,   328,     0,
     490,   216,   215,   328,     0,     0,   413,   409,     0,   328,
     456,   411,   407,     0,   457,   595,   595,   595,     0,   439,
     442,     0,   440,   444,     0,   288,   287,   314,     0,   290,
     289,     0,     0,   599,   598,   269,     0,     0,     0,     0,
       0,     0,   300,     0,     0,     0,     0,   315,   260,     0,
     263,     0,   204,   224,   217,   227,   220,   228,   221,   225,
     218,   229,   222,   230,   223,   226,   219,   192,   197,   202,
     200,   203,   201,     0,   551,     0,     0,     0,     0,   594,
       0,     0,   491,     0,     0,   328,   328,     0,     0,   418,
       0,   416,     0,     0,   417,     0,   415,     0,   595,     0,
       0,   455,   199,   213,     0,     0,    56,    99,   100,    84,
     111,   112,   233,   275,   279,     0,   270,   276,     0,   294,
     291,     0,   296,   293,   174,     0,     0,   298,   297,     0,
     302,   301,     0,     0,   303,   306,   304,   319,   318,     0,
       0,     0,     0,   494,   538,   537,     0,     0,   595,     0,
       0,     0,   498,   497,   489,   593,   593,   593,     0,   451,
       0,   452,   487,   486,   414,   410,     0,   462,   412,   408,
     438,   448,   447,   594,   594,     0,     0,     0,   321,   603,
     602,   271,     0,     0,   295,   292,   601,   600,   240,     0,
       0,     0,   310,   313,   307,   305,     0,     0,     0,     0,
     328,   328,   541,   328,    71,    71,     0,     0,   450,     0,
     445,   446,     0,     0,     0,     0,   277,     0,   272,   280,
     605,   604,     0,     0,     0,   316,   247,   245,   311,   311,
     317,     0,   262,   261,     0,     0,   542,     0,     0,     0,
     592,   592,     0,     0,   323,   322,   320,   273,     0,   241,
     243,     0,     0,     0,   248,   249,     0,   252,   312,     0,
       0,   264,     0,     0,   595,   492,   493,   453,   454,   463,
     267,   266,     0,   274,   278,     0,     0,     0,   255,   246,
     250,   251,   253,     0,     0,   265,   547,   548,   543,     0,
     281,     0,   254,   309,   308,   544,   268,   244
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   190,   191,     9,    98,   654,   100,   101,   192,   103,
     104,   105,   193,   107,   108,   595,   397,   498,   412,   413,
     194,   195,   196,   197,   198,   414,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   699,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   398,
     399,   400,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   318,   415,   510,   835,   665,   666,
     667,   593,   668,   669,   670,   671,   672,   673,   523,   524,
     454,   455,   674,   552,   553,   675,   824,   676,   677,   933,
     934,   986,   678,   937,   963,   964,   965,   966,   967,   679,
     680,   681,   850,   995,   682,   683,   825,   927,   982,   826,
     928,   983,   827,   684,   685,   686,   687,   688,   689,   753,
     690,   691,   844,   845,   969,   846,   692,   693,   694,   695,
     849,   696,   887,   888,     2,     3,   237,   235,    14,    81,
     149,   234,    11,   122,     4,     5,     6,     7,    15,    16,
      17,    48,    49,    50,    18,   162,   163,   140,   141,   155,
     270,   371,   372,   373,   255,   256,   257,   258,   807,   802,
     805,   800,   238,   110,   239,   240,   241,   242,   243,   346,
     244,   259,   629,   729,   732,   630,   631,   883,   260,   794,
     795,   796,   261,   472,   527,   262,   473,   474,   582,   475,
     263,   710,   791,   792,   382,   532,   864,    19,   137,   138,
     159,   264,   265,   266,   456,   484,   485,    20,   156,   134,
     135,   252,   357,   358,   359,   360,   462,   361,   946,   362,
    1005,   788,   363,   705,    21,   131,   132,   153,   246,   247,
     248,    22,    23,    24,    25,    76,    77,    78,   117,   118,
     145,   119,   146,    26,   166,   612,   916,   528,   809,    65,
     745,   898,   891,   932
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -826
static const yytype_int16 yypact[] =
{
     -38,    64,   115,   -16,   -38,  -826,  -826,  -826,   -68,    28,
    -826,    96,  -826,  2944,  -826,   172,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,   -16,  -826,   163,  -826,  -826,   124,
    -826,  -826,   157,  -826,  -826,  -826,   124,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,   454,  3216,
    -826,  3187,  -826,  -826,  1074,   207,    48,  -826,  -826,  -826,
    -826,  1541,   330,   340,   416,   420,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,   124,  -826,   248,  -826,
    -826,   260,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,   319,  -826,   360,
    -826,   515,  -826,  -826,  -826,  -826,  -826,  -826,   515,   515,
     526,   357,   389,   431,   436,  -826,  -826,    32,  -826,   432,
    -826,   -38,   441,  -826,  -826,  -826,  -826,  -826,  -826,   462,
     477,   500,  -826,   124,  -826,  -826,   124,   541,  -826,   370,
     603,  -826,   105,  -826,  2577,  -826,  -826,   356,  -826,  -826,
     434,  -826,   413,   441,  -826,   510,   544,   510,   444,   441,
     559,   510,   569,   673,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,    22,   580,  -826,  3103,  -826,   598,  -826,  -826,   605,
     607,  2290,  2577,  2577,  2577,  2577,  2577,  2577,  2577,  2577,
    -826,  -826,   610,   611,   223,   609,  -826,  -826,  -826,  -826,
     618,   625,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,   475,  -826,  -826,  -826,   381,
    -826,   507,   194,   263,    20,   392,   612,   604,   615,   587,
     -64,  -826,  -826,  -826,   -52,   626,   450,   403,   628,   635,
     637,  -826,   616,  -826,   617,   731,   638,   641,  -826,  -826,
     124,   451,   441,  3216,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,   639,   460,  -826,  -826,   124,   461,
     441,   441,  -826,  2577,   738,  2577,   319,    16,   648,   315,
    3103,  3147,  2577,    31,    38,    63,   514,   644,   314,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,   745,   749,  2577,
     750,  2089,  -826,  2577,  -826,  -826,   753,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  2577,  2577,
    2577,  2577,  2577,  2577,  2577,  2577,  3103,  3103,  2577,  2577,
    2577,  2577,  2577,  2577,  2577,  2577,  2577,  2577,  2577,  2577,
    2577,  2089,  -826,  -826,  3103,  -826,  3103,    61,   -16,   -16,
    2175,  2175,   643,  -826,   472,  -826,   710,   660,   473,  -826,
    -826,  -826,  -826,  -826,  -826,  3015,  -826,  -826,   510,  3216,
    -826,   663,   488,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,   396,  -826,   665,  2089,  2577,
    2175,  -826,   227,   230,   279,   668,  -826,  -826,   669,    31,
    -826,   671,   672,  2376,  2781,    31,  -826,  -826,   532,  -826,
    2577,  2577,   679,  -826,   674,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,   507,   507,   194,   194,   360,   360,   263,
     263,   263,   263,    20,    20,   392,   612,   604,   615,   659,
     587,   533,   675,    52,    66,  -826,  -826,   637,  -826,   616,
    -826,   617,  3103,  -826,  -826,  -826,  -826,  -826,  2577,  -826,
    -826,  -826,  3059,  -826,  -826,   278,  3103,  3103,   727,   728,
      74,    55,  -826,   343,  -826,  -826,  2701,  -826,  -826,  -826,
    -826,   678,   550,  -826,   681,   688,  -826,  -826,  -826,  -826,
    2577,  -826,  2577,  2577,  2577,  -826,   684,  -826,  -826,  -826,
    -826,  2089,  -826,  2577,  -826,  -826,  -826,  -826,   -56,  -826,
    -826,  3103,    76,    65,   434,    80,    83,  3103,  3103,   686,
     327,  2777,   691,    82,  -826,   689,    35,   695,   694,  1378,
    -826,  -826,  -826,   791,  -826,   515,  -826,  1974,  -826,  -826,
    -826,  -826,  2577,  -826,  -826,  2577,    97,   697,   698,   699,
     693,   690,   255,  -826,   226,  -826,   323,   329,  2621,  2175,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,   707,   -16,  -826,   797,  -826,  2914,   711,  -826,
     -16,   -16,   715,  1743,   717,   720,   515,  -826,  -826,  -826,
     718,   374,   434,   434,   721,   -16,  -826,  2577,  -826,   818,
    -826,  -826,   723,  3103,  3103,   722,   724,  -826,  3103,   551,
    -826,  -826,   709,  -826,   729,   730,   -16,   555,   351,   733,
     492,   493,  -826,   469,    84,   553,  3103,   177,  1859,   734,
     281,   281,   324,   281,   735,  2577,   281,  2577,   741,   573,
     741,   736,   312,  -826,    98,   610,   611,  1197,    75,   539,
    1237,   571,   789,   381,   204,  -826,  -826,  -826,   743,  1743,
    -826,  -826,  -826,   257,   270,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,    41,   732,  -826,
    -826,  -826,  -826,   744,  -826,  -826,   746,   747,   -16,   584,
     748,  -826,  -826,   -16,    99,   100,   742,   751,   106,   -16,
    -826,   752,   754,   755,  -826,  -826,  -826,  -826,   758,  -826,
    -826,   737,  -826,  -826,  1743,  -826,  -826,  -826,    80,  -826,
    -826,   768,  3103,  -826,  -826,  2491,  3103,   271,  2577,   299,
    2577,  2577,  -826,   301,  2577,   304,    89,  -826,  -826,  2491,
    -826,  1497,   764,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,   741,  -826,   374,   374,   528,   763,  -826,
      37,   379,  -826,   486,   765,   -16,   -16,   762,   767,  -826,
     741,  -826,   741,   386,  -826,   741,  -826,   741,  -826,   384,
     384,  -826,  -826,   770,   766,   107,   181,   243,   245,   256,
     275,   300,  -826,  -826,  -826,   305,  -826,   774,   109,  -826,
    -826,   307,  -826,  -826,  -826,   292,   771,  -826,  -826,   292,
    -826,  -826,   606,   741,    89,  -826,  -826,  -826,  -826,   775,
    2577,   776,   779,  -826,  -826,  -826,   374,   374,  -826,   773,
     781,   782,  -826,  -826,  -826,  -826,  -826,  -826,   792,  -826,
     790,  -826,  -826,  -826,  -826,  -826,  3103,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  2577,   769,   395,  -826,  -826,
    -826,  2577,  2577,    78,  -826,  -826,  -826,  -826,  -826,  1859,
     793,   370,  -826,  -826,  -826,  -826,  1859,   889,  1859,  1859,
     498,   504,  -826,   -16,  2089,  2089,   741,   741,  -826,   110,
    -826,  -826,   795,  2577,   895,  1859,  -826,   305,  -826,  -826,
    -826,  -826,  2577,  1859,  1859,  -826,   427,  -826,   897,   897,
    -826,  1859,  -826,  -826,   808,   810,  -826,   803,   816,   824,
    -826,  -826,   825,   311,  -826,  -826,  -826,  2577,   292,  -826,
    -826,  2577,   799,   828,   427,  -826,  1627,  -826,  -826,   827,
     829,  -826,   374,   374,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,   292,  -826,   774,  1859,   904,   830,  -826,  -826,
    -826,  1743,  -826,   741,   741,  -826,  -826,  -826,  -826,  1859,
    -826,  1859,  -826,  -826,  -826,  -826,  -826,  -826
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -826,  -826,  -826,  -826,   -75,    10,   760,  -826,   -30,  -826,
     809,  -826,   -58,  -826,   772,   342,   -96,   529,  -826,   442,
    -826,  -826,  -826,  -826,    79,  -335,  -826,  -826,  -200,  -826,
    -826,   117,   135,  -826,   190,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,   538,   249,   288,   -94,  -826,  -247,
    -826,   545,  -161,   309,   238,   353,   613,   614,   619,   608,
     620,  -826,  -826,   303,  -826,   247,  -603,  -738,  -662,  -614,
     -40,  -826,  -826,   -18,  -826,  -826,  -826,  -682,  -494,   365,
    -304,  -826,  -826,   213,   347,  -826,    60,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,    -6,  -826,    -2,  -826,
    -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,     3,  -826,  -826,  -826,  -826,  -826,  -826,   316,
    -826,  -826,  -826,   118,    27,   123,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,    44,  -826,   848,    12,  -826,  -826,  -826,
    -102,    -1,   499,  -826,  -826,   969,  -826,  -826,   832,    -4,
    -148,  -232,  -826,   925,  -826,  -826,  -826,  -826,  -826,  -103,
    -826,  -826,  -826,   621,   -83,   -50,   -22,  -826,  -826,  -826,
    -826,  -826,  -135,  -826,  -164,   627,  -346,  -331,   631,  -826,
    -330,   -15,   350,  -826,  -826,   346,   352,   171,    -7,  -826,
     188,   191,    -3,  -826,  -826,    29,  -826,  -826,  -826,  -826,
      30,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,   726,  -271,  -826,  -826,  -826,  -826,  -826,
    -826,  -826,  -826,  -826,   634,  -826,  -826,  -826,  -826,  -826,
    -826,    86,  -826,  -760,  -826,  -826,  -826,  -826,  -826,  -826,
     642,  -826,  -826,  -826,   965,  -826,  -826,  -826,  -826,   858,
    -826,  -826,  -826,  -826,   838,  -261,  -153,  -516,  -710,  -826,
    -110,  -825,    87,  -826
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -591
static const yytype_int16 yytable[] =
{
      10,   115,   448,   106,   711,   126,   442,   778,   391,   588,
     254,    52,   127,   128,   900,    13,   810,   811,   449,   451,
     286,   365,   554,   852,   741,   854,   855,    51,    56,    30,
     326,   102,   604,   157,   125,    58,   161,   401,   402,    32,
      28,   125,   545,     1,   125,   -11,   340,   457,   860,    79,
     341,   249,    29,   481,   338,   124,   506,   267,   154,   520,
     109,   154,   445,   823,   154,   327,   125,   115,     8,   548,
     507,    99,   812,   385,   339,   116,   765,   848,    55,   930,
     547,   160,  -590,   584,   551,   735,   483,   520,   289,   290,
     291,   292,   293,   294,   295,   296,   910,   911,   880,   408,
      32,   601,   622,   797,   798,   842,   589,   521,   861,    55,
     803,   886,   907,   893,   952,    12,   106,   254,   388,   931,
     273,   370,   843,   285,   328,   329,   522,   124,    55,   142,
     274,   143,   116,   985,    31,   116,   549,   476,   116,   340,
     441,   116,   396,   341,   102,   831,   297,   922,   912,   396,
     364,   284,   -11,   926,    80,   330,   331,   999,   496,    51,
     762,   423,   424,   124,   245,   368,   124,   446,   383,   384,
     253,   298,  -325,   109,   396,   355,   124,   124,   739,   585,
     288,   766,  -231,   127,   277,   123,   374,   123,   586,   482,
     736,   124,   405,   154,   124,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   164,   775,   -99,   -99,   124,   124,
     124,   124,   996,   997,   -99,   -99,   -99,   124,   124,   375,
     124,   124,   106,   106,   370,   419,   420,   421,   422,   422,
     422,   422,    52,   598,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,  -234,   422,  -235,   376,    51,   116,
     102,   102,   620,   621,   377,   617,   608,  -232,   779,   620,
     621,    54,   378,   356,   998,    57,   379,   116,   106,   106,
    -590,   781,   829,   859,   620,   621,  -236,   253,  -231,   109,
     109,   369,   743,   740,  -231,   935,   106,  -231,   106,   374,
     392,   394,   940,   896,   942,   943,   102,   102,   380,   381,
     832,  -237,   837,   322,   323,   840,   889,   106,   894,   419,
     776,   956,   980,   760,   102,    28,   102,   125,   125,   959,
     960,   299,   375,   585,   700,   109,   109,   971,   747,   778,
     486,   300,   611,   487,   111,   102,   427,   428,   124,   748,
    -234,   123,  -235,   109,   112,   109,  -234,   749,  -235,  -234,
     376,  -235,   609,  -232,   443,   120,   444,   377,   987,  -232,
     121,   610,  -232,   780,   109,   378,   245,   920,   921,   379,
     356,  1000,  -236,   448,    55,   471,   782,   830,  -236,   550,
     514,  -236,   488,   744,   369,  1006,    28,  1007,   620,   621,
     124,   233,   324,   325,   106,   897,   538,  -237,   539,   540,
     541,   380,   381,  -237,   106,   833,  -237,   838,   106,   106,
     841,   890,   340,   895,   761,   390,   341,   981,   106,   619,
     113,    90,   102,   616,   114,   613,   627,  -336,   287,  -336,
     123,   614,   102,   531,   124,    28,   102,   102,    93,   596,
     124,   709,   961,   529,   725,   726,   102,   559,   599,   530,
     962,   109,   625,   106,  -590,    59,   343,  -330,   344,   106,
     106,   109,   508,   345,   130,   109,   109,   706,   707,   519,
     525,   124,   513,    60,   703,   109,   515,   516,    61,   529,
     704,   102,    62,   876,   529,   862,   471,   102,   102,   877,
     881,    83,   924,   303,    84,   479,   133,    63,   925,   663,
     596,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     109,  -590,   316,   317,  -558,   555,   109,   109,   125,    88,
     233,   546,   387,    64,    89,   332,   333,   556,   557,   395,
     129,   746,  -590,   750,   144,   656,   754,  -419,   136,    91,
     767,    92,  -590,   139,   663,  -504,   233,   148,  -590,  -590,
     416,  -331,  -529,    94,    95,   106,   106,    96,  -590,  -590,
     106,  -505,  -388,   655,   150,   418,   429,   430,   431,   432,
    -590,  -590,   771,   459,  -530,   663,   734,    28,   106,   948,
     949,   865,   866,   102,   102,   439,  -590,   233,   102,  -389,
    -590,  -590,   697,  -441,  -443,   737,  -590,   453,   453,  -545,
     152,   128,  -590,   628,  -378,  -546,   102,   250,   756,   757,
     758,   656,   109,   109,   304,   305,   306,   109,   319,   320,
     321,   856,   857,   714,   715,   403,   320,   321,   718,   303,
     303,   497,   504,   425,   426,   109,   233,   453,   628,   655,
     663,   158,   728,   731,   251,   768,   738,   303,   719,   535,
     720,   663,   719,   529,   724,   275,   268,   499,   499,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   697,   269,
    -100,  -100,   657,   529,   271,   282,   656,   772,  -100,  -100,
    -100,   719,   275,   789,   106,   433,   434,   656,   106,   977,
     978,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     280,   656,  -111,  -111,   655,   509,   529,   281,   901,   282,
     658,   301,   102,   917,   918,   655,   102,   657,   297,   298,
     787,   302,   303,   335,   337,   793,   334,   342,   659,   655,
     336,   347,   348,   697,   349,   352,   350,   351,   354,   353,
     366,   109,   386,   853,   697,   109,   389,   404,   657,   406,
     544,   863,   815,   407,   409,   658,   828,   417,   697,   461,
     874,   463,   875,   458,   477,   878,   503,   879,   480,   882,
     882,   489,   490,   659,   492,   493,   501,   502,   505,   517,
     518,   534,   536,   660,   453,   537,   658,   542,   558,   583,
     773,   587,   600,   590,   591,   594,   606,   605,   663,   602,
     603,   622,   902,   903,   659,   663,   453,   868,   870,   618,
     607,   626,   663,   657,   663,   663,   632,   702,   106,   698,
     390,   708,   551,   713,   816,   716,   938,   717,   660,   559,
     725,   663,   721,   722,   727,   783,   742,   751,   759,   663,
     663,   529,   661,   939,   777,   784,   102,   663,   799,   785,
     786,   658,   726,   814,   509,   790,   808,   801,   804,   660,
     806,   585,   817,   663,   858,   872,   867,   609,   885,   659,
     873,   892,   663,   913,   899,   109,   950,   951,   906,   908,
     818,   662,   909,   914,   915,   865,   919,   661,   866,   923,
     941,   663,   752,   936,   752,   774,   664,   663,   953,   886,
     116,   968,   972,   973,   974,   663,   988,   663,   656,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,   661,   975,
    -112,  -112,   944,   945,   660,   787,   662,   976,   979,   989,
     993,  1001,   994,   656,   278,   819,   655,  1002,   701,   151,
     500,   664,   495,   543,   491,   438,   279,   435,   991,   436,
     623,   813,   929,  1003,  1004,   437,   712,   662,   990,   440,
     984,   655,   904,   755,   992,   697,   970,   905,   955,   147,
     526,   816,   664,    27,    66,   447,   723,   733,   657,   236,
     450,   884,   730,   661,   871,   657,   869,   657,   657,    53,
     697,   367,   464,   478,   820,   509,   460,   834,   836,   947,
     165,   839,   272,     0,   657,     0,   847,     0,   834,   817,
       0,     0,   657,   657,   957,     0,   658,     0,     0,     0,
     657,     0,   662,   658,     0,   658,   658,   818,     0,     0,
       0,     0,     0,   821,   659,     0,   816,   664,     0,     0,
       0,   659,   658,   659,   659,   657,     0,     0,   822,     0,
     658,   658,     0,     0,     0,     0,     0,     0,   658,     0,
     659,     0,     0,     0,   657,     0,     0,     0,   659,   659,
     657,     0,     0,     0,   817,     0,   659,     0,   657,     0,
     657,     0,   819,   658,     0,     0,     0,     0,     0,   660,
       0,     0,   818,     0,     0,     0,   660,   834,   660,   660,
       0,   659,   658,    67,     0,     0,     0,     0,   658,     0,
       0,     0,     0,     0,     0,   660,   658,     0,   658,     0,
     659,     0,     0,   660,   660,     0,   659,     0,     0,     0,
       0,   660,   834,     0,   659,    68,   659,     0,   834,     0,
       0,   820,     0,     0,     0,     0,     0,   819,   661,     0,
       0,     0,     0,     0,     0,   661,   660,   661,   661,     0,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
     954,     0,     0,     0,   661,   660,     0,     0,     0,   958,
     821,   660,   661,   661,     0,     0,     0,   662,     0,   660,
     661,   660,     0,     0,   662,   822,   662,   662,   763,     0,
       0,     0,   664,     0,     0,     0,   820,     0,   509,   664,
       0,   664,   664,   662,     0,   661,     0,     0,     0,     0,
       0,   662,   662,     0,     0,     0,     0,     0,   664,   662,
       0,     0,     0,     0,   661,     0,   664,   664,   769,     0,
     661,     0,     0,     0,   664,   821,     0,     0,   661,     0,
     661,     0,     0,     0,   662,     0,     0,     0,     0,     0,
     822,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,     0,     0,   662,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,     0,     0,     0,   662,   664,   662,
       0,     0,     0,     0,   664,   -56,     0,     0,     0,   -56,
       0,     0,   664,   764,   664,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,   -56,   -56,
       0,     0,     0,     0,     0,   -84,   -56,   -56,   -56,   -84,
       0,     0,     0,   770,     0,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   592,
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
       0,     0,  -191,     0,  -191,  -191,     0,     0,   851,     0,
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
     634,    83,   961,     0,    84,   635,     0,   636,   637,    85,
     962,     0,   638,    86,     0,     0,     0,     0,     0,   173,
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
       0,     0,   615,     0,    89,  -328,   174,   175,    90,     0,
     188,   189,     0,  -328,     0,  -328,     0,     0,  -328,    91,
       0,    92,   176,  -328,     0,    93,     0,  -328,   177,     0,
     178,     0,   179,    94,    95,   180,  -328,    96,     0,     0,
       0,     0,     0,  -328,     0,     0,     0,     0,  -328,     0,
       0,     0,  -328,     0,  -328,     0,  -328,     0,     0,   181,
       0,  -328,     0,  -328,     0,  -328,   182,   183,   184,  -328,
       0,   185,     0,   186,   187,     0,     0,  -328,  -328,     0,
       0,  -328,    59,     0,  -328,   465,     0,     0,     0,     0,
       0,     0,     0,    82,     0,    83,   188,   189,    84,  -590,
      60,   466,     0,    85,  -419,    61,     0,    86,     0,    62,
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
     576,   577,   578,   579,     0,   624,   580,   581,  -328,     0,
       0,     0,     0,     0,     0,     0,  -328,     0,  -328,     0,
       0,  -328,     0,     0,     0,     0,  -328,     0,     0,     0,
    -328,     0,     0,     0,  -324,     0,     0,     0,     0,  -328,
       0,     0,     0,    33,     0,     0,  -328,     0,     0,     0,
       0,  -328,     0,     0,     0,  -328,     0,  -328,     0,  -328,
       0,     0,     0,     0,  -328,    34,  -328,     0,  -328,     0,
       0,     0,  -328,     0,     0,     0,     0,     0,    35,     0,
    -328,  -328,    36,    37,  -328,     0,     0,  -328,    38,     0,
      39,    40,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,  -590,     0,     0,     0,    59,  -419,     0,   465,
       0,     0,     0,    45,     0,     0,    46,    82,    47,    83,
       0,     0,    84,     0,    60,   466,     0,    85,     0,    61,
       0,    86,     0,    62,   467,   468,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   469,     0,    88,    63,     0,
       0,     0,    89,    55,     0,     0,    90,     0,     0,     0,
       0,    82,     0,    83,     0,     0,    84,    91,     0,    92,
       0,    85,     0,    93,    64,    86,     0,     0,   511,     0,
       0,    94,    95,     0,    87,    96,     0,     0,   470,     0,
       0,    88,     0,     0,     0,     0,    89,    55,     0,     0,
      90,     0,     0,     0,     0,    82,     0,    83,     0,     0,
      84,    91,     0,    92,     0,    85,     0,    93,     0,    86,
       0,     0,     0,     0,     0,    94,    95,     0,    87,    96,
       0,     0,   512,     0,     0,    88,     0,     0,     0,     0,
      89,    55,     0,     0,    90,     0,     0,     0,     0,    82,
       0,    83,     0,     0,    84,    91,     0,    92,     0,    85,
       0,    93,     0,    86,     0,     0,     0,     0,     0,    94,
      95,     0,    87,    96,     0,     0,   276,     0,     0,    88,
       0,     0,     0,     0,    89,     0,    33,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,    34,     0,
       0,     0,     0,    94,    95,    33,     0,    96,     0,     0,
     393,    35,     0,     0,     0,    36,    37,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    34,     0,     0,
      43,     0,     0,     0,    44,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    37,    45,     0,     0,    46,
      38,    47,    39,    40,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
      47
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-826)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    76,   348,    61,   607,   101,   341,   669,   279,   525,
     158,    15,   108,   109,   839,     3,   726,   727,   349,   349,
     181,   253,   516,   761,   638,   785,   786,    15,    29,     1,
      10,    61,   548,   136,     3,    36,   139,   284,   285,     4,
     108,     3,    98,    81,     3,     4,    98,   351,    11,     1,
     102,   153,   120,   388,   118,   111,     4,   159,   133,     4,
      61,   136,     1,   745,   139,    45,     3,   142,     4,     4,
       4,    61,   734,   273,   138,    76,     1,   759,     4,     1,
       4,   139,    98,     1,     4,     1,   390,     4,   182,   183,
     184,   185,   186,   187,   188,   189,   856,   857,   808,   299,
       4,     4,     4,     4,     4,    16,    71,    52,    71,     4,
       4,     4,   850,     4,     4,     0,   174,   265,   102,    41,
      98,   269,    33,   181,   104,   105,    71,   111,     4,    97,
     108,    99,   133,   958,   106,   136,    71,   369,   139,    98,
     340,   142,   111,   102,   174,   748,   108,   885,   858,   111,
     252,   181,   111,   891,   106,   135,   136,   982,   405,   147,
     654,   322,   323,   111,   152,   268,   111,   106,   270,   271,
     158,   108,     0,   174,   111,   250,   111,   111,     1,    97,
     181,   106,     1,   279,   174,   111,   269,   111,   106,   389,
     106,   111,   288,   268,   111,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    99,     1,   131,   132,   111,   111,
     111,   111,   972,   973,   139,   140,   141,   111,   111,   269,
     111,   111,   280,   281,   372,   319,   320,   321,   322,   323,
     324,   325,   236,   537,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     1,   339,     1,   269,   236,   250,
     280,   281,   583,   583,   269,   559,     1,     1,     1,   590,
     590,    98,   269,   251,   974,   108,   269,   268,   326,   327,
      98,     1,     1,   789,   605,   605,     1,   265,    97,   280,
     281,   269,     1,   106,   103,   899,   344,   106,   346,   372,
     280,   281,   906,     1,   908,   909,   326,   327,   269,   269,
       1,     1,     1,   109,   110,     1,     1,   365,     1,   403,
     106,   925,     1,     1,   344,   108,   346,     3,     3,   933,
     934,    98,   372,    97,   595,   326,   327,   941,     4,   991,
     103,   108,   106,   103,     4,   365,   326,   327,   111,    15,
      97,   111,    97,   344,     4,   346,   103,    23,   103,   106,
     372,   106,    97,    97,   344,   107,   346,   372,   961,   103,
     100,   106,   106,   106,   365,   372,   354,   883,   884,   372,
     358,   985,    97,   719,     4,   365,   106,   106,   103,   514,
     102,   106,   103,   102,   372,   999,   108,  1001,   719,   719,
     111,   144,   129,   130,   452,   103,   490,    97,   492,   493,
     494,   372,   372,   103,   462,   106,   106,   106,   466,   467,
     106,   106,    98,   106,   102,   100,   102,   106,   476,   583,
       4,    51,   452,   558,     4,   102,   590,   100,   181,   102,
     111,   102,   462,   473,   111,   108,   466,   467,    68,   535,
     111,   605,    15,   100,    93,    94,   476,   120,   542,   106,
      23,   452,   587,   511,    98,     1,    53,   101,    55,   517,
     518,   462,   452,    60,   107,   466,   467,   602,   603,   470,
     471,   111,   462,    19,   100,   476,   466,   467,    24,   100,
     106,   511,    28,    97,   100,   106,   476,   517,   518,   103,
     106,    14,    97,    97,    17,    99,   107,    43,   103,   593,
     596,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     511,    98,   131,   132,   101,   516,   517,   518,     3,    42,
     273,   511,   275,    69,    47,   133,   134,   517,   518,   282,
       4,   641,    98,   643,   102,   593,   646,   103,   107,    62,
       1,    64,    98,   107,   638,   101,   299,   106,    98,    98,
     303,   101,   101,    76,    77,   613,   614,    80,    98,    98,
     618,   101,   101,   593,   102,   318,   328,   329,   330,   331,
      98,    98,     1,   101,   101,   669,   107,   108,   636,   914,
     915,    95,    96,   613,   614,   338,    98,   340,   618,   101,
      98,    98,   593,   101,   101,   635,    98,   350,   351,   101,
     100,   697,    98,   591,     1,   101,   636,    97,   648,   649,
     650,   669,   613,   614,   139,   140,   141,   618,   111,   112,
     113,    93,    94,   613,   614,   111,   112,   113,   618,    97,
      97,    99,    99,   324,   325,   636,   389,   390,   626,   669,
     734,   100,   630,   631,   100,   106,   636,    97,    97,    99,
      99,   745,    97,   100,    99,   102,    97,   410,   411,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   669,   100,
     131,   132,   593,   100,     1,   102,   734,   106,   139,   140,
     141,    97,   102,    99,   742,   332,   333,   745,   746,   950,
     951,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     102,   759,   131,   132,   734,   458,   100,   102,   102,   102,
     593,   102,   742,   866,   867,   745,   746,   638,   108,   108,
     708,   103,    97,   119,   137,   713,   114,   101,   593,   759,
     115,   103,    97,   734,    97,     4,   120,   120,    97,   101,
     101,   742,     4,   783,   745,   746,    98,   103,   669,     4,
     503,   791,   742,     4,     4,   638,   746,     4,   759,    49,
     800,   101,   802,   120,   101,   805,   107,   807,   103,   809,
     810,   103,   103,   638,   103,   103,    97,   103,   103,    52,
      52,   103,   101,   593,   537,    97,   669,   103,   102,    98,
       1,   102,   545,    98,   100,     4,   103,    98,   892,   102,
     102,     4,   842,   843,   669,   899,   559,   795,   796,   102,
     120,   100,   906,   734,   908,   909,   101,    99,   876,   102,
     100,   100,     4,   100,   745,   103,   901,   103,   638,   120,
      93,   925,   103,   103,   101,   103,   102,   102,   102,   933,
     934,   100,   593,   901,   101,   101,   876,   941,   106,   103,
     103,   734,    94,    85,   607,   107,   101,   106,   106,   669,
     106,    97,   745,   957,   101,   103,   101,    97,   102,   734,
     103,    97,   966,   100,   103,   876,   916,   917,   103,   103,
     745,   593,   103,   102,   102,    95,   876,   638,    96,   120,
       1,   985,   645,   100,   647,   106,   593,   991,   103,     4,
     901,     4,    94,    93,   101,   999,   107,  1001,   966,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   669,   103,
     131,   132,   910,   911,   734,   913,   638,   103,   103,   101,
     103,    27,   103,   991,   174,   745,   966,   107,   596,   130,
     411,   638,   404,   501,   399,   337,   174,   334,   966,   335,
     585,   738,   892,   993,   994,   336,   609,   669,   964,   339,
     957,   991,   844,   647,   966,   966,   939,   844,   924,   121,
     471,   892,   669,     4,    49,   348,   626,   631,   899,   147,
     349,   810,   630,   734,   796,   906,   795,   908,   909,    24,
     991,   265,   358,   372,   745,   748,   354,   750,   751,   913,
     142,   754,   164,    -1,   925,    -1,   759,    -1,   761,   892,
      -1,    -1,   933,   934,   927,    -1,   899,    -1,    -1,    -1,
     941,    -1,   734,   906,    -1,   908,   909,   892,    -1,    -1,
      -1,    -1,    -1,   745,   899,    -1,   957,   734,    -1,    -1,
      -1,   906,   925,   908,   909,   966,    -1,    -1,   745,    -1,
     933,   934,    -1,    -1,    -1,    -1,    -1,    -1,   941,    -1,
     925,    -1,    -1,    -1,   985,    -1,    -1,    -1,   933,   934,
     991,    -1,    -1,    -1,   957,    -1,   941,    -1,   999,    -1,
    1001,    -1,   892,   966,    -1,    -1,    -1,    -1,    -1,   899,
      -1,    -1,   957,    -1,    -1,    -1,   906,   850,   908,   909,
      -1,   966,   985,    29,    -1,    -1,    -1,    -1,   991,    -1,
      -1,    -1,    -1,    -1,    -1,   925,   999,    -1,  1001,    -1,
     985,    -1,    -1,   933,   934,    -1,   991,    -1,    -1,    -1,
      -1,   941,   885,    -1,   999,    61,  1001,    -1,   891,    -1,
      -1,   892,    -1,    -1,    -1,    -1,    -1,   957,   899,    -1,
      -1,    -1,    -1,    -1,    -1,   906,   966,   908,   909,    -1,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
     923,    -1,    -1,    -1,   925,   985,    -1,    -1,    -1,   932,
     892,   991,   933,   934,    -1,    -1,    -1,   899,    -1,   999,
     941,  1001,    -1,    -1,   906,   892,   908,   909,     1,    -1,
      -1,    -1,   899,    -1,    -1,    -1,   957,    -1,   961,   906,
      -1,   908,   909,   925,    -1,   966,    -1,    -1,    -1,    -1,
      -1,   933,   934,    -1,    -1,    -1,    -1,    -1,   925,   941,
      -1,    -1,    -1,    -1,   985,    -1,   933,   934,     1,    -1,
     991,    -1,    -1,    -1,   941,   957,    -1,    -1,   999,    -1,
    1001,    -1,    -1,    -1,   966,    -1,    -1,    -1,    -1,    -1,
     957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   966,
      -1,    -1,    -1,   985,    -1,    -1,    -1,    -1,    -1,   991,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   999,   985,  1001,
      -1,    -1,    -1,    -1,   991,    98,    -1,    -1,    -1,   102,
      -1,    -1,   999,   106,  1001,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,    98,   139,   140,   141,   102,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
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
      26,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,     9,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    53,    -1,    55,
      -1,    -1,    -1,    -1,    60,    31,    62,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      76,    77,    48,    49,    80,    -1,    -1,    83,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    98,    -1,    -1,    -1,     1,   103,    -1,     4,
      -1,    -1,    -1,    79,    -1,    -1,    82,    12,    84,    14,
      -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,     4,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,
      -1,    22,    -1,    68,    69,    26,    -1,    -1,    29,    -1,
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
       0,    81,   277,   278,   287,   288,   289,   290,     4,   146,
     284,   285,     0,   279,   281,   291,   292,   293,   297,   350,
     360,   377,   384,   385,   386,   387,   396,   288,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   294,   295,
     296,   279,   292,   387,    98,     4,   284,   108,   284,     1,
      19,    24,    28,    43,    69,   402,   296,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   388,   389,   390,     1,
     106,   282,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   284,
     316,     4,     4,     4,     4,   147,   284,   391,   392,   394,
     107,   100,   286,   111,   111,     3,   159,   159,   159,     4,
     107,   378,   379,   107,   362,   363,   107,   351,   352,   107,
     300,   301,    97,    99,   102,   393,   395,   278,   106,   283,
     102,   153,   100,   380,   147,   302,   361,   302,   100,   353,
     155,   302,   298,   299,    99,   392,   397,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   284,   280,   291,   279,   315,   317,
     318,   319,   320,   321,   323,   279,   381,   382,   383,   283,
      97,   100,   364,   279,   293,   307,   308,   309,   310,   324,
     331,   335,   338,   343,   354,   355,   356,   283,    97,   100,
     303,     1,   397,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   284,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,   101,    53,    55,    60,   322,   103,    97,    97,
     120,   120,     4,   101,    97,   147,   279,   365,   366,   367,
     368,   370,   372,   375,   283,   294,   101,   356,   302,   279,
     293,   304,   305,   306,   307,   308,   309,   324,   331,   335,
     338,   343,   347,   283,   283,   171,     4,   208,   102,    98,
     100,   357,   148,    83,   148,   208,   111,   159,   192,   193,
     194,   192,   192,   111,   103,   159,     4,     4,   171,     4,
      53,    60,   161,   162,   168,   208,   208,     4,   208,   190,
     190,   190,   190,   195,   195,   196,   196,   148,   148,   197,
     197,   197,   197,   198,   198,   199,   200,   201,   202,   208,
     203,   171,   168,   148,   148,     1,   106,   318,   319,   320,
     321,   323,    66,   208,   223,   224,   357,   223,   120,   101,
     383,    49,   369,   101,   367,     4,    20,    29,    30,    40,
      83,   148,   336,   339,   340,   342,   294,   101,   306,    99,
     103,   168,   171,   223,   358,   359,   103,   103,   103,   103,
     103,   194,   103,   103,   103,   187,   192,    99,   160,   208,
     160,    97,   103,   107,    99,   103,     4,     4,   148,   208,
     209,    29,    83,   148,   102,   148,   148,    52,    52,   284,
       4,    52,    71,   221,   222,   284,   285,   337,   400,   100,
     106,   213,   348,   117,   103,    99,   101,    97,   190,   190,
     190,   190,   103,   162,   208,    98,   148,     4,     4,    71,
     315,     4,   226,   227,   221,   284,   148,   148,   102,   120,
      32,    73,   104,   105,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   119,   129,   130,   133,   134,   135,   136,
     139,   140,   341,    98,     1,    97,   106,   102,   400,    71,
      98,   100,     1,   214,     4,   158,   159,   101,   223,   190,
     208,     4,   102,   102,   400,    98,   103,   120,     1,    97,
     106,   106,   398,   102,   102,     1,   315,   223,   102,   317,
     320,   323,     4,   222,     1,   315,   100,   317,   279,   325,
     328,   329,   101,     4,    13,    18,    20,    21,    25,    34,
      36,    37,    38,    39,    46,    61,    70,    72,    74,    78,
      79,    81,    85,   106,   148,   151,   155,   167,   174,   175,
     177,   188,   189,   190,   206,   211,   212,   213,   215,   216,
     217,   218,   219,   220,   225,   228,   230,   231,   235,   242,
     243,   244,   247,   248,   256,   257,   258,   259,   260,   261,
     263,   264,   269,   270,   271,   272,   274,   284,   102,   179,
     357,   158,    99,   100,   106,   376,   315,   315,   100,   317,
     344,   209,   227,   100,   148,   148,   103,   103,   148,    97,
      99,   103,   103,   325,    99,    93,    94,   101,   279,   326,
     329,   279,   327,   328,   107,     1,   106,   213,   148,     1,
     106,   212,   102,     1,   102,   403,   403,     4,    15,    23,
     403,   102,   208,   262,   403,   262,   213,   213,   213,   102,
       1,   102,   221,     1,   106,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,   101,   211,     1,
     106,     1,   106,   103,   101,   103,   103,   279,   374,    99,
     107,   345,   346,   279,   332,   333,   334,     4,     4,   106,
     314,   106,   312,     4,   106,   313,   106,   311,   101,   401,
     401,   401,   211,   226,    85,   148,   167,   174,   175,   177,
     188,   189,   206,   220,   229,   249,   252,   255,   148,     1,
     106,   209,     1,   106,   208,   210,   208,     1,   106,   208,
       1,   106,    16,    33,   265,   266,   268,   208,   220,   273,
     245,     1,   210,   213,   376,   376,    93,    94,   101,   400,
      11,    71,   106,   213,   349,    95,    96,   101,   279,   334,
     279,   333,   103,   103,   213,   213,    97,   103,   213,   213,
     401,   106,   213,   330,   330,   102,     4,   275,   276,     1,
     106,   405,    97,     4,     1,   106,     1,   103,   404,   103,
     404,   102,   213,   213,   266,   268,   103,   210,   103,   103,
     376,   376,   401,   100,   102,   102,   399,   399,   399,   148,
     400,   400,   210,   120,    97,   103,   210,   250,   253,   229,
       1,    41,   406,   232,   233,   212,   100,   236,   147,   155,
     212,     1,   212,   212,   279,   279,   371,   374,   168,   168,
     213,   213,     4,   103,   208,   276,   212,   405,   208,   212,
     212,    15,    23,   237,   238,   239,   240,   241,     4,   267,
     267,   212,    94,    93,   101,   103,   103,   398,   398,   103,
       1,   106,   251,   254,   255,   404,   234,   209,   107,   101,
     239,   216,   241,   103,   103,   246,   376,   376,   401,   404,
     212,    27,   107,   213,   213,   373,   212,   212
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
#line 140 "yacc.y"
    {l.a("boolean_literal",1);	  (yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 141 "yacc.y"
    {l.a("INTEGER_LITERAL",0);	  (yyval.r.exp) = new AutoConst("INT",new int((yyvsp[(1) - (1)].r.i)),Node::current);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 142 "yacc.y"
    {l.a("REAL_LITERAL",0);		  (yyval.r.exp) = new AutoConst("FLOAT",new float((yyvsp[(1) - (1)].r.f)),Node::current);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 143 "yacc.y"
    {l.a("CHARACTER_LITERAL",0);  (yyval.r.exp) = new AutoConst("CHAR",new char((yyvsp[(1) - (1)].r.c)),Node::current);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 144 "yacc.y"
    {l.a("STRING_LITERAL",0);     (yyval.r.exp) = new AutoConst("STRING",new string((yyvsp[(1) - (1)].r.str)),Node::current);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 145 "yacc.y"
    {l.a("NULL_LITERAL",0);       (yyval.r.exp) = new AutoConst("NULL",nullptr,Node::current);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 148 "yacc.y"
    {l.a("TRUE",0);(yyval.r.exp) = new AutoConst("BOOL",new bool(true),Node::current);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 149 "yacc.y"
    {l.a("FALSE",0);(yyval.r.exp) = new AutoConst("BOOL",new bool(false),Node::current);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 155 "yacc.y"
    {l.a("namespace_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 159 "yacc.y"
    {l.a("type_name",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 164 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 165 "yacc.y"
    {l.a("type",1);(yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 169 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 170 "yacc.y"
    {l.a("non_array_type",1);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 174 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 175 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 176 "yacc.y"
    {l.a("simple_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 180 "yacc.y"
    {l.a("primitive_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 181 "yacc.y"
    {l.a("primitive_type",0);(yyval.r.base) = new string("BOOL");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 185 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 186 "yacc.y"
    {l.a("numeric_type",1);(yyval.r.base) = (yyvsp[(1) - (1)].r.base);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 187 "yacc.y"
    {l.a("numeric_type",0);(yyval.r.base) = new string("DECIMAL");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 191 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SBYTE");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 192 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("BYTE");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 193 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("SHORT");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 194 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("USHORT");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 195 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("INT");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 196 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("UINT");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 197 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("LONG");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 198 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("ULONG");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 199 "yacc.y"
    {l.a("integral_type",0);(yyval.r.base) = new string("CHAR");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 202 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("FLOAT");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 203 "yacc.y"
    {l.a("floating_point_type",0);(yyval.r.base) = new string("DOUBLE");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 206 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("OBJECT");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 207 "yacc.y"
    {l.a("class_type",0);(yyval.r.base) = new string("STRING");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 210 "yacc.y"
    {l.a("pointer_type",1);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 211 "yacc.y"
    {l.a("pointer_type",0);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 214 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = (yyvsp[(1) - (2)].r.known_type);(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 215 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = true;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 216 "yacc.y"
    {l.a("array_type",2);(yyval.r.known_type) = false;(yyval.r.base) = (yyvsp[(1) - (2)].r.base);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 219 "yacc.y"
    {l.a("rank_specifiers_opt",0);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 220 "yacc.y"
    {l.a("rank_specifiers_opt",2);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 223 "yacc.y"
    {l.a("rank_specifier",0);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 227 "yacc.y"
    {l.a("variable_reference",1);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 231 "yacc.y"
    {l.a("argument_list",1);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 232 "yacc.y"
    {l.a("argument_list",2);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 235 "yacc.y"
    {l.a("argument",1);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 236 "yacc.y"
    {l.a("argument",1);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 237 "yacc.y"
    {l.a("argument",1);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 240 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 241 "yacc.y"
    {l.a("primary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 244 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 245 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 246 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 247 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 248 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 249 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 250 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 251 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 252 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 253 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 254 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 255 "yacc.y"
    {l.a("primary_expression_no_parenthesis",1);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 258 "yacc.y"
    {l.a("parenthesized_expression",1);(yyval.r.exp) = (yyvsp[(2) - (3)].r.exp);}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 261 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 262 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 263 "yacc.y"
    {l.a("member_access",1);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 266 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 267 "yacc.y"
    {l.a("invocation_expression",2);}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 270 "yacc.y"
    {l.a("argument_list_opt",0);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 271 "yacc.y"
    {l.a("argument_list_opt",1);}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 274 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 275 "yacc.y"
    {l.a("element_access",2);}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 278 "yacc.y"
    {l.a("expression_list_opt",0);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 279 "yacc.y"
    {l.a("expression_list_opt",1);}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 282 "yacc.y"
    {l.a("expression_list",1);}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 283 "yacc.y"
    {l.a("expression_list",2);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 286 "yacc.y"
    {l.a("this_access",0);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 289 "yacc.y"
    {l.a("base_access",0);}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 290 "yacc.y"
    {l.a("base_access",1);}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 293 "yacc.y"
    {l.a("post_increment_expression",1);(yyval.r.exp) = new UnaryExpression(post_plusplus,(yyvsp[(1) - (2)].r.exp),Node::current);}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 296 "yacc.y"
    {l.a("post_decrement_expression",1);(yyval.r.exp) = new UnaryExpression(post_minusminus,(yyvsp[(1) - (2)].r.exp),Node::current);}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 299 "yacc.y"
    {l.a("new_expression",1);}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 302 "yacc.y"
    {l.a("object_creation_expression",2);}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 305 "yacc.y"
    {l.a("array_creation_expression",4);}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 306 "yacc.y"
    {l.a("array_creation_expression",2);}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 309 "yacc.y"
    {l.a("array_initializer_opt",0);}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 310 "yacc.y"
    {l.a("array_initializer_opt",1);}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 313 "yacc.y"
    {l.a("typeof_expression",1);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 314 "yacc.y"
    {l.a("typeof_expression",0);}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 317 "yacc.y"
    {l.a("checked_expression",1);}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 320 "yacc.y"
    {l.a("unchecked_expression",1);}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 323 "yacc.y"
    {l.a("pointer_member_access",1);}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 326 "yacc.y"
    {l.a("addressof_expression",1);(yyval.r.exp) = new UnaryExpression(And,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 329 "yacc.y"
    {l.a("sizeof_expression",1);}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 332 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 333 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = new Identifier(SPL->find(*(yyvsp[(1) - (1)].r.base)));}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 334 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 335 "yacc.y"
    {l.a("postfix_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 336 "yacc.y"
    {l.a("postfix_expression",1);}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 339 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = new UnaryExpression(exclamation_point,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 340 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = new UnaryExpression(tilde,(yyvsp[(2) - (2)].r.exp),Node::current);}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 341 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 342 "yacc.y"
    {l.a("unary_expression_not_plusminus",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 345 "yacc.y"
    {l.a("pre_increment_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 348 "yacc.y"
    {l.a("pre_decrement_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 351 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 352 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 353 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(2) - (2)].r.exp);}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 354 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 355 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 356 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 357 "yacc.y"
    {l.a("unary_expression",1);(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 365 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 366 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 367 "yacc.y"
    {l.a("cast_expression",4);}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 368 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 369 "yacc.y"
    {l.a("cast_expression",3);}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 370 "yacc.y"
    {l.a("cast_expression",2);}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 373 "yacc.y"
    {l.a("type_quals_opt",0);}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 374 "yacc.y"
    {l.a("type_quals_opt",1);}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 377 "yacc.y"
    {l.a("type_quals",1);}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 378 "yacc.y"
    {l.a("type_quals",2);}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 381 "yacc.y"
    {l.a("type_qual",1);}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 382 "yacc.y"
    {l.a("type_qual",0);}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 385 "yacc.y"
    {(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 387 "yacc.y"
    {
		l.a("multiplicative_expression STAR",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),star,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 392 "yacc.y"
    {
		l.a("multiplicative_expression SLASH",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),slash,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 397 "yacc.y"
    {
		l.a("multiplicative_expression PERCENT",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),percent,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 405 "yacc.y"
    {
		l.a("additive_expression multiplicative_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 410 "yacc.y"
    {
		l.a("additive_expression PLUS",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Plus,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 415 "yacc.y"
    {
		l.a("additive_expression MINUS",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Minus,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 423 "yacc.y"
    {
		l.a("shift_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 428 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),ltlt,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 433 "yacc.y"
    {
		l.a("shift_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),gtgt,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 441 "yacc.y"
    {
		l.a("relational_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 446 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),smaller,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 451 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Greater,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 456 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),leq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 461 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),geq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 466 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Is,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 471 "yacc.y"
    {
		l.a("relational_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),As,(yyvsp[(3) - (3)].r.exp),Node::current);		
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 479 "yacc.y"
    {
		l.a("equality_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 484 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),eqeq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 489 "yacc.y"
    {
		l.a("equality_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),noteq,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 497 "yacc.y"
    {
		l.a("and_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 502 "yacc.y"
    {
		l.a("and_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),And,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 509 "yacc.y"
    {
		l.a("exclusive_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 514 "yacc.y"
    {
		l.a("exclusive_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),power,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 522 "yacc.y"
    {
		l.a("inclusive_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 527 "yacc.y"
    {
		l.a("inclusive_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),Or,(yyvsp[(3) - (3)].r.exp),Node::current);  
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 535 "yacc.y"
    {
		l.a("conditional_and_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 540 "yacc.y"
    {
		l.a("conditional_and_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),andand,(yyvsp[(3) - (3)].r.exp),Node::current);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 548 "yacc.y"
    {
		l.a("conditional_or_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 553 "yacc.y"
    {
		l.a("conditional_or_expression",2);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (3)].r.exp),oror,(yyvsp[(3) - (3)].r.exp),Node::current);
  
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 562 "yacc.y"
    {
		l.a("conditional_expression",1);
		(yyval.r.exp) = (yyvsp[(1) - (1)].r.exp);
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 567 "yacc.y"
    {
		l.a("conditional_expression",3);
		(yyval.r.exp) = new BinaryExpression((yyvsp[(1) - (5)].r.exp),question_mark,(yyvsp[(3) - (5)].r.exp),Node::current);  
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 575 "yacc.y"
    {
		l.a("assignment",3);
		(yyval.r.st) = new Assignment((Identifier*)(yyvsp[(1) - (3)].r.exp),(yyvsp[(2) - (3)].r.op),(yyvsp[(3) - (3)].r.node),Node::current);
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 582 "yacc.y"
    {l.a("assignment_operator EQUAL",0);(yyval.r.op) = Equal;}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 583 "yacc.y"
    {l.a("assignment_operator PLUSEQ",0);(yyval.r.op) = pluseq;}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 584 "yacc.y"
    {l.a("assignment_operator MINUSEQ",0);(yyval.r.op) = minuseq;}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 585 "yacc.y"
    {l.a("assignment_operator STAREQ",0);(yyval.r.op) = stareq;}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 586 "yacc.y"
    {l.a("assignment_operator DIVEQ",0);(yyval.r.op) = diveq;}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 587 "yacc.y"
    {l.a("assignment_operator MODEQ",0);(yyval.r.op) = modeq;}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 588 "yacc.y"
    {l.a("assignment_operator XOREQ",0);(yyval.r.op) = xoreq;}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 589 "yacc.y"
    {l.a("assignment_operator ANDEQ",0);(yyval.r.op) = andeq;}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 590 "yacc.y"
    {l.a("assignment_operator OREQ",0);(yyval.r.op) = oreq;}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 591 "yacc.y"
    {l.a("assignment_operator GTGTEQ",0);(yyval.r.op) = gtgteq;}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 592 "yacc.y"
    {l.a("assignment_operator LTLTEQ",0);(yyval.r.op) = ltlteq;}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 595 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.exp);}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 596 "yacc.y"
    {l.a("expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.st);}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 600 "yacc.y"
    {
		l.a("constant_expression",1);
		(yyval.r.node) = (yyvsp[(1) - (1)].r.node);
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 606 "yacc.y"
    {l.a("boolean_expression",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 610 "yacc.y"
    {l.a("statement",1);}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 611 "yacc.y"
    {l.a("statement",1);}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 612 "yacc.y"
    {l.a("statement",1);}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 615 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 616 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 617 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 618 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 619 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 620 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 621 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 622 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 623 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 624 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 625 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 626 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 627 "yacc.y"
    {l.a("embedded_statement",1);}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 630 "yacc.y"
    { SPL->add_scope(); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 630 "yacc.y"
    {l.a("block",1);  SPL->endScope();}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 631 "yacc.y"
    {l.a("block",1,1);}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 634 "yacc.y"
    {l.a("statement_list_opt",0);}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 635 "yacc.y"
    {l.a("statement_list_opt",1);}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 639 "yacc.y"
    {l.a("statement_list",1);}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 640 "yacc.y"
    {l.a("statement_list",2);}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 643 "yacc.y"
    {l.a("empty_statement",0);}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 646 "yacc.y"
    {l.a("labeled_statement",1);}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 649 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 650 "yacc.y"
    {l.a("declaration_statement",1);}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 651 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 652 "yacc.y"
    { l.a("declaration_statement",1,1);}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 656 "yacc.y"
    {
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*(yyvsp[(1) - (2)].r.base),*(yyvsp[(2) - (2)].r.identifiers),*(yyvsp[(2) - (2)].r.exps),(yyvsp[(1) - (2)].r.known_type),false,(yyvsp[(2) - (2)].r.line_no),(yyvsp[(2) - (2)].r.col_no)) ;
	}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 664 "yacc.y"
    {	 l.a("variable_declarators",1); 
				 (yyval.r.identifiers) = new queue<string>();
				 (yyval.r.exps) = new queue<Node*>();
				 (yyval.r.identifiers)->push(*(yyvsp[(1) - (1)].r.identifier));
				 (yyval.r.exps)->push((yyvsp[(1) - (1)].r.node));
		   }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 671 "yacc.y"
    {      l.a("variable_declarators",2);
				  (yyval.r.identifiers) = (yyvsp[(1) - (3)].r.identifiers);
				  (yyval.r.exps) = (yyvsp[(1) - (3)].r.exps);
				  
				  (yyval.r.identifiers)->push(*(yyvsp[(3) - (3)].r.identifier));
				  (yyval.r.exps)->push((yyvsp[(3) - (3)].r.node));
		   }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 681 "yacc.y"
    {		 l.a("variable_declarator",0); 
				 (yyval.r.identifier) = new string ((yyvsp[(1) - (1)].r.str)) ; 
				 (yyval.r.node) = nullptr;
		  }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 686 "yacc.y"
    {		l.a("variable_declarator",1); 
					(yyval.r.identifier) = new string ((yyvsp[(1) - (3)].r.str));
					(yyval.r.node) = (yyvsp[(3) - (3)].r.node);
		   }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 692 "yacc.y"
    {l.a("variable_initializer",1);(yyval.r.node) = (yyvsp[(1) - (1)].r.node);}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 693 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 694 "yacc.y"
    {l.a("variable_initializer",1);}
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 697 "yacc.y"
    {l.a("stackalloc_initializer",2);}
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 701 "yacc.y"
    {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*(yyvsp[(2) - (3)].r.base),*(yyvsp[(3) - (3)].r.identifiers),*(yyvsp[(3) - (3)].r.exps),(yyvsp[(2) - (3)].r.known_type),true,(yyvsp[(2) - (3)].r.line_no),(yyvsp[(2) - (3)].r.col_no)) ;
  }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 708 "yacc.y"
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
#line 717 "yacc.y"
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
#line 729 "yacc.y"
    {
		l.a("constant_declarator",1);
		(yyval.r.identifier) = new string((yyvsp[(1) - (3)].r.str));
		(yyval.r.node) = (yyvsp[(3) - (3)].r.node);
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 737 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 738 "yacc.y"
    {l.a("expression_statement",1);}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 739 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.st));}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 740 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 741 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 742 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 743 "yacc.y"
    {l.a("expression_statement",1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 745 "yacc.y"
    { l.a("expression_statement",1,1);}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 746 "yacc.y"
    {l.a("expression_statement",1,1);}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 747 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 748 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 749 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 750 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 751 "yacc.y"
    {l.a("expression_statement",1,1);SPL->addStatement((yyvsp[(1) - (2)].r.exp));}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 754 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 755 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 756 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 757 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 758 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 759 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 760 "yacc.y"
    {l.a("statement_expression",1);}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 763 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 764 "yacc.y"
    {l.a("selection_statement",1);}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 767 "yacc.y"
    {SPL->addStatement(new If((Expression*)(yyvsp[(3) - (4)].r.node),Node::current));}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 767 "yacc.y"
    {l.a("if_statement",2);SPL->closeASTscope();}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {SPL->addStatement(new If((Expression*)(yyvsp[(3) - (4)].r.node),Node::current));}
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {SPL->closeASTscope(true);}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {l.a("if_statement",3);SPL->closeASTscope();}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 772 "yacc.y"
    {l.a("switch_statement",2);}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 775 "yacc.y"
    {l.a("switch_block",1);}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 778 "yacc.y"
    {l.a("switch_sections_opt",0);}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 779 "yacc.y"
    {l.a("switch_sections_opt",1);}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 782 "yacc.y"
    {l.a("switch_sections",1);}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 783 "yacc.y"
    {l.a("switch_sections",2);}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 786 "yacc.y"
    {l.a("switch_section",2);}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 789 "yacc.y"
    {l.a("switch_labels",1);}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 790 "yacc.y"
    {l.a("switch_labels",2);}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 793 "yacc.y"
    {l.a("switch_label",1);}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 794 "yacc.y"
    {l.a("switch_label",0);}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 797 "yacc.y"
    {l.a("iteration_statement",1);(yyval.r.st) = (yyvsp[(1) - (1)].r.st);}
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 798 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 799 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 800 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 803 "yacc.y"
    {l.a("unsafe_statement",1);}
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 806 "yacc.y"
    {l.a("while_statement",2);}
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 807 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 808 "yacc.y"
    {yyclearin;}
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 808 "yacc.y"
    {  }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 808 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {l.a("do_statement",2);}
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 812 "yacc.y"
    { l.a("do_statement",2,1);}
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 816 "yacc.y"
    {l.a("for_statement",8);}
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 821 "yacc.y"
    {l.a("for_initializer_opt",0);}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 822 "yacc.y"
    {l.a("for_initializer_opt",1);}
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 825 "yacc.y"
    {l.a("for_condition_opt",0);}
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 826 "yacc.y"
    {l.a("for_condition_opt",1);}
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 829 "yacc.y"
    {l.a("for_iterator_opt",0);}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 830 "yacc.y"
    {l.a("for_iterator_opt",1);}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 833 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 834 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 837 "yacc.y"
    {l.a("for_condition",1);}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 840 "yacc.y"
    {l.a("for_iterator",1);}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 843 "yacc.y"
    {l.a("statement_expression_list",1);}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 844 "yacc.y"
    {l.a("statement_expression_list",2);}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 847 "yacc.y"
    {l.a("foreach_statement",7);}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 850 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 851 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 852 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 853 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 854 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 857 "yacc.y"
    {l.a("break_statement",0);}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 858 "yacc.y"
    {l.a("break_statement",0,1);}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 861 "yacc.y"
    {l.a("continue_statement",0);}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 862 "yacc.y"
    {l.a("continue_statement",0,1);}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 865 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 866 "yacc.y"
    {l.a("goto_statement",1);}
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 867 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 868 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 869 "yacc.y"
    {l.a("goto_statement",1,1);}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 870 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 873 "yacc.y"
    {l.a("return_statement",1);}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 874 "yacc.y"
    {l.a("return_statement",1,1);}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 877 "yacc.y"
    {l.a("expression_opt",0);}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 878 "yacc.y"
    {l.a("expression_opt",1);}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 881 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 882 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 885 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 886 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 887 "yacc.y"
    {l.a("try_statement",3);}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 890 "yacc.y"
    {l.a("catch_clauses",1);}
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 891 "yacc.y"
    {l.a("catch_clauses",2);}
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 894 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 895 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 899 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 900 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 903 "yacc.y"
    {l.a("finally_clause",1);}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 906 "yacc.y"
    {l.a("checked_statement",1);}
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 909 "yacc.y"
    {l.a("unchecked_statement",1);}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 912 "yacc.y"
    {l.a("lock_statement",2);}
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 915 "yacc.y"
    {l.a("using_statement",2);}
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 918 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 919 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 923 "yacc.y"
    {l.a("fixed_statement",3);}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 926 "yacc.y"
    {l.a("fixed_pointer_declarators",1);}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 927 "yacc.y"
    {l.a("fixed_pointer_declarators",2);}
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 930 "yacc.y"
    {l.a("fixed_pointer_declarator",1);}
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 933 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 934 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 937 "yacc.y"
    {l.a("using_directives_opt",0);}
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 938 "yacc.y"
    {l.a("using_directives_opt",1);}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 941 "yacc.y"
    {l.a("attributes_opt",0);}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 942 "yacc.y"
    {l.a("attributes_opt",1);}
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 945 "yacc.y"
    {l.a("namespace_member_declarations_opt",0);}
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 946 "yacc.y"
    {l.a("namespace_member_declarations_opt",1);}
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 949 "yacc.y"
    {SPL->addNamespace(*(yyvsp[(3) - (3)].r.base),(yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no));}
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 950 "yacc.y"
    {l.a("namespace_declaration",4);SPL->endScope();}
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 953 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 954 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 959 "yacc.y"
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[(1) - (1)].r.str));
		  }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 963 "yacc.y"
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[(1) - (2)].r.base)) + string((yyvsp[(2) - (2)].r.str)));
		}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 969 "yacc.y"
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[(1) - (2)].r.str)) + ".");}
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 970 "yacc.y"
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[(1) - (3)].r.base) + string((yyvsp[(2) - (3)].r.str)) + ".");}
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 974 "yacc.y"
    {l.a("namespace_body",2);}
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 977 "yacc.y"
    {l.a("using_directives",1);}
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 978 "yacc.y"
    {l.a("using_directives",2);}
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 981 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 982 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 985 "yacc.y"
    {l.a("using_alias_directive",1);}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 986 "yacc.y"
    {l.a("using_alias_directive",1,1);}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 989 "yacc.y"
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 990 "yacc.y"
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 993 "yacc.y"
    {l.a("namespace_member_declarations",1);}
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 994 "yacc.y"
    {l.a("namespace_member_declarations",2);}
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 997 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 998 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 1001 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 1002 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 1003 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1004 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1005 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1017 "yacc.y"
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1022 "yacc.y"
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[(1) - (1)].r.modifiers);
  }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1029 "yacc.y"
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[(1) - (1)].r.modifier));
  }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1035 "yacc.y"
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[(1) - (2)].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[(2) - (2)].r.modifier));
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1042 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1043 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1044 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1045 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1046 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1047 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1048 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1049 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1050 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1051 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1052 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1053 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1054 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1055 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1066 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1069 "yacc.y"
    {l.a("class_declaration",6);SPL->endScope();}
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1071 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1074 "yacc.y"
    {l.a("class_declaration",5);SPL->endScope();}
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1079 "yacc.y"
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1080 "yacc.y"
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1083 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[(2) - (2)].r.base));}
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1084 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1086 "yacc.y"
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

  case 385:
/* Line 1792 of yacc.c  */
#line 1098 "yacc.y"
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(1) - (1)].r.base));
  }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1104 "yacc.y"
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[(1) - (3)].r.bases);
		(yyval.r.bases)->push(*(yyvsp[(3) - (3)].r.base));
  }
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1112 "yacc.y"
    {l.a("class_body",1);}
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1116 "yacc.y"
    {l.a("class_member_declarations_opt",0);}
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1117 "yacc.y"
    {l.a("class_member_declarations_opt",1);}
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1120 "yacc.y"
    {l.a("class_member_declarations",1);}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1121 "yacc.y"
    {l.a("class_member_declarations",2);}
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1124 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1125 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1126 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1127 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1128 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1129 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1130 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1131 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1132 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1133 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1137 "yacc.y"
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));
		  }
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1142 "yacc.y"
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));

		 }
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1150 "yacc.y"
    {
		        SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
  		      l.a("field_declaration",4);
	      }
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1155 "yacc.y"
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
        }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1162 "yacc.y"
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 1167 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
      }
    break;

  case 409:
/* Line 1792 of yacc.c  */
#line 1174 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
      }
    break;

  case 411:
/* Line 1792 of yacc.c  */
#line 1180 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
         }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 1186 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
         }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 1196 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
      }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1200 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
      }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 1204 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
         }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1208 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
         }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1215 "yacc.y"
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1219 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1223 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1227 "yacc.y"
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[(1) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(1) - (3)].r.types_ids))->front()); ((yyvsp[(1) - (3)].r.types_ids))->pop();}
            while(!((yyvsp[(3) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(3) - (3)].r.types_ids))->front()); ((yyvsp[(3) - (3)].r.types_ids))->pop();}
        }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1235 "yacc.y"
    {l.a("return_type",1);}
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1236 "yacc.y"
    {l.a("return_type",0);}
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1249 "yacc.y"
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 1254 "yacc.y"
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
      }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 1261 "yacc.y"
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 1266 "yacc.y"
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
       }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 1273 "yacc.y"
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 1281 "yacc.y"
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 1291 "yacc.y"
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));  
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no); 
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 1302 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 1310 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 1320 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 1321 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 1322 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1326 "yacc.y"
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 1339 "yacc.y"
    {l.a("property_declaration",7);}
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 1342 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 1343 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 1346 "yacc.y"
    {l.a("set_accessor_declaration_opt",0);}
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 1347 "yacc.y"
    {l.a("set_accessor_declaration_opt",1);}
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1350 "yacc.y"
    {l.a("get_accessor_declaration_opt",0);}
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1351 "yacc.y"
    {l.a("get_accessor_declaration_opt",1);}
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1357 "yacc.y"
    {l.a("get_accessor_declaration",4);}
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1363 "yacc.y"
    {l.a("set_accessor_declaration",4);}
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1366 "yacc.y"
    {l.a("accessor_body",1);}
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1367 "yacc.y"
    {l.a("accessor_body",0);}
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1370 "yacc.y"
    {l.a("event_declaration",4);}
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1374 "yacc.y"
    {l.a("event_declaration",7);}
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1377 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1378 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1384 "yacc.y"
    {l.a("add_accessor_declaration",4);}
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1390 "yacc.y"
    {l.a("remove_accessor_declaration",4);}
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1396 "yacc.y"
    {l.a("indexer_declaration",6);}
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1399 "yacc.y"
    {l.a("indexer_declarator",2);}
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1401 "yacc.y"
    {l.a("indexer_declarator",3);}
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1404 "yacc.y"
    {l.a("qualified_this",1);}
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1408 "yacc.y"
    {l.a("operator_declaration",4);}
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1411 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1412 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1415 "yacc.y"
    {l.a("overloadable_operator_declarator",3);}
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1416 "yacc.y"
    {l.a("overloadable_operator_declarator",4);}
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1419 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1420 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1421 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1422 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1423 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1424 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1425 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1426 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1427 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1428 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1429 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1430 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1431 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1432 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1433 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1434 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 1435 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 1436 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 1437 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 1438 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 1439 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 1440 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 1443 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1444 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1448 "yacc.y"
    {
  SPL->addMethod(*(yyvsp[(2) - (6)].r.modifiers),"",string((yyvsp[(3) - (6)].r.str)),*(yyvsp[(5) - (6)].r.types_ids),(yyvsp[(3) - (6)].r.line_no),(yyvsp[(3) - (6)].r.col_no),1,1);
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 1451 "yacc.y"
    {l.a("constructor_declaration",4);SPL->endScope();}
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 1454 "yacc.y"
    {l.a("constructor_initializer_opt",0);}
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1455 "yacc.y"
    {l.a("constructor_initializer_opt",1);}
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1458 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1459 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1475 "yacc.y"
    {l.a("destructor_declaration",3);}
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1478 "yacc.y"
    {l.a("operator_body",1);}
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1479 "yacc.y"
    {l.a("operator_body",0);}
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1482 "yacc.y"
    {l.a("constructor_body",1);}
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1483 "yacc.y"
    {l.a("constructor_body",0);}
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1488 "yacc.y"
    {l.a("struct_declaration",5);}
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1491 "yacc.y"
    {l.a("struct_interfaces_opt",0);}
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1492 "yacc.y"
    {l.a("struct_interfaces_opt",1);}
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1495 "yacc.y"
    {l.a("struct_interfaces",1);}
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1498 "yacc.y"
    {l.a("struct_body",1);}
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1501 "yacc.y"
    {l.a("struct_member_declarations_opt",0);}
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 1502 "yacc.y"
    {l.a("struct_member_declarations_opt",1);}
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1505 "yacc.y"
    {l.a("struct_member_declarations",1);}
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1506 "yacc.y"
    {l.a("struct_member_declarations",2);}
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1509 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1510 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1511 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1512 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1513 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1514 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1515 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1516 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1518 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 1523 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 1524 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 1527 "yacc.y"
    {l.a("variable_initializer_list_opt",0);}
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 1528 "yacc.y"
    {l.a("variable_initializer_list_opt",1);}
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 1531 "yacc.y"
    {l.a("variable_initializer_list",1);}
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 1532 "yacc.y"
    {l.a("variable_initializer_list",2);}
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 1538 "yacc.y"
    {
		SPL->addInterface(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));		
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 1541 "yacc.y"
    {l.a("interface_declaration",5);SPL->endScope();}
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 1545 "yacc.y"
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 1546 "yacc.y"
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 1549 "yacc.y"
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 1552 "yacc.y"
    {l.a("interface_body",1);}
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 1555 "yacc.y"
    {l.a("interface_member_declarations_opt",0);}
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 1556 "yacc.y"
    {l.a("interface_member_declarations_opt",1);}
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 1559 "yacc.y"
    {l.a("interface_member_declarations",1);}
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 1560 "yacc.y"
    {l.a("interface_member_declarations",2);}
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 1563 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 1564 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 1565 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 1566 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 1571 "yacc.y"
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
	 SPL->endScope();
    }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 1577 "yacc.y"
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
	  SPL->endScope();
    }
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 1584 "yacc.y"
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 1585 "yacc.y"
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 1591 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 1591 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 1598 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 1598 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 1602 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 1603 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 1604 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 1605 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 1608 "yacc.y"
    {l.a("interface_event_declaration",4);}
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 1613 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 1614 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 1619 "yacc.y"
    {l.a("enum_declaration",5);}
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 1622 "yacc.y"
    {l.a("enum_base_opt",0);}
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 1623 "yacc.y"
    {l.a("enum_base_opt",1);}
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 1626 "yacc.y"
    {l.a("enum_base",1);}
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 1629 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 1630 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 1633 "yacc.y"
    {l.a("enum_member_declarations_opt",0);}
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 1634 "yacc.y"
    {l.a("enum_member_declarations_opt",1);}
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 1637 "yacc.y"
    {l.a("enum_member_declarations",1);}
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 1638 "yacc.y"
    {l.a("enum_member_declarations",2);}
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 1641 "yacc.y"
    {l.a("enum_member_declaration",1);}
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 1642 "yacc.y"
    {l.a("enum_member_declaration",2);}
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 1647 "yacc.y"
    {l.a("enum_member_declaration",4);}
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 1648 "yacc.y"
    {l.a("enum_member_declaration",4,1);}
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 1653 "yacc.y"
    {l.a("attributes",1);}
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 1656 "yacc.y"
    {l.a("attribute_sections",1);}
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 1657 "yacc.y"
    {l.a("attribute_sections",2);}
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 1660 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 1661 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 1664 "yacc.y"
    {l.a("attribute_target_specifier_opt",0);}
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 1665 "yacc.y"
    {l.a("attribute_target_specifier_opt",1);}
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 1668 "yacc.y"
    {l.a("attribute_target_specifier",1);}
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 1671 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 1672 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 1673 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 1674 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 1675 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 1676 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 1677 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 1678 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 1679 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 1682 "yacc.y"
    {l.a("attribute_list",1);}
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 1683 "yacc.y"
    {l.a("attribute_list",2);}
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 1686 "yacc.y"
    {l.a("attribute",2);}
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 1689 "yacc.y"
    {l.a("attribute_arguments_opt",0);}
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 1690 "yacc.y"
    {l.a("attribute_arguments_opt",1);}
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 1693 "yacc.y"
    {l.a("attribute_name",1);}
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 1696 "yacc.y"
    {l.a("attribute_arguments",1);}
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 1703 "yacc.y"
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 1706 "yacc.y"
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 1709 "yacc.y"
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 1712 "yacc.y"
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 1715 "yacc.y"
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 1718 "yacc.y"
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 1726 "yacc.y"
    {l.a("CLASS",0);}
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 1727 "yacc.y"
    {l.a("CLASS",0,1);yyclearin;}
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 1730 "yacc.y"
    {l.a("left_bracket_circle",0);}
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 1731 "yacc.y"
    {l.a("left_bracket_circle",0,1);yyclearin;}
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 1734 "yacc.y"
    {l.a("right_bracket_circle",0);}
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 1735 "yacc.y"
    {l.a("right_bracket_circle",0,1);yyclearin;}
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 1738 "yacc.y"
    { l.a("semicolon",0);}
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 1739 "yacc.y"
    { l.a("semicolon",0,1);}
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 1742 "yacc.y"
    {l.a("in",0);}
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 1743 "yacc.y"
    {l.a("in",0,1);}
    break;


/* Line 1792 of yacc.c  */
#line 6974 "yacc.tab.cpp"
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
#line 1748 "yacc.y"


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




