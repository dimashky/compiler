/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     PLUSEQ = 356,
     MINUSEQ = 357,
     STAREQ = 358,
     DIVEQ = 359,
     MODEQ = 360,
     XOREQ = 361,
     ANDEQ = 362,
     OREQ = 363,
     LTLT = 364,
     GTGT = 365,
     GTGTEQ = 366,
     LTLTEQ = 367,
     EQEQ = 368,
     NOTEQ = 369,
     LEQ = 370,
     GEQ = 371,
     ANDAND = 372,
     OROR = 373,
     PLUSPLUS = 374,
     MINUSMINUS = 375,
     ARROW = 376,
     THEN = 377
   };
#endif
/* Tokens.  */
#define RANK_SPECIFIER 258
#define IDENTIFIER 259
#define BAD_IDENTIFIER 260
#define INTEGER_LITERAL 261
#define REAL_LITERAL 262
#define CHARACTER_LITERAL 263
#define STRING_LITERAL 264
#define ABSTRACT 265
#define AS 266
#define BASE 267
#define BOOL 268
#define BREAK 269
#define BYTE 270
#define CASE 271
#define CATCH 272
#define CHAR 273
#define CHECKED 274
#define CLASS 275
#define CONST 276
#define CONTINUE 277
#define DECIMAL 278
#define DEFAULT 279
#define DELEGATE 280
#define DO 281
#define DOUBLE 282
#define ELSE 283
#define ENUM 284
#define EVENT 285
#define EXPLICIT 286
#define EXTERN 287
#define FALSE 288
#define FINALLY 289
#define FIXED 290
#define FLOAT 291
#define FOR 292
#define FOREACH 293
#define GOTO 294
#define IF 295
#define IMPLICIT 296
#define IN 297
#define INT 298
#define INTERFACE 299
#define INTERNAL 300
#define IS 301
#define LOCK 302
#define LONG 303
#define NAMESPACE 304
#define NEW 305
#define NULL_LITERAL 306
#define OBJECT 307
#define OPERATOR 308
#define OUT 309
#define OVERRIDE 310
#define PARAMS 311
#define PRIVATE 312
#define PROTECTED 313
#define PUBLIC 314
#define READONLY 315
#define REF 316
#define RETURN 317
#define SBYTE 318
#define SEALED 319
#define SHORT 320
#define SIZEOF 321
#define STACKALLOC 322
#define STATIC 323
#define STRING 324
#define STRUCT 325
#define SWITCH 326
#define THIS 327
#define THROW 328
#define TRUE 329
#define TRY 330
#define TYPEOF 331
#define UINT 332
#define ULONG 333
#define UNCHECKED 334
#define UNSAFE 335
#define USHORT 336
#define USING 337
#define VIRTUAL 338
#define VOID 339
#define VOLATILE 340
#define WHILE 341
#define ASSEMBLY 342
#define FIELD 343
#define METHOD 344
#define MODULE 345
#define PARAM 346
#define PROPERTY 347
#define TYPE 348
#define GET 349
#define SET 350
#define ADD 351
#define REMOVE 352
#define COMMA 353
#define LEFT_BRACKET 354
#define RIGHT_BRACKET 355
#define PLUSEQ 356
#define MINUSEQ 357
#define STAREQ 358
#define DIVEQ 359
#define MODEQ 360
#define XOREQ 361
#define ANDEQ 362
#define OREQ 363
#define LTLT 364
#define GTGT 365
#define GTGTEQ 366
#define LTLTEQ 367
#define EQEQ 368
#define NOTEQ 369
#define LEQ 370
#define GEQ 371
#define ANDAND 372
#define OROR 373
#define PLUSPLUS 374
#define MINUSMINUS 375
#define ARROW 376
#define THEN 377




/* Copy the first part of user declarations.  */
#line 9 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"

	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <FlexLexer.h>


	using namespace std;
	
	
	int yylex(void);
	int yyparse();
	int yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 37 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;
		}r;
	} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 368 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 380 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2661

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  242
/* YYNRULES -- Number of rules. */
#define YYNRULES  537
/* YYNRULES -- Number of states. */
#define YYNSTATES  913

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   128,     2,     2,     2,   133,   127,     2,
     124,   125,   123,   130,     2,   131,   126,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   139,   143,
     134,   140,   135,   138,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   136,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   141,   137,   142,   129,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   121,   122
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
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
     264,   266,   268,   270,   273,   276,   278,   281,   284,   286,
     289,   292,   295,   297,   299,   301,   306,   312,   319,   325,
     331,   337,   338,   340,   342,   345,   347,   349,   351,   355,
     359,   363,   365,   369,   373,   375,   379,   383,   385,   389,
     393,   397,   401,   405,   409,   411,   415,   419,   421,   425,
     427,   431,   433,   437,   439,   443,   445,   449,   451,   457,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   527,   528,   530,   532,   535,   537,   541,   544,
     547,   550,   552,   556,   558,   562,   564,   566,   568,   574,
     578,   580,   584,   588,   591,   593,   595,   597,   599,   601,
     603,   605,   607,   609,   615,   623,   629,   633,   634,   636,
     638,   641,   644,   646,   649,   653,   656,   658,   660,   662,
     664,   667,   673,   681,   691,   692,   694,   695,   697,   698,
     700,   702,   704,   706,   708,   710,   714,   723,   725,   727,
     729,   731,   733,   736,   739,   743,   748,   752,   756,   757,
     759,   763,   767,   771,   776,   778,   781,   788,   795,   798,
     799,   801,   804,   807,   810,   816,   822,   824,   826,   833,
     835,   839,   843,   846,   849,   850,   852,   853,   855,   856,
     858,   864,   865,   867,   869,   872,   875,   879,   884,   886,
     889,   891,   893,   899,   903,   905,   908,   910,   912,   914,
     916,   918,   920,   922,   923,   925,   927,   930,   932,   934,
     936,   938,   940,   942,   944,   946,   948,   950,   952,   954,
     956,   958,   966,   967,   969,   972,   975,   980,   982,   986,
     990,   991,   993,   995,   998,  1000,  1002,  1004,  1006,  1008,
    1010,  1012,  1014,  1016,  1018,  1025,  1031,  1034,  1042,  1050,
    1051,  1053,  1055,  1057,  1059,  1061,  1063,  1067,  1069,  1071,
    1076,  1077,  1079,  1081,  1086,  1096,  1099,  1102,  1103,  1105,
    1106,  1108,  1114,  1120,  1122,  1124,  1131,  1142,  1145,  1148,
    1154,  1160,  1169,  1175,  1181,  1184,  1189,  1191,  1193,  1201,
    1212,  1214,  1216,  1218,  1220,  1222,  1224,  1226,  1228,  1230,
    1232,  1234,  1236,  1238,  1240,  1242,  1244,  1246,  1248,  1250,
    1252,  1254,  1256,  1264,  1272,  1277,  1283,  1284,  1286,  1292,
    1298,  1306,  1308,  1310,  1312,  1314,  1322,  1323,  1325,  1328,
    1332,  1333,  1335,  1337,  1340,  1342,  1344,  1346,  1348,  1350,
    1352,  1354,  1356,  1358,  1362,  1367,  1368,  1370,  1372,  1376,
    1384,  1385,  1387,  1390,  1394,  1395,  1397,  1399,  1402,  1404,
    1406,  1408,  1410,  1419,  1428,  1429,  1431,  1441,  1454,  1458,
    1462,  1469,  1476,  1483,  1485,  1488,  1496,  1497,  1499,  1502,
    1506,  1511,  1512,  1514,  1516,  1520,  1523,  1528,  1538,  1540,
    1542,  1545,  1552,  1560,  1561,  1563,  1566,  1568,  1570,  1572,
    1574,  1576,  1578,  1580,  1582,  1584,  1586,  1590,  1593,  1594,
    1596,  1598,  1602,  1603,  1604,  1605,  1606,  1607
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     272,     0,    -1,   146,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    51,    -1,    74,    -1,    33,    -1,   278,
      -1,   278,    -1,   150,    -1,   158,    -1,   151,    -1,   148,
      -1,   152,    -1,   156,    -1,   157,    -1,   153,    -1,    13,
      -1,   154,    -1,   155,    -1,    23,    -1,    63,    -1,    15,
      -1,    65,    -1,    81,    -1,    43,    -1,    77,    -1,    48,
      -1,    78,    -1,    18,    -1,    36,    -1,    27,    -1,    52,
      -1,    69,    -1,   149,   123,    -1,    84,   123,    -1,   158,
     160,    -1,   151,   160,    -1,   278,   160,    -1,    -1,   160,
     159,    -1,     3,    -1,   209,    -1,   163,    -1,   162,    98,
     163,    -1,   209,    -1,    61,   161,    -1,    54,   161,    -1,
     166,    -1,   165,    -1,   145,    -1,   179,    -1,   167,    -1,
     168,    -1,   170,    -1,   173,    -1,   174,    -1,   177,    -1,
     181,    -1,   186,    -1,   182,    -1,   183,    -1,   124,   209,
     125,    -1,   164,   126,     4,    -1,   152,   126,     4,    -1,
     156,   126,     4,    -1,   165,   124,   169,   125,    -1,   278,
     124,   169,   125,    -1,    -1,   162,    -1,   164,    99,   172,
     100,    -1,   278,    99,   172,   100,    -1,    -1,   172,    -1,
     209,    -1,   172,    98,   209,    -1,    72,    -1,    12,   126,
       4,    -1,    12,    99,   172,   100,    -1,   187,   119,    -1,
     187,   120,    -1,   178,    -1,    50,   149,   124,   169,   125,
      -1,    50,   150,    99,   172,   100,   159,   180,    -1,    50,
     158,   344,    -1,    -1,   344,    -1,    76,   124,   149,   125,
      -1,    76,   124,    84,   125,    -1,    19,   124,   209,   125,
      -1,    79,   124,   209,   125,    -1,   187,   121,     4,    -1,
     127,   191,    -1,    66,   124,   149,   125,    -1,   164,    -1,
     278,    -1,   175,    -1,   176,    -1,   184,    -1,   187,    -1,
     128,   191,    -1,   129,   191,    -1,   192,    -1,   119,   191,
      -1,   120,   191,    -1,   188,    -1,   130,   191,    -1,   131,
     191,    -1,   123,   191,    -1,   189,    -1,   190,    -1,   185,
      -1,   124,   209,   125,   188,    -1,   124,   196,   123,   125,
     191,    -1,   124,   278,   160,   193,   125,   191,    -1,   124,
     152,   193,   125,   191,    -1,   124,   156,   193,   125,   191,
      -1,   124,    84,   193,   125,   191,    -1,    -1,   194,    -1,
     195,    -1,   194,   195,    -1,   160,    -1,   123,    -1,   191,
      -1,   196,   123,   191,    -1,   196,   132,   191,    -1,   196,
     133,   191,    -1,   196,    -1,   197,   130,   196,    -1,   197,
     131,   196,    -1,   197,    -1,   198,   109,   197,    -1,   198,
     110,   197,    -1,   198,    -1,   199,   134,   198,    -1,   199,
     135,   198,    -1,   199,   115,   198,    -1,   199,   116,   198,
      -1,   199,    46,   149,    -1,   199,    11,   149,    -1,   199,
      -1,   200,   113,   199,    -1,   200,   114,   199,    -1,   200,
      -1,   201,   127,   200,    -1,   201,    -1,   202,   136,   201,
      -1,   202,    -1,   203,   137,   202,    -1,   203,    -1,   204,
     117,   203,    -1,   204,    -1,   205,   118,   204,    -1,   205,
      -1,   205,   138,   209,   139,   209,    -1,   191,   208,   209,
      -1,   140,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   111,
      -1,   112,    -1,   206,    -1,   207,    -1,   209,    -1,   209,
      -1,   218,    -1,   219,    -1,   213,    -1,   214,    -1,   217,
      -1,   228,    -1,   230,    -1,   239,    -1,   252,    -1,   259,
      -1,   264,    -1,   265,    -1,   266,    -1,   267,    -1,   240,
      -1,   269,    -1,   141,   215,   142,    -1,    -1,   216,    -1,
     212,    -1,   216,   212,    -1,   143,    -1,     4,   139,   212,
      -1,   220,   143,    -1,   225,   143,    -1,   149,   221,    -1,
     222,    -1,   221,    98,   222,    -1,     4,    -1,     4,   140,
     223,    -1,   209,    -1,   344,    -1,   224,    -1,    67,   149,
      99,   209,   100,    -1,    21,   149,   226,    -1,   227,    -1,
     226,    98,   227,    -1,     4,   140,   210,    -1,   229,   143,
      -1,   168,    -1,   178,    -1,   207,    -1,   175,    -1,   176,
      -1,   189,    -1,   190,    -1,   231,    -1,   232,    -1,    40,
     124,   211,   125,   213,    -1,    40,   124,   211,   125,   213,
      28,   213,    -1,    71,   124,   209,   125,   233,    -1,   141,
     234,   142,    -1,    -1,   235,    -1,   236,    -1,   235,   236,
      -1,   237,   216,    -1,   238,    -1,   237,   238,    -1,    16,
     210,   139,    -1,    24,   139,    -1,   241,    -1,   242,    -1,
     243,    -1,   251,    -1,    80,   214,    -1,    86,   124,   211,
     125,   213,    -1,    26,   213,    86,   124,   211,   125,   143,
      -1,    37,   124,   244,   143,   245,   143,   246,   125,   213,
      -1,    -1,   247,    -1,    -1,   248,    -1,    -1,   249,    -1,
     220,    -1,   250,    -1,   211,    -1,   250,    -1,   229,    -1,
     250,    98,   229,    -1,    38,   124,   149,     4,    42,   209,
     125,   213,    -1,   253,    -1,   254,    -1,   255,    -1,   256,
      -1,   258,    -1,    14,   143,    -1,    22,   143,    -1,    39,
       4,   143,    -1,    39,    16,   210,   143,    -1,    39,    24,
     143,    -1,    62,   257,   143,    -1,    -1,   209,    -1,    73,
     257,   143,    -1,    75,   214,   260,    -1,    75,   214,   263,
      -1,    75,   214,   260,   263,    -1,   261,    -1,   260,   261,
      -1,    17,   124,   156,   262,   125,   214,    -1,    17,   124,
     148,   262,   125,   214,    -1,    17,   214,    -1,    -1,     4,
      -1,    34,   214,    -1,    19,   214,    -1,    79,   214,    -1,
      47,   124,   209,   125,   213,    -1,    82,   124,   268,   125,
     213,    -1,   220,    -1,   209,    -1,    35,   124,   149,   270,
     125,   213,    -1,   271,    -1,   270,    98,   271,    -1,     4,
     140,   209,    -1,   273,   274,    -1,   273,   285,    -1,    -1,
     281,    -1,    -1,   369,    -1,    -1,   285,    -1,   274,    49,
     278,   280,   277,    -1,    -1,   143,    -1,     4,    -1,   279,
       4,    -1,     4,   126,    -1,   279,     4,   126,    -1,   141,
     273,   275,   142,    -1,   282,    -1,   281,   282,    -1,   283,
      -1,   284,    -1,    82,     4,   140,   278,   143,    -1,    82,
     147,   143,    -1,   286,    -1,   285,   286,    -1,   276,    -1,
     287,    -1,   291,    -1,   337,    -1,   347,    -1,   361,    -1,
     368,    -1,    -1,   289,    -1,   290,    -1,   289,   290,    -1,
      10,    -1,    32,    -1,    45,    -1,    50,    -1,    55,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    64,    -1,
      68,    -1,    80,    -1,    83,    -1,    85,    -1,   274,   288,
      20,     4,   292,   295,   277,    -1,    -1,   293,    -1,   139,
     156,    -1,   139,   294,    -1,   139,   156,    98,   294,    -1,
     148,    -1,   294,    98,   148,    -1,   141,   296,   142,    -1,
      -1,   297,    -1,   298,    -1,   297,   298,    -1,   299,    -1,
     300,    -1,   301,    -1,   311,    -1,   318,    -1,   322,    -1,
     325,    -1,   330,    -1,   334,    -1,   287,    -1,   274,   288,
      21,   149,   226,   143,    -1,   274,   288,   149,   221,   143,
      -1,   302,   305,    -1,   274,   288,   149,   278,   124,   303,
     125,    -1,   274,   288,    84,   278,   124,   303,   125,    -1,
      -1,   306,    -1,   149,    -1,    84,    -1,   214,    -1,   143,
      -1,   307,    -1,   306,    98,   307,    -1,   308,    -1,   310,
      -1,   274,   309,   149,     4,    -1,    -1,    61,    -1,    54,
      -1,   274,    56,   149,     4,    -1,   274,   288,   149,   278,
     384,   141,   312,   142,   385,    -1,   315,   313,    -1,   316,
     314,    -1,    -1,   316,    -1,    -1,   315,    -1,   274,    94,
     385,   317,   384,    -1,   274,    95,   385,   317,   384,    -1,
     214,    -1,   143,    -1,   274,   288,    30,   149,   221,   143,
      -1,   274,   288,    30,   149,   278,   382,   141,   319,   142,
     383,    -1,   320,   321,    -1,   321,   320,    -1,   274,    96,
     383,   214,   382,    -1,   274,    97,   383,   214,   382,    -1,
     274,   288,   323,   384,   141,   312,   142,   385,    -1,   149,
      72,    99,   306,   100,    -1,   149,   324,    99,   306,   100,
      -1,   279,    72,    -1,   274,   288,   326,   335,    -1,   327,
      -1,   329,    -1,   149,    53,   328,   124,   149,     4,   125,
      -1,   149,    53,   328,   124,   149,     4,    98,   149,     4,
     125,    -1,   130,    -1,   131,    -1,   128,    -1,   129,    -1,
     119,    -1,   120,    -1,    74,    -1,    33,    -1,   123,    -1,
     132,    -1,   133,    -1,   127,    -1,   137,    -1,   136,    -1,
     109,    -1,   110,    -1,   113,    -1,   114,    -1,   135,    -1,
     134,    -1,   116,    -1,   115,    -1,    41,    53,   149,   124,
     149,     4,   125,    -1,    31,    53,   149,   124,   149,     4,
     125,    -1,   274,   288,   331,   336,    -1,     4,   124,   303,
     125,   332,    -1,    -1,   333,    -1,   139,    12,   124,   169,
     125,    -1,   139,    72,   124,   169,   125,    -1,   274,   288,
     129,     4,   124,   125,   214,    -1,   214,    -1,   143,    -1,
     214,    -1,   143,    -1,   274,   288,    70,     4,   338,   340,
     277,    -1,    -1,   339,    -1,   139,   294,    -1,   141,   341,
     142,    -1,    -1,   342,    -1,   343,    -1,   342,   343,    -1,
     299,    -1,   300,    -1,   301,    -1,   311,    -1,   318,    -1,
     322,    -1,   325,    -1,   330,    -1,   287,    -1,   141,   345,
     142,    -1,   141,   346,    98,   142,    -1,    -1,   346,    -1,
     223,    -1,   346,    98,   223,    -1,   274,   288,    44,     4,
     348,   350,   277,    -1,    -1,   349,    -1,   139,   294,    -1,
     141,   351,   142,    -1,    -1,   352,    -1,   353,    -1,   352,
     353,    -1,   354,    -1,   356,    -1,   359,    -1,   357,    -1,
     274,   355,   149,     4,   124,   303,   125,   360,    -1,   274,
     355,    84,     4,   124,   303,   125,   360,    -1,    -1,    50,
      -1,   274,   355,   149,     4,   384,   141,   358,   142,   385,
      -1,   274,   355,   149,    72,    99,   306,   100,   384,   141,
     358,   142,   385,    -1,   274,    94,   360,    -1,   274,    95,
     360,    -1,   274,    94,   360,   274,    95,   360,    -1,   274,
      95,   360,   274,    94,   360,    -1,   274,   355,    30,   149,
       4,   360,    -1,   143,    -1,   141,   142,    -1,   274,   288,
      29,     4,   362,   364,   277,    -1,    -1,   363,    -1,   139,
     154,    -1,   141,   365,   142,    -1,   141,   366,    98,   142,
      -1,    -1,   366,    -1,   367,    -1,   366,    98,   367,    -1,
     274,     4,    -1,   274,     4,   140,   210,    -1,   274,   288,
      25,   304,     4,   124,   303,   125,   143,    -1,   370,    -1,
     371,    -1,   370,   371,    -1,   380,    99,   372,   375,   100,
     381,    -1,   380,    99,   372,   375,    98,   100,   381,    -1,
      -1,   373,    -1,   374,   139,    -1,    87,    -1,    88,    -1,
      30,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      62,    -1,    93,    -1,   376,    -1,   375,    98,   376,    -1,
     378,   377,    -1,    -1,   379,    -1,   148,    -1,   124,   171,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   109,   112,   113,
     119,   122,   126,   127,   130,   131,   134,   135,   136,   139,
     140,   143,   144,   145,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   151,   151,   154,   154,   157,   158,   161,
     162,   163,   165,   167,   170,   174,   178,   179,   182,   183,
     184,   187,   188,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   205,   208,   209,   210,   213,
     214,   216,   218,   221,   222,   224,   226,   229,   230,   233,
     236,   237,   240,   243,   246,   249,   252,   253,   255,   257,
     260,   261,   264,   267,   270,   273,   276,   279,   280,   281,
     282,   283,   286,   287,   288,   289,   292,   295,   298,   299,
     300,   301,   302,   303,   304,   312,   313,   314,   315,   316,
     317,   319,   321,   324,   325,   328,   329,   332,   333,   334,
     335,   338,   339,   340,   343,   344,   345,   348,   349,   350,
     351,   352,   353,   354,   357,   358,   359,   362,   363,   366,
     367,   370,   371,   374,   375,   378,   379,   382,   383,   386,
     389,   389,   389,   389,   389,   389,   390,   390,   390,   390,
     390,   393,   394,   397,   400,   404,   405,   406,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   424,   426,   428,   432,   433,   436,   439,   442,   443,
     446,   449,   450,   453,   454,   457,   458,   459,   462,   465,
     468,   469,   472,   475,   478,   479,   480,   481,   482,   483,
     484,   487,   488,   491,   492,   495,   498,   500,   502,   505,
     506,   509,   512,   513,   516,   517,   520,   521,   522,   523,
     526,   529,   532,   535,   537,   539,   541,   543,   545,   547,
     550,   551,   554,   557,   560,   561,   564,   567,   568,   569,
     570,   571,   574,   577,   580,   581,   582,   585,   587,   589,
     592,   595,   596,   597,   600,   601,   604,   605,   606,   608,
     610,   613,   616,   619,   622,   625,   628,   629,   633,   636,
     637,   640,   643,   644,   646,   648,   650,   652,   654,   656,
     659,   661,   663,   672,   673,   676,   677,   680,   683,   684,
     687,   688,   691,   694,   697,   698,   701,   702,   705,   706,
     707,   708,   709,   719,   721,   724,   725,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   745,   747,   749,   752,   753,   754,   757,   758,   761,
     763,   765,   768,   769,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   782,   785,   788,   791,   795,   796,   798,
     800,   803,   804,   807,   808,   811,   812,   815,   816,   819,
     821,   823,   824,   828,   831,   837,   838,   840,   842,   844,
     846,   849,   855,   861,   862,   865,   866,   872,   873,   876,
     882,   888,   894,   896,   899,   903,   906,   907,   910,   911,
     914,   914,   915,   915,   915,   915,   915,   915,   916,   916,
     916,   916,   916,   916,   917,   917,   917,   917,   917,   917,
     917,   917,   920,   921,   924,   927,   929,   931,   934,   935,
     951,   954,   955,   958,   959,   964,   966,   968,   971,   974,
     976,   978,   981,   982,   985,   986,   987,   988,   989,   990,
     991,   992,   994,   999,  1000,  1002,  1004,  1007,  1008,  1013,
    1015,  1017,  1020,  1023,  1025,  1027,  1030,  1031,  1034,  1035,
    1036,  1037,  1041,  1042,  1044,  1046,  1049,  1055,  1063,  1064,
    1065,  1066,  1069,  1074,  1075,  1080,  1082,  1084,  1087,  1090,
    1091,  1093,  1095,  1098,  1099,  1102,  1103,  1108,  1113,  1116,
    1117,  1120,  1121,  1123,  1125,  1128,  1131,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1142,  1143,  1146,  1148,  1150,
    1153,  1156,  1163,  1166,  1169,  1172,  1175,  1178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER",
  "BAD_IDENTIFIER", "INTEGER_LITERAL", "REAL_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "ABSTRACT", "AS", "BASE", "BOOL", "BREAK", "BYTE",
  "CASE", "CATCH", "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE",
  "DECIMAL", "DEFAULT", "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM",
  "EVENT", "EXPLICIT", "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT",
  "FOR", "FOREACH", "GOTO", "IF", "IMPLICIT", "IN", "INT", "INTERFACE",
  "INTERNAL", "IS", "LOCK", "LONG", "NAMESPACE", "NEW", "NULL_LITERAL",
  "OBJECT", "OPERATOR", "OUT", "OVERRIDE", "PARAMS", "PRIVATE",
  "PROTECTED", "PUBLIC", "READONLY", "REF", "RETURN", "SBYTE", "SEALED",
  "SHORT", "SIZEOF", "STACKALLOC", "STATIC", "STRING", "STRUCT", "SWITCH",
  "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "UNCHECKED",
  "UNSAFE", "USHORT", "USING", "VIRTUAL", "VOID", "VOLATILE", "WHILE",
  "ASSEMBLY", "FIELD", "METHOD", "MODULE", "PARAM", "PROPERTY", "TYPE",
  "GET", "SET", "ADD", "REMOVE", "\",\"", "\"[\"", "\"]\"", "PLUSEQ",
  "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ", "LTLT",
  "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ", "NOTEQ", "LEQ", "GEQ", "ANDAND",
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROW", "THEN", "'*'", "'('", "')'",
  "'.'", "'&'", "'!'", "'~'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "'{'", "'}'", "';'", "$accept",
  "literal", "boolean_literal", "namespace_name", "type_name", "type",
  "non_array_type", "simple_type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "class_type", "pointer_type",
  "array_type", "rank_specifiers_opt", "rank_specifier",
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
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     375,   376,   377,    42,    40,    41,    46,    38,    33,   126,
      43,    45,    47,    37,    60,    62,    94,   124,    63,    58,
      61,   123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
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
     220,   221,   221,   222,   222,   223,   223,   223,   224,   225,
     226,   226,   227,   228,   229,   229,   229,   229,   229,   229,
     229,   230,   230,   231,   231,   232,   233,   234,   234,   235,
     235,   236,   237,   237,   238,   238,   239,   239,   239,   239,
     240,   241,   242,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   249,   250,   250,   251,   252,   252,   252,
     252,   252,   253,   254,   255,   255,   255,   256,   257,   257,
     258,   259,   259,   259,   260,   260,   261,   261,   261,   262,
     262,   263,   264,   265,   266,   267,   268,   268,   269,   270,
     270,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   277,   277,   278,   278,   279,   279,   280,   281,   281,
     282,   282,   283,   284,   285,   285,   286,   286,   287,   287,
     287,   287,   287,   288,   288,   289,   289,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   291,   292,   292,   293,   293,   293,   294,   294,   295,
     296,   296,   297,   297,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   299,   300,   301,   302,   302,   303,
     303,   304,   304,   305,   305,   306,   306,   307,   307,   308,
     309,   309,   309,   310,   311,   312,   312,   313,   313,   314,
     314,   315,   316,   317,   317,   318,   318,   319,   319,   320,
     321,   322,   323,   323,   324,   325,   326,   326,   327,   327,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   329,   329,   330,   331,   332,   332,   333,   333,
     334,   335,   335,   336,   336,   337,   338,   338,   339,   340,
     341,   341,   342,   342,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   344,   344,   345,   345,   346,   346,   347,
     348,   348,   349,   350,   351,   351,   352,   352,   353,   353,
     353,   353,   354,   354,   355,   355,   356,   357,   358,   358,
     358,   358,   359,   360,   360,   361,   362,   362,   363,   364,
     364,   365,   365,   366,   366,   367,   367,   368,   369,   370,
     370,   371,   371,   372,   372,   373,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   375,   375,   376,   377,   377,
     378,   379,   380,   381,   382,   383,   384,   385
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
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
       2,     1,     3,     1,     3,     1,     1,     1,     5,     3,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     5,     3,     0,     1,     1,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       2,     5,     7,     9,     0,     1,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     3,     8,     1,     1,     1,
       1,     1,     2,     2,     3,     4,     3,     3,     0,     1,
       3,     3,     3,     4,     1,     2,     6,     6,     2,     0,
       1,     2,     2,     2,     5,     5,     1,     1,     6,     1,
       3,     3,     2,     2,     0,     1,     0,     1,     0,     1,
       5,     0,     1,     1,     2,     2,     3,     4,     1,     2,
       1,     1,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     0,     1,     2,     2,     4,     1,     3,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     5,     2,     7,     7,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     4,
       0,     1,     1,     4,     9,     2,     2,     0,     1,     0,
       1,     5,     5,     1,     1,     6,    10,     2,     2,     5,
       5,     8,     5,     5,     2,     4,     1,     1,     7,    10,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     4,     5,     0,     1,     5,     5,
       7,     1,     1,     1,     1,     7,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     0,     1,     1,     3,     7,
       0,     1,     2,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     8,     8,     0,     1,     9,    12,     3,     3,
       6,     6,     6,     1,     2,     7,     0,     1,     2,     3,
       4,     0,     1,     1,     3,     2,     4,     9,     1,     1,
       2,     6,     7,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     1,
       1,     3,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     294,     0,     0,   296,   295,   308,   310,   311,   303,     0,
      10,     0,     1,   323,   316,   296,   314,   317,   318,   319,
     320,   321,   322,   297,   508,   509,     0,   309,   305,     0,
     313,   304,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,     0,   324,   325,
     323,   315,   510,   513,   303,     0,   306,     0,     0,     0,
       0,     0,     0,   326,   518,   523,   516,   517,   519,   520,
     521,   522,   524,     0,   514,     0,   312,   294,   301,   342,
      20,    25,    32,    23,    34,    33,    28,    30,    35,    24,
      26,    36,    29,    31,    27,   372,    15,   371,    12,    14,
      16,    19,    21,    22,    17,    18,    13,    11,     0,   496,
     470,   446,   530,    11,     0,   525,   528,   515,   296,   302,
     300,     0,     0,   343,    38,    37,    44,    40,    39,    41,
       0,     0,     0,   497,     0,     0,   471,     0,     0,   447,
       0,   533,    75,   527,   529,     0,   296,   347,   344,   345,
     296,   301,   296,   498,   296,   301,   472,   296,   301,   448,
     296,   301,   533,   526,   511,     3,     4,     5,     6,     0,
       0,     9,     0,     7,     0,    79,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     2,
       0,     0,    97,    52,    51,    55,    56,    57,     0,    76,
      58,    59,    99,   100,    60,    84,    54,    61,    63,    64,
     101,   114,    62,   102,   108,   112,   113,   127,   105,   131,
     134,   137,   144,   147,   149,   151,   153,   155,   157,   171,
     172,    77,    98,   307,     0,     0,   323,   363,     0,   296,
     352,   354,   355,   356,     0,   357,   358,   359,   360,   361,
     362,   341,   380,     0,   370,   375,   377,   378,     0,     0,
     502,   503,   495,   484,     0,   296,   476,   478,   479,   481,
     480,   469,   323,   462,   454,   455,   456,   457,   458,   459,
     460,   461,     0,   296,   452,   445,   512,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,   106,   107,   111,
     121,   121,   121,   131,     0,    98,    95,   103,   104,   109,
     110,     0,     0,     0,     0,    71,   531,     0,    82,    83,
       0,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,   346,   348,     0,   349,
     353,   192,   374,   373,   366,   382,     0,   381,     0,     0,
     296,   505,   499,   296,   485,     0,   473,   477,     0,   449,
     453,     0,    80,     0,    71,     0,   465,    87,     0,     0,
       0,     0,   126,   125,     0,   122,   123,     0,     0,     0,
      65,   121,    67,    68,     0,    66,     0,     0,    72,    46,
       0,    48,    78,    94,   159,   128,   129,   130,   127,   132,
     133,   135,   136,   143,   142,   140,   141,   138,   139,   145,
     146,   148,   150,   152,   154,   156,     0,     0,     0,   303,
       0,     0,     0,     0,     0,     0,     0,   536,     0,   406,
     407,     0,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,   268,     0,     0,     0,
       0,     0,   196,     0,    16,    17,    56,    99,   100,    84,
     112,   113,     0,   216,   194,   177,   178,     0,   193,   179,
     175,   176,     0,     0,   180,     0,   181,   221,   222,   182,
     189,   236,   237,   238,   239,   183,   257,   258,   259,   260,
     261,   184,   185,   186,   187,   188,   190,    98,     0,     0,
     507,   376,     0,   500,   504,     0,     0,     0,    81,    92,
       0,     0,     0,   205,   467,   207,   206,     0,   466,    96,
      91,    90,    93,     0,   124,     0,     0,     0,   115,     0,
      73,    50,    45,    49,     0,    69,     0,    74,    70,   296,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
     201,   536,     0,     0,     0,   442,   441,   405,   444,   443,
     434,     0,   262,   282,     0,   263,     0,     0,   244,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,     0,
     283,   240,     0,     0,   203,   200,   191,   195,   198,   199,
     213,   383,   379,   173,   506,     0,     0,   536,     0,    85,
      42,     0,   463,     0,   120,   118,   119,   116,     0,    47,
     158,     0,     0,     0,   210,     0,   534,     0,     0,   296,
       0,     0,   417,   416,   424,   425,   426,   427,   431,   430,
     414,   415,   418,   421,   412,   413,   410,   411,   419,   420,
     429,   428,   423,   422,     0,   296,     0,   365,   296,     0,
     404,   296,   296,   197,   209,     0,     0,   250,   254,     0,
     245,   251,     0,   264,     0,   266,   174,     0,     0,   267,
       0,   270,     0,     0,   271,   274,   272,   287,   286,     0,
       0,     0,   296,   296,     0,   296,    88,    42,     0,   464,
     468,   117,   436,     0,     0,   364,   395,     0,     0,     0,
       0,     0,   204,     0,     0,   202,     0,   296,     0,     0,
       0,   296,   296,     0,     0,     0,   289,   246,     0,     0,
     265,     0,     0,     0,     0,   278,   281,   275,   273,     0,
       0,     0,   493,   492,     0,     0,   296,     0,    86,    89,
      43,     0,     0,   435,   437,   212,   211,   296,     0,     0,
     368,   440,     0,   402,   367,     0,   403,   537,   537,   537,
       0,   385,   388,     0,   386,   390,     0,     0,     0,     0,
     252,     0,   247,   255,     0,   223,   284,   227,   225,   279,
     279,   285,   241,   494,     0,     0,     0,     0,   536,   208,
       0,     0,     0,     0,   296,   296,     0,     0,     0,   537,
       0,     0,   401,     0,   291,   290,   288,   248,     0,     0,
       0,     0,     0,   228,   229,     0,   232,   280,     0,     0,
     483,   482,     0,     0,   537,     0,    71,    71,   535,   535,
     535,     0,   397,     0,   398,   433,   432,     0,   408,   384,
     394,   393,   536,   536,   242,     0,   249,   253,     0,   224,
       0,   235,   226,   230,   231,   233,     0,     0,   296,   296,
     486,   296,     0,     0,     0,     0,   396,     0,   391,   392,
       0,   256,   234,   277,   276,     0,     0,     0,   438,   439,
     534,   534,     0,   243,     0,     0,   537,   399,   400,   409,
     490,   491,   487
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   188,   189,     9,    96,   473,    98,    99,   190,   101,
     102,   103,   191,   105,   106,   706,   393,   551,   408,   409,
     192,   193,   194,   195,   196,   410,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   758,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   394,
     395,   396,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   332,   411,   614,   687,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   569,   570,   534,
     535,   493,   633,   634,   494,   495,   496,   497,   498,   798,
     832,   833,   834,   835,   836,   499,   500,   501,   502,   503,
     679,   791,   865,   680,   792,   866,   681,   504,   505,   506,
     507,   508,   509,   596,   510,   511,   694,   695,   838,   696,
     512,   513,   514,   515,   699,   516,   735,   736,     2,     3,
     252,   145,    14,   120,   232,    11,    78,     4,     5,     6,
       7,    15,    16,    17,    47,    48,    49,    18,   122,   123,
     149,   151,   238,   239,   240,   241,   242,   243,   244,   253,
     108,   364,   254,   255,   256,   368,   257,   245,   730,   781,
     784,   731,   732,   862,   246,   813,   814,   815,   247,   447,
     573,   248,   448,   449,   664,   450,   249,   451,   763,   764,
     250,   577,   580,    19,   138,   139,   161,   282,   283,   284,
     536,   537,   538,    20,   135,   136,   158,   264,   265,   266,
     267,   375,   268,   269,   807,   270,   753,    21,   132,   133,
     155,   259,   260,   261,    22,    23,    24,    25,    73,    74,
      75,   114,   115,   143,   116,   144,    26,   164,   717,   884,
     574,   820
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -758
static const short int yypact[] =
{
      29,   110,   260,   193,    29,  -758,  -758,  -758,   -27,    44,
    -758,   299,  -758,  1018,  -758,    23,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   193,  -758,   233,  -758,  -758,   379,
    -758,   239,  -758,  -758,  -758,   379,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,   220,   857,  -758,
     603,  -758,  -758,   185,   269,   257,  -758,   251,   402,  2510,
     412,   429,   432,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   379,  -758,   306,  -758,    29,   315,   334,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   354,  -758,   358,  -758,   482,
    -758,  -758,  -758,  -758,  -758,  -758,   482,   482,   489,   372,
     387,   404,  -758,  -758,   119,  -758,   378,  -758,    -9,  -758,
    -758,    43,   405,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
     449,   361,   433,  -758,   379,   434,  -758,   379,   435,  -758,
      36,  -758,  2330,  -758,  -758,   438,   114,  -758,   479,   484,
     115,   315,     3,  -758,   121,   315,   484,   149,   315,   484,
     207,   315,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   -61,
     460,  -758,  2553,  -758,   461,  -758,  -758,   468,   470,  2330,
    2330,  2330,  2053,  2330,  2330,  2330,  2330,  2330,  -758,  -758,
     467,   472,    -1,   475,  -758,  -758,  -758,  -758,   476,   488,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   347,  -758,  -758,  -758,   411,  -758,   328,
     -82,   173,    26,   309,   481,   473,   477,   493,   -77,  -758,
    -758,  -758,   224,  -758,   379,   379,   857,  -758,   454,   218,
    -758,  -758,  -758,  -758,   128,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   373,   487,   508,  -758,  -758,  -758,   611,   474,
     519,  -758,  -758,   569,   490,   221,  -758,  -758,  -758,  -758,
    -758,  -758,   857,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   491,   254,  -758,  -758,  -758,  2330,   619,  2330,
     354,   325,   530,     5,  2553,  2577,  2330,  -758,  -758,  -758,
      61,    33,    48,   342,   505,    77,  -758,  -758,  -758,  -758,
    -758,   627,   630,  2330,   632,  1964,  -758,  2330,  -758,  -758,
     633,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,
    2553,  2553,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,
    2330,  2330,  2330,  2330,  2330,  1964,   484,  -758,  2486,  -758,
    -758,  1536,  -758,  -758,  -758,  -758,  2553,  -758,  2553,   495,
     193,   499,  -758,   255,  -758,   266,  -758,  -758,  1307,  -758,
    -758,   303,  -758,   515,  1964,  2330,  1865,  -758,   196,   305,
     329,   516,  -758,  -758,   517,    61,  -758,   518,   520,  2142,
    2419,    61,  -758,  -758,   380,  -758,  2330,  2330,   546,  -758,
     524,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   328,
     328,   -82,   -82,   358,   358,   173,   173,   173,   173,    26,
      26,   309,   481,   473,   477,   493,   511,   384,   526,   363,
    2553,  2553,   606,   615,    63,   652,   120,  -758,   351,  -758,
    -758,   357,   -21,   529,    59,  2553,   531,  1635,   551,   554,
     556,   335,   558,   560,  2330,   561,  2330,   548,   231,   548,
     563,   566,  -758,    66,   467,   472,   -17,   101,   125,   161,
     187,   209,   411,  -758,  -758,  -758,  -758,   550,  1536,  -758,
    -758,  -758,   552,   553,  -758,   555,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    21,    70,    72,
    -758,  -758,  2330,  -758,  -758,  2553,    73,    67,  -758,  -758,
     568,   403,  2553,  -758,  -758,  -758,  -758,   557,   596,  -758,
    -758,  -758,  -758,  2330,  -758,  2330,  2330,  2330,  -758,   572,
    -758,  -758,  -758,  -758,  1964,  -758,  2330,  -758,  -758,     3,
      79,    80,  2553,  2553,   577,   579,   291,  1025,   607,   118,
    -758,   581,    38,   608,   567,  -758,  -758,  -758,  -758,  -758,
    -758,  1536,  -758,  -758,    79,  -758,   625,  2553,  2241,  2553,
     570,  2330,   571,  2330,  2330,  -758,   573,  2330,   574,   352,
    -758,  -758,  2241,  2330,   575,   614,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,    81,   597,   598,   621,  -758,
     482,     8,  -758,  1734,  -758,  -758,  -758,  -758,  2330,  -758,
    -758,   600,   587,   124,  -758,   199,  -758,   346,   407,     3,
     612,  1865,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   609,   193,   727,  -758,     3,   591,
    -758,   193,   193,  -758,   638,   616,    82,  -758,  -758,   595,
    -758,   643,    84,  -758,   599,  -758,  -758,   618,   622,  -758,
     623,  -758,   249,   548,   352,  -758,  -758,  -758,  -758,   624,
     626,   386,     3,     3,   605,   193,   613,   482,  2330,  -758,
    -758,  -758,   617,  2330,   746,  -758,  -758,   629,  2553,  2553,
     634,   548,  -758,  2553,   408,  -758,   637,   193,   439,   459,
     610,   263,   265,  2330,   631,    -2,  -758,  2330,  2330,   713,
    -758,  1635,  1635,   640,    43,  -758,  -758,  -758,  -758,  1635,
    1635,   653,  -758,  -758,   647,   648,   193,   442,  -758,  -758,
    -758,   658,    32,  -758,  -758,  -758,  -758,   193,    85,    87,
    -758,  -758,    88,  -758,  -758,   654,  -758,  -758,  -758,  -758,
     668,  -758,  -758,   671,  -758,  -758,   669,  2330,   793,  1635,
    -758,   662,  -758,  -758,  2330,   773,  -758,   365,  -758,   802,
     802,  -758,  -758,  -758,   386,   386,   462,   665,  -758,  -758,
     685,   689,   469,   674,   193,   193,   697,   698,   108,  -758,
     409,   409,  -758,   681,  -758,  -758,  -758,  2330,   702,  1635,
    2330,   690,   686,   365,  -758,  1398,  -758,  -758,   705,   708,
    -758,  -758,   386,   386,  -758,   693,  1964,  1964,  -758,  -758,
    -758,   739,  -758,   741,  -758,  -758,  -758,  2553,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   714,  -758,   643,  1635,  -758,
     699,  -758,  -758,  -758,  1536,  -758,   548,   548,   268,   272,
    -758,   193,   716,   717,   548,   548,  -758,    89,  -758,  -758,
    1635,  -758,  -758,  -758,  -758,   748,   750,   703,  -758,  -758,
    -758,  -758,   722,  -758,   386,   386,  -758,  -758,  -758,  -758,
    -758,  -758,  -758
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -758,  -758,  -758,  -758,   -71,   -42,   677,  -758,    16,  -758,
     719,  -758,   -53,  -758,   680,   146,   -96,   448,  -758,   302,
    -758,  -758,  -758,  -758,  -330,  -351,  -758,  -758,  -253,  -758,
    -758,    19,    76,  -758,   222,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   458,   343,   471,   441,  -758,  -223,
    -758,   464,  -169,   229,  -113,   212,   512,   513,   514,   510,
     528,  -758,  -758,   525,  -758,   413,  -575,  -585,  -481,  -404,
    -230,  -758,    28,  -758,  -758,  -758,  -485,  -445,   200,  -596,
    -758,  -758,   284,   155,  -758,  -573,  -758,  -758,  -758,  -758,
    -758,  -758,    37,  -758,    46,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,    45,  -758,  -758,  -758,
    -758,  -758,  -758,   416,  -758,  -758,  -758,   177,    83,   190,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    97,  -758,   811,
      -3,  -758,  -758,   292,     0,   445,  -758,  -758,   888,  -758,
    -758,   776,     4,  -130,  -190,  -758,   847,  -758,  -758,  -758,
     -40,  -758,  -758,  -758,   657,  -128,  -121,  -117,  -758,  -533,
    -758,  -758,  -480,   527,  -758,  -758,  -758,  -108,   172,  -758,
    -758,   168,   170,    92,  -106,  -758,    91,    90,  -104,  -758,
    -758,  -103,  -758,  -758,  -758,  -758,  -102,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   635,
    -288,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   645,
    -758,  -758,  -758,  -758,    27,  -758,  -577,  -758,  -758,  -758,
    -758,  -758,  -758,   547,  -758,  -758,  -758,   895,  -758,  -758,
    -758,  -758,   782,  -758,  -758,  -758,  -758,   761,  -331,  -278,
    -562,  -757
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -533
static const short int yytable[] =
{
      13,    10,   112,   127,   438,   387,   104,   607,   126,   669,
     128,   129,    50,   303,   363,   678,   684,    97,   700,    51,
     237,   821,   822,  -293,   126,   -11,   631,   710,   605,    55,
     273,   476,   274,   530,   381,    57,   126,   340,   287,   275,
      54,   352,    31,   276,   810,   722,   358,    54,   336,   337,
     147,   126,   277,   586,   278,   704,   279,   280,   281,   107,
     404,   353,   859,   147,   126,   288,   147,    54,   148,   112,
     604,   617,   341,   113,   611,   100,   612,   616,   397,   398,
     126,  -214,   378,   632,   566,   701,   734,   880,   739,   816,
    -532,   817,   818,   902,   156,    88,   788,   159,   313,    28,
     673,   437,  -532,   677,   811,    28,   720,   708,  -214,   237,
     670,     1,    91,    29,     8,    50,   635,   698,   581,   104,
     354,   113,  -532,   789,   566,   314,  -214,   476,  -369,   302,
     291,   125,   531,  -298,   113,   726,   162,   113,   765,   618,
     113,   342,   343,    50,   -11,   355,   386,   236,   786,   912,
      51,   258,   790,   273,   263,   274,   392,   272,   476,   311,
     344,   345,   275,   147,   357,   793,   276,   419,   420,   754,
     755,   392,   107,   567,   312,   277,   354,   278,   549,   279,
     280,   281,   305,   289,   392,   724,   124,    30,   100,   125,
     125,   728,   568,   125,   356,   125,   124,   128,   301,  -217,
     361,   355,   125,   125,   125,   125,   857,   125,   125,   401,
     125,   125,   125,  -532,  -532,    64,   666,   140,   576,   141,
    -532,   579,   714,  -218,   583,   757,  -217,   840,   841,   425,
     426,   427,   428,   858,   113,   113,   236,   599,   600,   601,
      58,   104,   104,   125,  -217,    59,   845,    65,  -532,    60,
    -218,   476,   388,   390,   678,   870,  -299,  -350,   476,  -215,
      12,   667,   263,  -501,    61,   878,   879,   715,  -218,   361,
      54,   362,    66,    67,    68,    69,    70,    71,    72,    80,
     272,    81,   338,   339,    82,  -219,  -215,   104,   104,    83,
      62,  -474,  -532,    84,   107,   107,   525,   666,   423,   424,
     888,   889,    85,    31,  -215,   104,  -532,  -220,   475,    86,
     100,   100,  -219,   104,    87,   104,   446,  -532,    88,   125,
    -532,   539,   104,   354,   518,   104,   519,   910,   911,    89,
    -219,    90,    53,   527,  -220,    91,   446,   795,   796,   590,
     107,   107,   716,    92,    93,   801,   802,    94,   355,  -450,
     526,   591,  -220,  -532,  -532,   296,   100,   100,   107,   592,
    -351,   517,  -532,  -475,  -532,    56,   107,  -532,   107,   692,
     258,  -532,   361,   744,   100,   107,    81,   474,   107,    82,
     477,   830,   100,    54,   100,   826,   693,   104,   104,   831,
     361,   100,    77,   607,   100,    28,  -451,   523,   560,   561,
      76,   317,   104,   528,    86,  -387,    79,  -389,   476,    87,
    -488,   476,   476,   584,  -489,  -303,   109,    28,   759,   476,
     476,   129,   346,   347,    89,   869,    90,   365,   124,   366,
     540,   641,  -303,   110,   367,   475,   111,   478,    92,    93,
     107,   107,    94,   251,   564,   117,   571,   262,   125,   384,
     271,   333,   125,   285,   541,   107,   100,   100,   119,   476,
     334,   335,   745,   746,   891,   399,   318,   319,   320,   125,
     718,   100,   104,   121,   334,   335,   477,   124,   317,   104,
     550,   125,   317,   615,   557,   126,   903,   559,   517,    28,
     621,   771,   361,   130,   575,   882,   883,   476,   361,   476,
     578,   317,   142,   620,   474,   476,   370,   477,   773,   104,
     104,   131,   321,   322,   323,   324,   325,   326,   327,   328,
     637,   638,   329,   330,   707,   107,   134,   751,   475,   752,
     125,   719,   107,   478,   104,   475,   104,   370,   476,   776,
     370,   100,   808,   137,   476,   676,   150,   682,   100,   475,
     361,   331,   860,   777,   778,   231,   842,   843,   429,   430,
     476,   636,   107,   107,   478,   848,   849,   421,   422,   907,
     908,   885,   886,   152,   154,   157,   160,   234,   100,   100,
     233,   517,   235,   479,   289,   294,   317,   107,   517,   107,
     861,   861,   295,   311,   296,   304,   359,   474,   312,   315,
     477,   316,   517,   100,   474,   100,   370,   477,   348,   349,
     351,   707,   369,    32,   350,   371,   372,   373,   474,   374,
     297,   298,   299,   382,   306,   307,   308,   309,   310,   385,
     400,   402,   376,   379,   403,    33,   405,   413,   520,   522,
     529,   542,   543,   545,   554,   546,   893,   894,    34,   555,
     556,   558,    35,    36,   900,   901,   565,   478,    37,   562,
      38,    39,    40,    41,   478,   104,   104,    42,   563,   729,
     104,    43,   582,   799,   585,   587,   768,   769,   588,   479,
     589,   772,   593,    44,   594,   597,    45,   602,    46,   361,
     603,   800,   606,   619,   623,   608,   609,   628,   610,   622,
     231,   639,   383,   640,   480,   668,   665,   671,   672,   391,
     479,   675,   666,   683,   685,   641,   689,   691,   107,   107,
     705,   702,   703,   107,   729,   712,   231,   713,   780,   783,
     412,   604,   727,   723,   100,   100,   714,   721,   737,   100,
     733,   738,   740,   741,   113,   414,   756,   742,   743,   749,
     632,   750,   779,   806,   386,   794,   762,   477,   809,   770,
     477,   477,   774,   778,   812,   777,   436,   231,   477,   477,
     767,   787,   804,   805,   415,   416,   417,   418,   418,   418,
     418,   797,   475,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   823,   803,   819,   734,   231,   533,
     480,   829,   482,   479,   104,   827,   837,   844,   477,   846,
     479,   851,   853,   847,   478,   887,   850,   478,   478,   552,
     552,   475,   855,   856,   864,   478,   478,   868,   872,   871,
     876,   480,   481,   877,   881,   517,   849,   848,   892,   890,
     415,   898,   899,   904,   905,   906,   477,   909,   477,   292,
     153,   474,   293,   760,   477,   553,   629,   107,   548,   544,
     431,   434,   432,   874,   433,   478,   725,    32,   674,   766,
     873,   747,   867,   100,   517,   895,   896,   595,   806,   595,
     435,   875,   598,   839,   748,   825,   483,   477,   118,    33,
     474,   572,    27,   477,   146,    63,   360,   521,   482,   775,
     785,   782,    34,   478,   852,   478,   854,    36,   897,   477,
     377,   478,    37,   863,    38,    39,    40,    41,   380,    52,
     524,    42,   163,   286,   480,    43,     0,     0,   481,   482,
       0,   480,     0,     0,     0,   613,     0,    44,     0,     0,
      45,     0,    46,     0,   478,     0,     0,     0,     0,     0,
     478,     0,     0,     0,     0,     0,     0,     0,     0,   481,
     479,     0,     0,   479,   479,     0,   478,     0,     0,   630,
       0,   479,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   483,     0,   624,     0,   625,   626,   627,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   613,     0,   686,   688,     0,     0,
     690,   479,     0,   483,     0,   697,   686,     0,  -292,     0,
       0,     0,   482,     0,     0,     0,     0,     0,    32,   482,
       0,     0,     0,     0,     0,     0,   533,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   479,
      33,   479,   481,     0,   533,     0,     0,   479,   642,   481,
       0,     0,     0,    34,     0,     0,     0,    35,    36,   711,
       0,     0,     0,    37,     0,    38,    39,    40,    41,     0,
       0,   480,    42,     0,   480,   480,    43,     0,     0,     0,
     479,     0,   480,   480,     0,     0,   479,     0,    44,   643,
       0,    45,     0,    46,     0,     0,   483,     0,     0,     0,
       0,     0,   479,   483,     0,     0,     0,     0,     0,     0,
       0,   761,     0,     0,     0,     0,   613,     0,     0,     0,
       0,     0,   480,     0,   644,   645,     0,     0,   646,   647,
     648,   649,     0,     0,   650,   651,   686,     0,   652,     0,
     686,     0,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,     0,     0,     0,     0,     0,     0,     0,
     480,     0,   480,     0,     0,     0,     0,     0,   480,   482,
       0,     0,   482,   482,     0,     0,     0,     0,     0,     0,
     482,   482,     0,     0,     0,     0,     0,     0,     0,     0,
     824,     0,     0,     0,     0,     0,     0,   828,     0,   481,
       0,   480,   481,   481,     0,     0,     0,   480,     0,     0,
     481,   481,     0,     0,     0,     0,     0,     0,     0,     0,
     482,     0,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   613,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     481,     0,     0,   483,     0,     0,   483,   483,   482,     0,
     482,     0,     0,     0,   483,   483,   482,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,     0,
     481,     0,     0,     0,     0,     0,   481,     0,     0,   482,
       0,   439,     0,     0,   483,   482,     0,     0,     0,     0,
      80,     0,    81,     0,     0,    82,     0,    58,   440,     0,
      83,   482,    59,     0,    84,     0,    60,   441,   442,   481,
       0,     0,     0,    85,     0,   481,     0,     0,   443,     0,
      86,    61,   483,     0,   483,    87,     0,     0,     0,    88,
     483,   481,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    90,     0,     0,     0,    91,    62,     0,     0,
       0,     0,     0,     0,    92,    93,     0,     0,    94,     0,
       0,   444,     0,   483,     0,     0,     0,     0,     0,   483,
       0,     0,   452,     0,   165,   166,   167,   168,     0,     0,
     169,    80,   453,    81,   830,   483,    82,   454,     0,   455,
     456,    83,   831,     0,   457,    84,     0,     0,     0,     0,
       0,   171,     0,   458,    85,   459,   460,   461,   462,     0,
       0,    86,     0,     0,     0,   463,    87,     0,   172,   173,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,    89,     0,    90,   174,     0,     0,    91,     0,   465,
     175,   466,   176,   467,   177,    92,    93,   468,   469,    94,
     470,     0,   290,     0,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,     0,
       0,   181,   182,     0,     0,   183,   184,   185,   186,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     452,   472,   165,   166,   167,   168,     0,     0,   169,    80,
     453,    81,     0,     0,    82,   454,     0,   455,   456,    83,
       0,     0,   457,    84,     0,     0,     0,     0,     0,   171,
       0,   458,    85,   459,   460,   461,   462,     0,     0,    86,
       0,     0,     0,   463,    87,     0,   172,   173,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,    89,
       0,    90,   174,     0,     0,    91,     0,   465,   175,   466,
     176,   467,   177,    92,    93,   468,   469,    94,   470,     0,
     290,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,   165,   166,   167,   168,     0,     0,   169,    80,   453,
      81,     0,     0,    82,   454,   179,   180,   456,    83,   181,
     182,   457,    84,   183,   184,   185,   186,   187,   171,     0,
     458,    85,   459,   460,   461,   462,     0,   361,    86,   472,
       0,     0,   463,    87,     0,   172,   173,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,    89,     0,
      90,   174,     0,     0,    91,     0,   465,   175,   466,   176,
     467,   177,    92,    93,   468,   469,    94,   470,     0,     0,
       0,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     165,   166,   167,   168,     0,     0,   169,    80,     0,    81,
       0,     0,    82,   170,   179,   180,     0,    83,   181,   182,
       0,    84,   183,   184,   185,   186,   187,   171,     0,     0,
      85,     0,     0,     0,     0,     0,   361,    86,   472,     0,
       0,     0,    87,     0,   172,   173,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    90,
     174,   532,     0,    91,     0,     0,   175,     0,   176,     0,
     177,    92,    93,   178,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   180,     0,     0,   181,   182,     0,
       0,   183,   184,   185,   186,   187,     0,     0,     0,    54,
       0,   165,   166,   167,   168,   386,   709,   169,    80,     0,
      81,     0,     0,    82,   170,     0,     0,     0,    83,     0,
       0,     0,    84,     0,     0,     0,     0,     0,   171,     0,
       0,    85,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,    87,     0,   172,   173,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,   174,   532,     0,    91,     0,     0,   175,     0,   176,
       0,   177,    92,    93,   178,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     165,   166,   167,   168,     0,     0,   169,    80,     0,    81,
       0,     0,    82,   170,   179,   180,     0,    83,   181,   182,
       0,    84,   183,   184,   185,   186,   187,   171,     0,     0,
      85,     0,     0,     0,     0,     0,   386,    86,     0,     0,
       0,     0,    87,     0,   172,   173,    88,     0,   406,     0,
       0,     0,     0,     0,     0,   407,     0,    89,     0,    90,
     174,     0,     0,    91,     0,     0,   175,     0,   176,     0,
     177,    92,    93,   178,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,   165,
     166,   167,   168,     0,     0,   169,    80,     0,    81,     0,
       0,    82,   170,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,   179,   180,     0,   171,   181,   182,    85,
       0,   183,   184,   185,   186,   187,    86,     0,     0,     0,
       0,    87,     0,   172,   173,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    90,   174,
       0,     0,    91,     0,     0,   175,     0,   176,     0,   177,
      92,    93,   178,     0,    94,     0,     0,   300,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,   165,   166,
     167,   168,     0,     0,   169,    80,     0,    81,     0,     0,
      82,   170,     0,     0,     0,    83,     0,     0,     0,    84,
       0,     0,   179,   180,     0,   171,   181,   182,    85,     0,
     183,   184,   185,   186,   187,    86,     0,     0,     0,     0,
      87,     0,   172,   173,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,    90,   174,     0,
       0,    91,     0,     0,   175,     0,   176,     0,   177,    92,
      93,   178,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,   165,   166,   167,
     168,     0,     0,   169,    80,     0,    81,     0,     0,    82,
     170,   179,   180,     0,    83,   181,   182,   547,    84,   183,
     184,   185,   186,   187,   171,     0,     0,    85,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,    87,
       0,   172,   173,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,    90,   174,     0,     0,
      91,     0,     0,   175,     0,   176,     0,   177,    92,    93,
     178,     0,    94,     0,     0,   290,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,   165,   166,   167,   168,
       0,     0,   169,    80,     0,    81,     0,     0,    82,   170,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
     179,   180,     0,   171,   181,   182,    85,     0,   183,   184,
     185,   186,   187,    86,     0,     0,     0,     0,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,     0,     0,    91,
       0,     0,   175,     0,   176,     0,   177,    92,    93,   178,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,   165,   166,   167,   168,     0,
       0,   169,    80,     0,    81,     0,     0,    82,   170,     0,
       0,     0,    83,     0,     0,     0,    84,     0,     0,   179,
     180,     0,   171,   181,   182,    85,     0,   183,   184,   185,
     186,   187,    86,     0,     0,     0,     0,    87,     0,   172,
     173,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,    90,   174,     0,     0,    91,     0,
     439,   175,     0,   176,     0,   177,    92,    93,   178,    80,
      94,    81,     0,     0,    82,     0,    58,   440,     0,    83,
       0,    59,     0,    84,    54,    60,   441,   442,     0,     0,
       0,     0,    85,    80,     0,    81,     0,   443,    82,    86,
      61,     0,     0,    83,    87,     0,     0,    84,    88,     0,
       0,     0,     0,   182,     0,     0,    85,   184,   185,    89,
       0,    90,     0,    86,     0,    91,    62,    54,    87,     0,
       0,     0,    88,    92,    93,     0,    80,    94,    81,     0,
     444,    82,     0,    89,     0,    90,    83,     0,     0,    91,
      84,    54,     0,     0,     0,     0,     0,    92,    93,    85,
      80,    94,    81,     0,    95,    82,    86,     0,     0,     0,
      83,    87,     0,     0,    84,    88,     0,     0,     0,     0,
       0,     0,     0,    85,     0,   445,    89,     0,    90,     0,
      86,     0,    91,     0,     0,    87,     0,     0,     0,    88,
      92,    93,     0,     0,    94,     0,     0,   290,     0,     0,
      89,     0,    90,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,    92,    93,     0,     0,    94,     0,
       0,   389
};

static const short int yycheck[] =
{
       3,     1,    73,    99,   355,   293,    59,   488,     3,   571,
     106,   107,    15,   182,   244,   588,   591,    59,   603,    15,
     150,   778,   779,     0,     3,     4,   559,   623,   473,    29,
     160,   361,   160,   384,   287,    35,     3,    11,    99,   160,
       4,   118,     4,   160,    12,   641,   236,     4,   130,   131,
     121,     3,   160,   457,   160,   617,   160,   160,   160,    59,
     313,   138,   819,   134,     3,   126,   137,     4,   121,   140,
       4,     4,    46,    73,     4,    59,     4,     4,   301,   302,
       3,    98,   272,     4,     4,     4,     4,   844,     4,     4,
      99,     4,     4,     4,   134,    52,    98,   137,    99,   126,
     581,   354,    99,   588,    72,   126,   639,    99,   125,   239,
      72,    82,    69,   140,     4,   118,   561,   602,   139,   172,
      99,   121,    99,   125,     4,   126,   143,   457,   125,   182,
     172,   123,   385,   142,   134,   668,   100,   137,   713,    72,
     140,   115,   116,   146,   123,   124,   141,   150,   733,   906,
     146,   154,   737,   283,   157,   283,   123,   160,   488,   126,
     134,   135,   283,   234,   235,   738,   283,   336,   337,   702,
     703,   123,   172,    53,   126,   283,    99,   283,   401,   283,
     283,   283,   182,   124,   123,   665,   123,   143,   172,   123,
     123,   671,    72,   123,   234,   123,   123,   293,   182,    98,
     141,   124,   123,   123,   123,   123,    98,   123,   123,   305,
     123,   123,   123,    99,    99,    30,    98,    98,   448,   100,
      99,   451,    98,    98,   454,   705,   125,   804,   805,   342,
     343,   344,   345,   125,   234,   235,   239,   467,   468,   469,
      20,   294,   295,   123,   143,    25,   808,    62,    99,    29,
     125,   581,   294,   295,   827,   830,   142,   142,   588,    98,
       0,   143,   265,   142,    44,   842,   843,   143,   143,   141,
       4,   143,    87,    88,    89,    90,    91,    92,    93,    13,
     283,    15,   109,   110,    18,    98,   125,   340,   341,    23,
      70,   142,    99,    27,   294,   295,    30,    98,   340,   341,
     862,   863,    36,     4,   143,   358,    99,    98,   361,    43,
     294,   295,   125,   366,    48,   368,   358,    99,    52,   123,
      99,   125,   375,    99,   366,   378,   368,   904,   905,    63,
     143,    65,    99,   375,   125,    69,   378,   741,   742,     4,
     340,   341,   143,    77,    78,   749,   750,    81,   124,   142,
      84,    16,   143,    99,    99,   124,   340,   341,   358,    24,
     142,   361,    99,   142,    99,   126,   366,    99,   368,    17,
     373,    99,   141,   124,   358,   375,    15,   361,   378,    18,
     361,    16,   366,     4,   368,   789,    34,   440,   441,    24,
     141,   375,   141,   874,   378,   126,   142,   142,   440,   441,
     143,    98,   455,   100,    43,   142,     4,   142,   738,    48,
     142,   741,   742,   455,   142,   124,     4,   126,   706,   749,
     750,   517,   113,   114,    63,   829,    65,    54,   123,    56,
     125,   140,   141,     4,    61,   488,     4,   361,    77,    78,
     440,   441,    81,   151,   444,   139,   446,   155,   123,   124,
     158,   123,   123,   161,   125,   455,   440,   441,   143,   789,
     132,   133,   692,   693,   868,   123,   119,   120,   121,   123,
     124,   455,   525,   139,   132,   133,   457,   123,    98,   532,
     100,   123,    98,   525,   100,     3,   890,   124,   488,   126,
     532,   721,   141,     4,   143,   846,   847,   827,   141,   829,
     143,    98,   124,   100,   488,   835,    98,   488,   100,   562,
     563,   139,   101,   102,   103,   104,   105,   106,   107,   108,
     562,   563,   111,   112,   620,   525,   139,   141,   581,   143,
     123,   124,   532,   457,   587,   588,   589,    98,   868,   100,
      98,   525,   100,   139,   874,   587,   141,   589,   532,   602,
     141,   140,   143,    94,    95,   142,    94,    95,   346,   347,
     890,   561,   562,   563,   488,    96,    97,   338,   339,   900,
     901,   849,   850,   124,   141,   141,   141,    98,   562,   563,
     142,   581,    98,   361,   124,   124,    98,   587,   588,   589,
     820,   821,   124,   126,   124,   182,   142,   581,   126,   124,
     581,   125,   602,   587,   588,   589,    98,   588,   127,   136,
     117,   707,   125,    10,   137,     4,   142,    98,   602,    50,
     179,   180,   181,     4,   183,   184,   185,   186,   187,    99,
     125,     4,   142,   142,     4,    32,     4,     4,   143,   140,
     125,   125,   125,   125,    98,   125,   876,   877,    45,   125,
     139,   125,    49,    50,   884,   885,     4,   581,    55,    53,
      57,    58,    59,    60,   588,   718,   719,    64,    53,   672,
     723,    68,   143,   744,   143,   124,   718,   719,   124,   457,
     124,   723,   124,    80,   124,   124,    83,   124,    85,   141,
     124,   744,   142,   125,    98,   143,   143,   125,   143,   142,
     287,   124,   289,   124,   361,   124,    99,    99,   141,   296,
     488,    86,    98,   143,   143,   140,   143,   143,   718,   719,
      99,   124,   124,   723,   727,   125,   313,   140,   731,   732,
     317,     4,   141,   124,   718,   719,    98,   125,   143,   723,
     124,    98,   143,   125,   744,   332,   141,   125,   125,   125,
       4,   125,   142,   756,   141,    42,   139,   738,   100,   125,
     741,   742,   125,    95,   767,    94,   353,   354,   749,   750,
     141,   140,   125,   125,   333,   334,   335,   336,   337,   338,
     339,   141,   835,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   125,   142,   142,     4,   385,   386,
     457,    28,   361,   581,   857,   143,     4,   142,   789,   124,
     588,   814,   815,   124,   738,   857,   142,   741,   742,   406,
     407,   874,   125,   125,   143,   749,   750,   125,   142,   139,
     125,   488,   361,   125,   141,   835,    97,    96,   139,   125,
     399,   125,   125,    95,    94,   142,   827,   125,   829,   172,
     131,   835,   172,   707,   835,   407,   554,   857,   400,   395,
     348,   351,   349,   835,   350,   789,   666,    10,   584,   714,
     833,   694,   827,   857,   874,   878,   879,   464,   881,   466,
     352,   835,   466,   800,   694,   788,   361,   868,    77,    32,
     874,   446,     4,   874,   118,    48,   239,   370,   457,   727,
     732,   731,    45,   827,   814,   829,   815,    50,   881,   890,
     265,   835,    55,   821,    57,    58,    59,    60,   283,    24,
     373,    64,   140,   162,   581,    68,    -1,    -1,   457,   488,
      -1,   588,    -1,    -1,    -1,   522,    -1,    80,    -1,    -1,
      83,    -1,    85,    -1,   868,    -1,    -1,    -1,    -1,    -1,
     874,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,
     738,    -1,    -1,   741,   742,    -1,   890,    -1,    -1,   556,
      -1,   749,   750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   457,    -1,   543,    -1,   545,   546,   547,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   591,    -1,   593,   594,    -1,    -1,
     597,   789,    -1,   488,    -1,   602,   603,    -1,     0,    -1,
      -1,    -1,   581,    -1,    -1,    -1,    -1,    -1,    10,   588,
      -1,    -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   827,
      32,   829,   581,    -1,   641,    -1,    -1,   835,    33,   588,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,   628,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    -1,
      -1,   738,    64,    -1,   741,   742,    68,    -1,    -1,    -1,
     868,    -1,   749,   750,    -1,    -1,   874,    -1,    80,    74,
      -1,    83,    -1,    85,    -1,    -1,   581,    -1,    -1,    -1,
      -1,    -1,   890,   588,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   708,    -1,    -1,    -1,    -1,   713,    -1,    -1,    -1,
      -1,    -1,   789,    -1,   109,   110,    -1,    -1,   113,   114,
     115,   116,    -1,    -1,   119,   120,   733,    -1,   123,    -1,
     737,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     827,    -1,   829,    -1,    -1,    -1,    -1,    -1,   835,   738,
      -1,    -1,   741,   742,    -1,    -1,    -1,    -1,    -1,    -1,
     749,   750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     787,    -1,    -1,    -1,    -1,    -1,    -1,   794,    -1,   738,
      -1,   868,   741,   742,    -1,    -1,    -1,   874,    -1,    -1,
     749,   750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     789,    -1,    -1,   890,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     789,    -1,    -1,   738,    -1,    -1,   741,   742,   827,    -1,
     829,    -1,    -1,    -1,   749,   750,   835,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   827,    -1,
     829,    -1,    -1,    -1,    -1,    -1,   835,    -1,    -1,   868,
      -1,     4,    -1,    -1,   789,   874,    -1,    -1,    -1,    -1,
      13,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    -1,
      23,   890,    25,    -1,    27,    -1,    29,    30,    31,   868,
      -1,    -1,    -1,    36,    -1,   874,    -1,    -1,    41,    -1,
      43,    44,   827,    -1,   829,    48,    -1,    -1,    -1,    52,
     835,   890,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      -1,    84,    -1,   868,    -1,    -1,    -1,    -1,    -1,   874,
      -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    16,   890,    18,    19,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,   123,   124,    -1,    -1,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
       4,   143,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,   119,   120,    22,    23,   123,
     124,    26,    27,   127,   128,   129,   130,   131,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,   141,    43,   143,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,   119,   120,    -1,    23,   123,   124,
      -1,    27,   127,   128,   129,   130,   131,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,   141,    43,   143,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    67,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,   123,   124,    -1,
      -1,   127,   128,   129,   130,   131,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,   141,   142,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    -1,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,   119,   120,    -1,    23,   123,   124,
      -1,    27,   127,   128,   129,   130,   131,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,   141,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,   119,   120,    -1,    33,   123,   124,    36,
      -1,   127,   128,   129,   130,   131,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,   119,   120,    -1,    33,   123,   124,    36,    -1,
     127,   128,   129,   130,   131,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,
      19,   119,   120,    -1,    23,   123,   124,   125,    27,   127,
     128,   129,   130,   131,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
     119,   120,    -1,    33,   123,   124,    36,    -1,   127,   128,
     129,   130,   131,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,   119,
     120,    -1,    33,   123,   124,    36,    -1,   127,   128,   129,
     130,   131,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,
       4,    72,    -1,    74,    -1,    76,    77,    78,    79,    13,
      81,    15,    -1,    -1,    18,    -1,    20,    21,    -1,    23,
      -1,    25,    -1,    27,     4,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    13,    -1,    15,    -1,    41,    18,    43,
      44,    -1,    -1,    23,    48,    -1,    -1,    27,    52,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    36,   128,   129,    63,
      -1,    65,    -1,    43,    -1,    69,    70,     4,    48,    -1,
      -1,    -1,    52,    77,    78,    -1,    13,    81,    15,    -1,
      84,    18,    -1,    63,    -1,    65,    23,    -1,    -1,    69,
      27,     4,    -1,    -1,    -1,    -1,    -1,    77,    78,    36,
      13,    81,    15,    -1,    84,    18,    43,    -1,    -1,    -1,
      23,    48,    -1,    -1,    27,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,   129,    63,    -1,    65,    -1,
      43,    -1,    69,    -1,    -1,    48,    -1,    -1,    -1,    52,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    82,   272,   273,   281,   282,   283,   284,     4,   147,
     278,   279,     0,   274,   276,   285,   286,   287,   291,   337,
     347,   361,   368,   369,   370,   371,   380,   282,   126,   140,
     143,     4,    10,    32,    45,    49,    50,    55,    57,    58,
      59,    60,    64,    68,    80,    83,    85,   288,   289,   290,
     274,   286,   371,    99,     4,   278,   126,   278,    20,    25,
      29,    44,    70,   290,    30,    62,    87,    88,    89,    90,
      91,    92,    93,   372,   373,   374,   143,   141,   280,     4,
      13,    15,    18,    23,    27,    36,    43,    48,    52,    63,
      65,    69,    77,    78,    81,    84,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   278,   304,     4,
       4,     4,   148,   278,   375,   376,   378,   139,   273,   143,
     277,   139,   292,   293,   123,   123,     3,   160,   160,   160,
       4,   139,   362,   363,   139,   348,   349,   139,   338,   339,
      98,   100,   124,   377,   379,   275,   285,   148,   156,   294,
     141,   295,   124,   154,   141,   364,   294,   141,   350,   294,
     141,   340,   100,   376,   381,     6,     7,     8,     9,    12,
      19,    33,    50,    51,    66,    72,    74,    76,    79,   119,
     120,   123,   124,   127,   128,   129,   130,   131,   145,   146,
     152,   156,   164,   165,   166,   167,   168,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   209,   278,   142,    98,    98,   274,   287,   296,   297,
     298,   299,   300,   301,   302,   311,   318,   322,   325,   330,
     334,   277,   274,   303,   306,   307,   308,   310,   274,   365,
     366,   367,   277,   274,   351,   352,   353,   354,   356,   357,
     359,   277,   274,   287,   299,   300,   301,   311,   318,   322,
     325,   330,   341,   342,   343,   277,   381,    99,   126,   124,
      84,   149,   150,   158,   124,   124,   124,   191,   191,   191,
      84,   152,   156,   196,   209,   278,   191,   191,   191,   191,
     191,   126,   126,    99,   126,   124,   125,    98,   119,   120,
     121,   101,   102,   103,   104,   105,   106,   107,   108,   111,
     112,   140,   208,   123,   132,   133,   130,   131,   109,   110,
      11,    46,   115,   116,   134,   135,   113,   114,   127,   136,
     137,   117,   118,   138,    99,   124,   294,   148,   288,   142,
     298,   141,   143,   214,   305,    54,    56,    61,   309,   125,
      98,     4,   142,    98,    50,   355,   142,   353,   288,   142,
     343,   172,     4,   209,   124,    99,   141,   344,   149,    84,
     149,   209,   123,   160,   193,   194,   195,   193,   193,   123,
     125,   160,     4,     4,   172,     4,    54,    61,   162,   163,
     169,   209,   209,     4,   209,   191,   191,   191,   191,   196,
     196,   197,   197,   149,   149,   198,   198,   198,   198,   199,
     199,   200,   201,   202,   203,   204,   209,   172,   169,     4,
      21,    30,    31,    41,    84,   129,   149,   323,   326,   327,
     329,   331,     4,    14,    19,    21,    22,    26,    35,    37,
      38,    39,    40,    47,    62,    71,    73,    75,    79,    80,
      82,    86,   143,   149,   152,   156,   168,   175,   176,   178,
     189,   190,   191,   207,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   225,   228,   229,   230,   231,   232,   239,
     240,   241,   242,   243,   251,   252,   253,   254,   255,   256,
     258,   259,   264,   265,   266,   267,   269,   278,   149,   149,
     143,   307,   140,   142,   367,    30,    84,   149,   100,   125,
     169,   172,    67,   209,   223,   224,   344,   345,   346,   125,
     125,   125,   125,   125,   195,   125,   125,   125,   188,   193,
     100,   161,   209,   161,    98,   125,   139,   100,   125,   124,
     149,   149,    53,    53,   278,     4,     4,    53,    72,   221,
     222,   278,   279,   324,   384,   143,   214,   335,   143,   214,
     336,   139,   143,   214,   149,   143,   213,   124,   124,   124,
       4,    16,    24,   124,   124,   209,   257,   124,   257,   214,
     214,   214,   124,   124,     4,   221,   142,   212,   143,   143,
     143,     4,     4,   209,   210,   149,     4,     4,    72,   125,
     100,   149,   142,    98,   191,   191,   191,   191,   125,   163,
     209,   303,     4,   226,   227,   221,   278,   149,   149,   124,
     124,   140,    33,    74,   109,   110,   113,   114,   115,   116,
     119,   120,   123,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   328,    99,    98,   143,   124,   384,
      72,    99,   141,   212,   226,    86,   149,   220,   229,   244,
     247,   250,   149,   143,   210,   143,   209,   211,   209,   143,
     209,   143,    17,    34,   260,   261,   263,   209,   220,   268,
     211,     4,   124,   124,   384,    99,   159,   160,    99,   142,
     223,   191,   125,   140,    98,   143,   143,   382,   124,   124,
     303,   125,   223,   124,   306,   222,   303,   141,   306,   274,
     312,   315,   316,   124,     4,   270,   271,   143,    98,     4,
     143,   125,   125,   125,   124,   214,   214,   261,   263,   125,
     125,   141,   143,   360,   303,   303,   141,   306,   180,   344,
     159,   209,   139,   332,   333,   210,   227,   141,   149,   149,
     125,   214,   149,   100,   125,   312,   100,    94,    95,   142,
     274,   313,   316,   274,   314,   315,   211,   140,    98,   125,
     211,   245,   248,   229,    42,   213,   213,   141,   233,   148,
     156,   213,   213,   142,   125,   125,   274,   358,   100,   100,
      12,    72,   274,   319,   320,   321,     4,     4,     4,   142,
     385,   385,   385,   125,   209,   271,   213,   143,   209,    28,
      16,    24,   234,   235,   236,   237,   238,     4,   262,   262,
     360,   360,    94,    95,   142,   384,   124,   124,    96,    97,
     142,   274,   321,   274,   320,   125,   125,    98,   125,   385,
     143,   214,   317,   317,   143,   246,   249,   250,   125,   213,
     210,   139,   142,   236,   216,   238,   125,   125,   360,   360,
     385,   141,   169,   169,   383,   383,   383,   149,   384,   384,
     125,   213,   139,   214,   214,   274,   274,   358,   125,   125,
     214,   214,     4,   213,    95,    94,   142,   382,   382,   125,
     360,   360,   385
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 532:
#line 1163 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_attrib(); */ ;}
    break;

  case 533:
#line 1166 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_attrib(); */ ;}
    break;

  case 534:
#line 1169 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_accessor(); */ ;}
    break;

  case 535:
#line 1172 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_accessor();*/ ;}
    break;

  case 536:
#line 1175 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_getset();*/ ;}
    break;

  case 537:
#line 1178 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_getset();*/ ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2738 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1183 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"


int yyerror(char *s)
{
	extern int line_no;
	extern int col_no;

	printf ("[%d, %d] -> %s\n", line_no, col_no,s);
	return 1;
}


int yylex()
{
	return lexer->yylex();
}



