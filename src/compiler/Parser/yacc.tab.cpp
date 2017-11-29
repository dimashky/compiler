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
#define YYLAST   3408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  634
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1138

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
     123,   132,   133,   142,   143,   144,   147,   148,   151,   152,
     153,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     167,   168,   171,   172,   175,   176,   177,   180,   181,   182,
     185,   186,   189,   193,   197,   198,   201,   202,   203,   206,
     207,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   224,   227,   228,   229,   232,   233,   236,
     237,   240,   241,   244,   245,   248,   249,   252,   255,   256,
     259,   262,   265,   268,   269,   273,   274,   275,   278,   279,
     282,   283,   284,   287,   290,   293,   296,   299,   300,   303,
     304,   305,   306,   307,   310,   311,   312,   313,   316,   319,
     322,   323,   324,   325,   326,   327,   328,   336,   337,   338,
     339,   340,   341,   344,   345,   348,   349,   352,   353,   356,
     357,   358,   359,   362,   363,   364,   367,   368,   369,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   383,   384,
     385,   388,   389,   392,   393,   396,   397,   400,   401,   404,
     405,   408,   409,   412,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   428,   429,   432,   435,   439,
     440,   441,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   459,   460,   463,   464,   468,
     469,   472,   475,   478,   479,   480,   481,   484,   485,   488,
     489,   492,   493,   496,   497,   498,   501,   502,   505,   506,
     509,   510,   513,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   554,   555,   558,   559,   562,   565,   568,   569,   572,
     573,   576,   579,   580,   583,   584,   587,   588,   589,   590,
     593,   596,   597,   598,   598,   598,   601,   602,   606,   609,
     610,   613,   614,   617,   618,   622,   623,   626,   627,   630,
     631,   634,   635,   638,   641,   644,   645,   648,   649,   651,
     651,   653,   654,   655,   656,   657,   660,   661,   664,   665,
     668,   669,   670,   671,   672,   673,   676,   677,   680,   681,
     684,   685,   688,   689,   690,   693,   694,   697,   698,   699,
     702,   703,   706,   709,   712,   715,   718,   721,   722,   726,
     727,   730,   731,   734,   737,   738,   741,   742,   745,   746,
     749,   750,   753,   756,   757,   766,   767,   770,   771,   774,
     777,   778,   781,   782,   785,   786,   789,   790,   793,   794,
     797,   798,   801,   802,   803,   804,   805,   816,   817,   820,
     821,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   834,   835,   836,   837,   841,   843,   843,   844,   844,
     847,   848,   851,   852,   853,   856,   857,   860,   863,   864,
     867,   868,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   881,   884,   885,   886,   887,   890,   891,   892,   893,
     896,   900,   901,   902,   903,   904,   905,   908,   909,   912,
     913,   914,   917,   918,   921,   922,   925,   926,   929,   930,
     933,   934,   935,   939,   940,   943,   947,   953,   954,   957,
     958,   961,   962,   965,   971,   977,   978,   981,   982,   983,
     987,   993,   994,   997,  1003,  1009,  1015,  1016,  1018,  1019,
    1022,  1026,  1029,  1030,  1033,  1034,  1035,  1036,  1038,  1040,
    1041,  1042,  1044,  1045,  1047,  1049,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1087,  1090,  1093,  1094,
    1097,  1098,  1114,  1117,  1118,  1121,  1122,  1127,  1130,  1131,
    1134,  1137,  1140,  1141,  1144,  1145,  1148,  1149,  1150,  1151,
    1152,  1153,  1154,  1155,  1157,  1162,  1163,  1166,  1167,  1170,
    1171,  1176,  1179,  1180,  1183,  1186,  1189,  1190,  1193,  1194,
    1197,  1198,  1199,  1200,  1204,  1205,  1206,  1209,  1210,  1213,
    1217,  1223,  1228,  1236,  1237,  1238,  1239,  1242,  1243,  1248,
    1249,  1254,  1257,  1258,  1261,  1264,  1265,  1268,  1269,  1272,
    1273,  1276,  1277,  1282,  1283,  1288,  1291,  1292,  1295,  1296,
    1299,  1300,  1303,  1306,  1307,  1308,  1309,  1310,  1311,  1312,
    1313,  1314,  1317,  1318,  1321,  1324,  1325,  1328,  1331,  1338,
    1341,  1344,  1347,  1350,  1353
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
  "namespace_name", "type", "simple_type", "primitive_type",
  "numeric_type", "integral_type", "floating_point_type", "class_type",
  "pointer_type", "array_type", "rank_specifiers_opt", "rank_specifier",
  "variable_reference", "argument_list", "argument", "primary_expression",
  "primary_expression_no_parenthesis", "parenthesized_expression",
  "member_access", "invocation_expression", "argument_list_opt",
  "element_access", "expression_list_opt", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "new_expression",
  "object_creation_expression", "array_creation_expression",
  "array_initializer_opt", "typeof_expression", "checked_expression",
  "unchecked_expression", "pointer_member_access", "addressof_expression",
  "sizeof_expression", "postfix_expression",
  "unary_expression_not_plusminus", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression", "cast_expression",
  "type_quals_opt", "type_quals", "type_qual", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "conditional_and_expression",
  "conditional_or_expression", "conditional_expression", "assignment",
  "assignment_operator", "expression", "constant_expression",
  "boolean_expression", "statement", "embedded_statement", "block",
  "statement_list_opt", "statement_list", "empty_statement",
  "labeled_statement", "declaration_statement",
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

#define YYPACT_NINF -924

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-924)))

#define YYTABLE_NINF -630

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   110,    47,    31,    -3,  -924,  -924,  -924,   374,    43,
    -924,   263,  -924,   836,  -924,   196,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,    31,  -924,    76,  -924,  -924,   362,
    -924,  -924,   310,  -924,  -924,  -924,   362,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   516,   729,
    -924,  1396,  -924,  -924,   528,   338,   219,  -924,   333,  -924,
    -924,  1864,   457,   475,   502,   331,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   362,  -924,   429,  -924,
    -924,    -3,   484,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   489,   515,
     609,  -924,  -924,  -924,  -924,  -924,  -924,   609,    84,   663,
     579,   607,   613,  -924,  -924,   645,  -924,   425,  -924,   555,
    -924,   572,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   570,   566,   578,  -924,   362,   709,  -924,   362,   716,
    -924,   384,   722,  -924,    39,  -924,  2900,  -924,  -924,   696,
     604,   571,  -924,   608,   484,  -924,   734,   614,   484,   734,
     618,   484,   744,   734,   652,   484,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,   403,   762,  -924,  2944,  -924,   763,  -924,
    -924,   771,   795,  2613,  2900,  2900,  2900,  2900,  2900,  2900,
    2900,  2900,  -924,  -924,   793,   797,   444,   807,  -924,  -924,
    -924,  -924,   813,   824,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   687,  -924,  -924,
    -924,  1376,  -924,   693,   459,   627,    21,   567,   809,   810,
     817,   791,   -28,  -924,  -924,  -924,   468,  -924,   533,   827,
     837,  -924,  -924,  -924,   929,   835,   840,  -924,  -924,   362,
     889,   838,   653,  -924,  -924,  -924,  -924,  -924,  -924,   729,
    -924,  -924,  -924,  -924,   437,  -924,  -924,  -924,  -924,  -924,
     841,   660,  -924,  -924,   362,   729,  -924,   842,   664,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  2900,   937,  2900,   489,   447,   272,   405,   170,  2944,
    3325,  2900,   103,    77,    86,   726,   843,   448,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   940,   941,  2900,   944,
    2412,  -924,  2900,  -924,  -924,   945,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  2900,  2900,  2900,
    2900,  2900,  2900,  2900,  2900,  2944,  2944,  2900,  2900,  2900,
    2900,  2900,  2900,  2900,  2900,  2900,  2900,  2900,  2900,  2900,
    2412,  -924,  2944,  -924,  2944,   294,    31,   830,  -924,   665,
    -924,  -924,  3281,  -924,  -924,  3237,  1701,  -924,  -924,  -924,
    -924,  -924,   734,  3024,  -924,  -924,   532,  -924,   848,  2412,
    2900,  2498,  -924,  2900,  2412,     0,    78,   283,   445,    80,
     849,  -924,  -924,   850,   103,  -924,   851,   854,  2699,  3104,
     103,  -924,  -924,   713,  -924,  2900,  2900,   862,  -924,   857,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   693,   693,
     459,   459,   515,    84,   515,    84,   627,   627,   627,   627,
      21,    21,   567,   809,   810,   817,   855,   791,   720,   860,
     112,    91,   114,    94,  -924,  -924,  -924,  2900,  -924,  -924,
    2944,   118,    52,    36,   401,  2944,  2944,   912,   914,    57,
      25,    61,  -924,   498,  -924,  -924,   501,   866,   623,   322,
     742,  2944,   356,  2182,   867,    33,    33,   327,    33,   868,
    2900,    33,  2900,   871,   748,   871,   870,   314,  -924,   140,
     793,   797,  1464,   317,   974,  1521,   132,  1143,  1376,   357,
    -924,  -924,  -924,   872,  2066,  -924,  -924,  -924,   361,   367,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,    82,   964,  -924,  -924,   873,   760,  2944,  -924,
    -924,  -924,  -924,   878,   877,   772,   879,  -924,  -924,  -924,
    -924,  -924,  -924,  2900,  -924,  2900,  2900,  2900,  -924,   880,
    -924,  -924,  -924,  -924,  2412,  -924,  2900,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   223,    98,   884,   886,   892,
     890,   896,   571,   245,   101,   266,   117,  2944,  2944,   895,
     898,   899,   453,  3100,   906,   107,  -924,   903,    59,   908,
     905,  3100,   910,   377,   907,   913,   915,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  2066,  -924,  -924,  -924,   245,   101,
    -924,  -924,   943,  2944,  -924,  -924,  2814,  2944,   382,  2900,
     392,  2900,  2900,  -924,   394,  2900,   396,   332,  -924,  -924,
    2814,  -924,  1820,   894,   934,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   934,   930,  -924,   609,   323,
     173,  -924,  2297,   609,  -924,  -924,  -924,  -924,  -924,  2900,
    -924,  -924,   505,   505,   571,   571,   933,    31,   571,   935,
      31,   931,   917,   378,  -924,   379,   389,  -924,   454,  -924,
     460,    88,   470,   128,   571,   571,   571,  2498,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
     936,    31,  -924,  1035,  -924,   571,   946,  -924,    31,   571,
     938,    31,  -924,  -924,   571,   948,    31,    31,  -924,   947,
     947,   950,   270,   228,  1025,   601,  1560,  1408,   939,  1213,
     375,  -924,  -924,   404,  -924,   953,    67,    66,  -924,  -924,
     412,  -924,  -924,  -924,   233,   955,  -924,  -924,   233,  -924,
    -924,   770,   871,   332,  -924,  -924,  -924,  -924,   965,  2900,
     966,   969,   973,   978,   609,  2900,  2900,  -924,  -924,   978,
    -924,   942,  -924,  -924,  -924,   980,   983,    31,   777,   984,
      31,   789,   981,  2900,  -924,  1077,  -924,  -924,  -924,  -924,
     989,  -924,   991,  2944,  2944,  2944,  2944,   990,  1001,  1004,
    -924,  2944,   792,  -924,  1005,    31,   799,  1006,  2944,   815,
    1007,    31,   820,   650,  1010,   666,   670,  2900,   972,   537,
    -924,   541,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  2900,  2900,    58,    58,  -924,  -924,  -924,  -924,  2182,
    2182,  1012,   384,  -924,  -924,  -924,  -924,  2182,  1116,  2182,
    2182,   871,  -924,  -924,  -924,  1019,  1020,  -924,  -924,   505,
     505,   676,  1023,  -924,   505,  1024,  -924,    41,  -924,  -924,
    -924,  -924,    31,    31,   281,   241,   293,   243,   298,   258,
     325,   274,  -924,  -924,  -924,   339,   276,  -924,  -924,  1028,
    -924,  -924,   342,   279,  -924,  -924,  1031,  -924,  -924,  -924,
    -924,  1026,  -924,  -924,  1033,  -924,  -924,  1018,  2900,  1131,
    2182,  2182,  -924,   404,  -924,  -924,  -924,  -924,  2900,  2900,
    1109,  -924,   569,  -924,  1134,  1134,  -924,  2182,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   505,   505,  -924,  1039,  -924,
    -924,  1040,  1052,  1053,   684,  1057,    31,    31,  1058,  1059,
    1060,  1064,  1067,  1068,  1069,  1070,  1071,   542,   550,  -924,
     551,   553,  -924,   552,   552,  -924,   414,  -924,  -924,  -924,
    -924,  2900,   233,   233,  2182,  2900,  1073,  1074,   569,  -924,
    1950,  -924,  -924,  1078,  1079,  -924,   683,   697,  -924,    31,
    -924,    31,  2412,  2412,  -924,  -924,  -924,  1081,  -924,  1065,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    2944,  -924,  2944,  -924,  -924,  2944,  -924,  2944,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   233,  -924,   953,  2182,
    2182,  -924,  1080,  -924,  -924,  -924,  2066,  -924,   871,   871,
    -924,  1090,  1092,  1085,  1087,  1086,  1091,   871,   871,  -924,
    -924,   343,   285,   349,   287,   355,   303,   360,   306,  -924,
    -924,  2182,  -924,  -924,  -924,  -924,  -924,   505,   505,  -924,
    -924,  -924,  -924,  -924,  -924,  1093,  1094,  1099,  1100,  1102,
    1105,  1106,  1108,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     346,     0,     0,   348,   347,   360,   362,   363,   355,     0,
      10,     0,     1,   377,   370,   348,   368,   371,   372,   373,
     374,   375,   376,   349,   605,   606,     0,   361,   357,     0,
     367,   366,   356,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   378,
     379,   377,   369,   607,   610,   355,     0,   358,     0,   399,
     398,     0,     0,     0,     0,     0,   380,   615,   620,   613,
     614,   616,   617,   618,   619,   621,     0,   611,     0,   365,
     364,   346,   353,    17,    22,    29,    20,    31,    30,    25,
      27,    32,    21,    23,    33,    26,    28,    24,   441,   439,
      11,    13,    16,    18,    19,    14,    15,    12,   440,     0,
     592,   562,   538,   397,   396,   400,   627,     0,   622,   625,
     612,   348,   354,   352,    36,    34,    42,    38,    37,    35,
      39,     0,     0,     0,   593,     0,     0,   563,     0,     0,
     539,     0,     0,   401,     0,   630,    73,   624,   626,     0,
     348,   348,   594,   348,   353,   405,   564,   348,   353,   540,
     348,   353,   402,   403,   348,   353,   630,   623,   608,     3,
       4,     5,     6,     0,     0,     9,     0,     7,     0,    77,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     2,     0,     0,    99,    50,    49,    53,
      54,    55,     0,    74,    56,    57,   101,   102,    58,    82,
      52,    59,    61,    62,   103,   115,    60,   107,   116,   113,
     114,   129,   106,   133,   136,   139,   148,   151,   153,   155,
     157,   159,   161,   175,   176,    75,   100,   359,   450,     0,
     438,   444,   446,   447,     0,     0,   598,   599,   591,     0,
     577,     0,   348,   568,   570,   571,   573,   572,   561,   377,
     554,   546,   547,   548,     0,   549,   550,   551,   552,   553,
       0,   348,   544,   537,     0,   377,   421,     0,   348,   410,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   395,
     609,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,   123,   123,   123,   133,     0,   100,   110,   111,
     112,    96,   104,   105,   108,   109,     0,     0,     0,     0,
      69,   628,     0,    80,    81,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,   452,     0,   451,     0,     0,   348,   601,   595,   348,
     406,   578,     0,   565,   569,     0,     0,   443,   442,   430,
     541,   545,   404,     0,   407,   411,     0,    78,     0,    69,
       0,   557,    87,     0,    69,     0,     0,     0,     0,     0,
       0,   128,   127,     0,   124,   125,     0,     0,     0,    63,
     123,    65,    66,     0,    64,     0,     0,    70,    44,     0,
      46,    76,    95,   163,   130,   131,   132,   129,   134,   135,
     137,   138,   146,   147,   144,   145,   141,   140,   142,   143,
     149,   150,   152,   154,   156,   158,     0,   160,     0,     0,
       0,     0,     0,     0,   604,   603,   445,     0,   596,   600,
       0,     0,     0,     0,   355,     0,     0,     0,     0,     0,
       0,     0,   633,     0,   482,   483,     0,     0,   355,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   318,     0,     0,     0,     0,     0,   201,     0,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   181,   182,     0,   198,   183,   179,   180,     0,     0,
     184,   185,   251,   252,   186,   193,   266,   267,   268,   269,
     187,   301,   302,   303,   304,   305,   188,   189,   190,   191,
     192,   194,   100,     0,    79,    93,     0,     0,     0,   213,
     559,   215,   214,     0,   558,     0,     0,    97,    98,    92,
      90,    91,    94,     0,   126,     0,     0,     0,   117,     0,
      71,    48,    43,    47,     0,    67,     0,    72,    68,   453,
     454,   448,   449,   177,   602,     0,     0,     0,   633,     0,
     633,     0,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,   209,   633,     0,     0,
       0,     0,     0,     0,   633,     0,     0,   534,   533,   481,
     536,   535,   526,   196,     0,   307,   306,   333,     0,     0,
     309,   308,     0,     0,   280,   279,   285,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,   334,   270,
       0,   273,     0,   211,   207,   230,   223,   233,   226,   234,
     227,   231,   224,   235,   228,   236,   229,   232,   225,   195,
     200,   205,   203,   206,   204,   208,     0,    83,    40,     0,
       0,   555,     0,    40,    84,   122,   120,   121,   118,     0,
      45,   162,     0,     0,   348,   348,     0,   348,   348,     0,
     348,     0,     0,     0,   220,     0,     0,   631,     0,   631,
       0,     0,     0,     0,   348,   348,   348,     0,   503,   502,
     514,   515,   496,   497,   504,   505,   506,   507,   508,   498,
     499,   509,   510,   511,   512,   513,   517,   516,   500,   501,
       0,   348,   427,     0,   426,   348,     0,   480,   348,   348,
       0,   348,   429,   428,   348,     0,   348,   348,   202,   218,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,   295,     0,   286,   292,     0,     0,   313,   310,
       0,   315,   312,   178,     0,     0,   317,   316,     0,   321,
     320,     0,     0,   322,   325,   323,   338,   337,     0,     0,
       0,     0,     0,    88,    40,     0,     0,   556,   560,    88,
     119,     0,   589,   587,   588,     0,     0,   348,     0,     0,
     348,     0,   528,     0,   423,     0,   422,   425,   424,   467,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
     212,     0,     0,   210,     0,   348,     0,     0,     0,     0,
       0,   348,     0,     0,     0,   348,   348,     0,     0,     0,
     341,     0,   244,   247,   248,   245,   249,   250,   246,   284,
     283,   287,     0,     0,     0,   314,   311,   282,   281,     0,
       0,     0,     0,   329,   332,   326,   324,     0,     0,     0,
       0,     0,    85,    89,    41,     0,     0,    86,   590,     0,
       0,     0,     0,   633,     0,     0,   633,     0,   527,   529,
     222,   221,   348,   348,     0,     0,     0,     0,     0,     0,
       0,     0,   436,   433,   434,     0,     0,   476,   431,     0,
     478,   435,     0,     0,   477,   432,     0,   479,   634,   634,
     634,     0,   457,   460,     0,   458,   462,     0,     0,     0,
       0,     0,   293,     0,   288,   296,   300,   299,     0,     0,
     253,   335,   257,   255,   330,   330,   336,     0,   272,   271,
     532,   216,   217,   576,   574,     0,     0,   634,     0,   575,
     634,     0,     0,     0,     0,     0,   348,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   634,
       0,     0,   634,     0,     0,   475,     0,   343,   342,   339,
     340,   289,     0,     0,     0,     0,     0,     0,   258,   259,
       0,   262,   331,     0,     0,   274,   348,   348,   579,   348,
     580,   348,    69,    69,   632,   632,   632,     0,   471,     0,
     472,   632,   522,   524,   523,   525,   518,   520,   519,   521,
       0,   484,     0,   486,   455,     0,   485,     0,   487,   456,
     466,   465,   633,   633,   277,   276,     0,   290,   294,     0,
       0,   254,     0,   265,   256,   260,   261,   263,     0,     0,
     275,     0,     0,     0,     0,     0,     0,     0,     0,   469,
     470,     0,     0,     0,     0,     0,     0,     0,     0,   463,
     464,     0,   297,   298,   264,   327,   328,     0,     0,   634,
     634,   530,   531,   631,   631,     0,     0,     0,     0,     0,
       0,     0,     0,   278,   585,   586,   581,   582,   473,   474,
     488,   491,   490,   494,   489,   493,   492,   495
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -924,  -924,  -924,  -924,   -34,  1036,    27,  -924,  1063,  -924,
     -59,  -924,  1042,  -663,   -96,   800,  -924,   648,  -924,  -924,
    -924,  -924,   123,  -357,  -924,  -924,   186,  -924,  -924,   289,
     311,  -924,   363,  -924,   410,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   814,   417,   506,   341,  -924,  -231,  -924,   821,
    -171,   508,   387,   439,   874,   875,   881,   876,   883,  -924,
    -924,   602,  -924,   565,  -631,  -638,  -509,  -460,  -258,  -924,
     213,  -924,  -924,  -924,  -317,  -450,   491,  -608,  -924,  -924,
    -501,   419,  -924,   365,  -924,  -924,  -924,  -924,  -924,  -924,
     227,  -924,   226,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
     180,  -770,   295,  -924,  -924,  -924,  -924,  -924,  -924,   240,
    -924,   380,  -924,  -924,  -924,  -924,  -924,   765,  -924,  -924,
    -924,   462,   307,   465,  -924,  -924,  -924,  -924,  -924,  -924,
     496,   324,  -924,  1179,    -2,  -924,  -924,   358,    -1,   408,
    -924,  -924,  1272,  -924,  -924,  1156,     4,  -118,  -175,  -924,
    1230,  -924,   150,  -924,  -924,  -924,  -108,  -924,  -924,  -924,
    1002,  -139,  -128,  -126,  -924,  -394,  -924,  -924,   -38,   918,
    -924,  -924,  -924,  -119,  -190,  -924,  -924,   427,   426,   282,
    -114,   372,   300,   302,  -113,  -924,   819,  -111,  -924,  -924,
     682,  -924,  -109,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  1027,  -288,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  1043,  -924,  -924,  -924,  -924,
    -805,  -924,  -683,  -924,  -924,  -924,  -924,  -924,  -924,   925,
    -924,  -924,  -924,  1275,  -924,  -924,  -924,  -924,  1157,  -924,
    -924,  -924,  -924,  1136,  -702,  -414,  -566,  -923
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   192,   193,     9,   499,   100,   194,   102,   103,   104,
     195,   106,   107,   803,   130,   571,   417,   418,   196,   197,
     198,   199,   200,   419,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   892,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   403,   404,   405,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   337,   420,   584,   784,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   605,   606,   550,   551,   519,
     703,   704,   520,   772,   521,   522,   523,   963,  1017,  1018,
    1019,  1020,  1021,   524,   525,   526,   799,  1080,   527,   528,
     636,   879,   871,   773,   953,  1066,   774,   954,  1067,   775,
     529,   958,   530,   531,   532,   533,   534,   644,   535,   536,
     793,   794,  1023,   795,   537,   538,   539,   540,   798,   541,
     859,   860,     2,     3,   238,   149,    14,   123,   236,    11,
      82,     4,     5,     6,     7,    15,    16,    17,    48,    49,
      50,    18,   115,    65,   142,   143,   156,   165,   277,   278,
     279,   261,   262,   263,   264,   239,   109,   379,   240,   241,
     242,   364,   243,   265,   854,   942,   945,   855,   856,  1062,
     266,   985,   986,   987,   267,   472,   609,   268,   473,   474,
     740,   475,   269,   476,   908,   909,   288,   619,   622,    19,
     139,   140,   161,   270,   271,   272,   552,   553,   554,    20,
     136,   137,   158,   251,   252,   253,   254,   372,   255,   256,
     902,   257,   813,    21,   133,   134,   154,   245,   246,   247,
      22,    23,    24,    25,    76,    77,    78,   117,   118,   147,
     119,   148,    26,   168,   830,  1087,   616,  1003
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    13,   105,   449,   127,   670,   378,   832,   780,   392,
     814,   128,   305,    51,   801,   905,  1004,  1005,   881,    52,
     809,   613,   696,   632,   699,   280,   601,    99,    56,   602,
     159,   345,   546,   163,   634,    58,   281,   556,   282,   126,
     590,   746,   260,    55,    30,   283,   276,    12,   755,   654,
     284,   285,   982,   286,  1028,   287,   588,  1030,   599,   956,
     108,    55,   610,    32,   126,   602,   346,   113,   113,   126,
     114,   114,   406,   407,   808,   116,  1054,   603,     1,  1059,
     126,   126,   162,   126,   375,   126,   653,   126,   101,   126,
     357,   126,   675,   705,   126,   580,   604,   126,   582,   957,
     383,   126,   693,   557,   126,   702,   126,   591,   742,   840,
     358,   125,   983,   611,     8,   758,   579,   105,   581,    51,
     126,   602,   587,   589,   304,   347,   348,   759,   760,  -629,
     747,   126,   612,   663,   155,   635,   125,   155,   166,   280,
     155,   894,   295,   116,   653,   706,   708,   129,    51,    31,
     281,   244,   282,   260,    52,   250,   349,   350,   259,   283,
     276,   888,   275,   125,   284,   285,   382,   286,   124,   287,
     428,   429,   129,   126,    54,   298,   126,   129,   125,   569,
     359,   558,   307,   561,   360,   316,  1126,  1127,   401,   129,
     834,   129,   910,   129,   317,   129,  -345,   401,   701,   129,
     127,   128,   129,   101,   743,   129,   402,   402,   402,   129,
     303,   410,   129,   744,   401,   618,   973,   974,   621,   947,
      79,   979,   627,   125,  1083,   125,  1084,   692,   129,   124,
     836,   126,   858,   952,   877,   647,   648,   649,   664,   129,
     105,   105,  1069,  1070,   126,   990,   126,   992,   370,   702,
     250,   125,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,   126,   994,  -113,  -113,   395,   398,    32,   393,   259,
     602,   806,   394,   155,   858,   126,   275,   126,   996,   126,
     998,   129,   126,  1001,   129,   989,   105,   105,   126,  1116,
     126,  1118,  1026,  1027,  -629,   454,  1101,   991,   396,   399,
     815,   816,   993,   105,   819,   105,   126,  1120,   402,   126,
    1122,   432,   434,   105,   402,   651,   105,   501,   657,   771,
     837,   838,   839,   625,   105,    80,   101,   101,   450,   995,
     452,   638,   113,   797,   125,   114,   878,   978,   462,   129,
     981,   470,   639,   997,   433,   435,  1000,  1115,   791,   470,
     640,   844,   129,  1117,   129,   847,   125,   630,   667,  1119,
     850,   451,   671,   453,  1121,   792,    55,   244,   673,   129,
     390,   463,   101,   101,   471,   542,   868,   125,   752,   824,
     827,   125,   471,   778,  1072,   129,   559,   129,    55,   101,
     129,   101,   125,   781,   124,   786,   129,   789,   129,   101,
     455,   105,   101,   500,   125,   869,   105,   105,   126,   125,
     101,  1128,  1129,   875,   129,  1064,   652,   129,    57,   960,
     961,   805,   105,   658,  1124,  1125,   585,   966,   626,   968,
     969,   593,   595,    81,   125,    91,   125,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,    28,   628,  -101,  -101,
     125,   126,    94,   125,   125,   501,  -101,  -101,  -101,   586,
     125,   110,   631,   668,   594,   596,   125,   672,   600,   607,
     614,   125,  -239,   674,   743,   825,   825,   386,  -239,   111,
     629,  -239,    28,   753,   826,   828,   743,   101,   779,   105,
    1009,  1010,   101,   101,    29,   829,  1099,  1100,   782,   502,
     787,   291,   790,   592,   413,   391,   112,  1025,   101,    28,
     870,   292,   248,   542,   679,   893,   258,    59,   876,   273,
    1065,   893,   144,   289,   145,   308,   309,   310,   311,   312,
     313,   314,   315,   883,   884,    60,   120,   376,   105,   105,
      61,   500,   318,   377,    62,   448,   359,   680,   560,   389,
     360,   743,   319,  -355,  1071,  -355,   125,    67,   125,    63,
     831,    28,   833,   710,   712,   501,   359,   670,   341,   342,
     360,   125,   835,   717,   105,   101,   547,   501,   105,   555,
      84,   125,   804,    85,  1015,    64,   361,   804,   362,    68,
     122,   501,  1016,   363,   707,   709,   711,   713,   376,   762,
     124,   376,   863,   776,   617,   811,   502,   620,    89,  1102,
    1103,   812,   126,    90,    69,    70,    71,    72,    73,    74,
      75,  1088,  1089,   542,   101,   101,   125,  1090,    92,   322,
      93,   544,   763,   970,   949,   542,   777,   502,   949,  1050,
     950,  1123,    95,    96,   951,  1051,    97,  1052,  1055,   542,
    1057,   500,   376,  1053,  1056,   929,  1058,   146,  1060,   818,
     101,   936,   821,   500,   101,   503,   637,   131,   641,  -629,
    -629,   645,   151,  -350,  -437,  1085,  1086,   500,   153,   424,
     425,   426,   427,   427,   427,   427,   132,   504,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,  -240,   427,
     351,   352,  -629,   842,  -240,  -351,  -629,  -240,   804,  -597,
     846,   235,  -629,   849,   135,  -566,  -629,   508,   852,  -542,
     138,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
     624,    28,  -101,  -101,   436,   437,   438,   439,    33,   505,
    -101,  -101,  -101,   938,   939,  1061,  1061,   502,   306,   424,
    -629,  -629,   141,  -408,  -567,   853,   343,   344,  -629,   764,
      34,  -543,  -629,  -629,  -629,  -409,   458,  -459,  -629,   975,
     976,  -461,   503,    35,   105,   105,   105,   105,    37,  1034,
    1035,  -629,   105,    38,  -583,    39,    40,    41,    42,   105,
     440,   441,    43,   506,   504,  -629,    44,   237,  -584,   914,
     916,   918,   920,   503,   338,   339,   340,   925,    45,   157,
     322,    46,   570,    47,   932,   901,   160,   322,   901,   577,
    1105,  1106,   164,   964,   508,   504,   323,   324,   325,  1113,
    1114,   249,   915,   917,   919,   921,  -344,   408,   339,   340,
     926,   274,   376,   853,   293,    33,   505,   933,   376,   853,
     301,   430,   431,   941,   944,   508,   235,   322,   388,   678,
     101,   101,   101,   101,   293,   299,   400,    34,   101,   322,
     376,   683,   882,   300,   366,   101,   903,   505,   608,   608,
      35,   965,   507,   235,    36,    37,   366,   421,   906,   366,
      38,   927,    39,    40,    41,    42,   366,   301,   930,    43,
     506,   316,   423,    44,   685,   317,   686,   687,   688,   320,
     984,   984,   366,   503,   934,    45,   321,   366,    46,   937,
      47,   322,   446,   353,   235,   765,   873,   874,   356,   354,
     365,   506,   355,   367,   366,   504,   368,   369,   371,   373,
     866,   387,   380,   384,   411,   412,   409,   766,   414,   422,
     457,   545,   562,   563,   565,   235,   549,   566,   235,   574,
     575,   501,   576,   578,   597,   508,   598,   623,   676,   633,
     642,   376,   650,   669,   682,   659,   677,   508,   509,   681,
     572,   572,   684,   689,  1037,  1039,   694,   505,   695,   507,
     697,   105,   698,   105,   700,   764,   105,   714,   105,   767,
     715,   716,   502,   502,   741,   745,   748,   749,   751,   754,
     502,   756,   502,   502,   717,   757,  1091,   501,  1093,   542,
     507,  1095,   583,  1097,  1081,  1082,   862,   901,   761,   901,
     810,   743,   802,   817,   822,   820,  -242,   823,   841,   653,
     848,   506,  -242,   898,   825,  -242,   845,   500,   851,  1092,
     872,  1094,   857,   768,  1096,   643,  1098,   643,   880,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   887,   889,
    -113,  -113,   890,   502,   502,   542,   891,   101,   391,   101,
     660,   702,   101,   899,   101,   509,   900,   904,   907,   912,
     502,   913,   948,   922,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   500,   923,  -102,  -102,   924,   928,   931,
     935,   940,   962,  -102,  -102,  -102,   509,   967,   971,   972,
     939,  1006,  -237,   -54,   977,   980,   938,   -54,  -237,   999,
     507,  -237,  1002,   -54,   764,   858,  1014,   502,  1022,  1029,
    1031,   691,   769,   502,   665,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,  1032,  1033,   -54,   -54,  1036,  1041,
    1034,   765,  1042,  1043,   -54,   -54,   -54,  1044,   503,   503,
    1045,  1046,  1047,  1048,  1049,  1074,   503,  1035,   503,   503,
    1073,  1078,  1079,   766,  1107,  1108,  1109,  1104,  1110,  1111,
     504,   504,   502,   502,  1112,   152,  1130,  1131,   504,   502,
     504,   504,  1132,  1133,   583,  1134,   783,   785,  1135,  1136,
     788,  1137,   296,   508,   867,   796,   573,   783,   297,   897,
     508,   508,   690,   568,   502,   564,   509,   442,   508,   443,
     508,   508,   445,  1076,   843,   767,   444,   955,   770,   503,
     503,   447,   505,   505,   911,  1075,  1077,   549,  1011,   666,
     505,  1068,   505,   505,   959,   885,   503,   646,   886,   861,
     121,   504,   504,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  1024,  1008,  -114,  -114,    27,   150,   504,    66,
     385,   943,   549,   946,   456,   988,  1063,  1040,  1038,   768,
     615,   508,   508,   750,   459,   374,   506,   506,   381,    53,
     765,   167,   290,   503,   506,     0,   506,   506,   508,   503,
    -243,     0,     0,   505,   505,     0,  -243,     0,     0,  -243,
       0,     0,   766,     0,     0,   504,     0,     0,     0,     0,
     505,   504,     0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,     0,     0,  -114,  -114,     0,     0,     0,     0,
       0,     0,   508,     0,     0,   508,     0,     0,   503,   503,
       0,   508,     0,     0,   783,   503,     0,   506,   506,     0,
     895,   896,     0,     0,   767,     0,     0,   505,   769,     0,
     504,   504,     0,   505,   506,   507,   507,   504,   583,     0,
     503,     0,     0,   507,     0,   507,   507,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,   865,
     508,   508,   504,     0,     0,     0,     0,   508,     0,     0,
       0,     0,   783,     0,     0,     0,     0,    34,   768,     0,
       0,   506,   505,   505,     0,     0,   783,   506,     0,   505,
      35,     0,   508,     0,    36,    37,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,   507,   507,     0,    43,
       0,     0,     0,    44,   505,   655,     0,     0,     0,     0,
       0,     0,     0,   507,   770,    45,     0,     0,    46,     0,
      47,   509,   509,     0,     0,     0,   506,   506,     0,   509,
       0,   509,   509,   506,     0,     0,   326,   327,   328,   329,
     330,   331,   332,   333,   334,  -238,   -82,   335,   336,     0,
     -82,  -238,     0,  1007,  -238,     0,   -82,   769,   506,     0,
     507,     0,   661,  1012,  1013,     0,   507,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
       0,     0,   509,   509,     0,     0,     0,     0,     0,     0,
       0,   864,   -54,     0,     0,     0,   -54,     0,     0,   509,
     656,     0,   -54,     0,     0,   507,   507,     0,     0,     0,
     583,     0,   507,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,   -54,   -54,     0,     0,     0,
       0,     0,     0,   -54,   -54,   -54,     0,   507,     0,     0,
       0,     0,     0,   770,     0,     0,   509,     0,     0,   -82,
       0,     0,   509,   -82,     0,     0,     0,   662,     0,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,   -82,     0,     0,     0,  -241,     0,     0,
     -82,   -82,   -82,  -241,     0,     0,  -241,     0,     0,     0,
       0,   509,   509,     0,     0,     0,     0,     0,   509,     0,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,     0,
       0,  -102,  -102,     0,     0,     0,     0,     0,     0,  -102,
    -102,  -102,   477,   509,     0,   478,   169,   170,   171,   172,
       0,     0,   173,    83,   479,    84,     0,     0,    85,   480,
       0,   481,   482,    86,     0,     0,   483,    87,     0,     0,
       0,     0,     0,   175,     0,   484,    88,   485,   486,   487,
     488,     0,     0,    89,     0,     0,     0,   489,    90,     0,
     176,   177,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,    92,     0,    93,   178,     0,     0,    94,
       0,   491,   179,   492,   180,   493,   181,    95,    96,   494,
     495,    97,   496,     0,   294,     0,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   376,  -197,   183,     0,     0,     0,   498,     0,     0,
     184,   185,   186,     0,     0,   187,     0,   188,   189,     0,
       0,   800,     0,     0,    55,   169,   170,   171,   172,     0,
       0,   173,    83,     0,    84,     0,     0,    85,   174,     0,
     190,   191,    86,     0,     0,     0,    87,     0,     0,     0,
       0,     0,   175,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,    90,    55,   176,
     177,    91,     0,     0,     0,     0,    83,     0,    84,     0,
       0,    85,    92,     0,    93,   178,    86,     0,    94,     0,
      87,   179,     0,   180,     0,   181,    95,    96,   182,    88,
      97,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,    92,     0,    93,   184,
     185,   186,    94,     0,   187,     0,   188,   189,     0,     0,
      95,    96,     0,     0,    97,     0,     0,    98,     0,     0,
       0,     0,     0,     0,   478,   169,   170,   171,   172,   190,
     191,   173,    83,   479,    84,  1015,     0,    85,   480,     0,
     481,   482,    86,  1016,     0,   483,    87,     0,     0,     0,
       0,     0,   175,     0,   484,    88,   485,   486,   487,   488,
       0,     0,    89,     0,     0,     0,   489,    90,     0,   176,
     177,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   490,    92,     0,    93,   178,     0,     0,    94,     0,
     491,   179,   492,   180,   493,   181,    95,    96,   494,   495,
      97,   496,     0,   294,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,     0,   183,     0,     0,     0,   498,     0,     0,   184,
     185,   186,     0,     0,   187,     0,   188,   189,     0,     0,
     478,   169,   170,   171,   172,     0,     0,   173,    83,   479,
      84,     0,     0,    85,   480,     0,   481,   482,    86,   190,
     191,   483,    87,     0,     0,     0,     0,     0,   175,     0,
     484,    88,   485,   486,   487,   488,     0,     0,    89,     0,
       0,     0,   489,    90,     0,   176,   177,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,    92,     0,
      93,   178,     0,     0,    94,     0,   491,   179,   492,   180,
     493,   181,    95,    96,   494,   495,    97,   496,     0,   294,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,   183,     0,
       0,     0,   498,     0,     0,   184,   185,   186,     0,     0,
     187,     0,   188,   189,     0,     0,    55,   169,   170,   171,
     172,     0,     0,   173,    83,   479,    84,     0,     0,    85,
     480,     0,     0,   482,    86,   190,   191,   483,    87,     0,
       0,     0,     0,     0,   175,     0,   484,    88,   485,   486,
     487,   488,     0,     0,    89,     0,     0,     0,   489,    90,
       0,   176,   177,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   490,    92,     0,    93,   178,     0,     0,
      94,     0,   491,   179,   492,   180,   493,   181,    95,    96,
     494,   495,    97,   496,     0,     0,     0,   497,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,   183,     0,     0,     0,   498,     0,
       0,   184,   185,   186,     0,     0,   187,     0,   188,   189,
       0,    55,   169,   170,   171,   172,     0,     0,   173,    83,
       0,    84,     0,     0,    85,   174,     0,     0,     0,    86,
       0,   190,   191,    87,     0,     0,     0,     0,     0,   175,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   176,   177,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,    93,   178,   548,     0,    94,     0,     0,   179,     0,
     180,     0,   181,    95,    96,   182,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   391,   807,   183,
       0,     0,     0,     0,     0,     0,   184,   185,   186,     0,
       0,   187,     0,   188,   189,     0,    55,   169,   170,   171,
     172,     0,     0,   173,    83,     0,    84,     0,     0,    85,
     174,     0,     0,     0,    86,     0,   190,   191,    87,     0,
       0,     0,     0,     0,   175,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
       0,   176,   177,    91,     0,   415,     0,     0,     0,     0,
       0,     0,   416,     0,    92,     0,    93,   178,     0,     0,
      94,     0,     0,   179,     0,   180,     0,   181,    95,    96,
     182,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   169,   170,   171,   172,     0,     0,   173,
      83,     0,    84,     0,   183,    85,   174,     0,     0,     0,
      86,   184,   185,   186,    87,     0,   187,     0,   188,   189,
     175,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,    90,     0,   176,   177,    91,
       0,   190,   191,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,   178,   548,     0,    94,     0,     0,   179,
       0,   180,     0,   181,    95,    96,   182,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     0,
     183,     0,     0,     0,     0,     0,     0,   184,   185,   186,
       0,     0,   187,     0,   188,   189,     0,    55,   169,   170,
     171,   172,     0,     0,   173,    83,     0,    84,     0,     0,
      85,   174,     0,     0,     0,    86,     0,   190,   191,    87,
       0,     0,     0,     0,     0,   175,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      90,     0,   176,   177,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,   178,     0,
       0,    94,     0,     0,   179,     0,   180,     0,   181,    95,
      96,   182,     0,    97,     0,     0,   302,     0,     0,     0,
       0,     0,     0,    55,   169,   170,   171,   172,     0,     0,
     173,    83,     0,    84,     0,   183,    85,   174,     0,     0,
       0,    86,   184,   185,   186,    87,     0,   187,     0,   188,
     189,   175,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    90,     0,   176,   177,
      91,     0,   190,   191,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,   178,     0,     0,    94,     0,     0,
     179,     0,   180,     0,   181,    95,    96,   182,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,   567,     0,     0,     0,     0,     0,   184,   185,
     186,     0,     0,   187,     0,   188,   189,     0,    55,   169,
     170,   171,   172,     0,     0,   173,    83,     0,    84,     0,
       0,    85,   174,     0,     0,     0,    86,     0,   190,   191,
      87,     0,     0,     0,     0,     0,   175,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,   176,   177,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,   178,
       0,     0,    94,     0,     0,   179,     0,   180,     0,   181,
      95,    96,   182,     0,    97,     0,     0,   294,     0,     0,
       0,     0,     0,     0,    55,   169,   170,   171,   172,     0,
       0,   173,    83,     0,    84,     0,   183,    85,   174,     0,
       0,     0,    86,   184,   185,   186,    87,     0,   187,     0,
     188,   189,   175,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,    90,    55,   176,
     177,    91,     0,   190,   191,     0,    83,     0,    84,     0,
       0,    85,    92,     0,    93,   178,    86,     0,    94,     0,
      87,   179,     0,   180,     0,   181,    95,    96,   182,    88,
      97,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,    92,     0,    93,   184,
     185,   186,    94,     0,   187,     0,   188,   189,     0,     0,
      95,    96,     0,     0,    97,    59,     0,   294,   464,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    84,   190,
     191,    85,     0,    60,   465,     0,    86,     0,    61,     0,
      87,     0,    62,   466,   467,     0,     0,     0,     0,    88,
       0,     0,     0,     0,   468,     0,    89,    63,     0,     0,
       0,    90,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,     0,
       0,     0,    94,    64,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,     0,   469,    55,   169,
     170,   171,   172,     0,     0,   173,    83,     0,    84,     0,
       0,    85,   174,     0,     0,     0,    86,     0,     0,     0,
      87,     0,   718,     0,     0,     0,   175,     0,     0,    88,
       0,   543,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    90,     0,   176,   177,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,   178,
       0,     0,    94,   719,     0,   179,     0,   180,     0,   181,
      95,    96,   182,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   720,   721,   183,     0,     0,   722,
     723,   724,   725,   726,   727,   728,   729,   730,     0,   731,
     188,   189,     0,     0,     0,     0,     0,     0,     0,   732,
     733,     0,     0,   734,   735,   736,   737,     0,    59,   738,
     739,   464,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,     0,     0,    85,     0,    60,   465,     0,    86,
       0,    61,     0,    87,     0,    62,   466,   467,     0,     0,
       0,     0,    88,     0,     0,     0,     0,   468,     0,    89,
      63,     0,     0,     0,    90,    55,     0,     0,    91,     0,
       0,     0,     0,    83,     0,    84,     0,     0,    85,    92,
       0,    93,     0,    86,     0,    94,    64,    87,     0,     0,
     460,     0,     0,    95,    96,     0,    88,    97,     0,     0,
     469,     0,     0,    89,     0,     0,     0,     0,    90,    55,
       0,     0,    91,     0,     0,     0,     0,    83,     0,    84,
       0,     0,    85,    92,     0,    93,     0,    86,     0,    94,
       0,    87,     0,     0,     0,     0,     0,    95,    96,     0,
      88,    97,     0,     0,   461,     0,     0,    89,     0,     0,
       0,     0,    90,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,     0,   397
};

static const yytype_int16 yycheck[] =
{
       1,     3,    61,   360,   100,   514,   264,   709,   639,   297,
     693,   107,   183,    15,   652,   820,   939,   940,   788,    15,
     683,   471,   588,   483,   590,   164,     1,    61,    29,     4,
     138,    10,   389,   141,     1,    36,   164,   394,   164,     3,
       4,   607,   160,     4,     1,   164,   164,     0,   614,   499,
     164,   164,    11,   164,   977,   164,     4,   980,     1,     1,
      61,     4,     1,     4,     3,     4,    45,     1,     1,     3,
       4,     4,   303,   304,   682,    76,   999,    52,    81,  1002,
       3,     3,   141,     3,   259,     3,     4,     3,    61,     3,
     118,     3,   542,   594,     3,     4,    71,     3,     4,    41,
     275,     3,     4,   103,     3,     4,     3,    71,     1,   717,
     138,   111,    71,    52,     4,   624,     4,   176,     4,   121,
       3,     4,     4,    71,   183,   104,   105,   628,   629,    98,
      71,     3,    71,     1,   135,   102,   111,   138,    99,   278,
     141,   804,   176,   144,     4,   595,   596,   111,   150,   106,
     278,   153,   278,   271,   150,   157,   135,   136,   160,   278,
     278,   799,   164,   111,   278,   278,   274,   278,   111,   278,
     341,   342,   111,     3,    98,   176,     3,   111,   111,   410,
      98,   103,   183,   103,   102,   108,  1109,  1110,   111,   111,
     102,   111,   823,   111,   108,   111,     0,   111,   592,   111,
     296,   297,   111,   176,    97,   111,   302,   303,   304,   111,
     183,   307,   111,   106,   111,   473,   899,   900,   476,   857,
       1,   904,   480,   111,  1029,   111,  1031,     4,   111,   111,
     102,     3,     4,   871,     1,   493,   494,   495,   106,   111,
     299,   300,  1012,  1013,     3,     4,     3,     4,   249,     4,
     252,   111,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,   131,   132,   299,   300,     4,    98,   271,
       4,    98,   102,   274,     4,     3,   278,     3,     4,     3,
       4,   111,     3,     4,   111,     4,   345,   346,     3,     4,
       3,     4,   975,   976,    98,     1,  1066,     4,   299,   300,
     694,   695,     4,   362,   698,   364,     3,     4,   404,     3,
       4,   345,   346,   372,   410,     1,   375,   376,     1,   636,
     714,   715,   716,     1,   383,   106,   299,   300,   362,     4,
     364,     4,     1,   650,   111,     4,   103,   903,   372,   111,
     906,   375,    15,     4,   345,   346,     4,     4,    16,   383,
      23,   745,   111,     4,   111,   749,   111,     1,     1,     4,
     754,   362,     1,   364,     4,    33,     4,   369,     1,   111,
      98,   372,   345,   346,   375,   376,     1,   111,     1,     1,
       1,   111,   383,     1,  1015,   111,   103,   111,     4,   362,
     111,   364,   111,     1,   111,     1,   111,     1,   111,   372,
     106,   460,   375,   376,   111,     1,   465,   466,     3,   111,
     383,  1113,  1114,     1,   111,     1,   102,   111,   108,   879,
     880,    98,   481,   106,  1107,  1108,   460,   887,   106,   889,
     890,   465,   466,   100,   111,    51,   111,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   108,   481,   131,   132,
     111,     3,    68,   111,   111,   514,   139,   140,   141,   460,
     111,     4,   106,   106,   465,   466,   111,   106,   469,   470,
     471,   111,    97,   106,    97,    97,    97,   291,   103,     4,
     481,   106,   108,   106,   106,   106,    97,   460,   106,   548,
     950,   951,   465,   466,   120,   106,  1062,  1063,   106,   376,
     106,    98,   106,   102,   318,   100,     4,   967,   481,   108,
     106,   108,   154,   514,   548,   803,   158,     1,   106,   161,
     106,   809,    97,   165,    99,   184,   185,   186,   187,   188,
     189,   190,   191,   791,   792,    19,   107,   100,   597,   598,
      24,   514,    98,   106,    28,   359,    98,   548,   103,   102,
     102,    97,   108,   100,  1014,   102,   111,    29,   111,    43,
     106,   108,   102,   597,   598,   624,    98,  1076,   109,   110,
     102,   111,   102,   120,   633,   548,   390,   636,   637,   393,
      14,   111,   678,    17,    15,    69,    53,   683,    55,    61,
     106,   650,    23,    60,   595,   596,   597,   598,   100,   633,
     111,   100,     1,   637,   106,   100,   483,   106,    42,  1069,
    1070,   106,     3,    47,    86,    87,    88,    89,    90,    91,
      92,  1035,  1036,   624,   597,   598,   111,  1041,    62,    97,
      64,    99,   633,   891,    97,   636,   637,   514,    97,    97,
     103,  1101,    76,    77,   103,   103,    80,    97,    97,   650,
      97,   624,   100,   103,   103,   845,   103,   102,   106,   697,
     633,   851,   700,   636,   637,   376,   486,     4,   488,    98,
      98,   491,   102,   101,   103,  1032,  1033,   650,   100,   338,
     339,   340,   341,   342,   343,   344,   107,   376,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,    97,   358,
     133,   134,    98,   741,   103,   101,    98,   106,   804,   101,
     748,   146,    98,   751,   107,   101,    98,   376,   756,   101,
     107,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     107,   108,   131,   132,   347,   348,   349,   350,     9,   376,
     139,   140,   141,    93,    94,  1003,  1004,   624,   183,   408,
      98,    98,   107,   101,   101,   757,   129,   130,    98,   636,
      31,   101,    98,    98,    98,   101,   101,   101,    98,    93,
      94,   101,   483,    44,   833,   834,   835,   836,    49,    95,
      96,    98,   841,    54,   101,    56,    57,    58,    59,   848,
     351,   352,    63,   376,   483,    98,    67,   101,   101,   833,
     834,   835,   836,   514,   111,   112,   113,   841,    79,   100,
      97,    82,    99,    84,   848,   817,   100,    97,   820,    99,
    1078,  1079,   100,   882,   483,   514,   139,   140,   141,  1087,
    1088,    97,   833,   834,   835,   836,     0,   111,   112,   113,
     841,    97,   100,   845,   102,     9,   483,   848,   100,   851,
     102,   343,   344,   855,   856,   514,   291,    97,   293,    99,
     833,   834,   835,   836,   102,   102,   301,    31,   841,    97,
     100,    99,   102,   102,    97,   848,    99,   514,   470,   471,
      44,   882,   376,   318,    48,    49,    97,   322,    99,    97,
      54,    99,    56,    57,    58,    59,    97,   102,    99,    63,
     483,   108,   337,    67,   563,   108,   565,   566,   567,   102,
     912,   913,    97,   624,    99,    79,   103,    97,    82,    99,
      84,    97,   357,   114,   359,   636,   776,   777,   137,   119,
     103,   514,   115,     4,    97,   624,   101,    97,    49,   101,
       1,     4,   101,   101,     4,     4,   103,   636,     4,     4,
     120,   103,   103,   103,   103,   390,   391,   103,   393,    97,
     103,  1020,   107,   103,    52,   624,    52,   101,     4,   102,
     102,   100,   102,   101,    97,     1,   103,   636,   376,   101,
     415,   416,   103,   103,   986,   987,   102,   624,   102,   483,
      98,  1050,   102,  1052,    98,   872,  1055,   102,  1057,   636,
     102,   102,   879,   880,    98,   102,    98,   102,    98,   102,
     887,    98,   889,   890,   120,   100,  1050,  1076,  1052,  1020,
     514,  1055,   457,  1057,  1026,  1027,     1,  1029,    85,  1031,
     689,    97,   102,   100,   103,   100,    97,   120,   102,     4,
     102,   624,   103,   101,    97,   106,   100,  1020,   100,  1050,
      97,  1052,   102,   636,  1055,   490,  1057,   492,   103,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   103,   103,
     131,   132,   103,   950,   951,  1076,   103,  1050,   100,  1052,
     106,     4,  1055,   103,  1057,   483,   103,   103,   107,   100,
     967,   100,   120,   103,   120,   121,   122,   123,   124,   125,
     126,   127,   128,  1076,   103,   131,   132,   103,   103,   103,
     103,   101,   100,   139,   140,   141,   514,     1,    99,    99,
      94,   103,    97,    98,   101,   101,    93,   102,   103,   101,
     624,   106,   101,   108,  1011,     4,    27,  1014,     4,   100,
     100,   576,   636,  1020,     1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   102,   102,   131,   132,   101,   101,
      95,   872,   103,   103,   139,   140,   141,   103,   879,   880,
     103,   103,   103,   103,   103,   101,   887,    96,   889,   890,
     107,   103,   103,   872,    94,    93,   101,   107,   101,   103,
     879,   880,  1069,  1070,   103,   132,   103,   103,   887,  1076,
     889,   890,   103,   103,   639,   103,   641,   642,   103,   103,
     645,   103,   176,   872,     1,   650,   416,   652,   176,   809,
     879,   880,   574,   409,  1101,   404,   624,   353,   887,   354,
     889,   890,   356,  1020,   743,   872,   355,   872,   636,   950,
     951,   358,   879,   880,   825,  1018,  1020,   682,   953,   106,
     887,  1011,   889,   890,   874,   793,   967,   492,   793,   763,
      81,   950,   951,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   965,   949,   131,   132,     4,   121,   967,    49,
     278,   855,   717,   856,   366,   913,  1004,   987,   986,   872,
     471,   950,   951,   611,   369,   252,   879,   880,   271,    24,
    1011,   144,   166,  1014,   887,    -1,   889,   890,   967,  1020,
      97,    -1,    -1,   950,   951,    -1,   103,    -1,    -1,   106,
      -1,    -1,  1011,    -1,    -1,  1014,    -1,    -1,    -1,    -1,
     967,  1020,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,  1011,    -1,    -1,  1014,    -1,    -1,  1069,  1070,
      -1,  1020,    -1,    -1,   799,  1076,    -1,   950,   951,    -1,
     805,   806,    -1,    -1,  1011,    -1,    -1,  1014,   872,    -1,
    1069,  1070,    -1,  1020,   967,   879,   880,  1076,   823,    -1,
    1101,    -1,    -1,   887,    -1,   889,   890,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,     1,
    1069,  1070,  1101,    -1,    -1,    -1,    -1,  1076,    -1,    -1,
      -1,    -1,   857,    -1,    -1,    -1,    -1,    31,  1011,    -1,
      -1,  1014,  1069,  1070,    -1,    -1,   871,  1020,    -1,  1076,
      44,    -1,  1101,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,   950,   951,    -1,    63,
      -1,    -1,    -1,    67,  1101,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   967,   872,    79,    -1,    -1,    82,    -1,
      84,   879,   880,    -1,    -1,    -1,  1069,  1070,    -1,   887,
      -1,   889,   890,  1076,    -1,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    97,    98,   131,   132,    -1,
     102,   103,    -1,   948,   106,    -1,   108,  1011,  1101,    -1,
    1014,    -1,     1,   958,   959,    -1,  1020,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,   131,
     132,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
      -1,    -1,   950,   951,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    98,    -1,    -1,    -1,   102,    -1,    -1,   967,
     106,    -1,   108,    -1,    -1,  1069,  1070,    -1,    -1,    -1,
    1015,    -1,  1076,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,   131,   132,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,    -1,  1101,    -1,    -1,
      -1,    -1,    -1,  1011,    -1,    -1,  1014,    -1,    -1,    98,
      -1,    -1,  1020,   102,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,   131,   132,    -1,    -1,    -1,    97,    -1,    -1,
     139,   140,   141,   103,    -1,    -1,   106,    -1,    -1,    -1,
      -1,  1069,  1070,    -1,    -1,    -1,    -1,    -1,  1076,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,     1,  1101,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,    -1,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
     139,   140,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,
      50,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    65,    22,    -1,    68,    -1,
      26,    71,    -1,    73,    -1,    75,    76,    77,    78,    35,
      80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,
     110,   111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,   139,
     140,    11,    12,    13,    14,    15,    -1,    17,    18,    -1,
      20,    21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
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
      14,    -1,    -1,    17,    18,    -1,    20,    21,    22,   139,
     140,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,    -1,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    -1,    -1,    21,    22,   139,   140,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,    -1,   116,   117,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,   139,   140,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,    -1,   116,   117,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    22,    -1,   139,   140,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,   102,    17,    18,    -1,    -1,    -1,
      22,   109,   110,   111,    26,    -1,   114,    -1,   116,   117,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,    -1,   116,   117,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,   139,   140,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,   102,    17,    18,    -1,
      -1,    -1,    22,   109,   110,   111,    26,    -1,   114,    -1,
     116,   117,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,    49,
      50,    51,    -1,   139,   140,    -1,    12,    -1,    14,    -1,
      -1,    17,    62,    -1,    64,    65,    22,    -1,    68,    -1,
      26,    71,    -1,    73,    -1,    75,    76,    77,    78,    35,
      80,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    62,    -1,    64,   109,
     110,   111,    68,    -1,   114,    -1,   116,   117,    -1,    -1,
      76,    77,    -1,    -1,    80,     1,    -1,    83,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,   139,
     140,    17,    -1,    19,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    83,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    32,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,   117,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    73,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   102,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,   119,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,     1,   139,
     140,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    22,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,     4,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    62,
      -1,    64,    -1,    22,    -1,    68,    69,    26,    -1,    -1,
      29,    -1,    -1,    76,    77,    -1,    35,    80,    -1,    -1,
      83,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,     4,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    62,    -1,    64,    -1,    22,    -1,    68,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
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
       0,    81,   275,   276,   284,   285,   286,   287,     4,   146,
     281,   282,     0,   277,   279,   288,   289,   290,   294,   342,
     352,   366,   373,   374,   375,   376,   385,   285,   108,   120,
       1,   106,     4,     9,    31,    44,    48,    49,    54,    56,
      57,    58,    59,    63,    67,    79,    82,    84,   291,   292,
     293,   277,   289,   376,    98,     4,   281,   108,   281,     1,
      19,    24,    28,    43,    69,   296,   293,    29,    61,    86,
      87,    88,    89,    90,    91,    92,   377,   378,   379,     1,
     106,   100,   283,    12,    14,    17,    22,    26,    35,    42,
      47,    51,    62,    64,    68,    76,    77,    80,    83,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   281,   309,
       4,     4,     4,     1,     4,   295,   281,   380,   381,   383,
     107,   276,   106,   280,   111,   111,     3,   157,   157,   111,
     157,     4,   107,   367,   368,   107,   353,   354,   107,   343,
     344,   107,   297,   298,    97,    99,   102,   382,   384,   278,
     288,   102,   151,   100,   369,   281,   299,   100,   355,   299,
     100,   345,   153,   299,   100,   300,    99,   381,   386,     5,
       6,     7,     8,    11,    18,    32,    49,    50,    65,    71,
      73,    75,    78,   102,   109,   110,   111,   114,   116,   117,
     139,   140,   144,   145,   149,   153,   161,   162,   163,   164,
     165,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   206,   281,   101,   277,   308,
     311,   312,   313,   315,   277,   370,   371,   372,   280,    97,
     277,   356,   357,   358,   359,   361,   362,   364,   280,   277,
     290,   304,   305,   306,   307,   316,   323,   327,   330,   335,
     346,   347,   348,   280,    97,   277,   290,   301,   302,   303,
     304,   305,   306,   316,   323,   327,   330,   335,   339,   280,
     386,    98,   108,   102,    83,   147,   148,   155,   281,   102,
     102,   102,    83,   149,   153,   193,   206,   281,   188,   188,
     188,   188,   188,   188,   188,   188,   108,   108,    98,   108,
     102,   103,    97,   139,   140,   141,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   131,   132,   205,   111,   112,
     113,   109,   110,   129,   130,    10,    45,   104,   105,   135,
     136,   133,   134,   114,   119,   115,   137,   118,   138,    98,
     102,    53,    55,    60,   314,   103,    97,     4,   101,    97,
     281,    49,   360,   101,   358,   291,   100,   106,   211,   310,
     101,   348,   299,   291,   101,   303,   169,     4,   206,   102,
      98,   100,   349,    98,   102,   147,   281,    83,   147,   281,
     206,   111,   157,   190,   191,   192,   190,   190,   111,   103,
     157,     4,     4,   169,     4,    53,    60,   159,   160,   166,
     206,   206,     4,   206,   188,   188,   188,   188,   193,   193,
     194,   194,   147,   281,   147,   281,   195,   195,   195,   195,
     196,   196,   197,   198,   199,   200,   206,   201,   169,   166,
     147,   281,   147,   281,     1,   106,   312,   120,   101,   372,
      29,    83,   147,   281,     4,    20,    29,    30,    40,    83,
     147,   281,   328,   331,   332,   334,   336,     1,     4,    13,
      18,    20,    21,    25,    34,    36,    37,    38,    39,    46,
      61,    70,    72,    74,    78,    79,    81,    85,   106,   147,
     149,   153,   165,   172,   173,   175,   186,   187,   188,   204,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   222,
     225,   227,   228,   229,   236,   237,   238,   241,   242,   253,
     255,   256,   257,   258,   259,   261,   262,   267,   268,   269,
     270,   272,   281,   117,    99,   103,   166,   169,    66,   206,
     220,   221,   349,   350,   351,   169,   166,   103,   103,   103,
     103,   103,   103,   103,   192,   103,   103,   103,   185,   190,
      99,   158,   206,   158,    97,   103,   107,    99,   103,     4,
       4,     4,     4,   206,   207,   147,   281,     4,     4,    71,
       4,    71,   102,   147,   281,   147,   281,    52,    52,     1,
     281,     1,     4,    52,    71,   218,   219,   281,   282,   329,
       1,    52,    71,   218,   281,   329,   389,   106,   211,   340,
     106,   211,   341,   101,   107,     1,   106,   211,   147,   281,
       1,   106,   210,   102,     1,   102,   243,   243,     4,    15,
      23,   243,   102,   206,   260,   243,   260,   211,   211,   211,
     102,     1,   102,     4,   218,     1,   106,     1,   106,     1,
     106,     1,   106,     1,   106,     1,   106,     1,   106,   101,
     209,     1,   106,     1,   106,   218,     4,   103,    99,   147,
     281,   101,    97,    99,   103,   188,   188,   188,   188,   103,
     160,   206,     4,     4,   102,   102,   389,    98,   102,   389,
      98,   308,     4,   223,   224,   223,   218,   281,   218,   281,
     147,   281,   147,   281,   102,   102,   102,   120,    32,    73,
     104,   105,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   119,   129,   130,   133,   134,   135,   136,   139,   140,
     333,    98,     1,    97,   106,   102,   389,    71,    98,   102,
     333,    98,     1,   106,   102,   389,    98,   100,   209,   223,
     223,    85,   147,   281,   165,   172,   173,   175,   186,   187,
     204,   217,   226,   246,   249,   252,   147,   281,     1,   106,
     207,     1,   106,   206,   208,   206,     1,   106,   206,     1,
     106,    16,    33,   263,   264,   266,   206,   217,   271,   239,
       1,   208,   102,   156,   157,    98,    98,   101,   220,   156,
     188,   100,   106,   365,   365,   308,   308,   100,   311,   308,
     100,   311,   103,   120,     1,    97,   106,     1,   106,   106,
     387,   106,   387,   102,   102,   102,   102,   308,   308,   308,
     220,   102,   311,   219,   308,   100,   311,   308,   102,   311,
     308,   100,   311,   277,   317,   320,   321,   102,     4,   273,
     274,   273,     1,     1,     1,     1,     1,     1,     1,     1,
     106,   245,    97,   295,   295,     1,   106,     1,   103,   244,
     103,   244,   102,   211,   211,   264,   266,   103,   208,   103,
     103,   103,   177,   349,   156,   206,   206,   177,   101,   103,
     103,   277,   363,    99,   103,   363,    99,   107,   337,   338,
     207,   224,   100,   100,   147,   281,   147,   281,   147,   281,
     147,   281,   103,   103,   103,   147,   281,    99,   103,   317,
      99,   103,   147,   281,    99,   103,   317,    99,    93,    94,
     101,   277,   318,   321,   277,   319,   320,   208,   120,    97,
     103,   103,   208,   247,   250,   226,     1,    41,   254,   254,
     210,   210,   100,   230,   153,   281,   210,     1,   210,   210,
     211,    99,    99,   365,   365,    93,    94,   101,   389,   365,
     101,   389,    11,    71,   277,   324,   325,   326,   324,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,   101,
       4,     4,   101,   390,   390,   390,   103,   206,   274,   210,
     210,   245,   206,   206,    27,    15,    23,   231,   232,   233,
     234,   235,     4,   265,   265,   210,   365,   365,   390,   100,
     390,   100,   102,   102,    95,    96,   101,   277,   326,   277,
     325,   101,   103,   103,   103,   103,   103,   103,   103,   103,
      97,   103,    97,   103,   390,    97,   103,    97,   103,   390,
     106,   211,   322,   322,     1,   106,   248,   251,   252,   244,
     244,   210,   207,   107,   101,   233,   213,   235,   103,   103,
     240,   277,   277,   363,   363,   166,   166,   388,   388,   388,
     388,   147,   281,   147,   281,   147,   281,   147,   281,   389,
     389,   244,   210,   210,   107,   211,   211,    94,    93,   101,
     101,   103,   103,   211,   211,     4,     4,     4,     4,     4,
       4,     4,     4,   210,   365,   365,   390,   390,   387,   387,
     103,   103,   103,   103,   103,   103,   103,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   148,   149,   149,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   155,
     156,   156,   157,   158,   159,   159,   160,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   163,   164,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   173,   174,   175,   175,   176,   176,   176,   177,   177,
     178,   178,   178,   179,   180,   181,   182,   183,   183,   184,
     184,   184,   184,   184,   185,   185,   185,   185,   186,   187,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     189,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   193,   193,   194,   194,   194,   195,   195,   195,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   206,   206,   207,   208,   209,
     209,   209,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   215,   216,   216,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   227,   228,   228,   229,   230,   231,   231,   232,
     232,   233,   234,   234,   235,   235,   236,   236,   236,   236,
     237,   238,   238,   239,   240,   238,   241,   241,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   250,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   255,   255,   255,   256,   256,   257,   257,
     258,   258,   258,   258,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   262,   263,   263,   264,   264,   264,
     265,   265,   266,   267,   268,   269,   270,   271,   271,   272,
     272,   273,   273,   274,   275,   275,   276,   276,   277,   277,
     278,   278,   279,   280,   280,   281,   281,   282,   282,   283,
     284,   284,   285,   285,   286,   286,   287,   287,   288,   288,
     289,   289,   290,   290,   290,   290,   290,   291,   291,   292,
     292,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   295,   295,   296,   296,
     297,   297,   298,   298,   298,   299,   299,   300,   301,   301,
     302,   302,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   304,   304,   304,   304,   305,   305,   305,   305,
     306,   307,   307,   307,   307,   307,   307,   308,   308,   309,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   319,   319,   320,   321,   322,   322,   323,   323,   323,
     323,   324,   324,   325,   326,   327,   328,   328,   328,   328,
     329,   330,   331,   331,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   334,   334,
     334,   334,   334,   334,   334,   334,   335,   336,   337,   337,
     338,   338,   339,   340,   340,   341,   341,   342,   343,   343,
     344,   345,   346,   346,   347,   347,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   349,   349,   350,   350,   351,
     351,   352,   353,   353,   354,   355,   356,   356,   357,   357,
     358,   358,   358,   358,   359,   359,   359,   360,   360,   361,
     361,   362,   362,   363,   363,   363,   363,   364,   364,   365,
     365,   366,   367,   367,   368,   369,   369,   370,   370,   371,
     371,   372,   372,   373,   373,   374,   375,   375,   376,   376,
     377,   377,   378,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   380,   380,   381,   382,   382,   383,   384,   385,
     386,   387,   388,   389,   390
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
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     5,     7,     5,     3,     0,     1,     1,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       2,     5,     5,     0,     0,     7,     7,     7,     9,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     8,     8,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     4,     3,     3,     4,     3,     3,     3,     0,     1,
       3,     3,     3,     3,     4,     1,     2,     6,     6,     2,
       0,     1,     2,     2,     2,     5,     5,     1,     1,     6,
       6,     1,     3,     3,     2,     2,     0,     1,     0,     1,
       0,     1,     5,     0,     1,     1,     2,     2,     3,     4,
       1,     2,     1,     1,     5,     5,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     1,     1,     1,     1,
       0,     1,     2,     2,     4,     1,     3,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     6,     6,     6,     5,     5,     5,     5,
       2,     7,     7,     7,     7,     7,     7,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     4,     4,
       0,     1,     1,     4,     4,     9,     9,     2,     2,     0,
       1,     0,     1,     5,     5,     1,     1,     6,     6,    10,
      10,     2,     2,     5,     5,     8,     5,     5,     5,     5,
       2,     4,     1,     1,     7,     7,     7,     7,    10,    10,
      10,    10,    10,    10,    10,    10,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       7,     7,     7,     7,     7,     7,     4,     5,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     7,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     0,     1,     1,
       3,     7,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     8,     8,     0,     1,     9,
       9,    12,    12,     3,     3,     6,     6,     6,     6,     1,
       2,     7,     0,     1,     2,     3,     4,     0,     1,     1,
       3,     2,     4,     9,     9,     1,     1,     2,     6,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     1,     1,     3,     0,
       0,     0,     0,     0,     0
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
#line 2756 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "yacc.y" /* yacc.c:1646  */
    {l.a("INTEGER_LITERAL",0);}
#line 2762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "yacc.y" /* yacc.c:1646  */
    {l.a("REAL_LITERAL",0);}
#line 2768 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "yacc.y" /* yacc.c:1646  */
    {l.a("CHARACTER_LITERAL",0);}
#line 2774 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "yacc.y" /* yacc.c:1646  */
    {l.a("STRING_LITERAL",0);}
#line 2780 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "yacc.y" /* yacc.c:1646  */
    {l.a("NULL_LITERAL",0);}
#line 2786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "yacc.y" /* yacc.c:1646  */
    {l.a("TRUE",0);}
#line 2792 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "yacc.y" /* yacc.c:1646  */
    {l.a("FALSE",0);}
#line 2798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_name",1);}
#line 2804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 133 "yacc.y" /* yacc.c:1646  */
    {l.a("type",1);}
#line 2816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "yacc.y" /* yacc.c:1646  */
    {l.a("simple_type",1);}
#line 2834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",1);}
#line 2840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "yacc.y" /* yacc.c:1646  */
    {l.a("primitive_type",0);}
#line 2846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 152 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",1);}
#line 2858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 153 "yacc.y" /* yacc.c:1646  */
    {l.a("numeric_type",0);}
#line 2864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 161 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "yacc.y" /* yacc.c:1646  */
    {l.a("integral_type",0);}
#line 2918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "yacc.y" /* yacc.c:1646  */
    {l.a("floating_point_type",0);}
#line 2930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 172 "yacc.y" /* yacc.c:1646  */
    {l.a("class_type",0);}
#line 2942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",1);}
#line 2954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_type",0);}
#line 2960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "yacc.y" /* yacc.c:1646  */
    {l.a("array_type",2);}
#line 2978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",0);}
#line 2984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifiers_opt",2);}
#line 2990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "yacc.y" /* yacc.c:1646  */
    {l.a("rank_specifier",0);}
#line 2996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_reference",1);}
#line 3002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",1);}
#line 3008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 198 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list",2);}
#line 3014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 203 "yacc.y" /* yacc.c:1646  */
    {l.a("argument",1);}
#line 3032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression",1);}
#line 3044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 213 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 214 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 215 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 216 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 217 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 218 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 219 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "yacc.y" /* yacc.c:1646  */
    {l.a("primary_expression_no_parenthesis",1);}
#line 3116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 224 "yacc.y" /* yacc.c:1646  */
    {l.a("parenthesized_expression",1);}
#line 3122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "yacc.y" /* yacc.c:1646  */
    {l.a("member_access",1);}
#line 3140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 232 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 233 "yacc.y" /* yacc.c:1646  */
    {l.a("invocation_expression",2);}
#line 3152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 236 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",0);}
#line 3158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 237 "yacc.y" /* yacc.c:1646  */
    {l.a("argument_list_opt",1);}
#line 3164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "yacc.y" /* yacc.c:1646  */
    {l.a("element_access",2);}
#line 3176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",0);}
#line 3182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list_opt",1);}
#line 3188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 248 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",1);}
#line 3194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 249 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_list",2);}
#line 3200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "yacc.y" /* yacc.c:1646  */
    {l.a("this_access",0);}
#line 3206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 255 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",0);}
#line 3212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 256 "yacc.y" /* yacc.c:1646  */
    {l.a("base_access",1);}
#line 3218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "yacc.y" /* yacc.c:1646  */
    {l.a("post_increment_expression",1);}
#line 3224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "yacc.y" /* yacc.c:1646  */
    {l.a("post_decrement_expression",1);}
#line 3230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 265 "yacc.y" /* yacc.c:1646  */
    {l.a("new_expression",1);}
#line 3236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 268 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "yacc.y" /* yacc.c:1646  */
    {l.a("object_creation_expression",2);}
#line 3248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 273 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",4);}
#line 3260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "yacc.y" /* yacc.c:1646  */
    {l.a("array_creation_expression",2);}
#line 3266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",0);}
#line 3272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 279 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer_opt",1);}
#line 3278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",1);}
#line 3290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 284 "yacc.y" /* yacc.c:1646  */
    {l.a("typeof_expression",0);}
#line 3296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_expression",1);}
#line 3302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 290 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_expression",1);}
#line 3308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "yacc.y" /* yacc.c:1646  */
    {l.a("pointer_member_access",1);}
#line 3314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "yacc.y" /* yacc.c:1646  */
    {l.a("addressof_expression",1);}
#line 3320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 299 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 300 "yacc.y" /* yacc.c:1646  */
    {l.a("sizeof_expression",1);}
#line 3332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "yacc.y" /* yacc.c:1646  */
    {l.a("postfix_expression",1);}
#line 3362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 310 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 311 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 312 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 313 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression_not_plusminus",1);}
#line 3386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 316 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_increment_expression",1);}
#line 3392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 319 "yacc.y" /* yacc.c:1646  */
    {l.a("pre_decrement_expression",1);}
#line 3398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 322 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 323 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 326 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 327 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 328 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",1);}
#line 3440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",4);}
#line 3458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",3);}
#line 3470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "yacc.y" /* yacc.c:1646  */
    {l.a("cast_expression",2);}
#line 3476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 344 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",0);}
#line 3482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 345 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals_opt",1);}
#line 3488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",1);}
#line 3494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 349 "yacc.y" /* yacc.c:1646  */
    {l.a("type_quals",2);}
#line 3500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 352 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",1);}
#line 3506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 353 "yacc.y" /* yacc.c:1646  */
    {l.a("type_qual",0);}
#line 3512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 357 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 358 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3524 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 359 "yacc.y" /* yacc.c:1646  */
    {l.a("unary_expression",2);}
#line 3530 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",1);}
#line 3536 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 363 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3542 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 364 "yacc.y" /* yacc.c:1646  */
    {l.a("additive_expression",2);}
#line 3548 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 367 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",1);}
#line 3554 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 368 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3560 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 369 "yacc.y" /* yacc.c:1646  */
    {l.a("shift_expression",2);}
#line 3566 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 372 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",1);}
#line 3572 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 373 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3578 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 374 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3584 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 375 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3590 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 376 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3596 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 377 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3602 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 378 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3608 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 379 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3614 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 380 "yacc.y" /* yacc.c:1646  */
    {l.a("relational_expression",2);}
#line 3620 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 383 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",1);}
#line 3626 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 384 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3632 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 385 "yacc.y" /* yacc.c:1646  */
    {l.a("equality_expression",2);}
#line 3638 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 388 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",1);}
#line 3644 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 389 "yacc.y" /* yacc.c:1646  */
    {l.a("and_expression",2);}
#line 3650 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 392 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",1);}
#line 3656 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 393 "yacc.y" /* yacc.c:1646  */
    {l.a("exclusive_or_expression",2);}
#line 3662 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 396 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",1);}
#line 3668 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 397 "yacc.y" /* yacc.c:1646  */
    {l.a("inclusive_or_expression",2);}
#line 3674 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 400 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",1);}
#line 3680 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 401 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_and_expression",2);}
#line 3686 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 404 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",1);}
#line 3692 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 405 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_or_expression",2);}
#line 3698 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 408 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",1);}
#line 3704 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 409 "yacc.y" /* yacc.c:1646  */
    {l.a("conditional_expression",3);}
#line 3710 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 412 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment",3);}
#line 3716 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 415 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator EQUAL",0);}
#line 3722 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 416 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator PLUSEQ",0);}
#line 3728 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 417 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MINUSEQ",0);}
#line 3734 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 418 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator STAREQ",0);}
#line 3740 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 419 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator DIVEQ",0);}
#line 3746 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 420 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator MODEQ",0);}
#line 3752 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 421 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator XOREQ",0);}
#line 3758 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 422 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator ANDEQ",0);}
#line 3764 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 423 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator OREQ",0);}
#line 3770 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 424 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator GTGTEQ",0);}
#line 3776 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 425 "yacc.y" /* yacc.c:1646  */
    {l.a("assignment_operator LTLTEQ",0);}
#line 3782 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 428 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3788 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 429 "yacc.y" /* yacc.c:1646  */
    {l.a("expression",1);}
#line 3794 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 432 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_expression",1);}
#line 3800 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 435 "yacc.y" /* yacc.c:1646  */
    {l.a("boolean_expression",1);}
#line 3806 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 439 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3812 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 440 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3818 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 441 "yacc.y" /* yacc.c:1646  */
    {l.a("statement",1);}
#line 3824 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3830 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3836 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 446 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3842 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 447 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3848 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 448 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3854 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 449 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3860 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 450 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3866 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 451 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3872 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 452 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3878 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 453 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3884 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 454 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3890 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 455 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3896 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 456 "yacc.y" /* yacc.c:1646  */
    {l.a("embedded_statement",1);}
#line 3902 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 459 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1);}
#line 3908 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 460 "yacc.y" /* yacc.c:1646  */
    {l.a("block",1,1);}
#line 3914 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 463 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",0);}
#line 3920 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 464 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list_opt",1);}
#line 3926 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 468 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",1);}
#line 3932 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 469 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_list",2);}
#line 3938 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 472 "yacc.y" /* yacc.c:1646  */
    {l.a("empty_statement",0);}
#line 3944 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 475 "yacc.y" /* yacc.c:1646  */
    {l.a("labeled_statement",1);}
#line 3950 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 478 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3956 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 479 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1);}
#line 3962 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 480 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3968 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 481 "yacc.y" /* yacc.c:1646  */
    {l.a("declaration_statement",1,1);}
#line 3974 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 484 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3980 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 485 "yacc.y" /* yacc.c:1646  */
    {l.a("local_variable_declaration",2);}
#line 3986 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 488 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",1);}
#line 3992 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 489 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarators",2);}
#line 3998 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 492 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",0);}
#line 4004 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_declarator",1);}
#line 4010 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4016 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 497 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4022 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 498 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer",1);}
#line 4028 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 501 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4034 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 502 "yacc.y" /* yacc.c:1646  */
    {l.a("stackalloc_initializer",2);}
#line 4040 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 505 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4046 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 506 "yacc.y" /* yacc.c:1646  */
    {l.a("local_constant_declaration",2);}
#line 4052 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 509 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",1);}
#line 4058 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 510 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarators",2);}
#line 4064 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 513 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declarator",1);}
#line 4070 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 522 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4076 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 523 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4082 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 524 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4088 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 525 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4094 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 526 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4100 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 527 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4106 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 528 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_statement",1);}
#line 4112 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 529 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("expression_statement",1,1);}
#line 4118 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 530 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4124 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 531 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4130 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 532 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4136 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 533 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4142 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 534 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4148 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 535 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("expression_statement",1,1);}
#line 4154 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 538 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4160 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 539 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4166 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 540 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4172 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 541 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4178 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 542 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4184 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 543 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4190 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 544 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression",1);}
#line 4196 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 545 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4202 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 546 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4208 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 547 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4214 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 548 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4220 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 549 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4226 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 550 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4232 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 551 "yacc.y" /* yacc.c:1646  */
    {yyerrok;l.a("statement_expression",1,1);}
#line 4238 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 554 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4244 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 555 "yacc.y" /* yacc.c:1646  */
    {l.a("selection_statement",1);}
#line 4250 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 558 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",2);}
#line 4256 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 559 "yacc.y" /* yacc.c:1646  */
    {l.a("if_statement",3);}
#line 4262 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 562 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_statement",2);}
#line 4268 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 565 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_block",1);}
#line 4274 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 568 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",0);}
#line 4280 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 569 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections_opt",1);}
#line 4286 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 572 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",1);}
#line 4292 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 573 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_sections",2);}
#line 4298 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 576 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_section",2);}
#line 4304 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 579 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",1);}
#line 4310 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 580 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_labels",2);}
#line 4316 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 583 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",1);}
#line 4322 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 584 "yacc.y" /* yacc.c:1646  */
    {l.a("switch_label",0);}
#line 4328 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 587 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4334 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 588 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4340 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 589 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4346 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 590 "yacc.y" /* yacc.c:1646  */
    {l.a("iteration_statement",1);}
#line 4352 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 593 "yacc.y" /* yacc.c:1646  */
    {l.a("unsafe_statement",1);}
#line 4358 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 596 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2);}
#line 4364 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 597 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4370 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 598 "yacc.y" /* yacc.c:1646  */
    {yyclearin;}
#line 4376 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 598 "yacc.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4382 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 598 "yacc.y" /* yacc.c:1646  */
    {l.a("while_statement",2,1);}
#line 4388 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 601 "yacc.y" /* yacc.c:1646  */
    {l.a("do_statement",2);}
#line 4394 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 602 "yacc.y" /* yacc.c:1646  */
    {yyerrok; l.a("do_statement",2,1);}
#line 4400 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 606 "yacc.y" /* yacc.c:1646  */
    {l.a("for_statement",8);}
#line 4406 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 609 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0);}
#line 4412 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 610 "yacc.y" /* yacc.c:1646  */
    {l.a("left_bracket_circle",0,1);yyerrok;yyclearin;}
#line 4418 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 613 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0);}
#line 4424 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 614 "yacc.y" /* yacc.c:1646  */
    {l.a("right_bracket_circle",0,1);yyerrok;yyclearin;}
#line 4430 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 617 "yacc.y" /* yacc.c:1646  */
    {l.a("semicolon",0);}
#line 4436 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 618 "yacc.y" /* yacc.c:1646  */
    {l.a("semicolon",0,1);}
#line 4442 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 622 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",0);}
#line 4448 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 623 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer_opt",1);}
#line 4454 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 626 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",0);}
#line 4460 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 627 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition_opt",1);}
#line 4466 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 630 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",0);}
#line 4472 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 631 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator_opt",1);}
#line 4478 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 634 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4484 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 635 "yacc.y" /* yacc.c:1646  */
    {l.a("for_initializer",1);}
#line 4490 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 638 "yacc.y" /* yacc.c:1646  */
    {l.a("for_condition",1);}
#line 4496 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 641 "yacc.y" /* yacc.c:1646  */
    {l.a("for_iterator",1);}
#line 4502 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 644 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",1);}
#line 4508 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 645 "yacc.y" /* yacc.c:1646  */
    {l.a("statement_expression_list",2);}
#line 4514 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 648 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4520 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 649 "yacc.y" /* yacc.c:1646  */
    {l.a("foreach_statement",3);}
#line 4526 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 651 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 4532 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 653 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4538 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 654 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4544 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 655 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4550 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 656 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4556 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 657 "yacc.y" /* yacc.c:1646  */
    {l.a("jump_statement",1);}
#line 4562 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 660 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0);}
#line 4568 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 661 "yacc.y" /* yacc.c:1646  */
    {l.a("break_statement",0,1);}
#line 4574 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 664 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0);}
#line 4580 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 665 "yacc.y" /* yacc.c:1646  */
    {l.a("continue_statement",0,1);}
#line 4586 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 668 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4592 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 669 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1);}
#line 4598 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 670 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0);}
#line 4604 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 671 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4610 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 672 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",1,1);}
#line 4616 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 673 "yacc.y" /* yacc.c:1646  */
    {l.a("goto_statement",0,1);}
#line 4622 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 676 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1);}
#line 4628 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 677 "yacc.y" /* yacc.c:1646  */
    {l.a("return_statement",1,1);}
#line 4634 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 680 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",0);}
#line 4640 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 681 "yacc.y" /* yacc.c:1646  */
    {l.a("expression_opt",1);}
#line 4646 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 684 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1);}
#line 4652 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 685 "yacc.y" /* yacc.c:1646  */
    {l.a("throw_statement",1,1);}
#line 4658 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 688 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4664 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 689 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",2);}
#line 4670 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 690 "yacc.y" /* yacc.c:1646  */
    {l.a("try_statement",3);}
#line 4676 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 693 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",1);}
#line 4682 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 694 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clauses",2);}
#line 4688 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 697 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4694 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 698 "yacc.y" /* yacc.c:1646  */
    {l.a("catch_clause",3);}
#line 4700 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 702 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4706 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 703 "yacc.y" /* yacc.c:1646  */
    {l.a("identifier_opt",0);}
#line 4712 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 706 "yacc.y" /* yacc.c:1646  */
    {l.a("finally_clause",1);}
#line 4718 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 709 "yacc.y" /* yacc.c:1646  */
    {l.a("checked_statement",1);}
#line 4724 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 712 "yacc.y" /* yacc.c:1646  */
    {l.a("unchecked_statement",1);}
#line 4730 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 715 "yacc.y" /* yacc.c:1646  */
    {l.a("lock_statement",2);}
#line 4736 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 718 "yacc.y" /* yacc.c:1646  */
    {l.a("using_statement",2);}
#line 4742 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 721 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4748 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 722 "yacc.y" /* yacc.c:1646  */
    {l.a("resource_acquisition",1);}
#line 4754 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 726 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4760 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 727 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_statement",3);}
#line 4766 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 730 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",1);}
#line 4772 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 731 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarators",2);}
#line 4778 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 734 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_pointer_declarator",1);}
#line 4784 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 737 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4790 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 738 "yacc.y" /* yacc.c:1646  */
    {l.a("compilation_unit",2);}
#line 4796 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 741 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",0);}
#line 4802 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 742 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives_opt",1);}
#line 4808 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 745 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",0);}
#line 4814 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 746 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes_opt",1);}
#line 4820 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 749 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",0);}
#line 4826 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 750 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations_opt",1);}
#line 4832 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 753 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_declaration",4);}
#line 4838 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 756 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4844 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 757 "yacc.y" /* yacc.c:1646  */
    {l.a("comma_opt",0);}
#line 4850 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 766 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",0);}
#line 4856 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 767 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_identifier",1);}
#line 4862 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 770 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",0);}
#line 4868 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 771 "yacc.y" /* yacc.c:1646  */
    {l.a("qualifier",1);}
#line 4874 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 774 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_body",2);}
#line 4880 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 777 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",1);}
#line 4886 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 778 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directives",2);}
#line 4892 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 781 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4898 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 782 "yacc.y" /* yacc.c:1646  */
    {l.a("using_directive",1);}
#line 4904 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 785 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1);}
#line 4910 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 786 "yacc.y" /* yacc.c:1646  */
    {l.a("using_alias_directive",1,1);}
#line 4916 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 789 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1);}
#line 4922 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 790 "yacc.y" /* yacc.c:1646  */
    {l.a("using_namespace_directive",1,1);}
#line 4928 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 793 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",1);}
#line 4934 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 794 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declarations",2);}
#line 4940 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 797 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4946 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 798 "yacc.y" /* yacc.c:1646  */
    {l.a("namespace_member_declaration",1);}
#line 4952 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 801 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4958 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 802 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4964 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 803 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4970 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 804 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4976 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 805 "yacc.y" /* yacc.c:1646  */
    {l.a("type_declaration",1);}
#line 4982 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 816 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",0);}
#line 4988 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 817 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers_opt",1);}
#line 4994 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 820 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",1);}
#line 5000 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 821 "yacc.y" /* yacc.c:1646  */
    {l.a("modifiers",2);}
#line 5006 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 824 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5012 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 825 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5018 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 826 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5024 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 827 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5030 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 828 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5036 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 829 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5042 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 830 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5048 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 831 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5054 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 832 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5060 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 833 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5066 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 834 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5072 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 835 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5078 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 836 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5084 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 837 "yacc.y" /* yacc.c:1646  */
    {l.a("modifier",0);}
#line 5090 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 841 "yacc.y" /* yacc.c:1646  */
    {l.a("class_declaration",5);}
#line 5096 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 843 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 5102 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 844 "yacc.y" /* yacc.c:1646  */
    {yyerrok;yyclearin;}
#line 5108 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 847 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",0);}
#line 5114 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 848 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base_opt",1);}
#line 5120 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 851 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5126 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 852 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",1);}
#line 5132 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 853 "yacc.y" /* yacc.c:1646  */
    {l.a("class_base",2);}
#line 5138 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 856 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",1);}
#line 5144 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 857 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_type_list",2);}
#line 5150 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 860 "yacc.y" /* yacc.c:1646  */
    {l.a("class_body",1);}
#line 5156 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 863 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",0);}
#line 5162 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 864 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations_opt",1);}
#line 5168 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 867 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",1);}
#line 5174 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 868 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declarations",2);}
#line 5180 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 871 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5186 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 872 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5192 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 873 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5198 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 874 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5204 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 875 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5210 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 876 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5216 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 877 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5222 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 878 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5228 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 879 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5234 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 881 "yacc.y" /* yacc.c:1646  */
    {l.a("class_member_declaration",1);}
#line 5240 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 884 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5246 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 885 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5252 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 886 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4);}
#line 5258 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 887 "yacc.y" /* yacc.c:1646  */
    {l.a("constant_declaration",4,1);}
#line 5264 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 890 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5270 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 891 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5276 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 892 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4);}
#line 5282 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 893 "yacc.y" /* yacc.c:1646  */
    {l.a("field_declaration",4,1);}
#line 5288 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 896 "yacc.y" /* yacc.c:1646  */
    {l.a("method_declaration",2);}
#line 5294 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 900 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5300 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 901 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",5);}
#line 5306 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 902 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4);}
#line 5312 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 903 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5318 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 904 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",4,1);}
#line 5324 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 905 "yacc.y" /* yacc.c:1646  */
    {l.a("method_header",3,1);}
#line 5330 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 908 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",0);}
#line 5336 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 909 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list_opt",1);}
#line 5342 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 912 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5348 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 913 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",1);}
#line 5354 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 914 "yacc.y" /* yacc.c:1646  */
    {l.a("return_type",0);}
#line 5360 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 917 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",1);}
#line 5366 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 918 "yacc.y" /* yacc.c:1646  */
    {l.a("method_body",0);}
#line 5372 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 921 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",1);}
#line 5378 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 922 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter_list",2);}
#line 5384 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 925 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5390 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 926 "yacc.y" /* yacc.c:1646  */
    {l.a("formal_parameter",1);}
#line 5396 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 929 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5402 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 930 "yacc.y" /* yacc.c:1646  */
    {l.a("fixed_parameter",3);}
#line 5408 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 933 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5414 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 934 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5420 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 935 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_modifier_opt",0);}
#line 5426 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 939 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5432 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 940 "yacc.y" /* yacc.c:1646  */
    {l.a("parameter_array",2);}
#line 5438 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 946 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5444 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 950 "yacc.y" /* yacc.c:1646  */
    {l.a("property_declaration",7);}
#line 5450 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 953 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5456 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 954 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_declarations",2);}
#line 5462 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 957 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",0);}
#line 5468 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 958 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration_opt",1);}
#line 5474 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 961 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",0);}
#line 5480 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 962 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration_opt",1);}
#line 5486 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 968 "yacc.y" /* yacc.c:1646  */
    {l.a("get_accessor_declaration",4);}
#line 5492 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 974 "yacc.y" /* yacc.c:1646  */
    {l.a("set_accessor_declaration",4);}
#line 5498 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 977 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",1);}
#line 5504 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 978 "yacc.y" /* yacc.c:1646  */
    {l.a("accessor_body",0);}
#line 5510 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 981 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5516 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 982 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",4);}
#line 5522 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 986 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5528 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 990 "yacc.y" /* yacc.c:1646  */
    {l.a("event_declaration",7);}
#line 5534 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 993 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5540 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 994 "yacc.y" /* yacc.c:1646  */
    {l.a("event_accessor_declarations",2);}
#line 5546 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1000 "yacc.y" /* yacc.c:1646  */
    {l.a("add_accessor_declaration",4);}
#line 5552 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1006 "yacc.y" /* yacc.c:1646  */
    {l.a("remove_accessor_declaration",4);}
#line 5558 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1012 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declaration",6);}
#line 5564 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1015 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5570 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1016 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",2);}
#line 5576 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1018 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5582 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1019 "yacc.y" /* yacc.c:1646  */
    {l.a("indexer_declarator",3);}
#line 5588 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1022 "yacc.y" /* yacc.c:1646  */
    {l.a("qualified_this",1);}
#line 5594 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1026 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declaration",4);}
#line 5600 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 1029 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5606 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 1030 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_declarator",2);}
#line 5612 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1033 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5618 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1034 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5624 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1035 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5630 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1036 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",3);}
#line 5636 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1038 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5642 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1040 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5648 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1041 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5654 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1042 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5660 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1044 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5666 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1045 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5672 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1047 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5678 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1049 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator_declarator",4);}
#line 5684 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1053 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5690 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1054 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5696 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1055 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5702 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1056 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5708 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1057 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5714 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1058 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5720 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1059 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5726 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1060 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5732 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1061 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5738 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1062 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5744 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1063 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5750 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 1064 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5756 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 1065 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5762 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 1066 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5768 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 1067 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5774 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 1068 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5780 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 1069 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5786 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1070 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5792 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 1071 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5798 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 1072 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5804 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1073 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5810 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1074 "yacc.y" /* yacc.c:1646  */
    {l.a("overloadable_operator",0);}
#line 5816 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1077 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5822 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1078 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5828 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1079 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5834 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 1080 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5840 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 1081 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5846 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 1082 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5852 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 1083 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5858 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1084 "yacc.y" /* yacc.c:1646  */
    {l.a("conversion_operator_declarator",2);}
#line 5864 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1087 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declaration",4);}
#line 5870 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1090 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_declarator",2);}
#line 5876 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1093 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",0);}
#line 5882 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 1094 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer_opt",1);}
#line 5888 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1097 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5894 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 1098 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_initializer",1);}
#line 5900 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1114 "yacc.y" /* yacc.c:1646  */
    {l.a("destructor_declaration",3);}
#line 5906 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1117 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",1);}
#line 5912 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 1118 "yacc.y" /* yacc.c:1646  */
    {l.a("operator_body",0);}
#line 5918 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 1121 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",1);}
#line 5924 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 1122 "yacc.y" /* yacc.c:1646  */
    {l.a("constructor_body",0);}
#line 5930 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 1127 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_declaration",5);}
#line 5936 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 1130 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",0);}
#line 5942 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1131 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces_opt",1);}
#line 5948 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 1134 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_interfaces",1);}
#line 5954 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 1137 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_body",1);}
#line 5960 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 1140 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",0);}
#line 5966 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1141 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations_opt",1);}
#line 5972 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 1144 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",1);}
#line 5978 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1145 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declarations",2);}
#line 5984 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1148 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5990 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 1149 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 5996 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 1150 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6002 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1151 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6008 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1152 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6014 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1153 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6020 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 1154 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6026 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 1155 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6032 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 1157 "yacc.y" /* yacc.c:1646  */
    {l.a("struct_member_declaration",1);}
#line 6038 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1162 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6044 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 1163 "yacc.y" /* yacc.c:1646  */
    {l.a("array_initializer",1);}
#line 6050 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1166 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",0);}
#line 6056 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1167 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list_opt",1);}
#line 6062 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1170 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",1);}
#line 6068 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 1171 "yacc.y" /* yacc.c:1646  */
    {l.a("variable_initializer_list",2);}
#line 6074 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 1176 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_declaration",5);}
#line 6080 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1179 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",0);}
#line 6086 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1180 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base_opt",1);}
#line 6092 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1183 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_base",1);}
#line 6098 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 1186 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_body",1);}
#line 6104 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 1189 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",0);}
#line 6110 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 1190 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations_opt",1);}
#line 6116 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 1193 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",1);}
#line 6122 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 1194 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declarations",2);}
#line 6128 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 1197 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6134 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1198 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6140 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1199 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6146 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 1200 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_member_declaration",1);}
#line 6152 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1204 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6158 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1205 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",5);}
#line 6164 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1206 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_method_declaration",4);}
#line 6170 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1209 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6176 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1210 "yacc.y" /* yacc.c:1646  */
    {l.a("new_opt",0);}
#line 6182 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 1216 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6188 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1220 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_property_declaration",1);}
#line 6194 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 1227 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6200 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 1232 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_indexer_declaration",7);}
#line 6206 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1236 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6212 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 1237 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",2);}
#line 6218 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 1238 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6224 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 1239 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_accessors",4);}
#line 6230 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 1242 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6236 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 1243 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_event_declaration",4);}
#line 6242 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 1248 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6248 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 1249 "yacc.y" /* yacc.c:1646  */
    {l.a("interface_empty_body",0);}
#line 6254 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 1254 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_declaration",5);}
#line 6260 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1257 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",0);}
#line 6266 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1258 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base_opt",1);}
#line 6272 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1261 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_base",1);}
#line 6278 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1264 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6284 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 1265 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_body",1);}
#line 6290 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 1268 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",0);}
#line 6296 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 1269 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations_opt",1);}
#line 6302 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 1272 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",1);}
#line 6308 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 1273 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declarations",2);}
#line 6314 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 1276 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",1);}
#line 6320 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 1277 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",2);}
#line 6326 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 1282 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4);}
#line 6332 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 1283 "yacc.y" /* yacc.c:1646  */
    {l.a("enum_member_declaration",4,1);}
#line 6338 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 1288 "yacc.y" /* yacc.c:1646  */
    {l.a("attributes",1);}
#line 6344 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 1291 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",1);}
#line 6350 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 1292 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_sections",2);}
#line 6356 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 1295 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6362 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 1296 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_section",4);}
#line 6368 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 1299 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",0);}
#line 6374 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 611:
#line 1300 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier_opt",1);}
#line 6380 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 1303 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target_specifier",1);}
#line 6386 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 613:
#line 1306 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6392 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 1307 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6398 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 615:
#line 1308 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6404 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 616:
#line 1309 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6410 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 617:
#line 1310 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6416 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 1311 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6422 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 1312 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6428 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 1313 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6434 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 621:
#line 1314 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_target",1);}
#line 6440 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 622:
#line 1317 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",1);}
#line 6446 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 1318 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_list",2);}
#line 6452 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 1321 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute",2);}
#line 6458 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 625:
#line 1324 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",0);}
#line 6464 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 626:
#line 1325 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments_opt",1);}
#line 6470 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 627:
#line 1328 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_name",1);}
#line 6476 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 628:
#line 1331 "yacc.y" /* yacc.c:1646  */
    {l.a("attribute_arguments",1);}
#line 6482 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 629:
#line 1338 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
#line 6488 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 630:
#line 1341 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
#line 6494 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 631:
#line 1344 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
#line 6500 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 632:
#line 1347 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
#line 6506 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 633:
#line 1350 "yacc.y" /* yacc.c:1646  */
    { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
#line 6512 "yacc.tab.cpp" /* yacc.c:1646  */
    break;

  case 634:
#line 1353 "yacc.y" /* yacc.c:1646  */
    { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
#line 6518 "yacc.tab.cpp" /* yacc.c:1646  */
    break;


#line 6522 "yacc.tab.cpp" /* yacc.c:1646  */
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
#line 1358 "yacc.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




