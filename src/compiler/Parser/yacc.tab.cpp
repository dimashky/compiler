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
#define YYLAST   3327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  263
/* YYNRULES -- Number of rules.  */
#define YYNRULES  604
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1006

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
     720,   726,   732,   733,   734,   742,   750,   758,   768,   769,
     771,   772,   774,   775,   777,   779,   781,   783,   785,   787,
     791,   800,   802,   804,   806,   808,   810,   813,   816,   819,
     822,   826,   831,   835,   839,   844,   848,   852,   856,   857,
     859,   863,   867,   871,   875,   880,   882,   885,   892,   899,
     902,   903,   905,   908,   911,   914,   920,   926,   928,   930,
     937,   939,   943,   947,   950,   953,   954,   956,   957,   959,
     960,   962,   963,   970,   971,   973,   975,   978,   981,   985,
     990,   992,   995,   997,   999,  1005,  1011,  1015,  1019,  1021,
    1024,  1026,  1028,  1030,  1032,  1034,  1036,  1038,  1039,  1041,
    1043,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,
    1064,  1066,  1068,  1070,  1072,  1074,  1075,  1084,  1085,  1094,
    1095,  1097,  1100,  1103,  1108,  1110,  1114,  1118,  1119,  1121,
    1123,  1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,  1142,
    1144,  1146,  1153,  1160,  1166,  1172,  1174,  1175,  1185,  1186,
    1196,  1197,  1207,  1208,  1218,  1227,  1236,  1245,  1254,  1255,
    1257,  1259,  1263,  1265,  1267,  1269,  1273,  1275,  1279,  1281,
    1283,  1288,  1292,  1296,  1297,  1299,  1301,  1306,  1316,  1319,
    1322,  1323,  1325,  1326,  1328,  1334,  1340,  1342,  1344,  1351,
    1362,  1365,  1368,  1374,  1380,  1389,  1395,  1401,  1404,  1409,
    1411,  1413,  1421,  1432,  1434,  1436,  1438,  1440,  1442,  1444,
    1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,
    1466,  1468,  1470,  1472,  1474,  1476,  1484,  1492,  1493,  1503,
    1504,  1506,  1512,  1518,  1526,  1528,  1530,  1532,  1534,  1542,
    1543,  1545,  1548,  1552,  1553,  1555,  1557,  1560,  1562,  1564,
    1566,  1568,  1570,  1572,  1574,  1576,  1578,  1582,  1587,  1588,
    1590,  1592,  1596,  1597,  1606,  1607,  1609,  1612,  1616,  1617,
    1619,  1621,  1624,  1626,  1628,  1630,  1632,  1641,  1650,  1651,
    1653,  1654,  1665,  1666,  1680,  1684,  1688,  1695,  1702,  1709,
    1711,  1714,  1722,  1723,  1725,  1728,  1732,  1737,  1738,  1740,
    1742,  1746,  1749,  1754,  1764,  1774,  1776,  1778,  1781,  1788,
    1796,  1797,  1799,  1802,  1804,  1806,  1808,  1810,  1812,  1814,
    1816,  1818,  1820,  1822,  1826,  1829,  1830,  1832,  1834,  1838,
    1839,  1840,  1841,  1842,  1843,  1844,  1846,  1848,  1850,  1852,
    1854,  1856,  1858,  1860,  1862
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     276,     0,    -1,   145,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    50,    -1,    73,    -1,    32,    -1,   283,
      -1,   283,    -1,   149,    -1,   157,    -1,   150,    -1,   147,
      -1,   151,    -1,   155,    -1,   156,    -1,   152,    -1,    12,
      -1,   153,    -1,   154,    -1,    22,    -1,    62,    -1,    14,
      -1,    64,    -1,    80,    -1,    42,    -1,    76,    -1,    47,
      -1,    77,    -1,    17,    -1,    35,    -1,    26,    -1,    51,
      -1,    68,    -1,   148,   111,    -1,    83,   111,    -1,   157,
     159,    -1,   150,   159,    -1,   283,   159,    -1,    -1,   159,
     158,    -1,     3,    -1,   208,    -1,   162,    -1,   161,    97,
     162,    -1,   208,    -1,    60,   160,    -1,    53,   160,    -1,
     165,    -1,   164,    -1,   144,    -1,   178,    -1,   166,    -1,
     167,    -1,   169,    -1,   172,    -1,   173,    -1,   176,    -1,
     180,    -1,   185,    -1,   181,    -1,   182,    -1,   102,   208,
     103,    -1,   163,   108,     4,    -1,   151,   108,     4,    -1,
     155,   108,     4,    -1,   164,   102,   168,   103,    -1,   283,
     102,   168,   103,    -1,    -1,   161,    -1,   163,    98,   171,
      99,    -1,   283,    98,   171,    99,    -1,    -1,   171,    -1,
     208,    -1,   171,    97,   208,    -1,    71,    -1,    11,   108,
       4,    -1,    11,    98,   171,    99,    -1,   186,   139,    -1,
     186,   140,    -1,   177,    -1,    49,   148,   102,   168,   103,
      -1,    49,   149,    98,   171,    99,   158,   179,    -1,    49,
     157,   356,    -1,    -1,   356,    -1,    75,   102,   148,   103,
      -1,    75,   102,    83,   103,    -1,    18,   102,   208,   103,
      -1,    78,   102,   208,   103,    -1,   186,   141,     4,    -1,
     114,   190,    -1,    65,   102,   148,   103,    -1,   163,    -1,
     283,    -1,   174,    -1,   175,    -1,   183,    -1,   116,   190,
      -1,   117,   190,    -1,   191,    -1,   186,    -1,   139,   190,
      -1,   140,   190,    -1,   109,   190,    -1,   110,   190,    -1,
     111,   190,    -1,   188,    -1,   189,    -1,   184,    -1,   187,
      -1,   102,   208,   103,   187,    -1,   102,   195,   111,   103,
     190,    -1,   102,   283,   159,   192,   103,   190,    -1,   102,
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
      -1,   228,    -1,   230,    -1,   241,    -1,   256,    -1,   263,
      -1,   268,    -1,   269,    -1,   270,    -1,   271,    -1,   242,
      -1,   273,    -1,    -1,   100,   214,   215,   101,    -1,   100,
       1,   101,    -1,    -1,   216,    -1,   211,    -1,   216,   211,
      -1,   106,    -1,     4,   107,   211,    -1,   220,   106,    -1,
     225,   106,    -1,   220,     1,    -1,   225,     1,    -1,   148,
     221,    -1,   222,    -1,   221,    97,   222,    -1,     4,    -1,
       4,   120,   223,    -1,   208,    -1,   356,    -1,   224,    -1,
      66,   148,    98,   208,    99,    -1,    20,   148,   226,    -1,
     227,    -1,   226,    97,   227,    -1,     4,   120,   209,    -1,
     167,   106,    -1,   177,   106,    -1,   206,   106,    -1,   174,
     106,    -1,   175,   106,    -1,   188,   106,    -1,   189,   106,
      -1,   167,     1,    -1,   177,     1,    -1,   206,     1,    -1,
     174,     1,    -1,   175,     1,    -1,   188,     1,    -1,   189,
       1,    -1,   167,    -1,   177,    -1,   206,    -1,   174,    -1,
     175,    -1,   188,    -1,   189,    -1,   231,    -1,   234,    -1,
      39,   233,   212,    -1,    -1,    39,   233,   212,    27,   232,
     212,    -1,   402,   210,   403,    -1,    70,   402,   208,   403,
     235,    -1,   100,   236,   101,    -1,    -1,   237,    -1,   238,
      -1,   237,   238,    -1,   239,   216,    -1,   240,    -1,   239,
     240,    -1,    15,   209,   107,    -1,    23,   107,    -1,   243,
      -1,   246,    -1,   247,    -1,   255,    -1,    79,   213,    -1,
      85,   102,   210,   103,   212,    -1,    85,   102,     1,   103,
     212,    -1,    -1,    -1,    85,     1,   244,   210,     1,   212,
     245,    -1,    25,   212,    85,   102,   210,   103,   106,    -1,
      25,   212,    85,   102,   210,   103,     1,    -1,    36,   402,
     248,   404,   249,   404,   250,   403,   212,    -1,    -1,   251,
      -1,    -1,   252,    -1,    -1,   253,    -1,   220,    -1,   254,
      -1,   210,    -1,   254,    -1,   229,    -1,   254,    97,   229,
      -1,    37,   402,   148,     4,   405,   208,   403,   212,    -1,
     257,    -1,   258,    -1,   259,    -1,   260,    -1,   262,    -1,
      13,   106,    -1,    13,     1,    -1,    21,   106,    -1,    21,
       1,    -1,    38,     4,   106,    -1,    38,    15,   209,   106,
      -1,    38,    23,   106,    -1,    38,     4,     1,    -1,    38,
      15,   209,     1,    -1,    38,    23,     1,    -1,    61,   261,
     106,    -1,    61,   261,     1,    -1,    -1,   208,    -1,    72,
     261,   106,    -1,    72,   261,     1,    -1,    74,   213,   264,
      -1,    74,   213,   267,    -1,    74,   213,   264,   267,    -1,
     265,    -1,   264,   265,    -1,    16,   102,   155,   266,   103,
     213,    -1,    16,   102,   147,   266,   103,   213,    -1,    16,
     213,    -1,    -1,     4,    -1,    33,   213,    -1,    18,   213,
      -1,    78,   213,    -1,    46,   102,   208,   103,   212,    -1,
      81,   102,   272,   103,   212,    -1,   220,    -1,   208,    -1,
      34,   102,   148,   274,   103,   212,    -1,   275,    -1,   274,
      97,   275,    -1,     4,   120,   208,    -1,   277,   278,    -1,
     277,   290,    -1,    -1,   286,    -1,    -1,   384,    -1,    -1,
     290,    -1,    -1,   278,    48,   283,   281,   285,   282,    -1,
      -1,   106,    -1,     4,    -1,   284,     4,    -1,     4,   108,
      -1,   284,     4,   108,    -1,   100,   277,   279,   101,    -1,
     287,    -1,   286,   287,    -1,   288,    -1,   289,    -1,    81,
       4,   120,   283,   106,    -1,    81,     4,   120,   283,     1,
      -1,    81,   146,   106,    -1,    81,   146,     1,    -1,   291,
      -1,   290,   291,    -1,   280,    -1,   292,    -1,   296,    -1,
     349,    -1,   359,    -1,   376,    -1,   383,    -1,    -1,   294,
      -1,   295,    -1,   294,   295,    -1,     9,    -1,    31,    -1,
      44,    -1,    49,    -1,    54,    -1,    56,    -1,    57,    -1,
      58,    -1,    59,    -1,    63,    -1,    67,    -1,    79,    -1,
      82,    -1,    84,    -1,    -1,   278,   293,   401,     4,   299,
     297,   302,   282,    -1,    -1,   278,   293,   401,     4,   299,
     298,     1,   282,    -1,    -1,   300,    -1,   107,   155,    -1,
     107,   301,    -1,   107,   155,    97,   301,    -1,   147,    -1,
     301,    97,   147,    -1,   100,   303,   101,    -1,    -1,   304,
      -1,   305,    -1,   304,   305,    -1,   306,    -1,   307,    -1,
     308,    -1,   323,    -1,   330,    -1,   334,    -1,   337,    -1,
     342,    -1,   346,    -1,   292,    -1,   278,   293,    20,   148,
     226,   106,    -1,   278,   293,    20,   148,   226,     1,    -1,
     278,   293,   148,   221,   106,    -1,   278,   293,   148,   221,
       1,    -1,   309,    -1,    -1,   278,   293,   148,   283,   102,
     314,   103,   310,   213,    -1,    -1,   278,   293,    83,   283,
     102,   314,   103,   311,   213,    -1,    -1,   278,   293,   148,
     283,   102,     1,   103,   312,   213,    -1,    -1,   278,   293,
      83,   283,   102,     1,   103,   313,   213,    -1,   278,   293,
     148,   283,   102,   314,   103,   106,    -1,   278,   293,    83,
     283,   102,   314,   103,   106,    -1,   278,   293,   148,   283,
     102,     1,   103,   106,    -1,   278,   293,    83,   283,   102,
       1,   103,   106,    -1,    -1,   316,    -1,   317,    -1,   316,
      97,   317,    -1,   148,    -1,    83,    -1,   318,    -1,   316,
      97,   318,    -1,   320,    -1,   317,    97,   320,    -1,   319,
      -1,   322,    -1,   278,   321,   148,     4,    -1,   319,   120,
     223,    -1,   322,   120,   223,    -1,    -1,    60,    -1,    53,
      -1,   278,    55,   148,     4,    -1,   278,   293,   148,   283,
     399,   100,   324,   101,   400,    -1,   327,   325,    -1,   328,
     326,    -1,    -1,   328,    -1,    -1,   327,    -1,   278,    93,
     400,   329,   399,    -1,   278,    94,   400,   329,   399,    -1,
     213,    -1,   106,    -1,   278,   293,    29,   148,   221,   106,
      -1,   278,   293,    29,   148,   283,   397,   100,   331,   101,
     398,    -1,   332,   333,    -1,   333,   332,    -1,   278,    95,
     398,   213,   397,    -1,   278,    96,   398,   213,   397,    -1,
     278,   293,   335,   399,   100,   324,   101,   400,    -1,   148,
      71,    98,   316,    99,    -1,   148,   336,    98,   316,    99,
      -1,   284,    71,    -1,   278,   293,   338,   347,    -1,   339,
      -1,   341,    -1,   148,    52,   340,   102,   148,     4,   103,
      -1,   148,    52,   340,   102,   148,     4,    97,   148,     4,
     103,    -1,   109,    -1,   110,    -1,   116,    -1,   117,    -1,
     139,    -1,   140,    -1,    73,    -1,    32,    -1,   111,    -1,
     112,    -1,   113,    -1,   114,    -1,   115,    -1,   119,    -1,
     129,    -1,   130,    -1,   133,    -1,   134,    -1,   104,    -1,
     105,    -1,   136,    -1,   135,    -1,    40,    52,   148,   102,
     148,     4,   103,    -1,    30,    52,   148,   102,   148,     4,
     103,    -1,    -1,   278,   293,     4,   102,   314,   103,   343,
     344,   348,    -1,    -1,   345,    -1,   107,    11,   102,   168,
     103,    -1,   107,    71,   102,   168,   103,    -1,   278,   293,
     117,     4,   102,   103,   213,    -1,   213,    -1,   106,    -1,
     213,    -1,   106,    -1,   278,   293,    69,     4,   350,   352,
     282,    -1,    -1,   351,    -1,   107,   301,    -1,   100,   353,
     101,    -1,    -1,   354,    -1,   355,    -1,   354,   355,    -1,
     306,    -1,   307,    -1,   308,    -1,   323,    -1,   330,    -1,
     334,    -1,   337,    -1,   342,    -1,   292,    -1,   100,   357,
     101,    -1,   100,   358,    97,   101,    -1,    -1,   358,    -1,
     223,    -1,   358,    97,   223,    -1,    -1,   278,   293,    43,
       4,   361,   360,   363,   282,    -1,    -1,   362,    -1,   107,
     301,    -1,   100,   364,   101,    -1,    -1,   365,    -1,   366,
      -1,   365,   366,    -1,   367,    -1,   369,    -1,   374,    -1,
     371,    -1,   278,   368,   148,     4,   102,   314,   103,   375,
      -1,   278,   368,    83,     4,   102,   314,   103,   375,    -1,
      -1,    49,    -1,    -1,   278,   368,   148,     4,   399,   100,
     373,   101,   400,   370,    -1,    -1,   278,   368,   148,    71,
      98,   316,    99,   399,   100,   373,   101,   400,   372,    -1,
     278,    93,   375,    -1,   278,    94,   375,    -1,   278,    93,
     375,   278,    94,   375,    -1,   278,    94,   375,   278,    93,
     375,    -1,   278,   368,    29,   148,     4,   375,    -1,   106,
      -1,   100,   101,    -1,   278,   293,    28,     4,   377,   379,
     282,    -1,    -1,   378,    -1,   107,   153,    -1,   100,   380,
     101,    -1,   100,   381,    97,   101,    -1,    -1,   381,    -1,
     382,    -1,   381,    97,   382,    -1,   278,     4,    -1,   278,
       4,   120,   209,    -1,   278,   293,    24,   315,     4,   102,
     314,   103,   106,    -1,   278,   293,    24,   315,     4,   102,
     314,   103,     1,    -1,   385,    -1,   386,    -1,   385,   386,
      -1,   395,    98,   387,   390,    99,   396,    -1,   395,    98,
     387,   390,    97,    99,   396,    -1,    -1,   388,    -1,   389,
     107,    -1,    86,    -1,    87,    -1,    29,    -1,    88,    -1,
      89,    -1,    90,    -1,    91,    -1,    61,    -1,    92,    -1,
     391,    -1,   390,    97,   391,    -1,   393,   392,    -1,    -1,
     394,    -1,   147,    -1,   102,   170,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,     1,    -1,   102,    -1,
       1,    -1,   103,    -1,     1,    -1,   106,    -1,     1,    -1,
      41,    -1,     1,    -1
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
     767,   768,   768,   771,   775,   778,   781,   782,   785,   786,
     789,   792,   793,   796,   797,   800,   801,   802,   803,   806,
     809,   810,   811,   811,   811,   814,   815,   819,   824,   825,
     828,   829,   832,   833,   836,   837,   840,   843,   846,   847,
     850,   853,   854,   855,   856,   857,   860,   861,   864,   865,
     868,   869,   870,   871,   872,   873,   876,   877,   880,   881,
     884,   885,   888,   889,   890,   893,   894,   897,   898,   899,
     902,   903,   906,   909,   912,   915,   918,   921,   922,   926,
     929,   930,   933,   936,   937,   940,   941,   944,   945,   948,
     949,   952,   952,   956,   957,   961,   965,   972,   973,   977,
     980,   981,   984,   985,   988,   989,   992,   993,   996,   997,
    1000,  1001,  1004,  1005,  1006,  1007,  1008,  1020,  1024,  1031,
    1037,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,  1069,  1068,  1074,  1073,  1082,
    1083,  1086,  1087,  1088,  1100,  1106,  1115,  1119,  1120,  1123,
    1124,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,
    1136,  1139,  1144,  1152,  1157,  1165,  1170,  1169,  1177,  1176,
    1183,  1182,  1189,  1187,  1198,  1202,  1206,  1210,  1218,  1221,
    1225,  1229,  1238,  1239,  1251,  1256,  1263,  1268,  1275,  1283,
    1293,  1304,  1312,  1323,  1324,  1325,  1328,  1339,  1345,  1346,
    1349,  1350,  1353,  1354,  1357,  1363,  1369,  1370,  1373,  1374,
    1380,  1381,  1384,  1390,  1396,  1402,  1404,  1407,  1411,  1414,
    1415,  1418,  1419,  1422,  1423,  1424,  1425,  1426,  1427,  1428,
    1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,
    1439,  1440,  1441,  1442,  1443,  1446,  1447,  1451,  1450,  1457,
    1458,  1461,  1462,  1478,  1481,  1482,  1485,  1486,  1491,  1494,
    1495,  1498,  1501,  1504,  1505,  1508,  1509,  1512,  1513,  1514,
    1515,  1516,  1517,  1518,  1519,  1521,  1526,  1527,  1530,  1531,
    1534,  1535,  1541,  1540,  1548,  1549,  1552,  1555,  1558,  1559,
    1562,  1563,  1566,  1567,  1568,  1569,  1573,  1579,  1587,  1588,
    1594,  1591,  1601,  1597,  1605,  1606,  1607,  1608,  1611,  1616,
    1617,  1622,  1625,  1626,  1629,  1632,  1633,  1636,  1637,  1640,
    1641,  1644,  1645,  1650,  1651,  1656,  1659,  1660,  1663,  1664,
    1667,  1668,  1671,  1674,  1675,  1676,  1677,  1678,  1679,  1680,
    1681,  1682,  1685,  1686,  1689,  1692,  1693,  1696,  1699,  1706,
    1709,  1712,  1715,  1718,  1721,  1729,  1730,  1733,  1734,  1737,
    1738,  1741,  1742,  1745,  1746
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
  "$@4", "do_statement", "for_statement", "for_initializer_opt",
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
  "namespace_declaration", "$@5", "comma_opt", "qualified_identifier",
  "qualifier", "namespace_body", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "modifiers_opt", "modifiers", "modifier",
  "class_declaration", "$@6", "$@7", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "$@8", "$@9", "$@10", "$@11",
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
  "conversion_operator_declarator", "constructor_declaration", "$@12",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration", "$@13",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration",
  "new_opt", "interface_property_declaration", "$@14",
  "interface_indexer_declaration", "$@15", "interface_accessors",
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
     243,   243,   244,   245,   243,   246,   246,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   253,   254,   254,
     255,   256,   256,   256,   256,   256,   257,   257,   258,   258,
     259,   259,   259,   259,   259,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   263,   264,   264,   265,   265,   265,
     266,   266,   267,   268,   269,   270,   271,   272,   272,   273,
     274,   274,   275,   276,   276,   277,   277,   278,   278,   279,
     279,   281,   280,   282,   282,   283,   283,   284,   284,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   292,   292,   292,   293,   293,   294,
     294,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   297,   296,   298,   296,   299,
     299,   300,   300,   300,   301,   301,   302,   303,   303,   304,
     304,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   306,   306,   307,   307,   308,   310,   309,   311,   309,
     312,   309,   313,   309,   309,   309,   309,   309,   314,   314,
     314,   314,   315,   315,   316,   316,   317,   317,   318,   318,
     319,   320,   320,   321,   321,   321,   322,   323,   324,   324,
     325,   325,   326,   326,   327,   328,   329,   329,   330,   330,
     331,   331,   332,   333,   334,   335,   335,   336,   337,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   341,   343,   342,   344,
     344,   345,   345,   346,   347,   347,   348,   348,   349,   350,
     350,   351,   352,   353,   353,   354,   354,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   356,   356,   357,   357,
     358,   358,   360,   359,   361,   361,   362,   363,   364,   364,
     365,   365,   366,   366,   366,   366,   367,   367,   368,   368,
     370,   369,   372,   371,   373,   373,   373,   373,   374,   375,
     375,   376,   377,   377,   378,   379,   379,   380,   380,   381,
     381,   382,   382,   383,   383,   384,   385,   385,   386,   386,
     387,   387,   388,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   390,   390,   391,   392,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   401,   402,   402,   403,
     403,   404,   404,   405,   405
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
       5,     5,     0,     0,     7,     7,     7,     9,     0,     1,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       8,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     4,     3,     3,     4,     3,     3,     3,     0,     1,
       3,     3,     3,     3,     4,     1,     2,     6,     6,     2,
       0,     1,     2,     2,     2,     5,     5,     1,     1,     6,
       1,     3,     3,     2,     2,     0,     1,     0,     1,     0,
       1,     0,     6,     0,     1,     1,     2,     2,     3,     4,
       1,     2,     1,     1,     5,     5,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     8,     0,     8,     0,
       1,     2,     2,     4,     1,     3,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     6,     5,     5,     1,     0,     9,     0,     9,
       0,     9,     0,     9,     8,     8,     8,     8,     0,     1,
       1,     3,     1,     1,     1,     3,     1,     3,     1,     1,
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     325,     0,     0,   327,   326,   340,   342,   343,   335,     0,
      10,     0,     1,   357,   350,   327,   348,   351,   352,   353,
     354,   355,   356,   328,   565,   566,     0,   341,   337,     0,
     347,   346,   336,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,     0,   358,
     359,   357,   349,   567,   570,   335,     0,   338,   331,   596,
     595,     0,     0,     0,     0,     0,   360,   575,   580,   573,
     574,   576,   577,   578,   579,   581,     0,   571,     0,   345,
     344,     0,    20,    25,    32,    23,    34,    33,    28,    30,
      35,    24,    26,    36,    29,    31,    27,   423,    15,   422,
      12,    14,    16,    19,    21,    22,    17,    18,    13,    11,
       0,   552,   524,   499,   379,   587,    11,     0,   582,   585,
     572,   325,   333,    38,    37,    44,    40,    39,    41,     0,
       0,     0,   553,     0,   522,   525,     0,     0,   500,     0,
     375,   380,     0,   590,    75,   584,   586,   327,   334,   332,
     327,   554,   327,   333,   384,   526,     0,   501,   327,   333,
     381,   382,     0,     0,   590,   583,   568,     3,     4,     5,
       6,     0,     0,     9,     0,     7,     0,    79,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     2,     0,     0,    97,    52,    51,    55,    56,    57,
       0,    76,    58,    59,    99,   100,    60,    84,    54,    61,
      63,    64,   101,   113,    62,   105,   114,   111,   112,   127,
     104,   131,   134,   137,   144,   147,   149,   151,   153,   155,
     157,   171,   172,    77,    98,     0,   327,   433,     0,   419,
     420,   424,   428,   426,   429,     0,     0,   558,   559,   551,
       0,   327,   333,   357,   515,   507,   508,   509,   405,   510,
     511,   512,   513,   514,     0,   327,   505,   498,     0,   327,
     333,   333,   569,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,   121,   121,   121,   131,     0,    98,   108,
     109,   110,    95,   102,   103,   106,   107,     0,     0,     0,
       0,    71,   588,     0,    82,    83,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,   339,   435,     0,   434,     0,     0,   327,   327,
       0,     0,   561,   555,   327,   385,   538,     0,   327,   530,
     532,   533,   535,   534,   523,     0,   502,   506,   383,   357,
     400,     0,   327,   389,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   376,   378,     0,    80,     0,    71,     0,
     518,    87,     0,     0,     0,     0,   126,   125,     0,   122,
     123,     0,     0,     0,    65,   121,    67,    68,     0,    66,
       0,     0,    72,    46,     0,    48,    78,    94,   159,   128,
     129,   130,   127,   132,   133,   135,   136,   143,   142,   139,
     138,   140,   141,   145,   146,   148,   150,   152,   154,     0,
     156,     0,     0,     0,     0,   564,   563,   421,   425,     0,
     427,     0,     0,   209,   431,   211,   210,   432,     0,   556,
     560,   539,     0,   527,   531,   335,     0,     0,     0,     0,
       0,     0,   593,     0,   459,   460,     0,   386,   390,    81,
      92,     0,     0,   520,     0,   519,    96,    91,    90,    93,
       0,   124,     0,     0,     0,   115,     0,    73,    50,    45,
      49,     0,    69,     0,    74,    70,   436,   430,     0,   173,
     562,     0,     0,     0,   327,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   205,   593,     0,     0,     0,     0,
     495,   494,   458,     0,    85,    42,   516,     0,   120,   118,
     119,   116,     0,    47,   158,     0,     0,     0,   593,     0,
       0,     0,     0,   214,     0,   591,     0,     0,     0,     0,
     470,   469,   481,   482,   463,   464,   471,   472,   473,   474,
     475,   465,   466,   476,   477,   478,   479,   480,   484,   483,
     467,   468,     0,   327,   404,     0,   403,     0,     0,   457,
     327,   327,     0,   194,     0,    88,    42,   517,   521,   117,
       0,     0,   327,   327,     0,   327,   487,     0,   402,     0,
     401,   448,     0,     0,     0,     0,     0,   208,     0,     0,
     428,   429,   207,   206,     0,     0,   327,     0,     0,     0,
     327,   327,   193,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   298,     0,   298,     0,     0,
       0,     0,     0,   198,     0,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   177,   178,     0,   195,
     179,   175,   176,     0,     0,   180,   181,   238,   239,   182,
     189,   255,   256,   257,   258,   183,   281,   282,   283,   284,
     285,   184,   185,   186,   187,   188,   190,    98,     0,    86,
      89,    43,   212,     0,   549,   548,     0,     0,   327,     0,
     489,   216,   215,   327,     0,     0,   412,   408,     0,   327,
     455,   410,   406,     0,   456,   594,   594,   594,     0,   438,
     441,     0,   439,   443,     0,   287,   286,   313,     0,   289,
     288,     0,     0,   598,   597,   268,     0,     0,     0,     0,
       0,     0,     0,   299,     0,     0,     0,     0,   314,   259,
       0,   262,     0,   204,   224,   217,   227,   220,   228,   221,
     225,   218,   229,   222,   230,   223,   226,   219,   192,   197,
     202,   200,   203,   201,     0,   550,     0,     0,     0,     0,
     593,     0,     0,   490,     0,     0,   327,   327,     0,     0,
     417,     0,   415,     0,     0,   416,     0,   414,     0,   594,
       0,     0,   454,   199,   213,     0,     0,    56,    99,   100,
      84,   111,   112,   233,   274,   278,     0,   269,   275,     0,
     293,   290,     0,   295,   292,   240,   174,     0,     0,   297,
     296,     0,   301,   300,     0,     0,   302,   305,   303,   318,
     317,     0,     0,     0,     0,   493,   537,   536,     0,     0,
     594,     0,     0,     0,   497,   496,   488,   592,   592,   592,
       0,   450,     0,   451,   486,   485,   413,   409,     0,   461,
     411,   407,   437,   447,   446,   593,   593,     0,     0,     0,
     320,   602,   601,   270,     0,     0,   294,   291,   241,   600,
     599,   243,     0,     0,     0,   309,   312,   306,   304,     0,
       0,     0,     0,   327,   327,   540,   327,    71,    71,     0,
       0,   449,     0,   444,   445,     0,     0,     0,     0,   276,
       0,   271,   279,   604,   603,     0,     0,   315,   246,   244,
     310,   310,   316,     0,   261,   260,     0,     0,   541,     0,
       0,     0,   591,   591,     0,     0,   322,   321,   319,   272,
       0,   242,     0,     0,     0,   247,   248,     0,   251,   311,
       0,     0,   263,     0,     0,   594,   491,   492,   452,   453,
     462,   266,   265,     0,   273,   277,     0,     0,   254,   245,
     249,   250,   252,     0,     0,   264,   546,   547,   542,     0,
     280,   253,   308,   307,   543,   267
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
     229,   230,   231,   232,   318,   415,   510,   837,   665,   666,
     667,   593,   668,   669,   670,   671,   672,   673,   523,   524,
     454,   455,   674,   552,   553,   675,   825,   676,   677,   936,
     750,   678,   939,   964,   965,   966,   967,   968,   679,   680,
     681,   852,   995,   682,   683,   826,   930,   983,   827,   931,
     984,   828,   684,   685,   686,   687,   688,   689,   754,   690,
     691,   846,   847,   970,   848,   692,   693,   694,   695,   851,
     696,   889,   890,     2,     3,   237,   235,    14,    81,   149,
     234,    11,   122,     4,     5,     6,     7,    15,    16,    17,
      48,    49,    50,    18,   162,   163,   140,   141,   155,   270,
     371,   372,   373,   255,   256,   257,   258,   808,   803,   806,
     801,   238,   110,   239,   240,   241,   242,   243,   346,   244,
     259,   629,   729,   732,   630,   631,   885,   260,   795,   796,
     797,   261,   472,   527,   262,   473,   474,   582,   475,   263,
     710,   792,   793,   382,   532,   866,    19,   137,   138,   159,
     264,   265,   266,   456,   484,   485,    20,   156,   134,   135,
     252,   357,   358,   359,   360,   462,   361,   948,   362,  1004,
     789,   363,   705,    21,   131,   132,   153,   246,   247,   248,
      22,    23,    24,    25,    76,    77,    78,   117,   118,   145,
     119,   146,    26,   166,   612,   919,   528,   810,    65,   745,
     901,   893,   935
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -819
static const yytype_int16 yypact[] =
{
     -34,    59,   102,   -24,   -34,  -819,  -819,  -819,   -63,    71,
    -819,   109,  -819,  2971,  -819,   256,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   -24,  -819,    33,  -819,  -819,   116,
    -819,  -819,     2,  -819,  -819,  -819,   116,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,   449,  3243,
    -819,  3214,  -819,  -819,   608,    19,    95,  -819,  -819,  -819,
    -819,  1568,   261,   281,   338,   376,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,   116,  -819,   278,  -819,
    -819,   311,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   330,  -819,   365,
    -819,   446,  -819,  -819,  -819,  -819,  -819,  -819,   446,   446,
     480,   412,   451,   455,   469,  -819,  -819,   359,  -819,   443,
    -819,   -34,   484,  -819,  -819,  -819,  -819,  -819,  -819,   494,
     981,   518,  -819,   116,  -819,  -819,   116,   519,  -819,    50,
     585,  -819,   238,  -819,  2604,  -819,  -819,   312,  -819,  -819,
     -52,  -819,   341,   484,  -819,   523,   522,   523,   356,   484,
     526,   523,   524,   624,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,   -18,   525,  -819,  3130,  -819,   528,  -819,  -819,   529,
     530,  2317,  2604,  2604,  2604,  2604,  2604,  2604,  2604,  2604,
    -819,  -819,   520,   532,   211,   531,  -819,  -819,  -819,  -819,
     538,   537,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   182,  -819,  -819,  -819,   890,
    -819,   351,   193,   304,    32,   374,   512,   533,   540,   516,
     -70,  -819,  -819,  -819,   328,   556,   384,   392,   555,   562,
     563,  -819,   541,  -819,   545,   663,   569,   574,  -819,  -819,
     116,   388,   484,  3243,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   571,   399,  -819,  -819,   116,   403,
     484,   484,  -819,  2604,   670,  2604,   330,    13,   577,   291,
    3130,  3174,  2604,    34,    63,    86,   438,   578,   273,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,   676,   679,  2604,
     681,  2116,  -819,  2604,  -819,  -819,   682,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  2604,  2604,
    2604,  2604,  2604,  2604,  2604,  2604,  3130,  3130,  2604,  2604,
    2604,  2604,  2604,  2604,  2604,  2604,  2604,  2604,  2604,  2604,
    2604,  2116,  -819,  -819,  3130,  -819,  3130,   106,   -24,   -24,
    2202,  2202,   573,  -819,   404,  -819,   640,   590,   408,  -819,
    -819,  -819,  -819,  -819,  -819,  3042,  -819,  -819,   523,  3243,
    -819,   600,   422,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   375,  -819,   602,  2116,  2604,
    2202,  -819,   225,   289,   292,   603,  -819,  -819,   604,    34,
    -819,   605,   610,  2403,  2808,    34,  -819,  -819,   435,  -819,
    2604,  2604,   606,  -819,   611,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,   351,   351,   193,   193,   365,   365,   304,
     304,   304,   304,    32,    32,   374,   512,   533,   540,   612,
     516,   470,   614,    45,    49,  -819,  -819,   563,  -819,   541,
    -819,   545,  3130,  -819,  -819,  -819,  -819,  -819,  2604,  -819,
    -819,  -819,  3086,  -819,  -819,   162,  3130,  3130,   659,   666,
      55,    35,  -819,   200,  -819,  -819,  2728,  -819,  -819,  -819,
    -819,   618,   474,  -819,   621,   626,  -819,  -819,  -819,  -819,
    2604,  -819,  2604,  2604,  2604,  -819,   623,  -819,  -819,  -819,
    -819,  2116,  -819,  2604,  -819,  -819,  -819,  -819,   -12,  -819,
    -819,  3130,    61,    46,   -52,    65,    67,  3130,  3130,   622,
     232,  2804,   633,   132,  -819,   630,    37,   636,   637,  1405,
    -819,  -819,  -819,   732,  -819,   446,  -819,  2001,  -819,  -819,
    -819,  -819,  2604,  -819,  -819,  2604,    74,   638,   641,   644,
     635,   619,   198,  -819,   227,  -819,   254,   276,  2648,  2202,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,   645,   -24,  -819,   742,  -819,  2941,   649,  -819,
     -24,   -24,   650,  1770,   648,   652,   446,  -819,  -819,  -819,
     654,   296,   -52,   -52,   655,   -24,  -819,  2604,  -819,   750,
    -819,  -819,   656,  3130,  3130,   660,   662,  -819,  3130,   475,
    -819,  -819,   642,  -819,   664,   665,   -24,   478,   420,   657,
     426,   428,  -819,   445,   108,   251,  3130,   111,  1886,   668,
     239,   239,   295,   239,   672,  2604,   239,  2604,   675,   459,
     675,   674,   260,  -819,    75,   520,   532,  1052,  1180,  1212,
    1156,   416,   861,   890,   125,  -819,  -819,  -819,   671,  1770,
    -819,  -819,  -819,   127,   128,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,    81,   677,  -819,
    -819,  -819,  -819,   678,  -819,  -819,   685,   686,   -24,   488,
     693,  -819,  -819,   -24,    78,    84,   696,   697,    87,   -24,
    -819,   699,   700,   706,  -819,  -819,  -819,  -819,   683,  -819,
    -819,   717,  -819,  -819,  1770,  -819,  -819,  -819,    65,  -819,
    -819,   726,  3130,  -819,  -819,  2518,  3130,   138,  2604,   139,
    1886,  2604,  2604,  -819,   183,  2604,   199,    22,  -819,  -819,
    2518,  -819,  1524,   715,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   675,  -819,   296,   296,   486,   712,
    -819,    29,   301,  -819,   498,   713,   -24,   -24,   714,   716,
    -819,   675,  -819,   675,   241,  -819,   675,  -819,   675,  -819,
     325,   325,  -819,  -819,   718,   721,    91,   110,   121,   129,
     133,   195,   214,  -819,  -819,  -819,   209,  -819,   719,    93,
    -819,  -819,   240,  -819,  -819,   751,  -819,   210,   722,  -819,
    -819,   210,  -819,  -819,   489,   675,    22,  -819,  -819,  -819,
    -819,   724,  2604,   725,   729,  -819,  -819,  -819,   296,   296,
    -819,   733,   734,   736,  -819,  -819,  -819,  -819,  -819,  -819,
     728,  -819,   723,  -819,  -819,  -819,  -819,  -819,  3130,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  2604,   731,   332,
    -819,  -819,  -819,  2604,  2604,    42,  -819,  -819,  -819,  -819,
    -819,  -819,  1886,   752,    50,  -819,  -819,  -819,  -819,  1886,
     852,  1886,  1886,   430,   432,  -819,   -24,  2116,  2116,   675,
     675,  -819,    94,  -819,  -819,   754,  2604,   850,  1886,  -819,
     209,  -819,  -819,  -819,  -819,  2604,  1886,  -819,   382,  -819,
     851,   851,  -819,  1886,  -819,  -819,   764,   770,  -819,   766,
     767,   769,  -819,  -819,   771,   242,  -819,  -819,  -819,  2604,
     210,  -819,  2604,   772,   775,   382,  -819,  1654,  -819,  -819,
     778,   779,  -819,   296,   296,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,   210,  -819,   719,  1886,   776,  -819,  -819,
    -819,  1770,  -819,   675,   675,  -819,  -819,  -819,  -819,  1886,
    -819,  -819,  -819,  -819,  -819,  -819
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -819,  -819,  -819,  -819,   -75,   383,   704,  -819,   -30,  -819,
     743,  -819,   -58,  -819,   710,   290,   -97,   477,  -819,   389,
    -819,  -819,  -819,  -819,  -488,  -336,  -819,  -819,  -237,  -819,
    -819,   -72,   -68,  -819,    97,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,   485,   135,   228,   462,  -819,  -251,
    -819,   493,  -161,   274,   165,   275,   559,   570,   568,   561,
     567,  -819,  -819,   331,  -819,     9,  -601,  -738,  -661,  -307,
    -429,  -819,  -819,   -60,  -819,  -819,  -819,  -641,  -491,   323,
    -334,  -819,  -819,   172,   302,  -819,    23,  -819,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,   -53,  -819,   -54,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,   -44,  -819,  -819,  -819,  -819,  -819,  -819,   269,  -819,
    -819,  -819,    76,   -21,    83,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,    -6,  -819,   809,    12,  -819,  -819,  -819,   -83,
      -1,   461,  -819,  -819,   930,  -819,  -819,   789,     1,  -144,
    -221,  -819,   889,  -819,  -819,  -819,  -819,  -819,  -110,  -819,
    -819,  -819,   575,   -22,   -15,   -14,  -819,  -819,  -819,  -819,
    -819,  -175,  -819,  -312,   591,  -346,  -331,   592,  -819,  -330,
      -3,   314,  -819,  -819,   315,   313,   131,     4,  -819,   148,
     152,    14,  -819,  -819,    18,  -819,  -819,  -819,  -819,    21,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,   684,  -266,  -819,  -819,  -819,  -819,  -819,  -819,
    -819,  -819,  -819,   593,  -819,  -819,  -819,  -819,  -819,  -819,
      41,  -819,  -765,  -819,  -819,  -819,  -819,  -819,  -819,   596,
    -819,  -819,  -819,   929,  -819,  -819,  -819,  -819,   816,  -819,
    -819,  -819,  -819,   795,  -343,  -254,  -518,  -717,  -819,  -163,
    -818,    30,  -819
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -590
static const yytype_int16 yytable[] =
{
      10,   115,   448,   106,   126,   442,   711,   588,   779,   811,
     812,   127,   128,   391,   254,    13,    52,   457,   449,   451,
     286,   856,   857,   903,   854,   554,   157,    51,    56,   161,
     604,   102,   365,   401,   402,    58,   385,   125,   844,   520,
     862,    32,   326,   933,   531,    28,  -589,     1,   338,   506,
     548,  -418,   481,   507,    55,   845,   483,    29,   154,    55,
     109,   154,   408,     8,   154,   547,   125,   115,   339,   551,
     249,   520,    30,   813,  -589,   116,   267,   327,   601,   622,
     273,   160,   798,   934,   125,   -11,   545,   521,   799,   125,
     274,   804,   882,   913,   914,   888,    79,   895,   954,   124,
     863,    90,    12,   441,   824,   657,   522,   445,   589,   735,
      57,  -231,   739,    32,   910,   388,   106,   549,    93,   850,
      55,   254,  -234,   285,   124,   370,   776,    28,   780,   782,
    -235,    54,   116,   584,  -232,   116,   328,   329,   116,   830,
     833,   116,   986,   915,   102,   396,   124,   832,   476,   925,
     657,   284,   482,   233,   496,   929,   124,   124,   368,    51,
     124,   423,   424,   763,   245,   999,   123,   330,   331,   364,
     253,   297,   123,   109,   396,   355,   124,    31,   124,   340,
     288,   657,   127,   341,   839,   124,   124,   383,   384,   124,
     287,   405,   -11,   154,   298,   124,  -236,   396,   124,   608,
     842,    80,   124,   598,   124,   124,   737,  -231,   996,   997,
     891,   899,   446,  -231,   736,  -237,  -231,   740,  -234,   757,
     758,   759,   106,   106,  -234,   617,  -235,  -234,   370,   585,
    -232,   777,  -235,   781,   783,  -235,  -232,    52,   586,  -232,
     743,   896,    55,   981,   831,   834,   657,   374,    51,   116,
     102,   102,   620,   621,   375,   376,  -324,   817,   998,   620,
     621,   761,   657,   356,   514,   111,   377,   116,   106,   106,
      28,   619,   861,   378,   620,   621,   125,   253,   627,   109,
     109,   369,   233,   379,   387,   112,   106,   380,   106,   840,
     381,   395,  -236,   709,   125,   609,   102,   102,  -236,   747,
     529,  -236,   322,   323,   610,   843,   530,   106,   233,   299,
     748,  -237,   416,   900,   102,   892,   102,  -237,   749,   300,
    -237,   304,   305,   306,   585,   109,   109,   418,   486,   700,
     779,   741,  -335,   611,  -335,   102,   124,   164,   878,   550,
      28,   744,   113,   109,   879,   109,   897,   439,   982,   233,
     374,   529,   559,   275,  -589,   855,   613,   375,   376,   453,
     453,   987,   762,   865,   109,   124,   245,   923,   924,   377,
     356,   340,   876,   448,   877,   341,   378,   880,   614,   881,
     114,   884,   884,   616,   369,   120,   379,   124,   620,   621,
     380,   390,   487,   381,   106,   488,   703,   962,   233,   453,
     123,   529,   704,   124,   106,   963,   817,   864,   106,   106,
    -589,   121,   625,  -329,   657,   905,   906,   772,   106,   499,
     499,   657,   102,   657,   657,   529,   340,   706,   707,   927,
     341,   883,   102,   324,   325,   928,   102,   102,   596,  -589,
     657,   123,  -557,   835,    99,   343,   102,   344,   657,   125,
      59,   109,   345,   106,  -589,   657,   142,  -503,   143,   106,
     106,   109,   319,   320,   321,   109,   109,   509,    60,   519,
     525,   817,   303,    61,   479,   109,   124,    62,   746,   657,
     751,   102,  -589,   755,   129,  -330,  -589,   102,   102,  -528,
     952,   953,    63,   429,   430,   431,   432,  -589,   657,   596,
    -504,  -589,  -589,   657,  -387,   459,  -589,   332,   333,  -529,
     109,   657,   544,   725,   726,   555,   109,   109,    64,   130,
    -589,   658,   773,  -388,  -589,   659,  -589,  -440,  -589,  -442,
    -589,  -544,   303,  -545,   497,   656,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   144,   453,  -111,  -111,   403,
     320,   321,   734,    28,   600,   106,   106,   277,   133,   529,
     106,   282,   136,   655,  1002,  1003,   658,   303,   453,   504,
     659,   303,   719,   535,   720,   719,   139,   724,   106,   858,
     859,   950,   951,   102,   102,   719,  -377,   790,   102,   529,
     148,   904,   697,   867,   868,   937,   150,   658,   425,   426,
     128,   659,   942,   628,   944,   945,   102,   433,   434,   978,
     979,   656,   109,   109,   920,   921,   509,   109,   152,   158,
     250,   958,   251,   268,   269,   271,   334,   275,   297,   961,
     280,   281,   282,   301,   303,   109,   972,    67,   628,   655,
     298,   302,   728,   731,   289,   290,   291,   292,   293,   294,
     295,   296,   335,   337,   753,   336,   753,   342,   347,   348,
     349,   350,   658,   392,   394,   351,   659,   352,   697,    68,
     353,   354,   366,   818,   386,   389,   656,   819,   658,  1000,
     406,   404,   659,   407,   106,   409,   417,   656,   106,   461,
     660,   463,  1005,   458,    69,    70,    71,    72,    73,    74,
      75,   477,   656,   501,   655,   480,   489,   490,   492,   427,
     428,   517,   102,   493,   502,   655,   102,   505,   518,   503,
     788,   534,   536,   537,   558,   794,   542,   443,   661,   444,
     655,   583,   587,   697,   590,   660,   594,   591,   606,   607,
     602,   109,   605,   603,   697,   109,   622,   618,   471,   626,
     698,   632,   390,   702,   551,   708,   713,   509,   727,   697,
     836,   838,   559,   716,   841,   717,   660,   721,   722,   849,
     742,   836,   778,   661,   752,   529,   760,   726,   898,   785,
     784,   419,   420,   421,   422,   422,   422,   422,   786,   787,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     791,   422,   800,   802,   661,   805,   807,   809,   870,   872,
     725,   815,   585,   860,   869,   609,   894,   874,   867,   875,
     106,   662,   818,   887,   868,   902,   819,   909,   911,   940,
     658,   660,   912,   916,   659,   508,   917,   658,   918,   658,
     658,   659,   820,   659,   659,   513,   941,   660,   102,   515,
     516,   926,   938,   943,   888,   969,   658,   955,   973,   471,
     659,   836,   774,   974,   658,   419,   662,   975,   659,   661,
     976,   658,   977,   151,   980,   659,   989,   109,   278,   988,
     821,   993,   994,  1001,   279,   661,   701,   818,   500,   495,
     543,   819,   491,   435,   546,   658,   836,   662,   438,   659,
     556,   557,   836,   116,   437,   436,   440,   991,   623,   656,
     814,   712,   990,   992,   658,   985,   756,   932,   659,   658,
     971,   957,   907,   659,   664,   946,   947,   658,   788,   908,
     147,   659,   526,   656,    27,   956,   236,   655,    66,   447,
     723,   450,   886,   730,   960,   873,   733,   478,   871,   367,
     460,   464,   538,    53,   539,   540,   541,   949,   165,   272,
     959,   655,   662,     0,     0,     0,   697,   775,     0,   664,
       0,   509,     0,   822,     0,     0,     0,     0,   662,     0,
       0,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
     697,   820,  -112,  -112,     0,    83,   714,   715,    84,   660,
     664,   718,     0,     0,   599,     0,   660,     0,   660,   660,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   738,
       0,   316,   317,    88,     0,   660,     0,     0,    89,   821,
       0,     0,     0,   660,     0,     0,     0,   661,     0,     0,
     660,     0,     0,    91,   661,    92,   661,   661,     0,     0,
       0,     0,     0,   764,     0,   663,   820,    94,    95,     0,
       0,    96,     0,   661,   660,   664,     0,     0,     0,     0,
       0,   661,     0,     0,     0,     0,   823,     0,   661,     0,
       0,   664,     0,   660,     0,     0,     0,     0,   660,     0,
       0,     0,     0,     0,   821,     0,   660,     0,     0,     0,
     663,     0,   661,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   661,   822,     0,     0,   816,   661,     0,     0,   829,
     662,   663,     0,     0,   661,     0,     0,   662,     0,   662,
     662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,     0,     0,     0,   -56,     0,   662,   770,   765,     0,
     -56,     0,     0,     0,   662,     0,     0,     0,     0,     0,
       0,   662,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   766,     0,   -56,   -56,     0,     0,   822,     0,     0,
       0,   -56,   -56,   -56,     0,   662,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   663,     0,     0,
       0,     0,   663,   768,   662,     0,     0,     0,     0,   662,
       0,     0,     0,     0,     0,   823,     0,   662,     0,     0,
       0,     0,     0,   664,     0,     0,     0,     0,     0,     0,
     664,     0,   664,   664,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,   -84,   664,
       0,   922,   771,     0,   -84,     0,     0,   664,     0,     0,
       0,     0,     0,     0,   664,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   767,   -84,   -84,     0,
     823,     0,     0,     0,     0,   -84,   -84,   -84,   664,     0,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,
       0,   -99,   -99,     0,     0,     0,     0,   664,   769,   -99,
     -99,   -99,   664,     0,     0,     0,     0,     0,     0,     0,
     664,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,     0,     0,  -100,  -100,     0,     0,     0,     0,     0,
       0,  -100,  -100,  -100,     0,     0,   663,     0,     0,     0,
       0,     0,     0,     0,   663,     0,     0,     0,     0,     0,
       0,   663,     0,   663,   663,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     663,     0,     0,     0,     0,     0,     0,     0,   663,     0,
       0,     0,     0,     0,     0,   663,   592,     0,     0,  -191,
    -191,  -191,  -191,  -191,     0,     0,  -191,  -191,  -191,  -191,
       0,   663,  -191,  -191,     0,  -191,  -191,  -191,     0,   663,
    -191,  -191,     0,     0,     0,     0,     0,  -191,     0,  -191,
    -191,  -191,  -191,  -191,  -191,     0,     0,  -191,   663,     0,
       0,  -191,  -191,   663,  -191,  -191,  -191,     0,     0,     0,
       0,   663,     0,     0,     0,     0,  -191,  -191,     0,  -191,
    -191,     0,     0,  -191,     0,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,     0,  -191,     0,
    -191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -191,  -191,  -191,     0,     0,
       0,  -191,     0,     0,  -191,  -191,  -191,     0,     0,  -191,
       0,  -191,  -191,     0,     0,   853,     0,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
       0,    84,   172,     0,  -191,  -191,    85,     0,     0,     0,
      86,     0,     0,     0,     0,     0,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    55,   174,   175,    90,     0,     0,     0,     0,
      82,     0,    83,     0,     0,    84,    91,     0,    92,   176,
      85,     0,    93,     0,    86,   177,     0,   178,     0,   179,
      94,    95,   180,    87,    96,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   181,     0,     0,     0,
      91,     0,    92,   182,   183,   184,    93,     0,   185,     0,
     186,   187,     0,     0,    94,    95,     0,     0,    96,     0,
       0,    97,     0,     0,     0,     0,     0,     0,   633,   167,
     168,   169,   170,   188,   189,   171,    82,   634,    83,   962,
       0,    84,   635,     0,   636,   637,    85,   963,     0,   638,
      86,     0,     0,     0,     0,     0,   173,     0,   639,    87,
     640,   641,   642,   643,     0,     0,    88,     0,     0,     0,
     644,    89,     0,   174,   175,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   645,    91,     0,    92,   176,
       0,     0,    93,     0,   646,   177,   647,   178,   648,   179,
      94,    95,   649,   650,    96,   651,     0,   276,     0,   652,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   529,     0,   181,     0,     0,     0,
     653,     0,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,     0,     0,   633,   167,   168,   169,   170,     0,
       0,   171,    82,   634,    83,     0,     0,    84,   635,     0,
     636,   637,    85,   188,   189,   638,    86,     0,     0,     0,
       0,     0,   173,     0,   639,    87,   640,   641,   642,   643,
       0,     0,    88,     0,     0,     0,   644,    89,     0,   174,
     175,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   645,    91,     0,    92,   176,     0,     0,    93,     0,
     646,   177,   647,   178,   648,   179,    94,    95,   649,   650,
      96,   651,     0,   276,     0,   652,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     529,     0,   181,     0,     0,     0,   653,     0,     0,   182,
     183,   184,     0,     0,   185,     0,   186,   187,     0,     0,
      55,   167,   168,   169,   170,     0,     0,   171,    82,   634,
      83,     0,     0,    84,   635,     0,     0,   637,    85,   188,
     189,   638,    86,     0,     0,     0,     0,     0,   173,     0,
     639,    87,   640,   641,   642,   643,     0,     0,    88,     0,
       0,     0,   644,    89,     0,   174,   175,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   645,    91,     0,
      92,   176,     0,     0,    93,     0,   646,   177,   647,   178,
     648,   179,    94,    95,   649,   650,    96,   651,     0,     0,
       0,   652,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   529,     0,   181,     0,
       0,     0,   653,     0,     0,   182,   183,   184,     0,     0,
     185,     0,   186,   187,     0,    55,   167,   168,   169,   170,
       0,     0,   171,    82,     0,    83,     0,     0,    84,   172,
       0,     0,     0,    85,     0,   188,   189,    86,     0,     0,
       0,     0,     0,   173,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,     0,
     174,   175,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    92,   176,   452,     0,    93,
       0,     0,   177,     0,   178,     0,   179,    94,    95,   180,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   390,   597,   181,     0,     0,     0,     0,     0,     0,
     182,   183,   184,     0,     0,   185,     0,   186,   187,     0,
      55,   167,   168,   169,   170,     0,     0,   171,    82,     0,
      83,     0,     0,    84,   172,     0,     0,     0,    85,     0,
     188,   189,    86,     0,     0,     0,     0,     0,   173,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,     0,   174,   175,    90,     0,   410,
       0,     0,     0,     0,     0,     0,   411,     0,    91,     0,
      92,   176,     0,     0,    93,     0,     0,   177,     0,   178,
       0,   179,    94,    95,   180,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,   167,   168,   169,
     170,     0,     0,   171,    82,     0,    83,     0,   181,    84,
     172,     0,     0,     0,    85,   182,   183,   184,    86,     0,
     185,     0,   186,   187,   173,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
       0,   174,   175,    90,     0,   188,   189,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   176,   452,     0,
      93,     0,     0,   177,     0,   178,     0,   179,    94,    95,
     180,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   390,     0,   181,     0,     0,     0,     0,     0,
       0,   182,   183,   184,     0,     0,   185,     0,   186,   187,
       0,    55,   167,   168,   169,   170,     0,     0,   171,    82,
       0,    83,     0,     0,    84,   172,     0,     0,     0,    85,
       0,   188,   189,    86,     0,     0,     0,     0,     0,   173,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,     0,   174,   175,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,    92,   176,     0,     0,    93,     0,     0,   177,     0,
     178,     0,   179,    94,    95,   180,     0,    96,     0,     0,
     283,     0,     0,     0,     0,     0,     0,    55,   167,   168,
     169,   170,     0,     0,   171,    82,     0,    83,     0,   181,
      84,   172,     0,     0,     0,    85,   182,   183,   184,    86,
       0,   185,     0,   186,   187,   173,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,     0,   174,   175,    90,     0,   188,   189,     0,     0,
       0,     0,     0,     0,     0,    91,     0,    92,   176,     0,
       0,    93,     0,     0,   177,     0,   178,     0,   179,    94,
      95,   180,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   494,     0,     0,     0,
       0,     0,   182,   183,   184,     0,     0,   185,     0,   186,
     187,     0,    55,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,     0,    84,   172,     0,     0,     0,
      85,     0,   188,   189,    86,     0,     0,     0,     0,     0,
     173,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,     0,     0,    93,     0,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,   276,     0,     0,     0,     0,     0,     0,    55,   167,
     168,   169,   170,     0,     0,   171,    82,     0,    83,     0,
     181,    84,   172,     0,     0,     0,    85,   182,   183,   184,
      86,     0,   185,     0,   186,   187,   173,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,     0,   615,
       0,    89,  -327,   174,   175,    90,     0,   188,   189,     0,
    -327,     0,  -327,     0,     0,  -327,    91,     0,    92,   176,
    -327,     0,    93,     0,  -327,   177,     0,   178,     0,   179,
      94,    95,   180,  -327,    96,     0,     0,     0,     0,     0,
    -327,     0,     0,     0,     0,  -327,     0,     0,     0,  -327,
       0,  -327,     0,  -327,     0,     0,   181,     0,  -327,     0,
    -327,     0,  -327,   182,   183,   184,  -327,     0,   185,     0,
     186,   187,     0,     0,  -327,  -327,     0,     0,  -327,    59,
       0,  -327,   465,     0,     0,     0,     0,     0,     0,     0,
      82,     0,    83,   188,   189,    84,  -589,    60,   466,     0,
      85,  -418,    61,     0,    86,     0,    62,   467,   468,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   469,     0,
      88,    63,     0,     0,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,     0,     0,     0,    93,    64,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
       0,   470,    55,   167,   168,   169,   170,     0,     0,   171,
      82,     0,    83,     0,     0,    84,   172,     0,     0,     0,
      85,     0,     0,     0,    86,     0,   560,     0,     0,     0,
     173,     0,     0,    87,     0,   533,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,     0,   174,   175,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   176,     0,     0,    93,   561,     0,   177,
       0,   178,     0,   179,    94,    95,   180,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   562,   563,
     181,     0,     0,   564,   565,   566,   567,   568,   569,   570,
     571,   572,     0,   573,   186,   187,     0,     0,     0,     0,
       0,     0,     0,   574,   575,     0,     0,   576,   577,   578,
     579,     0,   624,   580,   581,  -327,     0,     0,     0,     0,
       0,     0,     0,  -327,     0,  -327,     0,     0,  -327,     0,
       0,     0,     0,  -327,     0,     0,     0,  -327,     0,     0,
       0,  -323,     0,     0,     0,     0,  -327,     0,     0,     0,
      33,     0,     0,  -327,     0,     0,     0,     0,  -327,     0,
       0,     0,  -327,     0,  -327,     0,  -327,     0,     0,     0,
       0,  -327,    34,  -327,     0,  -327,     0,     0,     0,  -327,
       0,     0,     0,     0,     0,    35,     0,  -327,  -327,    36,
      37,  -327,     0,     0,  -327,    38,     0,    39,    40,    41,
      42,     0,     0,     0,    43,     0,     0,     0,    44,  -589,
       0,     0,     0,    59,  -418,     0,   465,     0,     0,     0,
      45,     0,     0,    46,    82,    47,    83,     0,     0,    84,
       0,    60,   466,     0,    85,     0,    61,     0,    86,     0,
      62,   467,   468,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   469,     0,    88,    63,     0,     0,     0,    89,
      55,     0,     0,    90,     0,     0,     0,     0,    82,     0,
      83,     0,     0,    84,    91,     0,    92,     0,    85,     0,
      93,    64,    86,     0,     0,   511,     0,     0,    94,    95,
       0,    87,    96,     0,     0,   470,     0,     0,    88,     0,
       0,     0,     0,    89,    55,     0,     0,    90,     0,     0,
       0,     0,    82,     0,    83,     0,     0,    84,    91,     0,
      92,     0,    85,     0,    93,     0,    86,     0,     0,     0,
       0,     0,    94,    95,     0,    87,    96,     0,     0,   512,
       0,     0,    88,     0,     0,     0,     0,    89,    55,     0,
       0,    90,     0,     0,     0,     0,    82,     0,    83,     0,
       0,    84,    91,     0,    92,     0,    85,     0,    93,     0,
      86,     0,     0,     0,     0,     0,    94,    95,     0,    87,
      96,     0,     0,   276,     0,     0,    88,     0,     0,     0,
       0,    89,     0,    33,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,    92,     0,
       0,     0,    93,     0,     0,    34,     0,     0,     0,     0,
      94,    95,    33,     0,    96,     0,     0,   393,    35,     0,
       0,     0,    36,    37,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    34,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    37,    45,     0,     0,    46,    38,    47,    39,
      40,    41,    42,     0,     0,     0,    43,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    46,     0,    47
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-819)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    76,   348,    61,   101,   341,   607,   525,   669,   726,
     727,   108,   109,   279,   158,     3,    15,   351,   349,   349,
     181,   786,   787,   841,   762,   516,   136,    15,    29,   139,
     548,    61,   253,   284,   285,    36,   273,     3,    16,     4,
      11,     4,    10,     1,   473,   108,    98,    81,   118,     4,
       4,   103,   388,     4,     4,    33,   390,   120,   133,     4,
      61,   136,   299,     4,   139,     4,     3,   142,   138,     4,
     153,     4,     1,   734,    98,    76,   159,    45,     4,     4,
      98,   139,     4,    41,     3,     4,    98,    52,     4,     3,
     108,     4,   809,   858,   859,     4,     1,     4,     4,   111,
      71,    51,     0,   340,   745,   593,    71,     1,    71,     1,
     108,     1,     1,     4,   852,   102,   174,    71,    68,   760,
       4,   265,     1,   181,   111,   269,     1,   108,     1,     1,
       1,    98,   133,     1,     1,   136,   104,   105,   139,     1,
       1,   142,   960,   860,   174,   111,   111,   748,   369,   887,
     638,   181,   389,   144,   405,   893,   111,   111,   268,   147,
     111,   322,   323,   654,   152,   983,   111,   135,   136,   252,
     158,   108,   111,   174,   111,   250,   111,   106,   111,    98,
     181,   669,   279,   102,     1,   111,   111,   270,   271,   111,
     181,   288,   111,   268,   108,   111,     1,   111,   111,     1,
       1,   106,   111,   537,   111,   111,   635,    97,   973,   974,
       1,     1,   106,   103,   106,     1,   106,   106,    97,   648,
     649,   650,   280,   281,   103,   559,    97,   106,   372,    97,
      97,   106,   103,   106,   106,   106,   103,   236,   106,   106,
       1,     1,     4,     1,   106,   106,   734,   269,   236,   250,
     280,   281,   583,   583,   269,   269,     0,   745,   975,   590,
     590,     1,   750,   251,   102,     4,   269,   268,   326,   327,
     108,   583,   790,   269,   605,   605,     3,   265,   590,   280,
     281,   269,   273,   269,   275,     4,   344,   269,   346,   106,
     269,   282,    97,   605,     3,    97,   326,   327,   103,     4,
     100,   106,   109,   110,   106,   106,   106,   365,   299,    98,
      15,    97,   303,   103,   344,   106,   346,   103,    23,   108,
     106,   139,   140,   141,    97,   326,   327,   318,   103,   595,
     991,   638,   100,   106,   102,   365,   111,    99,    97,   514,
     108,   102,     4,   344,   103,   346,   106,   338,   106,   340,
     372,   100,   120,   102,    98,   784,   102,   372,   372,   350,
     351,   962,   102,   792,   365,   111,   354,   885,   886,   372,
     358,    98,   801,   719,   803,   102,   372,   806,   102,   808,
       4,   810,   811,   558,   372,   107,   372,   111,   719,   719,
     372,   100,   103,   372,   452,   103,   100,    15,   389,   390,
     111,   100,   106,   111,   462,    23,   894,   106,   466,   467,
      98,   100,   587,   101,   902,   844,   845,     1,   476,   410,
     411,   909,   452,   911,   912,   100,    98,   602,   603,    97,
     102,   106,   462,   129,   130,   103,   466,   467,   535,    98,
     928,   111,   101,   750,    61,    53,   476,    55,   936,     3,
       1,   452,    60,   511,    98,   943,    97,   101,    99,   517,
     518,   462,   111,   112,   113,   466,   467,   458,    19,   470,
     471,   959,    97,    24,    99,   476,   111,    28,   641,   967,
     643,   511,    98,   646,     4,   101,    98,   517,   518,   101,
     919,   920,    43,   328,   329,   330,   331,    98,   986,   596,
     101,    98,    98,   991,   101,   101,    98,   133,   134,   101,
     511,   999,   503,    93,    94,   516,   517,   518,    69,   107,
      98,   593,   106,   101,    98,   593,    98,   101,    98,   101,
      98,   101,    97,   101,    99,   593,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   102,   537,   131,   132,   111,
     112,   113,   107,   108,   545,   613,   614,   174,   107,   100,
     618,   102,   107,   593,   993,   994,   638,    97,   559,    99,
     638,    97,    97,    99,    99,    97,   107,    99,   636,    93,
      94,   917,   918,   613,   614,    97,     1,    99,   618,   100,
     106,   102,   593,    95,    96,   902,   102,   669,   324,   325,
     697,   669,   909,   591,   911,   912,   636,   332,   333,   952,
     953,   669,   613,   614,   868,   869,   607,   618,   100,   100,
      97,   928,   100,    97,   100,     1,   114,   102,   108,   936,
     102,   102,   102,   102,    97,   636,   943,    29,   626,   669,
     108,   103,   630,   631,   182,   183,   184,   185,   186,   187,
     188,   189,   119,   137,   645,   115,   647,   101,   103,    97,
      97,   120,   734,   280,   281,   120,   734,     4,   669,    61,
     101,    97,   101,   745,     4,    98,   734,   745,   750,   986,
       4,   103,   750,     4,   742,     4,     4,   745,   746,    49,
     593,   101,   999,   120,    86,    87,    88,    89,    90,    91,
      92,   101,   760,    97,   734,   103,   103,   103,   103,   326,
     327,    52,   742,   103,   103,   745,   746,   103,    52,   107,
     708,   103,   101,    97,   102,   713,   103,   344,   593,   346,
     760,    98,   102,   734,    98,   638,     4,   100,   103,   120,
     102,   742,    98,   102,   745,   746,     4,   102,   365,   100,
     102,   101,   100,    99,     4,   100,   100,   748,   101,   760,
     751,   752,   120,   103,   755,   103,   669,   103,   103,   760,
     102,   762,   101,   638,   102,   100,   102,    94,    27,   101,
     103,   319,   320,   321,   322,   323,   324,   325,   103,   103,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     107,   339,   106,   106,   669,   106,   106,   101,   796,   797,
      93,    85,    97,   101,   101,    97,    97,   103,    95,   103,
     878,   593,   894,   102,    96,   103,   894,   103,   103,   904,
     902,   734,   103,   100,   902,   452,   102,   909,   102,   911,
     912,   909,   745,   911,   912,   462,   904,   750,   878,   466,
     467,   120,   100,     1,     4,     4,   928,   103,    94,   476,
     928,   852,     1,    93,   936,   403,   638,   101,   936,   734,
     103,   943,   103,   130,   103,   943,   101,   878,   174,   107,
     745,   103,   103,   107,   174,   750,   596,   959,   411,   404,
     501,   959,   399,   334,   511,   967,   887,   669,   337,   967,
     517,   518,   893,   904,   336,   335,   339,   967,   585,   967,
     738,   609,   965,   967,   986,   959,   647,   894,   986,   991,
     941,   927,   846,   991,   593,   913,   914,   999,   916,   846,
     121,   999,   471,   991,     4,   926,   147,   967,    49,   348,
     626,   349,   811,   630,   935,   797,   631,   372,   796,   265,
     354,   358,   490,    24,   492,   493,   494,   916,   142,   164,
     930,   991,   734,    -1,    -1,    -1,   967,   106,    -1,   638,
      -1,   962,    -1,   745,    -1,    -1,    -1,    -1,   750,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     991,   894,   131,   132,    -1,    14,   613,   614,    17,   902,
     669,   618,    -1,    -1,   542,    -1,   909,    -1,   911,   912,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   636,
      -1,   131,   132,    42,    -1,   928,    -1,    -1,    47,   894,
      -1,    -1,    -1,   936,    -1,    -1,    -1,   902,    -1,    -1,
     943,    -1,    -1,    62,   909,    64,   911,   912,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   593,   959,    76,    77,    -1,
      -1,    80,    -1,   928,   967,   734,    -1,    -1,    -1,    -1,
      -1,   936,    -1,    -1,    -1,    -1,   745,    -1,   943,    -1,
      -1,   750,    -1,   986,    -1,    -1,    -1,    -1,   991,    -1,
      -1,    -1,    -1,    -1,   959,    -1,   999,    -1,    -1,    -1,
     638,    -1,   967,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   986,   894,    -1,    -1,   742,   991,    -1,    -1,   746,
     902,   669,    -1,    -1,   999,    -1,    -1,   909,    -1,   911,
     912,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,   928,     1,   106,    -1,
     108,    -1,    -1,    -1,   936,    -1,    -1,    -1,    -1,    -1,
      -1,   943,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     1,    -1,   131,   132,    -1,    -1,   959,    -1,    -1,
      -1,   139,   140,   141,    -1,   967,   734,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   745,    -1,    -1,
      -1,    -1,   750,     1,   986,    -1,    -1,    -1,    -1,   991,
      -1,    -1,    -1,    -1,    -1,   894,    -1,   999,    -1,    -1,
      -1,    -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,
     909,    -1,   911,   912,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,   928,
      -1,   878,   106,    -1,   108,    -1,    -1,   936,    -1,    -1,
      -1,    -1,    -1,    -1,   943,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   106,   131,   132,    -1,
     959,    -1,    -1,    -1,    -1,   139,   140,   141,   967,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,   131,   132,    -1,    -1,    -1,    -1,   986,   106,   139,
     140,   141,   991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     999,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,    -1,    -1,   894,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,
      -1,   909,    -1,   911,   912,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     928,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   936,    -1,
      -1,    -1,    -1,    -1,    -1,   943,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      -1,   959,    17,    18,    -1,    20,    21,    22,    -1,   967,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,   986,    -1,
      -1,    46,    47,   991,    49,    50,    51,    -1,    -1,    -1,
      -1,   999,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,
      -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
      -1,   116,   117,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,   139,   140,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,     4,    49,    50,    51,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,    65,
      22,    -1,    68,    -1,    26,    71,    -1,    73,    -1,    75,
      76,    77,    78,    35,    80,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      62,    -1,    64,   109,   110,   111,    68,    -1,   114,    -1,
     116,   117,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,   139,   140,    11,    12,    13,    14,    15,
      -1,    17,    18,    -1,    20,    21,    22,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,    -1,
     116,   117,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      20,    21,    22,   139,   140,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    -1,    21,    22,   139,
     140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
     139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,   102,    17,
      18,    -1,    -1,    -1,    22,   109,   110,   111,    26,    -1,
     114,    -1,   116,   117,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,    -1,    -1,    -1,    -1,    -1,
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
      47,    -1,    49,    50,    51,    -1,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,     1,
      -1,    47,     4,    49,    50,    51,    -1,   139,   140,    -1,
      12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,    65,
      22,    -1,    68,    -1,    26,    71,    -1,    73,    -1,    75,
      76,    77,    78,    35,    80,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    53,    -1,    55,    -1,    -1,   102,    -1,    60,    -1,
      62,    -1,    64,   109,   110,   111,    68,    -1,   114,    -1,
     116,   117,    -1,    -1,    76,    77,    -1,    -1,    80,     1,
      -1,    83,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,   139,   140,    17,    98,    19,    20,    -1,
      22,   103,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    32,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,   117,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    73,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     102,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    -1,   119,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,     1,   139,   140,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
       9,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    60,    31,    62,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    76,    77,    48,
      49,    80,    -1,    -1,    83,    54,    -1,    56,    57,    58,
      59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    98,
      -1,    -1,    -1,     1,   103,    -1,     4,    -1,    -1,    -1,
      79,    -1,    -1,    82,    12,    84,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,
       4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,
      68,    69,    26,    -1,    -1,    29,    -1,    -1,    76,    77,
      -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,
      64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,    83,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    -1,    22,    -1,    68,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    35,
      80,    -1,    -1,    83,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,     9,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      76,    77,     9,    -1,    80,    -1,    -1,    83,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    31,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    79,    -1,    -1,    82,    54,    84,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   276,   277,   286,   287,   288,   289,     4,   146,
     283,   284,     0,   278,   280,   290,   291,   292,   296,   349,
     359,   376,   383,   384,   385,   386,   395,   287,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   293,   294,
     295,   278,   291,   386,    98,     4,   283,   108,   283,     1,
      19,    24,    28,    43,    69,   401,   295,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   387,   388,   389,     1,
     106,   281,    12,    14,    17,    22,    26,    35,    42,    47,
      51,    62,    64,    68,    76,    77,    80,    83,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   283,
     315,     4,     4,     4,     4,   147,   283,   390,   391,   393,
     107,   100,   285,   111,   111,     3,   159,   159,   159,     4,
     107,   377,   378,   107,   361,   362,   107,   350,   351,   107,
     299,   300,    97,    99,   102,   392,   394,   277,   106,   282,
     102,   153,   100,   379,   147,   301,   360,   301,   100,   352,
     155,   301,   297,   298,    99,   391,   396,     5,     6,     7,
       8,    11,    18,    32,    49,    50,    65,    71,    73,    75,
      78,   102,   109,   110,   111,   114,   116,   117,   139,   140,
     144,   145,   151,   155,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   208,   283,   279,   290,   278,   314,   316,
     317,   318,   319,   320,   322,   278,   380,   381,   382,   282,
      97,   100,   363,   278,   292,   306,   307,   308,   309,   323,
     330,   334,   337,   342,   353,   354,   355,   282,    97,   100,
     302,     1,   396,    98,   108,   102,    83,   148,   149,   157,
     102,   102,   102,    83,   151,   155,   195,   208,   283,   190,
     190,   190,   190,   190,   190,   190,   190,   108,   108,    98,
     108,   102,   103,    97,   139,   140,   141,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   132,   207,   111,
     112,   113,   109,   110,   129,   130,    10,    45,   104,   105,
     135,   136,   133,   134,   114,   119,   115,   137,   118,   138,
      98,   102,   101,    53,    55,    60,   321,   103,    97,    97,
     120,   120,     4,   101,    97,   147,   278,   364,   365,   366,
     367,   369,   371,   374,   282,   293,   101,   355,   301,   278,
     292,   303,   304,   305,   306,   307,   308,   323,   330,   334,
     337,   342,   346,   282,   282,   171,     4,   208,   102,    98,
     100,   356,   148,    83,   148,   208,   111,   159,   192,   193,
     194,   192,   192,   111,   103,   159,     4,     4,   171,     4,
      53,    60,   161,   162,   168,   208,   208,     4,   208,   190,
     190,   190,   190,   195,   195,   196,   196,   148,   148,   197,
     197,   197,   197,   198,   198,   199,   200,   201,   202,   208,
     203,   171,   168,   148,   148,     1,   106,   317,   318,   319,
     320,   322,    66,   208,   223,   224,   356,   223,   120,   101,
     382,    49,   368,   101,   366,     4,    20,    29,    30,    40,
      83,   148,   335,   338,   339,   341,   293,   101,   305,    99,
     103,   168,   171,   223,   357,   358,   103,   103,   103,   103,
     103,   194,   103,   103,   103,   187,   192,    99,   160,   208,
     160,    97,   103,   107,    99,   103,     4,     4,   148,   208,
     209,    29,    83,   148,   102,   148,   148,    52,    52,   283,
       4,    52,    71,   221,   222,   283,   284,   336,   399,   100,
     106,   213,   347,   117,   103,    99,   101,    97,   190,   190,
     190,   190,   103,   162,   208,    98,   148,     4,     4,    71,
     314,     4,   226,   227,   221,   283,   148,   148,   102,   120,
      32,    73,   104,   105,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   119,   129,   130,   133,   134,   135,   136,
     139,   140,   340,    98,     1,    97,   106,   102,   399,    71,
      98,   100,     1,   214,     4,   158,   159,   101,   223,   190,
     208,     4,   102,   102,   399,    98,   103,   120,     1,    97,
     106,   106,   397,   102,   102,     1,   314,   223,   102,   316,
     319,   322,     4,   222,     1,   314,   100,   316,   278,   324,
     327,   328,   101,     4,    13,    18,    20,    21,    25,    34,
      36,    37,    38,    39,    46,    61,    70,    72,    74,    78,
      79,    81,    85,   106,   148,   151,   155,   167,   174,   175,
     177,   188,   189,   190,   206,   211,   212,   213,   215,   216,
     217,   218,   219,   220,   225,   228,   230,   231,   234,   241,
     242,   243,   246,   247,   255,   256,   257,   258,   259,   260,
     262,   263,   268,   269,   270,   271,   273,   283,   102,   179,
     356,   158,    99,   100,   106,   375,   314,   314,   100,   316,
     343,   209,   227,   100,   148,   148,   103,   103,   148,    97,
      99,   103,   103,   324,    99,    93,    94,   101,   278,   325,
     328,   278,   326,   327,   107,     1,   106,   213,   148,     1,
     106,   212,   102,     1,   102,   402,   402,     4,    15,    23,
     233,   402,   102,   208,   261,   402,   261,   213,   213,   213,
     102,     1,   102,   221,     1,   106,     1,   106,     1,   106,
       1,   106,     1,   106,     1,   106,     1,   106,   101,   211,
       1,   106,     1,   106,   103,   101,   103,   103,   278,   373,
      99,   107,   344,   345,   278,   331,   332,   333,     4,     4,
     106,   313,   106,   311,     4,   106,   312,   106,   310,   101,
     400,   400,   400,   211,   226,    85,   148,   167,   174,   175,
     177,   188,   189,   206,   220,   229,   248,   251,   254,   148,
       1,   106,   209,     1,   106,   212,   208,   210,   208,     1,
     106,   208,     1,   106,    16,    33,   264,   265,   267,   208,
     220,   272,   244,     1,   210,   213,   375,   375,    93,    94,
     101,   399,    11,    71,   106,   213,   348,    95,    96,   101,
     278,   333,   278,   332,   103,   103,   213,   213,    97,   103,
     213,   213,   400,   106,   213,   329,   329,   102,     4,   274,
     275,     1,   106,   404,    97,     4,     1,   106,    27,     1,
     103,   403,   103,   403,   102,   213,   213,   265,   267,   103,
     210,   103,   103,   375,   375,   400,   100,   102,   102,   398,
     398,   398,   148,   399,   399,   210,   120,    97,   103,   210,
     249,   252,   229,     1,    41,   405,   232,   212,   100,   235,
     147,   155,   212,     1,   212,   212,   278,   278,   370,   373,
     168,   168,   213,   213,     4,   103,   208,   275,   212,   404,
     208,   212,    15,    23,   236,   237,   238,   239,   240,     4,
     266,   266,   212,    94,    93,   101,   103,   103,   397,   397,
     103,     1,   106,   250,   253,   254,   403,   209,   107,   101,
     238,   216,   240,   103,   103,   245,   375,   375,   400,   403,
     212,   107,   213,   213,   372,   212
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
    {l.a("if_statement",2);SPL->closeASTscope();}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {SPL->closeASTscope(true);}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 768 "yacc.y"
    {l.a("if_statement",3);SPL->closeASTscope();}
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 771 "yacc.y"
    {SPL->addStatement(new If((Expression*)(yyvsp[(2) - (3)].r.node),Node::current));}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 775 "yacc.y"
    {l.a("switch_statement",2);}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 778 "yacc.y"
    {l.a("switch_block",1);}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 781 "yacc.y"
    {l.a("switch_sections_opt",0);}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 782 "yacc.y"
    {l.a("switch_sections_opt",1);}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 785 "yacc.y"
    {l.a("switch_sections",1);}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 786 "yacc.y"
    {l.a("switch_sections",2);}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 789 "yacc.y"
    {l.a("switch_section",2);}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 792 "yacc.y"
    {l.a("switch_labels",1);}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 793 "yacc.y"
    {l.a("switch_labels",2);}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 796 "yacc.y"
    {l.a("switch_label",1);}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 797 "yacc.y"
    {l.a("switch_label",0);}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 800 "yacc.y"
    {l.a("iteration_statement",1);(yyval.r.st) = (yyvsp[(1) - (1)].r.st);}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 801 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 802 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 803 "yacc.y"
    {l.a("iteration_statement",1);}
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 806 "yacc.y"
    {l.a("unsafe_statement",1);}
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 809 "yacc.y"
    {l.a("while_statement",2);}
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 810 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {yyclearin;}
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 811 "yacc.y"
    {l.a("while_statement",2,1);}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 814 "yacc.y"
    {l.a("do_statement",2);}
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 815 "yacc.y"
    { l.a("do_statement",2,1);}
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 819 "yacc.y"
    {l.a("for_statement",8);}
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 824 "yacc.y"
    {l.a("for_initializer_opt",0);}
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 825 "yacc.y"
    {l.a("for_initializer_opt",1);}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 828 "yacc.y"
    {l.a("for_condition_opt",0);}
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 829 "yacc.y"
    {l.a("for_condition_opt",1);}
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 832 "yacc.y"
    {l.a("for_iterator_opt",0);}
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 833 "yacc.y"
    {l.a("for_iterator_opt",1);}
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 836 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 837 "yacc.y"
    {l.a("for_initializer",1);}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 840 "yacc.y"
    {l.a("for_condition",1);}
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 843 "yacc.y"
    {l.a("for_iterator",1);}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 846 "yacc.y"
    {l.a("statement_expression_list",1);}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 847 "yacc.y"
    {l.a("statement_expression_list",2);}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 850 "yacc.y"
    {l.a("foreach_statement",7);}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 853 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 854 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 855 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 856 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 857 "yacc.y"
    {l.a("jump_statement",1);}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 860 "yacc.y"
    {l.a("break_statement",0);}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 861 "yacc.y"
    {l.a("break_statement",0,1);}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 864 "yacc.y"
    {l.a("continue_statement",0);}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 865 "yacc.y"
    {l.a("continue_statement",0,1);}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 868 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 869 "yacc.y"
    {l.a("goto_statement",1);}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 870 "yacc.y"
    {l.a("goto_statement",0);}
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 871 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 872 "yacc.y"
    {l.a("goto_statement",1,1);}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 873 "yacc.y"
    {l.a("goto_statement",0,1);}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 876 "yacc.y"
    {l.a("return_statement",1);}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 877 "yacc.y"
    {l.a("return_statement",1,1);}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 880 "yacc.y"
    {l.a("expression_opt",0);}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 881 "yacc.y"
    {l.a("expression_opt",1);}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 884 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 885 "yacc.y"
    {l.a("throw_statement",1);}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 888 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 889 "yacc.y"
    {l.a("try_statement",2);}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 890 "yacc.y"
    {l.a("try_statement",3);}
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 893 "yacc.y"
    {l.a("catch_clauses",1);}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 894 "yacc.y"
    {l.a("catch_clauses",2);}
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 897 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 898 "yacc.y"
    {l.a("catch_clause",3);}
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 902 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 903 "yacc.y"
    {l.a("identifier_opt",0);}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 906 "yacc.y"
    {l.a("finally_clause",1);}
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 909 "yacc.y"
    {l.a("checked_statement",1);}
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 912 "yacc.y"
    {l.a("unchecked_statement",1);}
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 915 "yacc.y"
    {l.a("lock_statement",2);}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 918 "yacc.y"
    {l.a("using_statement",2);}
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 921 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 922 "yacc.y"
    {l.a("resource_acquisition",1);}
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 926 "yacc.y"
    {l.a("fixed_statement",3);}
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 929 "yacc.y"
    {l.a("fixed_pointer_declarators",1);}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 930 "yacc.y"
    {l.a("fixed_pointer_declarators",2);}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 933 "yacc.y"
    {l.a("fixed_pointer_declarator",1);}
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 936 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 937 "yacc.y"
    {l.a("compilation_unit",2);}
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 940 "yacc.y"
    {l.a("using_directives_opt",0);}
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 941 "yacc.y"
    {l.a("using_directives_opt",1);}
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 944 "yacc.y"
    {l.a("attributes_opt",0);}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 945 "yacc.y"
    {l.a("attributes_opt",1);}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 948 "yacc.y"
    {l.a("namespace_member_declarations_opt",0);}
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 949 "yacc.y"
    {l.a("namespace_member_declarations_opt",1);}
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 952 "yacc.y"
    {SPL->addNamespace(*(yyvsp[(3) - (3)].r.base),(yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no));}
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 953 "yacc.y"
    {l.a("namespace_declaration",4);SPL->endScope();}
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 956 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 957 "yacc.y"
    {l.a("comma_opt",0);}
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 962 "yacc.y"
    {		l.a("qualified_identifier",0);
				(yyval.r.base) = new string((yyvsp[(1) - (1)].r.str));
		  }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 966 "yacc.y"
    {	l.a("qualified_identifier",1);
			(yyval.r.base) = new string(string(*(yyvsp[(1) - (2)].r.base)) + string((yyvsp[(2) - (2)].r.str)));
		}
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 972 "yacc.y"
    {l.a("qualifier",0);(yyval.r.base) = new string(string((yyvsp[(1) - (2)].r.str)) + ".");}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 973 "yacc.y"
    {l.a("qualifier",1);(yyval.r.base) = new string(*(yyvsp[(1) - (3)].r.base) + string((yyvsp[(2) - (3)].r.str)) + ".");}
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 977 "yacc.y"
    {l.a("namespace_body",2);}
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 980 "yacc.y"
    {l.a("using_directives",1);}
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 981 "yacc.y"
    {l.a("using_directives",2);}
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 984 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 985 "yacc.y"
    {l.a("using_directive",1);}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 988 "yacc.y"
    {l.a("using_alias_directive",1);}
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 989 "yacc.y"
    {l.a("using_alias_directive",1,1);}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 992 "yacc.y"
    {l.a("using_namespace_directive",1);  SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 993 "yacc.y"
    {l.a("using_namespace_directive",1,1);SPL->add_using(*(yyvsp[(2) - (3)].r.base),(yyvsp[(1) - (3)].r.line_no),(yyvsp[(1) - (3)].r.col_no));}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 996 "yacc.y"
    {l.a("namespace_member_declarations",1);}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 997 "yacc.y"
    {l.a("namespace_member_declarations",2);}
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 1000 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 1001 "yacc.y"
    {l.a("namespace_member_declaration",1);}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 1004 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 1005 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 1006 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 1007 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1008 "yacc.y"
    {l.a("type_declaration",1);}
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1020 "yacc.y"
    {		
		l.a("modifiers_opt",0);
		(yyval.r.modifiers) = new queue<string>();
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1025 "yacc.y"
    {	
		l.a("modifiers_opt",1);
		(yyval.r.modifiers) = (yyvsp[(1) - (1)].r.modifiers);
  }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1032 "yacc.y"
    {	
		l.a("modifiers",1);
		(yyval.r.modifiers) = new queue<string>();
		(yyval.r.modifiers)->push(*(yyvsp[(1) - (1)].r.modifier));
  }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1038 "yacc.y"
    {
		l.a("modifiers",2);
		(yyval.r.modifiers) = (yyvsp[(1) - (2)].r.modifiers);
		(yyval.r.modifiers)->push(*(yyvsp[(2) - (2)].r.modifier));
  }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1045 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("ABSTRACT"); }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1046 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("EXTERN");	  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1047 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("INTERNAL"); }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1048 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("NEW");      }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1049 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("OVERRIDE"); }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1050 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PRIVATE");  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1051 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PROTECTED");}
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1052 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("PUBLIC");   }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1053 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("READONLY"); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1054 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("SEALED");   }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1055 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("STATIC");   }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1056 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("UNSAFE");   }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1057 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VIRTUAL");  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1058 "yacc.y"
    {l.a("modifier",0);(yyval.r.modifier) = new string("VOLATILE"); }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1069 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1072 "yacc.y"
    {l.a("class_declaration",6);SPL->endScope();}
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1074 "yacc.y"
    {
		SPL->addClass(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1077 "yacc.y"
    {l.a("class_declaration",5);SPL->endScope();}
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1082 "yacc.y"
    {l.a("class_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1083 "yacc.y"
    {l.a("class_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1086 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = new queue<string>();(yyval.r.bases)->push(*(yyvsp[(2) - (2)].r.base));}
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1087 "yacc.y"
    {l.a("class_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1089 "yacc.y"
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

  case 384:
/* Line 1792 of yacc.c  */
#line 1101 "yacc.y"
    {
		l.a("interface_type_list",1);
		(yyval.r.bases) = new queue<string>();
		(yyval.r.bases)->push(*(yyvsp[(1) - (1)].r.base));
  }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1107 "yacc.y"
    {
		l.a("interface_type_list",2);
		(yyval.r.bases) = (yyvsp[(1) - (3)].r.bases);
		(yyval.r.bases)->push(*(yyvsp[(3) - (3)].r.base));
  }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1115 "yacc.y"
    {l.a("class_body",1);}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1119 "yacc.y"
    {l.a("class_member_declarations_opt",0);}
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1120 "yacc.y"
    {l.a("class_member_declarations_opt",1);}
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1123 "yacc.y"
    {l.a("class_member_declarations",1);}
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1124 "yacc.y"
    {l.a("class_member_declarations",2);}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1127 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1128 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1129 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1130 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1131 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1132 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1133 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1134 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1135 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1136 "yacc.y"
    {l.a("class_member_declaration",1);}
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1140 "yacc.y"
    {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));
		  }
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1145 "yacc.y"
    {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*(yyvsp[(2) - (6)].r.modifiers),string("CONST"),*(yyvsp[(4) - (6)].r.base),*(yyvsp[(5) - (6)].r.identifiers),(yyvsp[(5) - (6)].r.line_no),(yyvsp[(5) - (6)].r.col_no),(yyvsp[(4) - (6)].r.known_type));

		 }
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1153 "yacc.y"
    {
		        SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
  		      l.a("field_declaration",4);
	      }
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1158 "yacc.y"
    {
            l.a("field_declaration",4,1);
	          SPL->addField(*(yyvsp[(2) - (5)].r.modifiers),*(yyvsp[(3) - (5)].r.base),*(yyvsp[(4) - (5)].r.identifiers),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no),(yyvsp[(3) - (5)].r.known_type));
        }
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1165 "yacc.y"
    {l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1170 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
      }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 1177 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(yyvsp[(6) - (7)].r.types_ids),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
      }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 1183 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),*(yyvsp[(3) - (7)].r.base),string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),(yyvsp[(3) - (7)].r.known_type),1);
         }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 1189 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (7)].r.modifiers),"VOID",string(*(yyvsp[(4) - (7)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (7)].r.line_no),(yyvsp[(4) - (7)].r.col_no),1,1);
         }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 1199 "yacc.y"
    {    l.a("method_header",5); 
          SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
      }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 1203 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
      }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1207 "yacc.y"
    {    l.a("method_header",5); 
               SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string(*(yyvsp[(4) - (8)].r.base)),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
         }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 1211 "yacc.y"
    {   l.a("method_header",4);
        	SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string(*(yyvsp[(4) - (8)].r.base)),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
         }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1218 "yacc.y"
    {	   l.a("formal_parameter_list_opt",0);
               (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1222 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1226 "yacc.y"
    {   l.a("formal_parameter_list_opt",1);
            (yyval.r.types_ids) = (yyvsp[(1) - (1)].r.types_ids) ;
        }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1230 "yacc.y"
    {   l.a("formal_parameter_list_opt",2);
            //merge queues
            (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!((yyvsp[(1) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(1) - (3)].r.types_ids))->front()); ((yyvsp[(1) - (3)].r.types_ids))->pop();}
            while(!((yyvsp[(3) - (3)].r.types_ids))->empty()) {((yyval.r.types_ids))->push(((yyvsp[(3) - (3)].r.types_ids))->front()); ((yyvsp[(3) - (3)].r.types_ids))->pop();}
        }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1238 "yacc.y"
    {l.a("return_type",1);}
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1239 "yacc.y"
    {l.a("return_type",0);}
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1252 "yacc.y"
    {   l.a("formal_parameter_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1257 "yacc.y"
    {   l.a("formal_parameter_list",2);
      		(yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
      }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 1264 "yacc.y"
    {   l.a("formal_parameter_default_list",1);
          (yyval.r.types_ids) = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(1) - (1)].r.base) ,*(yyvsp[(1) - (1)].r.identifier)),make_pair((yyvsp[(1) - (1)].r.line_no),(yyvsp[(1) - (1)].r.col_no))),(yyvsp[(1) - (1)].r.known_type)));
      }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 1269 "yacc.y"
    {  l.a("formal_parameter_default_list",2);
          (yyval.r.types_ids) = (yyvsp[(1) - (3)].r.types_ids);
		      (yyval.r.types_ids)->push(make_pair(make_pair(make_pair(*(yyvsp[(3) - (3)].r.base) ,*(yyvsp[(3) - (3)].r.identifier)),make_pair((yyvsp[(3) - (3)].r.line_no),(yyvsp[(3) - (3)].r.col_no))),(yyvsp[(3) - (3)].r.known_type))); 
       }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 1276 "yacc.y"
    {	l.a("formal_parameter",1); 
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 1284 "yacc.y"
    { l.a("formal_parameter",1);
        (yyval.r.base) = (yyvsp[(1) - (1)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (1)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (1)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (1)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (1)].r.known_type);
      }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 1294 "yacc.y"
    { l.a("fixed_parameter",3);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));  
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no); 
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 1305 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base) ;
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 1313 "yacc.y"
    { l.a("formal_parameter_default",2);
        (yyval.r.base) = (yyvsp[(1) - (3)].r.base);
        (yyval.r.identifier) = (yyvsp[(1) - (3)].r.identifier);
        (yyval.r.line_no) = (yyvsp[(1) - (3)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(1) - (3)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(1) - (3)].r.known_type);
      }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 1323 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 1324 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 1325 "yacc.y"
    {l.a("parameter_modifier_opt",0);}
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 1329 "yacc.y"
    { l.a("parameter_array",2);
        (yyval.r.base) = (yyvsp[(3) - (4)].r.base);
        (yyval.r.identifier) = new string ((yyvsp[(4) - (4)].r.str));
        (yyval.r.line_no) = (yyvsp[(4) - (4)].r.line_no);
        (yyval.r.col_no) = (yyvsp[(4) - (4)].r.col_no);
        (yyval.r.known_type) = (yyvsp[(3) - (4)].r.known_type);
      }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1342 "yacc.y"
    {l.a("property_declaration",7);}
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 1345 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 1346 "yacc.y"
    {l.a("accessor_declarations",2);}
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 1349 "yacc.y"
    {l.a("set_accessor_declaration_opt",0);}
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 1350 "yacc.y"
    {l.a("set_accessor_declaration_opt",1);}
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 1353 "yacc.y"
    {l.a("get_accessor_declaration_opt",0);}
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1354 "yacc.y"
    {l.a("get_accessor_declaration_opt",1);}
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1360 "yacc.y"
    {l.a("get_accessor_declaration",4);}
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1366 "yacc.y"
    {l.a("set_accessor_declaration",4);}
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1369 "yacc.y"
    {l.a("accessor_body",1);}
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1370 "yacc.y"
    {l.a("accessor_body",0);}
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1373 "yacc.y"
    {l.a("event_declaration",4);}
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1377 "yacc.y"
    {l.a("event_declaration",7);}
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1380 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1381 "yacc.y"
    {l.a("event_accessor_declarations",2);}
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1387 "yacc.y"
    {l.a("add_accessor_declaration",4);}
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1393 "yacc.y"
    {l.a("remove_accessor_declaration",4);}
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1399 "yacc.y"
    {l.a("indexer_declaration",6);}
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1402 "yacc.y"
    {l.a("indexer_declarator",2);}
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1404 "yacc.y"
    {l.a("indexer_declarator",3);}
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1407 "yacc.y"
    {l.a("qualified_this",1);}
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1411 "yacc.y"
    {l.a("operator_declaration",4);}
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1414 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1415 "yacc.y"
    {l.a("operator_declarator",2);}
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1418 "yacc.y"
    {l.a("overloadable_operator_declarator",3);}
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1419 "yacc.y"
    {l.a("overloadable_operator_declarator",4);}
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1422 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1423 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1424 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1425 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1426 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1427 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1428 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1429 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1430 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1431 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1432 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1433 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1434 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1435 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1436 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1437 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1438 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 1439 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 1440 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 1441 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 1442 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 1443 "yacc.y"
    {l.a("overloadable_operator",0);}
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 1446 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 1447 "yacc.y"
    {l.a("conversion_operator_declarator",2);}
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1451 "yacc.y"
    {
  SPL->addMethod(*(yyvsp[(2) - (6)].r.modifiers),"",string((yyvsp[(3) - (6)].r.str)),*(yyvsp[(5) - (6)].r.types_ids),(yyvsp[(3) - (6)].r.line_no),(yyvsp[(3) - (6)].r.col_no),1,1);
  }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1454 "yacc.y"
    {l.a("constructor_declaration",4);SPL->endScope();}
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 1457 "yacc.y"
    {l.a("constructor_initializer_opt",0);}
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 1458 "yacc.y"
    {l.a("constructor_initializer_opt",1);}
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1461 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1462 "yacc.y"
    {l.a("constructor_initializer",1);}
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1478 "yacc.y"
    {l.a("destructor_declaration",3);}
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1481 "yacc.y"
    {l.a("operator_body",1);}
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1482 "yacc.y"
    {l.a("operator_body",0);}
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1485 "yacc.y"
    {l.a("constructor_body",1);}
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1486 "yacc.y"
    {l.a("constructor_body",0);}
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1491 "yacc.y"
    {l.a("struct_declaration",5);}
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1494 "yacc.y"
    {l.a("struct_interfaces_opt",0);}
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1495 "yacc.y"
    {l.a("struct_interfaces_opt",1);}
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1498 "yacc.y"
    {l.a("struct_interfaces",1);}
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1501 "yacc.y"
    {l.a("struct_body",1);}
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1504 "yacc.y"
    {l.a("struct_member_declarations_opt",0);}
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1505 "yacc.y"
    {l.a("struct_member_declarations_opt",1);}
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 1508 "yacc.y"
    {l.a("struct_member_declarations",1);}
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1509 "yacc.y"
    {l.a("struct_member_declarations",2);}
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1512 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1513 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1514 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1515 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1516 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1517 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1518 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1519 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1521 "yacc.y"
    {l.a("struct_member_declaration",1);}
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1526 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 1527 "yacc.y"
    {l.a("array_initializer",1);}
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 1530 "yacc.y"
    {l.a("variable_initializer_list_opt",0);}
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 1531 "yacc.y"
    {l.a("variable_initializer_list_opt",1);}
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 1534 "yacc.y"
    {l.a("variable_initializer_list",1);}
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 1535 "yacc.y"
    {l.a("variable_initializer_list",2);}
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 1541 "yacc.y"
    {
		SPL->addInterface(*(yyvsp[(2) - (5)].r.modifiers),string((yyvsp[(4) - (5)].r.str)),*(yyvsp[(5) - (5)].r.bases),(yyvsp[(4) - (5)].r.line_no),(yyvsp[(4) - (5)].r.col_no));		
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 1544 "yacc.y"
    {l.a("interface_declaration",5);SPL->endScope();}
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 1548 "yacc.y"
    {l.a("interface_base_opt",0);(yyval.r.bases) = new queue<string>();}
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 1549 "yacc.y"
    {l.a("interface_base_opt",1);(yyval.r.bases) = (yyvsp[(1) - (1)].r.bases);}
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 1552 "yacc.y"
    {l.a("interface_base",1);(yyval.r.bases) = (yyvsp[(2) - (2)].r.bases);}
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 1555 "yacc.y"
    {l.a("interface_body",1);}
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 1558 "yacc.y"
    {l.a("interface_member_declarations_opt",0);}
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 1559 "yacc.y"
    {l.a("interface_member_declarations_opt",1);}
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 1562 "yacc.y"
    {l.a("interface_member_declarations",1);}
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 1563 "yacc.y"
    {l.a("interface_member_declarations",2);}
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 1566 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 1567 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 1568 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 1569 "yacc.y"
    {l.a("interface_member_declaration",1);}
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 1574 "yacc.y"
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),*(yyvsp[(3) - (8)].r.base),string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),(yyvsp[(3) - (8)].r.known_type),0);
	 SPL->endScope();
    }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 1580 "yacc.y"
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*(yyvsp[(2) - (8)].r.modifiers),"VOID",string((yyvsp[(4) - (8)].r.str)),*(yyvsp[(6) - (8)].r.types_ids),(yyvsp[(4) - (8)].r.line_no),(yyvsp[(4) - (8)].r.col_no),1,0);
	  SPL->endScope();
    }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 1587 "yacc.y"
    {l.a("new_opt",0); (yyval.r.modifiers) = new queue<string>();}
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 1588 "yacc.y"
    {l.a("new_opt",0);(yyval.r.modifiers) = new queue<string>() ; (yyval.r.modifiers)->push("NEW");}
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 1594 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 1594 "yacc.y"
    {l.a("interface_property_declaration",1);}
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 1601 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 1601 "yacc.y"
    {l.a("interface_indexer_declaration",7);}
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 1605 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 1606 "yacc.y"
    {l.a("interface_accessors",2);}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 1607 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 1608 "yacc.y"
    {l.a("interface_accessors",4);}
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 1611 "yacc.y"
    {l.a("interface_event_declaration",4);}
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 1616 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 1617 "yacc.y"
    {l.a("interface_empty_body",0);}
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 1622 "yacc.y"
    {l.a("enum_declaration",5);}
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 1625 "yacc.y"
    {l.a("enum_base_opt",0);}
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 1626 "yacc.y"
    {l.a("enum_base_opt",1);}
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 1629 "yacc.y"
    {l.a("enum_base",1);}
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 1632 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 1633 "yacc.y"
    {l.a("enum_body",1);}
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 1636 "yacc.y"
    {l.a("enum_member_declarations_opt",0);}
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 1637 "yacc.y"
    {l.a("enum_member_declarations_opt",1);}
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 1640 "yacc.y"
    {l.a("enum_member_declarations",1);}
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 1641 "yacc.y"
    {l.a("enum_member_declarations",2);}
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 1644 "yacc.y"
    {l.a("enum_member_declaration",1);}
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 1645 "yacc.y"
    {l.a("enum_member_declaration",2);}
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 1650 "yacc.y"
    {l.a("enum_member_declaration",4);}
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 1651 "yacc.y"
    {l.a("enum_member_declaration",4,1);}
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 1656 "yacc.y"
    {l.a("attributes",1);}
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 1659 "yacc.y"
    {l.a("attribute_sections",1);}
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 1660 "yacc.y"
    {l.a("attribute_sections",2);}
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 1663 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 1664 "yacc.y"
    {l.a("attribute_section",4);}
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 1667 "yacc.y"
    {l.a("attribute_target_specifier_opt",0);}
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 1668 "yacc.y"
    {l.a("attribute_target_specifier_opt",1);}
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 1671 "yacc.y"
    {l.a("attribute_target_specifier",1);}
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 1674 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 1675 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 1676 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 1677 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 1678 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 1679 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 1680 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 1681 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 1682 "yacc.y"
    {l.a("attribute_target",1);}
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 1685 "yacc.y"
    {l.a("attribute_list",1);}
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 1686 "yacc.y"
    {l.a("attribute_list",2);}
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 1689 "yacc.y"
    {l.a("attribute",2);}
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 1692 "yacc.y"
    {l.a("attribute_arguments_opt",0);}
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 1693 "yacc.y"
    {l.a("attribute_arguments_opt",1);}
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 1696 "yacc.y"
    {l.a("attribute_name",1);}
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 1699 "yacc.y"
    {l.a("attribute_arguments",1);}
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 1706 "yacc.y"
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 1709 "yacc.y"
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 1712 "yacc.y"
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 1715 "yacc.y"
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 1718 "yacc.y"
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 1721 "yacc.y"
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 1729 "yacc.y"
    {l.a("CLASS",0);}
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 1730 "yacc.y"
    {l.a("CLASS",0,1);yyclearin;}
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 1733 "yacc.y"
    {l.a("left_bracket_circle",0);}
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 1734 "yacc.y"
    {l.a("left_bracket_circle",0,1);yyclearin;}
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 1737 "yacc.y"
    {l.a("right_bracket_circle",0);}
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 1738 "yacc.y"
    {l.a("right_bracket_circle",0,1);yyclearin;}
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 1741 "yacc.y"
    { l.a("semicolon",0);}
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 1742 "yacc.y"
    { l.a("semicolon",0,1);}
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 1745 "yacc.y"
    {l.a("in",0);}
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 1746 "yacc.y"
    {l.a("in",0,1);}
    break;


/* Line 1792 of yacc.c  */
#line 6972 "yacc.tab.cpp"
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
#line 1751 "yacc.y"


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




