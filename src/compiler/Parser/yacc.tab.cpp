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
    THEN = 397,
    POST1 = 398,
    POST2 = 399
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
	

#line 287 "yacc.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 304 "yacc.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   3364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  627
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   110,   111,   112,   113,   114,   117,   118,
     124,   133,   134,   143,   144,   145,   148,   149,   152,   153,
     154,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     168,   169,   172,   173,   176,   177,   178,   181,   182,   183,
     186,   187,   190,   194,   198,   199,   202,   203,   204,   207,
     208,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   225,   228,   229,   230,   233,   234,   237,
     238,   241,   242,   245,   246,   249,   250,   253,   256,   257,
     260,   263,   266,   269,   270,   274,   275,   276,   279,   280,
     283,   284,   285,   288,   291,   294,   297,   300,   301,   304,
     305,   306,   307,   308,   311,   312,   313,   314,   317,   320,
     323,   324,   325,   326,   327,   328,   329,   337,   338,   339,
     340,   341,   342,   345,   346,   349,   350,   353,   354,   357,
     358,   359,   360,   363,   364,   365,   368,   369,   370,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   384,   385,
     386,   389,   390,   393,   394,   397,   398,   401,   402,   405,
     406,   409,   410,   413,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   429,   430,   433,   436,   440,
     441,   442,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   460,   461,   464,   465,   469,
     470,   473,   476,   479,   480,   481,   482,   485,   486,   489,
     490,   493,   494,   497,   498,   499,   502,   503,   506,   507,
     510,   511,   514,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   539,   540,   541,
     542,   543,   544,   545,   557,   558,   561,   562,   565,   568,
     571,   572,   575,   576,   579,   582,   583,   586,   587,   590,
     591,   592,   593,   596,   599,   600,   601,   601,   601,   604,
     605,   609,   614,   615,   618,   619,   622,   623,   626,   627,
     630,   633,   636,   637,   640,   641,   644,   645,   646,   647,
     648,   651,   652,   655,   656,   659,   660,   661,   662,   663,
     664,   667,   668,   671,   672,   675,   676,   679,   680,   681,
     684,   685,   688,   689,   690,   693,   694,   697,   700,   703,
     706,   709,   712,   713,   717,   718,   721,   722,   725,   728,
     729,   732,   733,   736,   737,   740,   741,   744,   747,   748,
     757,   758,   761,   762,   765,   768,   769,   772,   773,   776,
     777,   780,   781,   784,   785,   788,   789,   792,   793,   794,
     795,   796,   807,   808,   811,   812,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     832,   837,   838,   841,   842,   843,   846,   847,   850,   853,
     854,   857,   858,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   871,   874,   875,   876,   877,   880,   881,   882,
     883,   886,   890,   891,   892,   893,   894,   895,   898,   899,
     902,   903,   904,   907,   908,   911,   912,   915,   916,   919,
     920,   923,   924,   925,   929,   930,   933,   937,   943,   944,
     947,   948,   951,   952,   955,   961,   967,   968,   971,   972,
     973,   977,   983,   984,   987,   993,   999,  1005,  1006,  1008,
    1009,  1012,  1016,  1019,  1020,  1023,  1024,  1025,  1026,  1028,
    1030,  1031,  1032,  1034,  1035,  1037,  1039,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1077,  1080,  1083,
    1084,  1087,  1088,  1104,  1107,  1108,  1111,  1112,  1117,  1120,
    1121,  1124,  1127,  1130,  1131,  1134,  1135,  1138,  1139,  1140,
    1141,  1142,  1143,  1144,  1145,  1147,  1152,  1153,  1156,  1157,
    1160,  1161,  1166,  1169,  1170,  1173,  1176,  1179,  1180,  1183,
    1184,  1187,  1188,  1189,  1190,  1194,  1195,  1196,  1199,  1200,
    1203,  1207,  1213,  1218,  1226,  1227,  1228,  1229,  1232,  1233,
    1238,  1239,  1244,  1247,  1248,  1251,  1254,  1255,  1258,  1259,
    1262,  1263,  1266,  1267,  1272,  1273,  1278,  1281,  1282,  1285,
    1286,  1289,  1290,  1293,  1296,  1297,  1298,  1299,  1300,  1301,
    1302,  1303,  1304,  1307,  1308,  1311,  1314,  1315,  1318,  1321,
    1328,  1331,  1334,  1337,  1340,  1343,  1350,  1351,  1354,  1355,
    1358,  1359,  1362,  1363,  1366,  1367,  1370,  1371
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
  "ARROW", "THEN", "POST1", "POST2", "$accept", "literal",
  "boolean_literal", "namespace_name", "type", "simple_type",
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
  "for_statement", "for_initializer_opt", "for_condition_opt",
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
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", "identifier",
  "class", "left_bracket_circle", "right_bracket_circle", "semicolon",
  "in", YY_NULLPTR
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
     395,   396,   397,   398,   399
};
# endif

#define YYPACT_NINF -915

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-915)))

#define YYTABLE_NINF -611

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,    57,    22,   170,   -32,  -915,  -915,  -915,   -68,   294,
    -915,   355,  -915,  1006,  -915,   348,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,   170,  -915,   286,  -915,  -915,   429,
    -915,  -915,   311,  -915,  -915,  -915,   429,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   561,  3280,
    -915,  3251,  -915,  -915,   883,   365,   339,  -915,   386,  -915,
    -915,  1799,   457,   493,   502,   353,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,   429,  -915,   464,  -915,
    -915,   -32,   512,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   494,   517,
     607,  -915,  -915,  -915,  -915,  -915,  -915,   607,   119,   639,
     539,   567,   609,  -915,  -915,   623,  -915,   418,  -915,   578,
    -915,   206,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,   642,   822,   681,  -915,   429,   684,  -915,   429,   698,
    -915,   532,   704,  -915,   271,  -915,  2835,  -915,  -915,   687,
     471,    18,  -915,   528,   512,  -915,   722,   541,   512,   722,
     616,   512,   734,   722,   617,   512,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,     4,   756,  -915,  2879,  -915,   757,  -915,
    -915,   765,   769,  2548,  2835,  2835,  2835,  2835,  2835,  2835,
    2835,  2835,  -915,  -915,   738,   740,   289,   770,  -915,  -915,
    -915,  -915,   773,   776,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,   628,  -915,  -915,
    -915,  1375,  -915,   659,   548,   559,    31,   570,   763,   759,
     764,   743,   -65,  -915,  -915,  -915,   504,  -915,   533,   778,
     788,  -915,  -915,  -915,   884,   786,   792,  -915,  -915,   429,
     841,   790,   622,  -915,  -915,  -915,  -915,  -915,  -915,  3280,
    -915,  -915,  -915,  -915,   219,  -915,  -915,  -915,  -915,  -915,
     793,   624,  -915,  -915,   429,  3280,  -915,   794,   626,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  2835,   892,  2835,   494,   -18,   350,   264,   111,  2879,
    3211,  2835,   135,    86,    88,   667,   797,   468,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,   897,   910,  2835,   912,
    2347,  -915,  2835,  -915,  -915,   914,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  2835,  2835,  2835,
    2835,  2835,  2835,  2835,  2835,  2879,  2879,  2835,  2835,  2835,
    2835,  2835,  2835,  2835,  2835,  2835,  2835,  2835,  2835,  2835,
    2347,  -915,  2879,  -915,  2879,   346,   170,   799,  -915,   652,
    -915,  -915,  3167,  -915,  -915,  3123,  1636,  -915,  -915,  -915,
    -915,  -915,   722,  2959,  -915,  -915,   438,  -915,   817,  2347,
    2835,  2433,  -915,  2835,  2347,   285,   115,   446,   456,   120,
     819,  -915,  -915,   820,   135,  -915,   821,   823,  2634,  3039,
     135,  -915,  -915,   629,  -915,  2835,  2835,   828,  -915,   825,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   659,   659,
     548,   548,   517,   119,   517,   119,   559,   559,   559,   559,
      31,    31,   570,   763,   759,   764,   831,   743,   688,   839,
      91,    82,   179,   101,  -915,  -915,  -915,  2835,  -915,  -915,
    2879,   228,   275,   127,   444,  2879,  2879,   891,   894,    73,
      68,    42,  -915,   484,  -915,  -915,   492,   846,   641,   361,
     662,  2879,   377,  2117,   849,   364,   364,   597,   364,   850,
    2835,   364,  2835,   853,   690,   853,   854,   393,  -915,   232,
     738,   740,   131,  1351,  1415,   809,   615,  1169,  1375,   378,
    -915,  -915,  -915,   858,  2001,  -915,  -915,  -915,   392,   413,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,    93,   956,  -915,  -915,   859,   694,  2879,  -915,
    -915,  -915,  -915,   862,   867,   697,   873,  -915,  -915,  -915,
    -915,  -915,  -915,  2835,  -915,  2835,  2835,  2835,  -915,   877,
    -915,  -915,  -915,  -915,  2347,  -915,  2835,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,   245,   103,   863,   879,   885,
     880,   887,    18,   257,   124,   270,   183,  2879,  2879,   886,
     888,   890,   448,  1487,   889,   357,  -915,   893,    40,   896,
     895,  1487,   898,   382,   899,   901,   900,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  2001,  -915,  -915,  -915,   257,   124,
    -915,  -915,   917,  2879,  -915,  -915,  2749,  2879,   415,  2835,
     420,  2835,  2835,  -915,   434,  2835,   436,    76,  -915,  -915,
    2749,  -915,  1755,   903,   906,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,   906,   905,  -915,   607,    -8,
     149,  -915,  2232,   607,  -915,  -915,  -915,  -915,  -915,  2835,
    -915,  -915,   513,   513,    18,    18,   908,   170,    18,   913,
     170,   916,   904,   414,  -915,   419,   128,  -915,   321,  -915,
     323,    59,   327,   178,    18,    18,    18,  2433,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
     919,   170,  -915,  1023,  -915,    18,   929,  -915,   170,    18,
     928,   170,  -915,  -915,    18,   931,   170,   170,  -915,   937,
     937,   934,   284,   239,   263,   354,   375,   379,   397,   404,
    -915,  -915,  -915,   449,  -915,   941,    79,    67,  -915,  -915,
     452,  -915,  -915,  -915,    30,   936,  -915,  -915,    30,  -915,
    -915,   695,   853,    76,  -915,  -915,  -915,  -915,   938,  2835,
     940,   942,   943,   948,   607,  2835,  2835,  -915,  -915,   948,
    -915,   950,  -915,  -915,  -915,   953,   954,   170,   706,   955,
     170,   712,   946,  2835,  -915,  1057,  -915,  -915,  -915,  -915,
     966,  -915,   967,  2879,  2879,  2879,  2879,   968,   971,   973,
    -915,  2879,   725,  -915,   975,   170,   726,   976,  2879,   730,
     977,   170,   731,   719,   980,   656,   658,  2835,   962,   524,
    -915,   544,  -915,  -915,  2835,  2835,    46,    46,  -915,  -915,
    -915,  -915,  2117,  2117,   984,   532,  -915,  -915,  -915,  -915,
    2117,  1085,  2117,  2117,   853,  -915,  -915,  -915,   988,   990,
    -915,  -915,   513,   513,   744,   991,  -915,   513,   992,  -915,
      37,  -915,  -915,  -915,  -915,   170,   170,   298,   241,   302,
     274,   325,   279,   329,   281,  -915,  -915,  -915,   330,   293,
    -915,  -915,   993,  -915,  -915,   331,   297,  -915,  -915,   994,
    -915,  -915,  -915,  -915,   997,  -915,  -915,  1004,  -915,  -915,
     995,  2835,  1095,  2117,  2117,  -915,   449,  -915,  -915,  -915,
    -915,  2835,  2835,  1075,  -915,   558,  -915,  1099,  1099,  -915,
    2117,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   513,   513,
    -915,  1005,  -915,  -915,  1007,  1002,  1010,   746,  1012,   170,
     170,  1013,  1003,  1014,  1017,  1020,  1021,  1022,  1024,  1027,
     551,   553,  -915,   568,   573,  -915,   555,   555,  -915,   455,
    -915,  -915,  -915,  -915,  2835,    30,    30,  2117,  2835,  1001,
    1015,   558,  -915,  1885,  -915,  -915,  1028,  1029,  -915,   660,
     665,  -915,   170,  -915,   170,  2347,  2347,  -915,  -915,  -915,
    1037,  -915,  1040,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  2879,  -915,  2879,  -915,  -915,  2879,  -915,
    2879,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,    30,
    -915,   941,  2117,  2117,  -915,  1030,  -915,  -915,  -915,  2001,
    -915,   853,   853,  -915,  1042,  1045,  1039,  1043,  1044,  1047,
     853,   853,  -915,  -915,   332,   306,   333,   317,   338,   319,
     347,   328,  -915,  -915,  2117,  -915,  -915,  -915,  -915,  -915,
     513,   513,  -915,  -915,  -915,  -915,  -915,  -915,  1050,  1051,
    1052,  1053,  1055,  1056,  1058,  1059,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     331,     0,     0,   333,   332,   345,   347,   348,   340,     0,
      10,     0,     1,   362,   355,   333,   353,   356,   357,   358,
     359,   360,   361,   334,   586,   587,     0,   346,   342,     0,
     352,   351,   341,   366,   367,   368,     0,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   363,
     364,   362,   354,   588,   591,   340,     0,   343,     0,   619,
     618,     0,     0,     0,     0,     0,   365,   596,   601,   594,
     595,   597,   598,   599,   600,   602,     0,   592,     0,   350,
     349,   331,   338,    17,    22,    29,    20,    31,    30,    25,
      27,    32,    21,    23,    33,    26,    28,    24,   422,   420,
      11,    13,    16,    18,    19,    14,    15,    12,   421,     0,
     573,   543,   519,   617,   616,   381,   608,     0,   603,   606,
     593,   333,   339,   337,    36,    34,    42,    38,    37,    35,
      39,     0,     0,     0,   574,     0,     0,   544,     0,     0,
     520,     0,     0,   382,     0,   611,    73,   605,   607,     0,
     333,   333,   575,   333,   338,   386,   545,   333,   338,   521,
     333,   338,   383,   384,   333,   338,   611,   604,   589,     3,
       4,     5,     6,     0,     0,     9,     0,     7,     0,    77,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     2,     0,     0,    99,    50,    49,    53,
      54,    55,     0,    74,    56,    57,   101,   102,    58,    82,
      52,    59,    61,    62,   103,   115,    60,   107,   116,   113,
     114,   129,   106,   133,   136,   139,   148,   151,   153,   155,
     157,   159,   161,   175,   176,    75,   100,   344,   431,     0,
     419,   425,   427,   428,     0,     0,   579,   580,   572,     0,
     558,     0,   333,   549,   551,   552,   554,   553,   542,   362,
     535,   527,   528,   529,     0,   530,   531,   532,   533,   534,
       0,   333,   525,   518,     0,   362,   402,     0,   333,   391,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   380,
     590,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,   123,   123,   123,   133,     0,   100,   110,   111,
     112,    96,   104,   105,   108,   109,     0,     0,     0,     0,
      69,   609,     0,    80,    81,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   433,     0,   432,     0,     0,   333,   582,   576,   333,
     387,   559,     0,   546,   550,     0,     0,   424,   423,   411,
     522,   526,   385,     0,   388,   392,     0,    78,     0,    69,
       0,   538,    87,     0,    69,     0,     0,     0,     0,     0,
       0,   128,   127,     0,   124,   125,     0,     0,     0,    63,
     123,    65,    66,     0,    64,     0,     0,    70,    44,     0,
      46,    76,    95,   163,   130,   131,   132,   129,   134,   135,
     137,   138,   146,   147,   144,   145,   141,   140,   142,   143,
     149,   150,   152,   154,   156,   158,     0,   160,     0,     0,
       0,     0,     0,     0,   585,   584,   426,     0,   577,   581,
       0,     0,     0,     0,   340,     0,     0,     0,     0,     0,
       0,     0,   614,     0,   463,   464,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   303,     0,     0,     0,     0,     0,   201,     0,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   181,   182,     0,   198,   183,   179,   180,     0,     0,
     184,   185,   244,   245,   186,   193,   259,   260,   261,   262,
     187,   286,   287,   288,   289,   290,   188,   189,   190,   191,
     192,   194,   100,     0,    79,    93,     0,     0,     0,   213,
     540,   215,   214,     0,   539,     0,     0,    97,    98,    92,
      90,    91,    94,     0,   126,     0,     0,     0,   117,     0,
      71,    48,    43,    47,     0,    67,     0,    72,    68,   434,
     435,   429,   430,   177,   583,     0,     0,     0,   614,     0,
     614,     0,   333,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,   209,   614,     0,     0,
       0,     0,     0,     0,   614,     0,     0,   515,   514,   462,
     517,   516,   507,   196,     0,   292,   291,   318,     0,     0,
     294,   293,     0,     0,   621,   620,   272,     0,     0,     0,
       0,     0,     0,   304,     0,     0,     0,     0,   319,   263,
       0,   266,     0,   211,   207,   230,   223,   233,   226,   234,
     227,   231,   224,   235,   228,   236,   229,   232,   225,   195,
     200,   205,   203,   206,   204,   208,     0,    83,    40,     0,
       0,   536,     0,    40,    84,   122,   120,   121,   118,     0,
      45,   162,     0,     0,   333,   333,     0,   333,   333,     0,
     333,     0,     0,     0,   220,     0,     0,   612,     0,   612,
       0,     0,     0,     0,   333,   333,   333,     0,   484,   483,
     495,   496,   477,   478,   485,   486,   487,   488,   489,   479,
     480,   490,   491,   492,   493,   494,   498,   497,   481,   482,
       0,   333,   408,     0,   407,   333,     0,   461,   333,   333,
       0,   333,   410,   409,   333,     0,   333,   333,   202,   218,
     219,     0,     0,     0,    54,   101,   102,    82,   113,   114,
     239,   278,   282,     0,   273,   279,     0,     0,   298,   295,
       0,   300,   297,   178,     0,     0,   302,   301,     0,   306,
     305,     0,     0,   307,   310,   308,   323,   322,     0,     0,
       0,     0,     0,    88,    40,     0,     0,   537,   541,    88,
     119,     0,   570,   568,   569,     0,     0,   333,     0,     0,
     333,     0,   509,     0,   404,     0,   403,   406,   405,   448,
       0,   449,     0,     0,     0,     0,     0,     0,     0,     0,
     212,     0,     0,   210,     0,   333,     0,     0,     0,     0,
       0,   333,     0,     0,     0,   333,   333,     0,     0,     0,
     326,     0,   625,   624,   274,     0,     0,     0,   299,   296,
     623,   622,     0,     0,     0,     0,   314,   317,   311,   309,
       0,     0,     0,     0,     0,    85,    89,    41,     0,     0,
      86,   571,     0,     0,     0,     0,   614,     0,     0,   614,
       0,   508,   510,   222,   221,   333,   333,     0,     0,     0,
       0,     0,     0,     0,     0,   417,   414,   415,     0,     0,
     457,   412,     0,   459,   416,     0,     0,   458,   413,     0,
     460,   615,   615,   615,     0,   438,   441,     0,   439,   443,
       0,     0,     0,     0,     0,   280,     0,   275,   283,   627,
     626,     0,     0,   246,   320,   250,   248,   315,   315,   321,
       0,   265,   264,   513,   216,   217,   557,   555,     0,     0,
     615,     0,   556,   615,     0,     0,     0,     0,     0,   333,
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   615,     0,     0,   615,     0,     0,   456,     0,
     328,   327,   324,   325,   276,     0,     0,     0,     0,     0,
       0,   251,   252,     0,   255,   316,     0,     0,   267,   333,
     333,   560,   333,   561,   333,    69,    69,   613,   613,   613,
       0,   452,     0,   453,   613,   503,   505,   504,   506,   499,
     501,   500,   502,     0,   465,     0,   467,   436,     0,   466,
       0,   468,   437,   447,   446,   614,   614,   270,   269,     0,
     277,   281,     0,     0,   247,     0,   258,   249,   253,   254,
     256,     0,     0,   268,     0,     0,     0,     0,     0,     0,
       0,     0,   450,   451,     0,     0,     0,     0,     0,     0,
       0,     0,   444,   445,     0,   284,   285,   257,   312,   313,
       0,     0,   615,   615,   511,   512,   612,   612,     0,     0,
       0,     0,     0,     0,     0,     0,   271,   566,   567,   562,
     563,   454,   455,   469,   472,   471,   475,   470,   474,   473,
     476
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -915,  -915,  -915,  -915,   -34,   970,    27,  -915,  1011,  -915,
     -59,  -915,   972,  -663,   -96,   747,  -915,   586,  -915,  -915,
    -915,  -915,   246,  -357,  -915,  -915,   186,  -915,  -915,   269,
     303,  -915,   369,  -915,   356,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,   755,   521,   545,   343,  -915,  -205,  -915,   762,
    -168,   501,   363,   499,   814,   818,   816,   826,   829,  -915,
    -915,   569,  -915,   316,  -631,  -640,  -509,  -329,    29,  -915,
     161,  -915,  -915,  -915,  -571,  -432,   435,  -653,  -915,  -915,
    -528,   352,  -915,   314,  -915,  -915,  -915,  -915,  -915,  -915,
     173,  -915,   175,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,   187,  -915,  -915,  -915,
    -915,  -915,  -915,   700,  -915,  -915,  -915,   401,   237,   403,
    -915,  -915,  -915,  -915,  -915,  -915,   437,   255,  -915,  1117,
      -2,  -915,  -915,   479,    -1,   385,  -915,  -915,  1195,  -915,
    -915,  1080,    10,  -122,  -225,  -915,  1153,  -915,  -915,  -915,
    -117,  -915,  -915,  -915,   925,  -134,  -128,  -113,  -915,  -569,
    -915,  -915,   -89,   838,  -915,  -915,  -915,  -110,  -179,  -915,
    -915,   351,   359,   212,  -109,   304,   231,   238,  -107,  -915,
     748,  -106,  -915,  -915,   610,  -915,  -101,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   947,
    -291,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   978,
    -915,  -915,  -915,  -915,  -803,  -915,  -677,  -915,  -915,  -915,
    -915,  -915,  -915,   851,  -915,  -915,  -915,  1198,  -915,  -915,
    -915,  -915,  1083,  -915,  -915,  -915,  -915,  1062,  -695,  -538,
    -581,  -914,    89,  -915,   214,  -778,   278,   366
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   192,   193,     9,   499,   100,   194,   102,   103,   104,
     195,   106,   107,   803,   130,   571,   417,   418,   196,   197,
     198,   199,   200,   419,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   885,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   403,   404,   405,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   337,   420,   584,   784,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   605,   606,   550,   551,   519,
     703,   704,   520,   772,   521,   522,   523,   956,  1010,  1011,
    1012,  1013,  1014,   524,   525,   526,   799,  1073,   527,   528,
     773,   946,  1059,   774,   947,  1060,   775,   529,   530,   531,
     532,   533,   534,   644,   535,   536,   793,   794,  1016,   795,
     537,   538,   539,   540,   798,   541,   859,   860,     2,     3,
     238,   149,    14,   123,   236,    11,    82,     4,     5,     6,
       7,    15,    16,    17,    48,    49,    50,    18,   142,   143,
     156,   165,   277,   278,   279,   261,   262,   263,   264,   239,
     109,   379,   240,   241,   242,   364,   243,   265,   854,   935,
     938,   855,   856,  1055,   266,   978,   979,   980,   267,   472,
     609,   268,   473,   474,   740,   475,   269,   476,   901,   902,
     288,   619,   622,    19,   139,   140,   161,   270,   271,   272,
     552,   553,   554,    20,   136,   137,   158,   251,   252,   253,
     254,   372,   255,   256,   895,   257,   813,    21,   133,   134,
     154,   245,   246,   247,    22,    23,    24,    25,    76,    77,
      78,   117,   118,   147,   119,   148,    26,   168,   830,  1080,
     616,   996,   115,    65,   636,   872,   864,   951
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    13,   105,   449,   127,   670,   392,   696,   780,   699,
     874,   128,   801,    51,   832,   305,   814,   898,   997,   998,
     809,   159,    12,   701,   163,    52,   746,    99,    56,   808,
     280,   870,   546,   755,   375,    58,   281,   556,   260,   613,
      28,   345,   276,   610,    32,   126,   602,   949,   975,     1,
     383,   282,    29,   357,   283,   284,  1021,   285,   286,  1023,
     108,     8,   126,   287,   840,   771,   705,   654,   113,   601,
     126,   114,   602,   358,   599,   116,   346,    55,  1047,   797,
     113,  1052,   162,   114,   389,   126,   580,   950,   101,   126,
     805,   126,   791,   125,   611,   579,   126,   653,   406,   407,
     759,   760,   291,   125,   126,   582,   126,   693,   976,   792,
     675,   747,   292,   612,   126,   758,  -610,   105,   126,    51,
     603,  -418,   126,   126,   304,   815,   816,   126,   702,   819,
     126,   590,   655,   871,   155,   347,   348,   155,   126,   604,
     155,   887,   295,   116,   280,   837,   838,   839,    51,   260,
     281,   244,   126,   129,   632,   250,   276,   382,   259,   881,
      52,   834,   275,   706,   708,   282,   349,   350,   283,   284,
     129,   285,   286,   428,   429,   298,   844,   287,   129,   125,
     847,   126,   307,   581,   124,   850,   126,   602,  1119,  1120,
     125,   359,   903,   129,   316,   360,   317,   401,   591,   401,
     127,   128,   125,   101,   129,   569,   402,   402,   402,   393,
     303,   410,   129,   394,   129,   966,   967,   940,   558,  1076,
     972,  1077,   129,   561,   945,   743,   129,  1062,  1063,   -54,
     129,   129,   587,   -54,   829,   129,   653,   656,   129,   -54,
     105,   105,   126,   858,   126,   983,   401,   806,   370,   692,
     250,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     129,   702,   -54,   -54,  -237,   395,   398,   126,  -610,   259,
     -54,   -54,   -54,   155,   602,    55,   275,   126,   985,   588,
     836,  1094,   126,   987,   126,   989,   105,   105,   858,   129,
     125,  1019,  1020,   378,   129,    30,   126,   991,   396,   399,
     126,   994,   982,   105,  -610,   105,   984,  -335,   402,   126,
    1109,   432,   434,   105,   402,   971,   105,   501,   974,   376,
     126,  1111,   126,  1113,   105,   377,   101,   101,   450,   986,
     452,   126,  1115,   988,   990,   993,  1108,  1110,   462,   124,
      79,   470,  1112,   125,   433,   435,   589,   454,  -330,   470,
     129,  1114,   129,   126,   113,  -240,   125,   114,   742,    32,
    -237,   451,   625,   453,   391,   634,  -237,   244,   125,  -237,
     166,   463,   101,   101,   471,   542,  -241,  1065,   630,   667,
    -238,   125,   471,   752,    54,   129,   125,   318,   557,   101,
     129,   101,   129,   671,   651,   125,   125,   319,  -242,   101,
      31,   105,   101,   500,   129,  -243,   105,   105,   129,   125,
     101,  1121,  1122,   125,   673,   824,   778,   129,   743,    57,
     827,   781,   105,  1117,  1118,   833,   585,   831,   129,   835,
     129,   593,   595,    55,   125,   786,   125,   789,   125,   129,
     125,   125,   125,   125,   125,    80,  -610,   628,   390,   125,
     862,  -240,   455,   868,   743,   501,  1057,  -240,   125,   586,
    -240,   110,   235,   744,   594,   596,   635,   626,   600,   607,
     614,   126,  -241,    28,  1092,  1093,  -238,   386,  -241,   743,
     629,  -241,  -238,   631,   668,  -238,    81,   101,   753,   105,
    1081,  1082,   101,   101,  -242,   652,  1083,   111,   672,   306,
    -242,  -243,   618,  -242,   413,   621,   112,  -243,   101,   627,
    -243,   825,   886,   542,   679,   144,   825,   145,   886,   674,
     826,   779,   647,   648,   649,   828,   782,   308,   309,   310,
     311,   312,   313,   314,   315,   322,    55,   544,   105,   105,
     787,   500,   790,   953,   954,   448,   592,   680,  -340,   559,
    -340,   959,    28,   961,   962,   863,    28,   124,   869,   560,
     670,  1058,    59,   710,   712,   501,   359,   125,   717,  -610,
     360,   120,  -336,  1008,   105,   101,   547,   501,   105,   555,
      60,  1009,   804,    91,   376,    61,   361,   804,   362,    62,
     617,   501,   376,   363,   707,   709,   711,   713,   620,   762,
      94,   638,   359,   776,    63,   124,   360,   235,   818,   388,
     126,   821,   639,   811,  1002,  1003,   663,   400,   122,   812,
     640,   942,   502,   542,   101,   101,  -610,   943,   125,  -578,
      64,  1018,   763,   248,   235,   542,   777,   258,   421,  -610,
     273,   942,  -547,   131,   289,   503,   132,   944,  1043,   542,
    1045,   500,   842,   423,  1044,   376,  1046,   341,   342,   846,
     101,  1053,   849,   500,   101,  1048,   922,   852,  1078,  1079,
    1050,  1049,   929,   446,   135,   235,  1051,   500,  1064,   504,
     146,   424,   425,   426,   427,   427,   427,   427,   343,   344,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     637,   427,   641,   351,   352,   645,   235,   549,   804,   235,
     436,   437,   438,   439,  -610,  -610,   138,  -523,  -389,   508,
    -610,   664,  -610,  -548,  -610,  -524,   322,  -390,   570,   502,
     141,   572,   572,  1095,  1096,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   151,   505,  -113,  -113,   624,    28,
    -610,   424,   503,   458,  -610,   853,  -610,  -440,  -610,  -442,
     502,  -564,   376,  -610,   293,  1116,  -565,   323,   324,   325,
     338,   339,   340,   583,   105,   105,   105,   105,   408,   339,
     340,   153,   105,   503,   157,   322,   504,   577,   237,   105,
     376,   322,   301,   678,   322,   376,   683,   875,   160,   907,
     909,   911,   913,   366,   164,   896,   643,   918,   643,   366,
     661,   899,   931,   932,   925,   894,   957,   504,   894,   249,
     876,   877,   366,   366,   920,   923,   508,   366,   366,   927,
     930,   274,   908,   910,   912,   914,    84,   968,   969,    85,
     919,  1027,  1028,   853,   430,   431,   316,   926,   317,   853,
     440,   441,   505,   934,   937,   608,   608,   508,   293,   299,
     101,   101,   101,   101,    89,   866,   867,   300,   101,    90,
     502,   301,   320,   322,   958,   101,   321,   353,   354,   355,
     356,   365,   764,   505,    92,   366,    93,   368,   367,   369,
     371,   373,   691,   503,   380,   384,   387,   506,    95,    96,
     409,   411,    97,   977,   977,   765,   685,   -82,   686,   687,
     688,   -82,    67,   963,   412,   662,   414,   -82,   422,   457,
     545,   507,   562,   563,   565,   574,   566,   504,   575,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   576,   766,
     -82,   -82,   578,   597,    68,   509,   598,   623,   -82,   -82,
     -82,   633,   642,   376,   501,   583,   650,   783,   785,   669,
     676,   788,   677,   681,   682,   694,   796,   508,   783,    69,
      70,    71,    72,    73,    74,    75,   684,  1030,  1032,   508,
     689,   695,   698,   697,   105,   700,   105,   741,   714,   105,
     715,   105,   716,   505,   748,   745,   751,   749,   549,   756,
     757,   754,   761,   743,   506,   767,  -329,   802,   817,  1084,
     501,  1086,   542,   820,  1088,    33,  1090,  1074,  1075,   822,
     894,   841,   894,   717,   823,  1054,  1054,   653,   507,   845,
     848,   851,   810,   549,   825,   506,   857,    34,   865,   873,
     500,   880,  1085,   882,  1087,   883,   884,  1089,   391,  1091,
      35,   891,   509,   900,    36,    37,   892,   893,   897,   507,
      38,   702,    39,    40,    41,    42,   905,   906,   542,    43,
     101,   915,   101,    44,   916,   101,   917,   101,   921,   924,
     928,   933,   941,   509,   955,    45,   960,   964,    46,   965,
      47,   932,   970,   973,   992,   995,   500,   931,   999,   858,
    1098,  1099,  1007,  1015,  1025,  1022,  1035,  1024,  1066,  1106,
    1107,   764,  1026,  1029,  1034,   783,  1067,  1036,   502,   502,
    1037,   888,   889,  1038,  1039,  1040,   502,  1041,   502,   502,
    1042,  1071,  1072,  1028,   765,  1027,  1100,  1097,  1101,   583,
    1102,   503,   503,   152,  1103,   506,   296,  1104,   297,   503,
    1105,   503,   503,  1123,  1124,  1125,  1126,   768,  1127,  1128,
     690,  1129,  1130,   573,   568,   890,   564,   442,   766,   507,
     665,   444,   443,   783,  1069,   504,   504,   904,   843,   948,
     783,   769,   445,   504,  1068,   504,   504,   447,  1070,   502,
     502,  1061,   646,   509,   878,  1017,   879,  1001,   121,    27,
     861,   150,    66,   385,   456,   770,   502,   939,   508,  1056,
     981,  1033,   503,   503,   936,   508,   508,  1031,   381,   615,
     459,   750,    53,   508,  1004,   508,   508,   167,   290,   503,
     374,     0,     0,   952,   767,     0,     0,     0,     0,     0,
       0,   505,   505,     0,     0,     0,   504,   504,     0,   505,
     764,   505,   505,   502,     0,     0,     0,  1000,     0,   502,
       0,     0,     0,   504,     0,     0,     0,  1005,  1006,     0,
       0,     0,     0,   765,     0,   666,   503,     0,     0,     0,
       0,     0,   503,     0,     0,     0,   508,   508,     0,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,     0,
    -114,  -114,     0,   508,     0,     0,     0,   766,   502,   502,
     504,     0,   505,   505,     0,   502,   504,     0,     0,     0,
       0,     0,     0,     0,   583,     0,     0,     0,     0,   505,
       0,   503,   503,     0,     0,     0,     0,     0,   503,     0,
     502,     0,     0,     0,     0,     0,     0,   508,     0,     0,
     508,     0,   657,     0,     0,     0,   508,     0,     0,     0,
       0,     0,     0,   503,     0,   504,   504,     0,     0,     0,
       0,     0,   504,   767,     0,     0,   505,     0,     0,     0,
       0,     0,   505,     0,     0,     0,   768,     0,     0,     0,
       0,     0,     0,   506,   506,     0,     0,   504,     0,     0,
       0,   506,     0,   506,   506,   508,   508,     0,     0,     0,
     769,     0,   508,     0,     0,     0,   659,   507,   507,     0,
       0,     0,     0,     0,     0,   507,     0,   507,   507,     0,
       0,   505,   505,     0,   770,     0,     0,   508,   505,     0,
       0,   509,   509,     0,     0,     0,     0,     0,     0,   509,
       0,   509,   509,     0,     0,     0,     0,   658,     0,     0,
       0,     0,     0,   505,   506,   506,     0,     0,     0,     0,
       0,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
       0,   506,  -101,  -101,     0,     0,     0,     0,   507,   507,
    -101,  -101,  -101,     0,     0,   326,   327,   328,   329,   330,
     331,   332,   333,   334,     0,   507,   335,   336,     0,     0,
       0,     0,   509,   509,     0,     0,     0,     0,     0,   718,
       0,   660,     0,     0,     0,   768,     0,     0,   506,   509,
       0,     0,     0,     0,   506,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,     0,     0,  -102,  -102,     0,   769,
       0,     0,   507,     0,  -102,  -102,  -102,     0,   507,     0,
     719,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,   509,     0,     0,     0,
       0,     0,   509,   506,   506,     0,     0,     0,     0,     0,
     506,   720,   721,     0,     0,     0,   722,   723,   724,   725,
     726,   727,   728,   729,   730,     0,   731,   507,   507,     0,
       0,     0,     0,     0,   507,   506,   732,   733,     0,     0,
     734,   735,   736,   737,     0,     0,   738,   739,     0,     0,
       0,   509,   509,     0,     0,     0,     0,   477,   509,   507,
     478,   169,   170,   171,   172,     0,     0,   173,    83,   479,
      84,     0,     0,    85,   480,     0,   481,   482,    86,     0,
       0,   483,    87,   509,     0,     0,     0,     0,   175,     0,
     484,    88,   485,   486,   487,   488,     0,     0,    89,     0,
       0,     0,   489,    90,     0,   176,   177,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,    92,     0,
      93,   178,     0,     0,    94,     0,   491,   179,   492,   180,
     493,   181,    95,    96,   494,   495,    97,   496,     0,   294,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,  -197,   183,     0,
       0,     0,   498,     0,     0,   184,   185,   186,     0,     0,
     187,     0,   188,   189,     0,     0,   800,     0,     0,    55,
     169,   170,   171,   172,     0,     0,   173,    83,     0,    84,
       0,     0,    85,   174,     0,   190,   191,    86,     0,     0,
       0,    87,     0,     0,     0,     0,     0,   175,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,    55,   176,   177,    91,     0,     0,     0,
       0,    83,     0,    84,     0,     0,    85,    92,     0,    93,
     178,    86,     0,    94,     0,    87,   179,     0,   180,     0,
     181,    95,    96,   182,    88,    97,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,     0,    93,   184,   185,   186,    94,     0,   187,
       0,   188,   189,     0,     0,    95,    96,     0,     0,    97,
       0,     0,    98,     0,     0,     0,     0,     0,     0,   478,
     169,   170,   171,   172,   190,   191,   173,    83,   479,    84,
    1008,     0,    85,   480,     0,   481,   482,    86,  1009,     0,
     483,    87,     0,     0,     0,     0,     0,   175,     0,   484,
      88,   485,   486,   487,   488,     0,     0,    89,     0,     0,
       0,   489,    90,     0,   176,   177,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,    92,     0,    93,
     178,     0,     0,    94,     0,   491,   179,   492,   180,   493,
     181,    95,    96,   494,   495,    97,   496,     0,   294,     0,
     497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,   183,     0,     0,
       0,   498,     0,     0,   184,   185,   186,     0,     0,   187,
       0,   188,   189,     0,     0,   478,   169,   170,   171,   172,
       0,     0,   173,    83,   479,    84,     0,     0,    85,   480,
       0,   481,   482,    86,   190,   191,   483,    87,     0,     0,
       0,     0,     0,   175,     0,   484,    88,   485,   486,   487,
     488,     0,     0,    89,     0,     0,     0,   489,    90,     0,
     176,   177,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,    92,     0,    93,   178,     0,     0,    94,
       0,   491,   179,   492,   180,   493,   181,    95,    96,   494,
     495,    97,   496,     0,   294,     0,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   376,     0,   183,     0,     0,     0,   498,     0,     0,
     184,   185,   186,     0,     0,   187,     0,   188,   189,     0,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    83,
     479,    84,     0,     0,    85,   480,     0,     0,   482,    86,
     190,   191,   483,    87,     0,     0,     0,     0,     0,   175,
       0,   484,    88,   485,   486,   487,   488,     0,     0,    89,
       0,     0,     0,   489,    90,     0,   176,   177,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   490,    92,
       0,    93,   178,     0,     0,    94,     0,   491,   179,   492,
     180,   493,   181,    95,    96,   494,   495,    97,   496,     0,
       0,     0,   497,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   376,     0,   183,
       0,     0,     0,   498,     0,     0,   184,   185,   186,     0,
       0,   187,     0,   188,   189,     0,    55,   169,   170,   171,
     172,     0,     0,   173,    83,     0,    84,     0,     0,    85,
     174,     0,     0,     0,    86,     0,   190,   191,    87,     0,
       0,     0,     0,     0,   175,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   176,   177,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,   178,   548,     0,
      94,     0,     0,   179,     0,   180,     0,   181,    95,    96,
     182,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   391,   807,   183,     0,     0,     0,     0,     0,
       0,   184,   185,   186,     0,     0,   187,     0,   188,   189,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    83,
       0,    84,     0,     0,    85,   174,     0,     0,     0,    86,
       0,   190,   191,    87,     0,     0,     0,     0,     0,   175,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   176,   177,    91,     0,
     415,     0,     0,     0,     0,     0,     0,   416,     0,    92,
       0,    93,   178,     0,     0,    94,     0,     0,   179,     0,
     180,     0,   181,    95,    96,   182,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   169,   170,
     171,   172,     0,     0,   173,    83,     0,    84,     0,   183,
      85,   174,     0,     0,     0,    86,   184,   185,   186,    87,
       0,   187,     0,   188,   189,   175,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,   176,   177,    91,     0,   190,   191,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,   178,   548,
       0,    94,     0,     0,   179,     0,   180,     0,   181,    95,
      96,   182,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   391,     0,   183,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,     0,   187,     0,   188,
     189,     0,    55,   169,   170,   171,   172,     0,     0,   173,
      83,     0,    84,     0,     0,    85,   174,     0,     0,     0,
      86,     0,   190,   191,    87,     0,     0,     0,     0,     0,
     175,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,     0,   176,   177,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,   178,     0,     0,    94,     0,     0,   179,
       0,   180,     0,   181,    95,    96,   182,     0,    97,     0,
       0,   302,     0,     0,     0,     0,     0,     0,    55,   169,
     170,   171,   172,     0,     0,   173,    83,     0,    84,     0,
     183,    85,   174,     0,     0,     0,    86,   184,   185,   186,
      87,     0,   187,     0,   188,   189,   175,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,   176,   177,    91,     0,   190,   191,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,   178,
       0,     0,    94,     0,     0,   179,     0,   180,     0,   181,
      95,    96,   182,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   567,     0,     0,
       0,     0,     0,   184,   185,   186,     0,     0,   187,     0,
     188,   189,     0,    55,   169,   170,   171,   172,     0,     0,
     173,    83,     0,    84,     0,     0,    85,   174,     0,     0,
       0,    86,     0,   190,   191,    87,     0,     0,     0,     0,
       0,   175,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,   176,   177,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,   178,     0,     0,    94,     0,     0,
     179,     0,   180,     0,   181,    95,    96,   182,     0,    97,
       0,     0,   294,     0,     0,     0,     0,     0,     0,    55,
     169,   170,   171,   172,     0,     0,   173,    83,     0,    84,
       0,   183,    85,   174,     0,     0,     0,    86,   184,   185,
     186,    87,     0,   187,     0,   188,   189,   175,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,    55,   176,   177,    91,     0,   190,   191,
       0,    83,     0,    84,     0,     0,    85,    92,     0,    93,
     178,    86,     0,    94,     0,    87,   179,     0,   180,     0,
     181,    95,    96,   182,    88,    97,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,    92,     0,    93,   184,   185,   186,    94,     0,   187,
       0,   188,   189,     0,     0,    95,    96,     0,     0,    97,
      59,     0,   294,   464,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,   190,   191,    85,     0,    60,   465,
       0,    86,     0,    61,     0,    87,     0,    62,   466,   467,
       0,     0,     0,     0,    88,     0,     0,     0,     0,   468,
       0,    89,    63,     0,     0,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,     0,     0,     0,    94,    64,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,     0,   469,    55,   169,   170,   171,   172,     0,     0,
     173,    83,     0,    84,     0,     0,    85,   174,     0,     0,
       0,    86,     0,     0,     0,    87,     0,     0,     0,     0,
       0,   175,     0,     0,    88,     0,   543,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,   176,   177,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,   178,     0,     0,    94,     0,     0,
     179,     0,   180,     0,   181,    95,    96,   182,     0,    97,
       0,     0,     0,     0,    59,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      85,   183,    60,   465,     0,    86,     0,    61,     0,    87,
       0,    62,   466,   467,     0,   188,   189,     0,    88,     0,
       0,     0,     0,   468,     0,    89,    63,     0,     0,     0,
      90,    55,     0,     0,    91,     0,     0,     0,     0,    83,
       0,    84,     0,     0,    85,    92,     0,    93,     0,    86,
       0,    94,    64,    87,     0,     0,   460,     0,     0,    95,
      96,     0,    88,    97,     0,     0,   469,     0,     0,    89,
       0,     0,     0,     0,    90,    55,     0,     0,    91,     0,
       0,     0,     0,    83,     0,    84,     0,     0,    85,    92,
       0,    93,     0,    86,     0,    94,     0,    87,     0,     0,
       0,     0,     0,    95,    96,     0,    88,    97,     0,     0,
     461,     0,     0,    89,     0,     0,     0,     0,    90,     0,
      33,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    93,     0,     0,     0,    94,
       0,     0,    34,     0,     0,     0,     0,    95,    96,    33,
       0,    97,     0,     0,   397,    35,     0,     0,     0,    36,
      37,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    34,     0,     0,    43,     0,     0,     0,    44,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      45,     0,     0,    46,    38,    47,    39,    40,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,    47
};

static const yytype_int16 yycheck[] =
{
       1,     3,    61,   360,   100,   514,   297,   588,   639,   590,
     788,   107,   652,    15,   709,   183,   693,   820,   932,   933,
     683,   138,     0,   592,   141,    15,   607,    61,    29,   682,
     164,     1,   389,   614,   259,    36,   164,   394,   160,   471,
     108,    10,   164,     1,     4,     3,     4,     1,    11,    81,
     275,   164,   120,   118,   164,   164,   970,   164,   164,   973,
      61,     4,     3,   164,   717,   636,   594,   499,     1,     1,
       3,     4,     4,   138,     1,    76,    45,     4,   992,   650,
       1,   995,   141,     4,   102,     3,     4,    41,    61,     3,
      98,     3,    16,   111,    52,     4,     3,     4,   303,   304,
     628,   629,    98,   111,     3,     4,     3,     4,    71,    33,
     542,    71,   108,    71,     3,   624,    98,   176,     3,   121,
      52,   103,     3,     3,   183,   694,   695,     3,     4,   698,
       3,     4,     1,   103,   135,   104,   105,   138,     3,    71,
     141,   804,   176,   144,   278,   714,   715,   716,   150,   271,
     278,   153,     3,   111,   483,   157,   278,   274,   160,   799,
     150,   102,   164,   595,   596,   278,   135,   136,   278,   278,
     111,   278,   278,   341,   342,   176,   745,   278,   111,   111,
     749,     3,   183,     4,   111,   754,     3,     4,  1102,  1103,
     111,    98,   823,   111,   108,   102,   108,   111,    71,   111,
     296,   297,   111,   176,   111,   410,   302,   303,   304,    98,
     183,   307,   111,   102,   111,   892,   893,   857,   103,  1022,
     897,  1024,   111,   103,   864,    97,   111,  1005,  1006,    98,
     111,   111,     4,   102,   106,   111,     4,   106,   111,   108,
     299,   300,     3,     4,     3,     4,   111,    98,   249,     4,
     252,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     111,     4,   131,   132,     1,   299,   300,     3,    98,   271,
     139,   140,   141,   274,     4,     4,   278,     3,     4,     4,
     102,  1059,     3,     4,     3,     4,   345,   346,     4,   111,
     111,   968,   969,   264,   111,     1,     3,     4,   299,   300,
       3,     4,     4,   362,    98,   364,     4,   101,   404,     3,
       4,   345,   346,   372,   410,   896,   375,   376,   899,   100,
       3,     4,     3,     4,   383,   106,   299,   300,   362,     4,
     364,     3,     4,     4,     4,     4,     4,     4,   372,   111,
       1,   375,     4,   111,   345,   346,    71,     1,     0,   383,
     111,     4,   111,     3,     1,     1,   111,     4,     1,     4,
      97,   362,     1,   364,   100,     1,   103,   369,   111,   106,
      99,   372,   345,   346,   375,   376,     1,  1008,     1,     1,
       1,   111,   383,     1,    98,   111,   111,    98,   103,   362,
     111,   364,   111,     1,     1,   111,   111,   108,     1,   372,
     106,   460,   375,   376,   111,     1,   465,   466,   111,   111,
     383,  1106,  1107,   111,     1,     1,     1,   111,    97,   108,
       1,     1,   481,  1100,  1101,   102,   460,   106,   111,   102,
     111,   465,   466,     4,   111,     1,   111,     1,   111,   111,
     111,   111,   111,   111,   111,   106,    98,   481,    98,   111,
       1,    97,   106,     1,    97,   514,     1,   103,   111,   460,
     106,     4,   146,   106,   465,   466,   102,   106,   469,   470,
     471,     3,    97,   108,  1055,  1056,    97,   291,   103,    97,
     481,   106,   103,   106,   106,   106,   100,   460,   106,   548,
    1028,  1029,   465,   466,    97,   102,  1034,     4,   106,   183,
     103,    97,   473,   106,   318,   476,     4,   103,   481,   480,
     106,    97,   803,   514,   548,    97,    97,    99,   809,   106,
     106,   106,   493,   494,   495,   106,   106,   184,   185,   186,
     187,   188,   189,   190,   191,    97,     4,    99,   597,   598,
     106,   514,   106,   872,   873,   359,   102,   548,   100,   103,
     102,   880,   108,   882,   883,   106,   108,   111,   106,   103,
    1069,   106,     1,   597,   598,   624,    98,   111,   120,    98,
     102,   107,   101,    15,   633,   548,   390,   636,   637,   393,
      19,    23,   678,    51,   100,    24,    53,   683,    55,    28,
     106,   650,   100,    60,   595,   596,   597,   598,   106,   633,
      68,     4,    98,   637,    43,   111,   102,   291,   697,   293,
       3,   700,    15,   100,   943,   944,     1,   301,   106,   106,
      23,    97,   376,   624,   597,   598,    98,   103,   111,   101,
      69,   960,   633,   154,   318,   636,   637,   158,   322,    98,
     161,    97,   101,     4,   165,   376,   107,   103,    97,   650,
      97,   624,   741,   337,   103,   100,   103,   109,   110,   748,
     633,   106,   751,   636,   637,    97,   845,   756,  1025,  1026,
      97,   103,   851,   357,   107,   359,   103,   650,  1007,   376,
     102,   338,   339,   340,   341,   342,   343,   344,   129,   130,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     486,   358,   488,   133,   134,   491,   390,   391,   804,   393,
     347,   348,   349,   350,    98,    98,   107,   101,   101,   376,
      98,   106,    98,   101,    98,   101,    97,   101,    99,   483,
     107,   415,   416,  1062,  1063,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   102,   376,   131,   132,   107,   108,
      98,   408,   483,   101,    98,   757,    98,   101,    98,   101,
     514,   101,   100,    98,   102,  1094,   101,   139,   140,   141,
     111,   112,   113,   457,   833,   834,   835,   836,   111,   112,
     113,   100,   841,   514,   100,    97,   483,    99,   101,   848,
     100,    97,   102,    99,    97,   100,    99,   102,   100,   833,
     834,   835,   836,    97,   100,    99,   490,   841,   492,    97,
       1,    99,    93,    94,   848,   817,   875,   514,   820,    97,
     791,   792,    97,    97,    99,    99,   483,    97,    97,    99,
      99,    97,   833,   834,   835,   836,    14,    93,    94,    17,
     841,    95,    96,   845,   343,   344,   108,   848,   108,   851,
     351,   352,   483,   855,   856,   470,   471,   514,   102,   102,
     833,   834,   835,   836,    42,   776,   777,   102,   841,    47,
     624,   102,   102,    97,   875,   848,   103,   114,   119,   115,
     137,   103,   636,   514,    62,    97,    64,   101,     4,    97,
      49,   101,   576,   624,   101,   101,     4,   376,    76,    77,
     103,     4,    80,   905,   906,   636,   563,    98,   565,   566,
     567,   102,    29,   884,     4,   106,     4,   108,     4,   120,
     103,   376,   103,   103,   103,    97,   103,   624,   103,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   107,   636,
     131,   132,   103,    52,    61,   376,    52,   101,   139,   140,
     141,   102,   102,   100,  1013,   639,   102,   641,   642,   101,
       4,   645,   103,   101,    97,   102,   650,   624,   652,    86,
      87,    88,    89,    90,    91,    92,   103,   979,   980,   636,
     103,   102,   102,    98,  1043,    98,  1045,    98,   102,  1048,
     102,  1050,   102,   624,    98,   102,    98,   102,   682,    98,
     100,   102,    85,    97,   483,   636,     0,   102,   100,  1043,
    1069,  1045,  1013,   100,  1048,     9,  1050,  1019,  1020,   103,
    1022,   102,  1024,   120,   120,   996,   997,     4,   483,   100,
     102,   100,   689,   717,    97,   514,   102,    31,    97,   103,
    1013,   103,  1043,   103,  1045,   103,   103,  1048,   100,  1050,
      44,   101,   483,   107,    48,    49,   103,   103,   103,   514,
      54,     4,    56,    57,    58,    59,   100,   100,  1069,    63,
    1043,   103,  1045,    67,   103,  1048,   103,  1050,   103,   103,
     103,   101,   120,   514,   100,    79,     1,    99,    82,    99,
      84,    94,   101,   101,   101,   101,  1069,    93,   103,     4,
    1071,  1072,    27,     4,   102,   100,   103,   100,   107,  1080,
    1081,   865,   102,   101,   101,   799,   101,   103,   872,   873,
     103,   805,   806,   103,   103,   103,   880,   103,   882,   883,
     103,   103,   103,    96,   865,    95,    94,   107,    93,   823,
     101,   872,   873,   132,   101,   624,   176,   103,   176,   880,
     103,   882,   883,   103,   103,   103,   103,   636,   103,   103,
     574,   103,   103,   416,   409,   809,   404,   353,   865,   624,
       1,   355,   354,   857,  1013,   872,   873,   825,   743,   865,
     864,   636,   356,   880,  1011,   882,   883,   358,  1013,   943,
     944,  1004,   492,   624,   793,   958,   793,   942,    81,     4,
     763,   121,    49,   278,   366,   636,   960,   856,   865,   997,
     906,   980,   943,   944,   855,   872,   873,   979,   271,   471,
     369,   611,    24,   880,   946,   882,   883,   144,   166,   960,
     252,    -1,    -1,   867,   865,    -1,    -1,    -1,    -1,    -1,
      -1,   872,   873,    -1,    -1,    -1,   943,   944,    -1,   880,
    1004,   882,   883,  1007,    -1,    -1,    -1,   941,    -1,  1013,
      -1,    -1,    -1,   960,    -1,    -1,    -1,   951,   952,    -1,
      -1,    -1,    -1,  1004,    -1,   106,  1007,    -1,    -1,    -1,
      -1,    -1,  1013,    -1,    -1,    -1,   943,   944,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
     131,   132,    -1,   960,    -1,    -1,    -1,  1004,  1062,  1063,
    1007,    -1,   943,   944,    -1,  1069,  1013,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1008,    -1,    -1,    -1,    -1,   960,
      -1,  1062,  1063,    -1,    -1,    -1,    -1,    -1,  1069,    -1,
    1094,    -1,    -1,    -1,    -1,    -1,    -1,  1004,    -1,    -1,
    1007,    -1,     1,    -1,    -1,    -1,  1013,    -1,    -1,    -1,
      -1,    -1,    -1,  1094,    -1,  1062,  1063,    -1,    -1,    -1,
      -1,    -1,  1069,  1004,    -1,    -1,  1007,    -1,    -1,    -1,
      -1,    -1,  1013,    -1,    -1,    -1,   865,    -1,    -1,    -1,
      -1,    -1,    -1,   872,   873,    -1,    -1,  1094,    -1,    -1,
      -1,   880,    -1,   882,   883,  1062,  1063,    -1,    -1,    -1,
     865,    -1,  1069,    -1,    -1,    -1,     1,   872,   873,    -1,
      -1,    -1,    -1,    -1,    -1,   880,    -1,   882,   883,    -1,
      -1,  1062,  1063,    -1,   865,    -1,    -1,  1094,  1069,    -1,
      -1,   872,   873,    -1,    -1,    -1,    -1,    -1,    -1,   880,
      -1,   882,   883,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,  1094,   943,   944,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   960,   131,   132,    -1,    -1,    -1,    -1,   943,   944,
     139,   140,   141,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,   960,   131,   132,    -1,    -1,
      -1,    -1,   943,   944,    -1,    -1,    -1,    -1,    -1,    32,
      -1,   106,    -1,    -1,    -1,  1004,    -1,    -1,  1007,   960,
      -1,    -1,    -1,    -1,  1013,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,   131,   132,    -1,  1004,
      -1,    -1,  1007,    -1,   139,   140,   141,    -1,  1013,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1004,    -1,    -1,  1007,    -1,    -1,    -1,
      -1,    -1,  1013,  1062,  1063,    -1,    -1,    -1,    -1,    -1,
    1069,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,  1062,  1063,    -1,
      -1,    -1,    -1,    -1,  1069,  1094,   129,   130,    -1,    -1,
     133,   134,   135,   136,    -1,    -1,   139,   140,    -1,    -1,
      -1,  1062,  1063,    -1,    -1,    -1,    -1,     1,  1069,  1094,
       4,     5,     6,     7,     8,    -1,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,    -1,
      -1,    25,    26,  1094,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,
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
      -1,    -1,    47,     4,    49,    50,    51,    -1,   139,   140,
      -1,    12,    -1,    14,    -1,    -1,    17,    62,    -1,    64,
      65,    22,    -1,    68,    -1,    26,    71,    -1,    73,    -1,
      75,    76,    77,    78,    35,    80,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    62,    -1,    64,   109,   110,   111,    68,    -1,   114,
      -1,   116,   117,    -1,    -1,    76,    77,    -1,    -1,    80,
       1,    -1,    83,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,   139,   140,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,
      -1,    -1,    83,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,   117,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      17,   102,    19,    20,    -1,    22,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,   116,   117,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      47,     4,    -1,    -1,    51,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    62,    -1,    64,    -1,    22,
      -1,    68,    69,    26,    -1,    -1,    29,    -1,    -1,    76,
      77,    -1,    35,    80,    -1,    -1,    83,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    -1,    22,    -1,    68,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,
      83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
       9,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    76,    77,     9,
      -1,    80,    -1,    -1,    83,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    31,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      79,    -1,    -1,    82,    54,    84,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,   273,   274,   282,   283,   284,   285,     4,   148,
     279,   280,     0,   275,   277,   286,   287,   288,   292,   338,
     348,   362,   369,   370,   371,   372,   381,   283,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   289,   290,
     291,   275,   287,   372,    98,     4,   279,   108,   279,     1,
      19,    24,    28,    43,    69,   388,   291,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   373,   374,   375,     1,
     106,   100,   281,    12,    14,    17,    22,    26,    35,    42,
      47,    51,    62,    64,    68,    76,    77,    80,    83,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   279,   305,
       4,     4,     4,     1,     4,   387,   279,   376,   377,   379,
     107,   274,   106,   278,   111,   111,     3,   159,   159,   111,
     159,     4,   107,   363,   364,   107,   349,   350,   107,   339,
     340,   107,   293,   294,    97,    99,   102,   378,   380,   276,
     286,   102,   153,   100,   365,   279,   295,   100,   351,   295,
     100,   341,   155,   295,   100,   296,    99,   377,   382,     5,
       6,     7,     8,    11,    18,    32,    49,    50,    65,    71,
      73,    75,    78,   102,   109,   110,   111,   114,   116,   117,
     139,   140,   146,   147,   151,   155,   163,   164,   165,   166,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   208,   279,   101,   275,   304,
     307,   308,   309,   311,   275,   366,   367,   368,   278,    97,
     275,   352,   353,   354,   355,   357,   358,   360,   278,   275,
     288,   300,   301,   302,   303,   312,   319,   323,   326,   331,
     342,   343,   344,   278,    97,   275,   288,   297,   298,   299,
     300,   301,   302,   312,   319,   323,   326,   331,   335,   278,
     382,    98,   108,   102,    83,   149,   150,   157,   279,   102,
     102,   102,    83,   151,   155,   195,   208,   279,   190,   190,
     190,   190,   190,   190,   190,   190,   108,   108,    98,   108,
     102,   103,    97,   139,   140,   141,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   131,   132,   207,   111,   112,
     113,   109,   110,   129,   130,    10,    45,   104,   105,   135,
     136,   133,   134,   114,   119,   115,   137,   118,   138,    98,
     102,    53,    55,    60,   310,   103,    97,     4,   101,    97,
     279,    49,   356,   101,   354,   289,   100,   106,   213,   306,
     101,   344,   295,   289,   101,   299,   171,     4,   208,   102,
      98,   100,   345,    98,   102,   149,   279,    83,   149,   279,
     208,   111,   159,   192,   193,   194,   192,   192,   111,   103,
     159,     4,     4,   171,     4,    53,    60,   161,   162,   168,
     208,   208,     4,   208,   190,   190,   190,   190,   195,   195,
     196,   196,   149,   279,   149,   279,   197,   197,   197,   197,
     198,   198,   199,   200,   201,   202,   208,   203,   171,   168,
     149,   279,   149,   279,     1,   106,   308,   120,   101,   368,
      29,    83,   149,   279,     4,    20,    29,    30,    40,    83,
     149,   279,   324,   327,   328,   330,   332,     1,     4,    13,
      18,    20,    21,    25,    34,    36,    37,    38,    39,    46,
      61,    70,    72,    74,    78,    79,    81,    85,   106,   149,
     151,   155,   167,   174,   175,   177,   188,   189,   190,   206,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   224,
     227,   229,   230,   231,   238,   239,   240,   243,   244,   252,
     253,   254,   255,   256,   257,   259,   260,   265,   266,   267,
     268,   270,   279,   117,    99,   103,   168,   171,    66,   208,
     222,   223,   345,   346,   347,   171,   168,   103,   103,   103,
     103,   103,   103,   103,   194,   103,   103,   103,   187,   192,
      99,   160,   208,   160,    97,   103,   107,    99,   103,     4,
       4,     4,     4,   208,   209,   149,   279,     4,     4,    71,
       4,    71,   102,   149,   279,   149,   279,    52,    52,     1,
     279,     1,     4,    52,    71,   220,   221,   279,   280,   325,
       1,    52,    71,   220,   279,   325,   385,   106,   213,   336,
     106,   213,   337,   101,   107,     1,   106,   213,   149,   279,
       1,   106,   212,   102,     1,   102,   389,   389,     4,    15,
      23,   389,   102,   208,   258,   389,   258,   213,   213,   213,
     102,     1,   102,     4,   220,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,     1,   106,   101,
     211,     1,   106,     1,   106,   220,     4,   103,    99,   149,
     279,   101,    97,    99,   103,   190,   190,   190,   190,   103,
     162,   208,     4,     4,   102,   102,   385,    98,   102,   385,
      98,   304,     4,   225,   226,   225,   220,   279,   220,   279,
     149,   279,   149,   279,   102,   102,   102,   120,    32,    73,
     104,   105,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   119,   129,   130,   133,   134,   135,   136,   139,   140,
     329,    98,     1,    97,   106,   102,   385,    71,    98,   102,
     329,    98,     1,   106,   102,   385,    98,   100,   211,   225,
     225,    85,   149,   279,   167,   174,   175,   177,   188,   189,
     206,   219,   228,   245,   248,   251,   149,   279,     1,   106,
     209,     1,   106,   208,   210,   208,     1,   106,   208,     1,
     106,    16,    33,   261,   262,   264,   208,   219,   269,   241,
       1,   210,   102,   158,   159,    98,    98,   101,   222,   158,
     190,   100,   106,   361,   361,   304,   304,   100,   307,   304,
     100,   307,   103,   120,     1,    97,   106,     1,   106,   106,
     383,   106,   383,   102,   102,   102,   102,   304,   304,   304,
     222,   102,   307,   221,   304,   100,   307,   304,   102,   307,
     304,   100,   307,   275,   313,   316,   317,   102,     4,   271,
     272,   271,     1,   106,   391,    97,   387,   387,     1,   106,
       1,   103,   390,   103,   390,   102,   213,   213,   262,   264,
     103,   210,   103,   103,   103,   179,   345,   158,   208,   208,
     179,   101,   103,   103,   275,   359,    99,   103,   359,    99,
     107,   333,   334,   209,   226,   100,   100,   149,   279,   149,
     279,   149,   279,   149,   279,   103,   103,   103,   149,   279,
      99,   103,   313,    99,   103,   149,   279,    99,   103,   313,
      99,    93,    94,   101,   275,   314,   317,   275,   315,   316,
     210,   120,    97,   103,   103,   210,   246,   249,   228,     1,
      41,   392,   392,   212,   212,   100,   232,   155,   279,   212,
       1,   212,   212,   213,    99,    99,   361,   361,    93,    94,
     101,   385,   361,   101,   385,    11,    71,   275,   320,   321,
     322,   320,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,   101,     4,     4,   101,   386,   386,   386,   103,
     208,   272,   212,   212,   391,   208,   208,    27,    15,    23,
     233,   234,   235,   236,   237,     4,   263,   263,   212,   361,
     361,   386,   100,   386,   100,   102,   102,    95,    96,   101,
     275,   322,   275,   321,   101,   103,   103,   103,   103,   103,
     103,   103,   103,    97,   103,    97,   103,   386,    97,   103,
      97,   103,   386,   106,   213,   318,   318,     1,   106,   247,
     250,   251,   390,   390,   212,   209,   107,   101,   235,   215,
     237,   103,   103,   242,   275,   275,   359,   359,   168,   168,
     384,   384,   384,   384,   149,   279,   149,   279,   149,   279,
     149,   279,   385,   385,   390,   212,   212,   107,   213,   213,
      94,    93,   101,   101,   103,   103,   213,   213,     4,     4,
       4,     4,     4,     4,     4,     4,   212,   361,   361,   386,
     386,   383,   383,   103,   103,   103,   103,   103,   103,   103,
     103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   157,   157,
     158,   158,   159,   160,   161,   161,   162,   162,   162,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   165,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   173,   173,
     174,   175,   176,   177,   177,   178,   178,   178,   179,   179,
     180,   180,   180,   181,   182,   183,   184,   185,   185,   186,
     186,   186,   186,   186,   187,   187,   187,   187,   188,   189,
     190,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   195,   195,   196,   196,   196,   197,   197,   197,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   199,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208,   209,   210,   211,
     211,   211,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   215,
     215,   216,   217,   218,   218,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   229,   229,   230,   230,   231,   232,
     233,   233,   234,   234,   235,   236,   236,   237,   237,   238,
     238,   238,   238,   239,   240,   240,   241,   242,   240,   243,
     243,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   250,   251,   251,   252,   252,   253,   253,   253,   253,
     253,   254,   254,   255,   255,   256,   256,   256,   256,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   260,
     261,   261,   262,   262,   262,   263,   263,   264,   265,   266,
     267,   268,   269,   269,   270,   270,   271,   271,   272,   273,
     273,   274,   274,   275,   275,   276,   276,   277,   278,   278,
     279,   279,   280,   280,   281,   282,   282,   283,   283,   284,
     284,   285,   285,   286,   286,   287,   287,   288,   288,   288,
     288,   288,   289,   289,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     292,   293,   293,   294,   294,   294,   295,   295,   296,   297,
     297,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   300,   300,   300,   300,   301,   301,   301,
     301,   302,   303,   303,   303,   303,   303,   303,   304,   304,
     305,   305,   305,   306,   306,   307,   307,   308,   308,   309,
     309,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   315,   315,   316,   317,   318,   318,   319,   319,
     319,   319,   320,   320,   321,   322,   323,   324,   324,   324,
     324,   325,   326,   327,   327,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   330,
     330,   330,   330,   330,   330,   330,   330,   331,   332,   333,
     333,   334,   334,   335,   336,   336,   337,   337,   338,   339,
     339,   340,   341,   342,   342,   343,   343,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   345,   345,   346,   346,
     347,   347,   348,   349,   349,   350,   351,   352,   352,   353,
     353,   354,   354,   354,   354,   355,   355,   355,   356,   356,
     357,   357,   358,   358,   359,   359,   359,   359,   360,   360,
     361,   361,   362,   363,   363,   364,   365,   365,   366,   366,
     367,   367,   368,   368,   369,   369,   370,   371,   371,   372,
     372,   373,   373,   374,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   376,   376,   377,   378,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   387,   388,   388,
     389,   389,   390,   390,   391,   391,   392,   392
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       0,     2,     1,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     4,     4,     0,
       1,     4,     4,     0,     1,     1,     3,     1,     3,     4,
       2,     2,     1,     5,     5,     7,     7,     3,     0,     1,
       4,     4,     4,     4,     4,     3,     2,     4,     4,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     5,     6,
       5,     5,     5,     0,     1,     1,     2,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     0,     1,     1,
       2,     1,     3,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     3,     1,     1,     1,     5,     5,     3,     3,
       1,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     3,
       0,     1,     1,     2,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     2,     5,     5,     0,     0,     7,     7,
       7,     9,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     8,     8,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     4,     3,     3,     4,
       3,     3,     3,     0,     1,     3,     3,     3,     3,     4,
       1,     2,     6,     6,     2,     0,     1,     2,     2,     2,
       5,     5,     1,     1,     6,     6,     1,     3,     3,     2,
       2,     0,     1,     0,     1,     0,     1,     5,     0,     1,
       1,     2,     2,     3,     4,     1,     2,     1,     1,     5,
       5,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     0,     1,     2,     2,     4,     1,     3,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     6,     6,     5,     5,     5,
       5,     2,     7,     7,     7,     7,     7,     7,     0,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     4,
       4,     0,     1,     1,     4,     4,     9,     9,     2,     2,
       0,     1,     0,     1,     5,     5,     1,     1,     6,     6,
      10,    10,     2,     2,     5,     5,     8,     5,     5,     5,
       5,     2,     4,     1,     1,     7,     7,     7,     7,    10,
      10,    10,    10,    10,    10,    10,    10,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       7,     7,     7,     7,     7,     7,     7,     4,     5,     0,
       1,     5,     5,     7,     1,     1,     1,     1,     7,     0,
       1,     2,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     0,     1,
       1,     3,     7,     0,     1,     2,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     8,     8,     8,     0,     1,
       9,     9,    12,    12,     3,     3,     6,     6,     6,     6,
       1,     2,     7,     0,     1,     2,     3,     4,     0,     1,
       1,     3,     2,     4,     9,     9,     1,     1,     2,     6,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     3,
       0,     0,     0,     0,     0,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_literal",1);}
#line 2748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 114 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 118 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 124 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 145 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 149 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 154 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 165 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 173 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 183 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 190 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 194 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 2994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 3000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 199 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 3006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 225 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 230 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 234 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 238 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 242 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 246 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 250 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 253 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 257 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 260 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 263 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 266 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 270 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 276 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 280 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 285 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 288 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 291 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 294 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 297 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 301 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 308 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 314 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 317 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 320 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 329 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 342 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 346 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 350 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 354 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 360 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 365 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3552 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 370 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3558 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3570 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3588 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3594 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3600 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3606 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 381 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3618 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3624 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 386 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3630 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3636 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 390 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3642 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3648 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 394 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3654 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3660 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 398 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3666 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3672 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 402 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3678 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3684 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 406 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3690 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3696 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 410 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3702 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 413 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3708 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3714 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3720 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3726 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3732 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3738 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3744 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3750 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3756 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3768 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 426 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3774 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3780 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 430 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 433 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3792 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 436 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 442 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 457 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 461 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 470 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 473 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 476 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 481 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 482 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("declaration_statement",1,1);}
#line 3966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 486 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 489 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 490 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 3996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 494 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 4002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 499 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 503 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 507 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 4050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 511 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 4056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 514 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 4062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 529 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 530 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 531 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 532 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 533 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 534 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 535 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 536 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 545 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 557 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 561 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 571 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 575 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 582 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 586 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 591 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 592 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 599 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 600 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 601 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 601 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 604 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 605 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 615 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 619 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 633 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 636 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 637 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 640 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",7);}
#line 4440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 646 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 647 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 651 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 652 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 659 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 662 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 663 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 667 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 675 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 679 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 700 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 713 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 717 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 725 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 728 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 729 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 732 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 733 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 736 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 740 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 744 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 747 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 748 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 758 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 761 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 762 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 765 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 768 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 769 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 772 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 773 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 776 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 780 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 784 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 788 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 792 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 795 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 796 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 807 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 808 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 811 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 4908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 812 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 4914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 815 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 818 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 819 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 822 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 823 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 4998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",7);}
#line 5004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 5010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 838 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 5016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 842 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 843 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 5034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 846 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 5040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 5046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 850 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 854 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 858 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 861 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 862 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 865 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 866 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 869 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 880 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 882 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 883 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 894 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 895 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 5226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 898 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 899 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 907 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 911 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 915 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 916 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 919 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 920 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 923 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 924 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 936 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 943 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 944 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 947 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 948 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 951 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 952 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 964 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 967 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 971 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 972 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 976 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 980 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 983 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 984 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 996 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1002 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1005 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1008 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1009 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1020 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1023 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1024 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1025 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1028 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1031 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1032 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1037 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1039 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1043 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1046 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1048 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1050 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1051 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1052 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1088 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1104 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1107 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1108 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1111 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1112 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1120 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1124 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1134 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1135 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1138 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1139 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1142 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1143 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1147 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 5946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1156 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 5952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 5958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1160 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 5964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1161 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 5970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 5976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1169 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 5982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 5988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1173 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 5994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 6000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 6006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 6012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 6018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1184 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 6024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1187 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1188 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1195 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1196 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 6066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1217 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1222 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1226 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1228 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1229 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1233 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1244 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1247 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1251 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1255 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1259 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1262 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1263 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1266 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1267 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1278 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1281 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1285 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1286 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1289 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1290 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1293 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1297 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1298 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1301 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1302 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1303 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1304 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 1311 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 1315 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 1328 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 1331 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 1334 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 1337 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 1340 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 1343 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 1350 "yacc.y" /* yacc.c:1646  */
    {l.a("IDENTIFIER",0);}
#line 6420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 1351 "yacc.y" /* yacc.c:1646  */
    {l.a("IDENTIFIER",0,1); yyerrok;yyclearin;}
#line 6426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 1354 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0);}
#line 6432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 1355 "yacc.y" /* yacc.c:1646  */
    {l.a("CLASS",0,1);yyerrok;yyclearin;}
#line 6438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 1358 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 6444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 621:
#line 1359 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 622:
#line 1362 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 6456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 1363 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 6462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 1366 "yacc.y" /* yacc.c:1646  */
    {l.a("semicolon",0);}
#line 6468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 625:
#line 1367 "yacc.y" /* yacc.c:1646  */
    {l.a("semicolon",0,1);}
#line 6474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 626:
#line 1370 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0);}
#line 6480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 627:
#line 1371 "yacc.y" /* yacc.c:1646  */
    {l.a("in",0,1);yyerrok;}
#line 6486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6490 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1376 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




