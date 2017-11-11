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
     ARROW = 376
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




/* Copy the first part of user declarations.  */
#line 5 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"

	#define YYERROR_VERBOSE
	
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
#line 32 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
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
#line 365 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 377 "yacc.cpp"

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
#define YYLAST   2764

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  242
/* YYNRULES -- Number of rules. */
#define YYNRULES  537
/* YYNRULES -- Number of states. */
#define YYNSTATES  913

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   376

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   127,     2,     2,     2,   132,   126,     2,
     123,   124,   122,   129,     2,   130,   125,   131,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   138,   142,
     133,   139,   134,   137,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   135,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,   136,   141,   128,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   121
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
     271,     0,    -1,   145,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    51,    -1,    74,    -1,    33,    -1,   277,
      -1,   277,    -1,   149,    -1,   157,    -1,   150,    -1,   147,
      -1,   151,    -1,   155,    -1,   156,    -1,   152,    -1,    13,
      -1,   153,    -1,   154,    -1,    23,    -1,    63,    -1,    15,
      -1,    65,    -1,    81,    -1,    43,    -1,    77,    -1,    48,
      -1,    78,    -1,    18,    -1,    36,    -1,    27,    -1,    52,
      -1,    69,    -1,   148,   122,    -1,    84,   122,    -1,   157,
     159,    -1,   150,   159,    -1,   277,   159,    -1,    -1,   159,
     158,    -1,     3,    -1,   208,    -1,   162,    -1,   161,    98,
     162,    -1,   208,    -1,    61,   160,    -1,    54,   160,    -1,
     165,    -1,   164,    -1,   144,    -1,   178,    -1,   166,    -1,
     167,    -1,   169,    -1,   172,    -1,   173,    -1,   176,    -1,
     180,    -1,   185,    -1,   181,    -1,   182,    -1,   123,   208,
     124,    -1,   163,   125,     4,    -1,   151,   125,     4,    -1,
     155,   125,     4,    -1,   164,   123,   168,   124,    -1,   277,
     123,   168,   124,    -1,    -1,   161,    -1,   163,    99,   171,
     100,    -1,   277,    99,   171,   100,    -1,    -1,   171,    -1,
     208,    -1,   171,    98,   208,    -1,    72,    -1,    12,   125,
       4,    -1,    12,    99,   171,   100,    -1,   186,   119,    -1,
     186,   120,    -1,   177,    -1,    50,   148,   123,   168,   124,
      -1,    50,   149,    99,   171,   100,   158,   179,    -1,    50,
     157,   343,    -1,    -1,   343,    -1,    76,   123,   148,   124,
      -1,    76,   123,    84,   124,    -1,    19,   123,   208,   124,
      -1,    79,   123,   208,   124,    -1,   186,   121,     4,    -1,
     126,   190,    -1,    66,   123,   148,   124,    -1,   163,    -1,
     277,    -1,   174,    -1,   175,    -1,   183,    -1,   186,    -1,
     127,   190,    -1,   128,   190,    -1,   191,    -1,   119,   190,
      -1,   120,   190,    -1,   187,    -1,   129,   190,    -1,   130,
     190,    -1,   122,   190,    -1,   188,    -1,   189,    -1,   184,
      -1,   123,   208,   124,   187,    -1,   123,   195,   122,   124,
     190,    -1,   123,   277,   159,   192,   124,   190,    -1,   123,
     151,   192,   124,   190,    -1,   123,   155,   192,   124,   190,
      -1,   123,    84,   192,   124,   190,    -1,    -1,   193,    -1,
     194,    -1,   193,   194,    -1,   159,    -1,   122,    -1,   190,
      -1,   195,   122,   190,    -1,   195,   131,   190,    -1,   195,
     132,   190,    -1,   195,    -1,   196,   129,   195,    -1,   196,
     130,   195,    -1,   196,    -1,   197,   109,   196,    -1,   197,
     110,   196,    -1,   197,    -1,   198,   133,   197,    -1,   198,
     134,   197,    -1,   198,   115,   197,    -1,   198,   116,   197,
      -1,   198,    46,   148,    -1,   198,    11,   148,    -1,   198,
      -1,   199,   113,   198,    -1,   199,   114,   198,    -1,   199,
      -1,   200,   126,   199,    -1,   200,    -1,   201,   135,   200,
      -1,   201,    -1,   202,   136,   201,    -1,   202,    -1,   203,
     117,   202,    -1,   203,    -1,   204,   118,   203,    -1,   204,
      -1,   204,   137,   208,   138,   208,    -1,   190,   207,   208,
      -1,   139,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   111,
      -1,   112,    -1,   205,    -1,   206,    -1,   208,    -1,   208,
      -1,   217,    -1,   218,    -1,   212,    -1,   213,    -1,   216,
      -1,   227,    -1,   229,    -1,   238,    -1,   251,    -1,   258,
      -1,   263,    -1,   264,    -1,   265,    -1,   266,    -1,   239,
      -1,   268,    -1,   140,   214,   141,    -1,    -1,   215,    -1,
     211,    -1,   215,   211,    -1,   142,    -1,     4,   138,   211,
      -1,   219,   142,    -1,   224,   142,    -1,   148,   220,    -1,
     221,    -1,   220,    98,   221,    -1,     4,    -1,     4,   139,
     222,    -1,   208,    -1,   343,    -1,   223,    -1,    67,   148,
      99,   208,   100,    -1,    21,   148,   225,    -1,   226,    -1,
     225,    98,   226,    -1,     4,   139,   209,    -1,   228,   142,
      -1,   167,    -1,   177,    -1,   206,    -1,   174,    -1,   175,
      -1,   188,    -1,   189,    -1,   230,    -1,   231,    -1,    40,
     123,   210,   124,   212,    -1,    40,   123,   210,   124,   212,
      28,   212,    -1,    71,   123,   208,   124,   232,    -1,   140,
     233,   141,    -1,    -1,   234,    -1,   235,    -1,   234,   235,
      -1,   236,   215,    -1,   237,    -1,   236,   237,    -1,    16,
     209,   138,    -1,    24,   138,    -1,   240,    -1,   241,    -1,
     242,    -1,   250,    -1,    80,   213,    -1,    86,   123,   210,
     124,   212,    -1,    26,   212,    86,   123,   210,   124,   142,
      -1,    37,   123,   243,   142,   244,   142,   245,   124,   212,
      -1,    -1,   246,    -1,    -1,   247,    -1,    -1,   248,    -1,
     219,    -1,   249,    -1,   210,    -1,   249,    -1,   228,    -1,
     249,    98,   228,    -1,    38,   123,   148,     4,    42,   208,
     124,   212,    -1,   252,    -1,   253,    -1,   254,    -1,   255,
      -1,   257,    -1,    14,   142,    -1,    22,   142,    -1,    39,
       4,   142,    -1,    39,    16,   209,   142,    -1,    39,    24,
     142,    -1,    62,   256,   142,    -1,    -1,   208,    -1,    73,
     256,   142,    -1,    75,   213,   259,    -1,    75,   213,   262,
      -1,    75,   213,   259,   262,    -1,   260,    -1,   259,   260,
      -1,    17,   123,   155,   261,   124,   213,    -1,    17,   123,
     147,   261,   124,   213,    -1,    17,   213,    -1,    -1,     4,
      -1,    34,   213,    -1,    19,   213,    -1,    79,   213,    -1,
      47,   123,   208,   124,   212,    -1,    82,   123,   267,   124,
     212,    -1,   219,    -1,   208,    -1,    35,   123,   148,   269,
     124,   212,    -1,   270,    -1,   269,    98,   270,    -1,     4,
     139,   208,    -1,   272,   273,    -1,   272,   284,    -1,    -1,
     280,    -1,    -1,   368,    -1,    -1,   284,    -1,   273,    49,
     277,   279,   276,    -1,    -1,   142,    -1,     4,    -1,   278,
       4,    -1,     4,   125,    -1,   278,     4,   125,    -1,   140,
     272,   274,   141,    -1,   281,    -1,   280,   281,    -1,   282,
      -1,   283,    -1,    82,     4,   139,   277,   142,    -1,    82,
     146,   142,    -1,   285,    -1,   284,   285,    -1,   275,    -1,
     286,    -1,   290,    -1,   336,    -1,   346,    -1,   360,    -1,
     367,    -1,    -1,   288,    -1,   289,    -1,   288,   289,    -1,
      10,    -1,    32,    -1,    45,    -1,    50,    -1,    55,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    64,    -1,
      68,    -1,    80,    -1,    83,    -1,    85,    -1,   273,   287,
      20,     4,   291,   294,   276,    -1,    -1,   292,    -1,   138,
     155,    -1,   138,   293,    -1,   138,   155,    98,   293,    -1,
     147,    -1,   293,    98,   147,    -1,   140,   295,   141,    -1,
      -1,   296,    -1,   297,    -1,   296,   297,    -1,   298,    -1,
     299,    -1,   300,    -1,   310,    -1,   317,    -1,   321,    -1,
     324,    -1,   329,    -1,   333,    -1,   286,    -1,   273,   287,
      21,   148,   225,   142,    -1,   273,   287,   148,   220,   142,
      -1,   301,   304,    -1,   273,   287,   148,   277,   123,   302,
     124,    -1,   273,   287,    84,   277,   123,   302,   124,    -1,
      -1,   305,    -1,   148,    -1,    84,    -1,   213,    -1,   142,
      -1,   306,    -1,   305,    98,   306,    -1,   307,    -1,   309,
      -1,   273,   308,   148,     4,    -1,    -1,    61,    -1,    54,
      -1,   273,    56,   148,     4,    -1,   273,   287,   148,   277,
     383,   140,   311,   141,   384,    -1,   314,   312,    -1,   315,
     313,    -1,    -1,   315,    -1,    -1,   314,    -1,   273,    94,
     384,   316,   383,    -1,   273,    95,   384,   316,   383,    -1,
     213,    -1,   142,    -1,   273,   287,    30,   148,   220,   142,
      -1,   273,   287,    30,   148,   277,   381,   140,   318,   141,
     382,    -1,   319,   320,    -1,   320,   319,    -1,   273,    96,
     382,   213,   381,    -1,   273,    97,   382,   213,   381,    -1,
     273,   287,   322,   383,   140,   311,   141,   384,    -1,   148,
      72,    99,   305,   100,    -1,   148,   323,    99,   305,   100,
      -1,   278,    72,    -1,   273,   287,   325,   334,    -1,   326,
      -1,   328,    -1,   148,    53,   327,   123,   148,     4,   124,
      -1,   148,    53,   327,   123,   148,     4,    98,   148,     4,
     124,    -1,   129,    -1,   130,    -1,   127,    -1,   128,    -1,
     119,    -1,   120,    -1,    74,    -1,    33,    -1,   122,    -1,
     131,    -1,   132,    -1,   126,    -1,   136,    -1,   135,    -1,
     109,    -1,   110,    -1,   113,    -1,   114,    -1,   134,    -1,
     133,    -1,   116,    -1,   115,    -1,    41,    53,   148,   123,
     148,     4,   124,    -1,    31,    53,   148,   123,   148,     4,
     124,    -1,   273,   287,   330,   335,    -1,     4,   123,   302,
     124,   331,    -1,    -1,   332,    -1,   138,    12,   123,   168,
     124,    -1,   138,    72,   123,   168,   124,    -1,   273,   287,
     128,     4,   123,   124,   213,    -1,   213,    -1,   142,    -1,
     213,    -1,   142,    -1,   273,   287,    70,     4,   337,   339,
     276,    -1,    -1,   338,    -1,   138,   293,    -1,   140,   340,
     141,    -1,    -1,   341,    -1,   342,    -1,   341,   342,    -1,
     298,    -1,   299,    -1,   300,    -1,   310,    -1,   317,    -1,
     321,    -1,   324,    -1,   329,    -1,   286,    -1,   140,   344,
     141,    -1,   140,   345,    98,   141,    -1,    -1,   345,    -1,
     222,    -1,   345,    98,   222,    -1,   273,   287,    44,     4,
     347,   349,   276,    -1,    -1,   348,    -1,   138,   293,    -1,
     140,   350,   141,    -1,    -1,   351,    -1,   352,    -1,   351,
     352,    -1,   353,    -1,   355,    -1,   358,    -1,   356,    -1,
     273,   354,   148,     4,   123,   302,   124,   359,    -1,   273,
     354,    84,     4,   123,   302,   124,   359,    -1,    -1,    50,
      -1,   273,   354,   148,     4,   383,   140,   357,   141,   384,
      -1,   273,   354,   148,    72,    99,   305,   100,   383,   140,
     357,   141,   384,    -1,   273,    94,   359,    -1,   273,    95,
     359,    -1,   273,    94,   359,   273,    95,   359,    -1,   273,
      95,   359,   273,    94,   359,    -1,   273,   354,    30,   148,
       4,   359,    -1,   142,    -1,   140,   141,    -1,   273,   287,
      29,     4,   361,   363,   276,    -1,    -1,   362,    -1,   138,
     153,    -1,   140,   364,   141,    -1,   140,   365,    98,   141,
      -1,    -1,   365,    -1,   366,    -1,   365,    98,   366,    -1,
     273,     4,    -1,   273,     4,   139,   209,    -1,   273,   287,
      25,   303,     4,   123,   302,   124,   142,    -1,   369,    -1,
     370,    -1,   369,   370,    -1,   379,    99,   371,   374,   100,
     380,    -1,   379,    99,   371,   374,    98,   100,   380,    -1,
      -1,   372,    -1,   373,   138,    -1,    87,    -1,    88,    -1,
      30,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      62,    -1,    93,    -1,   375,    -1,   374,    98,   375,    -1,
     377,   376,    -1,    -1,   378,    -1,   147,    -1,   123,   170,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    93,    93,    94,    95,    96,    97,    98,   101,   102,
     108,   111,   115,   116,   119,   120,   123,   124,   125,   128,
     129,   132,   133,   134,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   140,   140,   143,   143,   146,   147,   150,
     151,   152,   154,   156,   159,   163,   167,   168,   171,   172,
     173,   176,   177,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   194,   197,   198,   199,   202,
     203,   205,   207,   210,   211,   213,   215,   218,   219,   222,
     225,   226,   229,   232,   235,   238,   241,   242,   244,   246,
     249,   250,   253,   256,   259,   262,   265,   268,   269,   270,
     271,   272,   275,   276,   277,   278,   281,   284,   287,   288,
     289,   290,   291,   292,   293,   301,   302,   303,   304,   305,
     306,   308,   310,   313,   314,   317,   318,   321,   322,   323,
     324,   327,   328,   329,   332,   333,   334,   337,   338,   339,
     340,   341,   342,   343,   346,   347,   348,   351,   352,   355,
     356,   359,   360,   363,   364,   367,   368,   371,   372,   375,
     378,   378,   378,   378,   378,   378,   379,   379,   379,   379,
     379,   382,   383,   386,   389,   393,   394,   395,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   413,   415,   417,   421,   422,   425,   428,   431,   432,
     435,   438,   439,   442,   443,   446,   447,   448,   451,   454,
     457,   458,   461,   464,   467,   468,   469,   470,   471,   472,
     473,   476,   477,   480,   481,   484,   487,   489,   491,   494,
     495,   498,   501,   502,   505,   506,   509,   510,   511,   512,
     515,   518,   521,   524,   526,   528,   530,   532,   534,   536,
     539,   540,   543,   546,   549,   550,   553,   556,   557,   558,
     559,   560,   563,   566,   569,   570,   571,   574,   576,   578,
     581,   584,   585,   586,   589,   590,   593,   594,   595,   597,
     599,   602,   605,   608,   611,   614,   617,   618,   622,   625,
     626,   629,   632,   633,   635,   637,   639,   641,   643,   645,
     648,   650,   652,   661,   662,   665,   666,   669,   672,   673,
     676,   677,   680,   683,   686,   687,   690,   691,   694,   695,
     696,   697,   698,   708,   710,   713,   714,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   734,   736,   738,   741,   742,   743,   746,   747,   750,
     752,   754,   757,   758,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   771,   774,   777,   780,   784,   785,   787,
     789,   792,   793,   796,   797,   800,   801,   804,   805,   808,
     810,   812,   813,   817,   820,   826,   827,   829,   831,   833,
     835,   838,   844,   850,   851,   854,   855,   861,   862,   865,
     871,   877,   883,   885,   888,   892,   895,   896,   899,   900,
     903,   903,   904,   904,   904,   904,   904,   904,   905,   905,
     905,   905,   905,   905,   906,   906,   906,   906,   906,   906,
     906,   906,   909,   910,   913,   916,   918,   920,   923,   924,
     940,   943,   944,   947,   948,   953,   955,   957,   960,   963,
     965,   967,   970,   971,   974,   975,   976,   977,   978,   979,
     980,   981,   983,   988,   989,   991,   993,   996,   997,  1002,
    1004,  1006,  1009,  1012,  1014,  1016,  1019,  1020,  1023,  1024,
    1025,  1026,  1030,  1031,  1033,  1035,  1038,  1044,  1052,  1053,
    1054,  1055,  1058,  1063,  1064,  1069,  1071,  1073,  1076,  1079,
    1080,  1082,  1084,  1087,  1088,  1091,  1092,  1097,  1102,  1105,
    1106,  1109,  1110,  1112,  1114,  1117,  1120,  1121,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1131,  1132,  1135,  1137,  1139,
    1142,  1145,  1152,  1155,  1158,  1161,  1164,  1167
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
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROW", "'*'", "'('", "')'", "'.'",
  "'&'", "'!'", "'~'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "':'", "'='", "'{'", "'}'", "';'", "$accept", "literal",
  "boolean_literal", "namespace_name", "type_name", "type",
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
     375,   376,    42,    40,    41,    46,    38,    33,   126,    43,
      45,    47,    37,    60,    62,    94,   124,    63,    58,    61,
     123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
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
     212,   213,   214,   214,   215,   215,   216,   217,   218,   218,
     219,   220,   220,   221,   221,   222,   222,   222,   223,   224,
     225,   225,   226,   227,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   230,   230,   231,   232,   233,   233,   234,
     234,   235,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   240,   241,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   248,   249,   249,   250,   251,   251,   251,
     251,   251,   252,   253,   254,   254,   254,   255,   256,   256,
     257,   258,   258,   258,   259,   259,   260,   260,   260,   261,
     261,   262,   263,   264,   265,   266,   267,   267,   268,   269,
     269,   270,   271,   271,   272,   272,   273,   273,   274,   274,
     275,   276,   276,   277,   277,   278,   278,   279,   280,   280,
     281,   281,   282,   283,   284,   284,   285,   285,   286,   286,
     286,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   290,   291,   291,   292,   292,   292,   293,   293,   294,
     295,   295,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   299,   300,   301,   301,   302,
     302,   303,   303,   304,   304,   305,   305,   306,   306,   307,
     308,   308,   308,   309,   310,   311,   311,   312,   312,   313,
     313,   314,   315,   316,   316,   317,   317,   318,   318,   319,
     320,   321,   322,   322,   323,   324,   325,   325,   326,   326,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   328,   328,   329,   330,   331,   331,   332,   332,
     333,   334,   334,   335,   335,   336,   337,   337,   338,   339,
     340,   340,   341,   341,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   343,   344,   344,   345,   345,   346,
     347,   347,   348,   349,   350,   350,   351,   351,   352,   352,
     352,   352,   353,   353,   354,   354,   355,   356,   357,   357,
     357,   357,   358,   359,   359,   360,   361,   361,   362,   363,
     363,   364,   364,   365,   365,   366,   366,   367,   368,   369,
     369,   370,   370,   371,   371,   372,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   374,   374,   375,   376,   376,
     377,   378,   379,   380,   381,   382,   383,   384
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
     -37,    93,   117,    94,   -37,  -758,  -758,  -758,   -13,    78,
    -758,   261,  -758,  1018,  -758,    25,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,    94,  -758,   132,  -758,  -758,   299,
    -758,   189,  -758,  -758,  -758,   299,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,   277,   857,  -758,
     603,  -758,  -758,   183,   217,   177,  -758,   208,   350,  2613,
     382,   385,   397,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   299,  -758,   241,  -758,   -37,   262,   289,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   317,  -758,   320,  -758,   458,
    -758,  -758,  -758,  -758,  -758,  -758,   458,   458,   470,   339,
     351,   355,  -758,  -758,   -54,  -758,   380,  -758,   -50,  -758,
    -758,    32,   341,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
     383,   201,   368,  -758,   299,   371,  -758,   299,   391,  -758,
      23,  -758,  2360,  -758,  -758,   396,   -38,  -758,   448,   459,
     -19,   262,   123,  -758,   116,   262,   459,   127,   262,   459,
     128,   262,  -758,  -758,  -758,  -758,  -758,  -758,  -758,    11,
     435,  -758,  2656,  -758,   436,  -758,  -758,   442,   443,  2360,
    2360,  2360,  2086,  2360,  2360,  2360,  2360,  2360,  -758,  -758,
     431,   444,   131,   445,  -758,  -758,  -758,  -758,   446,   469,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   -79,  -758,  -758,  -758,   411,  -758,   278,
     155,   254,    26,   303,   447,   437,   438,   454,   -39,  -758,
    -758,  -758,   197,  -758,   299,   299,   857,  -758,   434,   194,
    -758,  -758,  -758,  -758,    44,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   377,   452,   479,  -758,  -758,  -758,   576,   451,
     484,  -758,  -758,   534,   453,   218,  -758,  -758,  -758,  -758,
    -758,  -758,   857,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   455,   224,  -758,  -758,  -758,  2360,   581,  2360,
     317,   274,   487,     5,  2656,  2680,  2360,  -758,  -758,  -758,
      57,    51,    55,   283,   474,    21,  -758,  -758,  -758,  -758,
    -758,   589,   595,  2360,   597,  1998,  -758,  2360,  -758,  -758,
     602,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  2360,  2360,  2360,  2360,  2360,  2360,  2360,  2360,
    2656,  2656,  2360,  2360,  2360,  2360,  2360,  2360,  2360,  2360,
    2360,  2360,  2360,  2360,  2360,  1998,   459,  -758,  2515,  -758,
    -758,  1535,  -758,  -758,  -758,  -758,  2656,  -758,  2656,   466,
      94,   473,  -758,   230,  -758,  2564,  -758,  -758,  1307,  -758,
    -758,   255,  -758,   485,  1998,  2360,  1900,  -758,   306,   312,
     321,   486,  -758,  -758,   490,    57,  -758,   491,   492,  2174,
    2448,    57,  -758,  -758,   353,  -758,  2360,  2360,   519,  -758,
     495,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   278,
     278,   155,   155,   320,   320,   254,   254,   254,   254,    26,
      26,   303,   447,   437,   438,   454,   493,   354,   499,   335,
    2656,  2656,   577,   579,    63,   625,    61,  -758,   325,  -758,
    -758,   326,    62,   494,   -27,  2656,   496,  1672,   510,   511,
     514,   379,   516,   517,  2360,   518,  2360,   502,   -12,   502,
     520,   521,  -758,    70,   431,   444,   119,   135,   162,   165,
     185,   220,   411,  -758,  -758,  -758,  -758,   504,  1535,  -758,
    -758,  -758,   507,   508,  -758,   509,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    79,    72,    73,
    -758,  -758,  2360,  -758,  -758,  2656,    74,    67,  -758,  -758,
     532,   375,  2656,  -758,  -758,  -758,  -758,   527,   561,  -758,
    -758,  -758,  -758,  2360,  -758,  2360,  2360,  2360,  -758,   548,
    -758,  -758,  -758,  -758,  1998,  -758,  2360,  -758,  -758,   123,
      77,    81,  2656,  2656,   551,   552,   267,  1009,   583,    83,
    -758,   555,    30,   585,   540,  -758,  -758,  -758,  -758,  -758,
    -758,  1535,  -758,  -758,    77,  -758,   599,  2656,  2272,  2656,
     545,  2360,   547,  2360,  2360,  -758,   550,  2360,   553,   315,
    -758,  -758,  2272,  2360,   554,   592,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,    82,   571,   573,   598,  -758,
     458,   229,  -758,  1770,  -758,  -758,  -758,  -758,  2360,  -758,
    -758,   574,   560,   125,  -758,   150,  -758,   301,   347,   123,
     582,  1900,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   578,    94,   699,  -758,   123,   565,
    -758,    94,    94,  -758,   609,   588,    84,  -758,  -758,   566,
    -758,   614,    85,  -758,   572,  -758,  -758,   591,   593,  -758,
     596,  -758,   227,   502,   315,  -758,  -758,  -758,  -758,   601,
     607,   338,   123,   123,   587,    94,   600,   458,  2360,  -758,
    -758,  -758,   575,  2360,   712,  -758,  -758,   606,  2656,  2656,
     608,   502,  -758,  2656,   384,  -758,   612,    94,   387,   407,
     580,   231,   232,  2360,   594,     1,  -758,  2360,  2360,   680,
    -758,  1672,  1672,   610,    32,  -758,  -758,  -758,  -758,  1672,
    1672,   611,  -758,  -758,   613,   617,    94,   394,  -758,  -758,
    -758,   638,    35,  -758,  -758,  -758,  -758,    94,    86,    88,
    -758,  -758,    89,  -758,  -758,   615,  -758,  -758,  -758,  -758,
     647,  -758,  -758,   649,  -758,  -758,   623,  2360,   744,  1672,
    -758,   616,  -758,  -758,  2360,   721,  -758,   336,  -758,   747,
     747,  -758,  -758,  -758,   338,   338,   432,   618,  -758,  -758,
     631,   632,   433,   621,    94,    94,   639,   641,   245,  -758,
     358,   358,  -758,   628,  -758,  -758,  -758,  2360,   648,  1672,
    2360,   633,   640,   336,  -758,  1398,  -758,  -758,   670,   671,
    -758,  -758,   338,   338,  -758,   656,  1998,  1998,  -758,  -758,
    -758,   676,  -758,   701,  -758,  -758,  -758,  2656,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   677,  -758,   614,  1672,  -758,
     667,  -758,  -758,  -758,  1535,  -758,   502,   502,   235,   240,
    -758,    94,   682,   683,   502,   502,  -758,    90,  -758,  -758,
    1672,  -758,  -758,  -758,  -758,   714,   719,   675,  -758,  -758,
    -758,  -758,   698,  -758,   338,   338,  -758,  -758,  -758,  -758,
    -758,  -758,  -758
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -758,  -758,  -758,  -758,   -71,   -42,   651,  -758,    16,  -758,
     693,  -758,   -53,  -758,   655,   121,   -96,   422,  -758,   276,
    -758,  -758,  -758,  -758,  -330,  -351,  -758,  -758,   -73,  -758,
    -758,    19,    76,  -758,   222,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   439,   343,   471,   441,  -758,  -245,
    -758,   449,  -169,   204,   105,   193,   488,   489,   483,   498,
     482,  -758,  -758,   525,  -758,   413,  -575,  -585,  -481,  -404,
    -230,  -758,     2,  -758,  -758,  -758,  -470,  -445,   175,  -391,
    -758,  -758,   258,   129,  -758,  -573,  -758,  -758,  -758,  -758,
    -758,  -758,    12,  -758,    15,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,    20,  -758,  -758,  -758,
    -758,  -758,  -758,   386,  -758,  -758,  -758,   159,    56,   161,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    71,  -758,   781,
      -3,  -758,  -758,   271,     0,   414,  -758,  -758,   858,  -758,
    -758,   743,     4,  -130,  -141,  -758,   815,  -758,  -758,  -758,
     -29,  -758,  -758,  -758,   627,  -137,  -128,  -122,  -758,  -533,
    -758,  -758,  -601,   500,  -758,  -758,  -758,  -121,   137,  -758,
    -758,   136,   138,    50,  -117,  -758,    65,    58,  -112,  -758,
    -758,  -109,  -758,  -758,  -758,  -758,  -108,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   605,
    -288,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   619,
    -758,  -758,  -758,  -758,    10,  -758,  -614,  -758,  -758,  -758,
    -758,  -758,  -758,   512,  -758,  -758,  -758,   859,  -758,  -758,
    -758,  -758,   741,  -758,  -758,  -758,  -758,   720,  -349,  -296,
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
     237,   821,   822,   274,   126,  -293,   631,    54,   605,    55,
     273,   476,   275,   530,    31,    57,    54,   340,   276,   277,
     318,   319,   320,   278,   140,     1,   141,   810,   279,  -532,
     147,   280,   281,   586,   126,   704,   397,   398,   126,   107,
     126,  -532,   859,   147,   724,   566,   147,    54,   148,   112,
     728,   617,   341,   113,   604,   100,   611,   612,   616,   352,
    -532,   632,   126,   -11,    88,   566,   701,   880,   734,   739,
     816,  -298,   817,   818,   902,   358,   289,     8,   353,   788,
     673,    91,   670,  -299,   757,   156,   720,   811,   159,   237,
     287,   296,    28,   361,   567,    50,   635,    12,   677,   104,
     354,   113,  -350,   162,  -532,   789,    29,   476,   361,   302,
     291,   378,   698,   568,   113,   726,   288,   113,   765,   618,
     113,   342,   343,    50,   355,   386,   274,   236,   786,   912,
      51,   258,   790,   273,   263,   275,   549,   272,   476,   344,
     345,   276,   277,   147,   357,   793,   278,   419,   420,   754,
     755,   279,   107,   392,   280,   281,   311,   392,   354,   392,
     312,   666,   305,   125,   361,   124,   362,    28,   100,   125,
     840,   841,   125,  -532,   125,   125,   124,   128,   301,   125,
     581,   -11,   355,   125,   125,   356,   125,   125,   125,   401,
     125,   125,   125,    64,   381,  -532,    81,  -214,   576,    82,
      30,   579,  -532,   714,   583,   667,  -532,  -532,   878,   879,
     313,    53,   710,  -217,   113,   113,   236,   599,   600,   601,
     404,   104,   104,  -214,    86,    65,   845,  -369,   666,    87,
     722,   476,   388,   390,   678,   870,   314,  -501,   476,  -217,
    -218,  -214,   263,  -215,    89,    31,    90,   715,  -474,  -450,
      66,    67,    68,    69,    70,    71,    72,  -217,    92,    93,
     272,   437,    94,  -219,   336,   337,  -218,   104,   104,  -215,
     910,   911,   716,  -532,   107,   107,   354,    58,   423,   424,
     888,   889,    59,    54,  -218,   104,    60,  -215,   475,  -219,
     100,   100,   531,   104,    56,   104,   446,  -532,  -220,    76,
     355,    61,   104,  -532,   518,   104,   519,  -219,   708,  -532,
    -532,  -532,   692,   527,  -532,  -351,   446,   795,   796,  -532,
     107,   107,    28,   857,  -220,   801,   802,    62,    77,   693,
     744,   125,   830,   317,    79,   528,   100,   100,   107,  -475,
     831,   517,  -220,   338,   339,  -451,   107,   361,   107,   858,
     258,   523,  -387,  -389,   100,   107,  -488,   474,   107,   117,
     477,  -489,   100,   590,   100,   826,   109,   104,   104,   110,
    -303,   100,    28,   607,   100,   591,   125,   384,   560,   561,
     333,   111,   104,   592,   119,   399,   641,  -303,   476,   334,
     335,   476,   476,   584,   334,   335,   346,   347,   759,   476,
     476,   129,   251,   125,   718,   869,   262,   121,   125,   271,
     539,   365,   285,   366,   124,   475,   540,   478,   367,   124,
     107,   107,   125,   125,   564,   541,   571,   425,   426,   427,
     428,   317,   317,   550,   557,   107,   100,   100,   559,   476,
      28,   126,   745,   746,   891,   361,   361,   575,   578,   125,
     719,   100,   104,   317,   130,   620,   477,   131,   751,   104,
     752,   150,   370,   615,   773,   370,   903,   776,   517,   134,
     621,   771,   370,   137,   808,   882,   883,   476,   361,   476,
     860,   777,   778,   142,   474,   476,   152,   477,   154,   104,
     104,   157,   321,   322,   323,   324,   325,   326,   327,   328,
     637,   638,   329,   330,   707,   107,   842,   843,   475,   848,
     849,   160,   107,   478,   104,   475,   104,   233,   476,   429,
     430,   100,   421,   422,   476,   676,   234,   682,   100,   475,
     331,   907,   908,   885,   886,   231,   311,   235,   289,   294,
     476,   636,   107,   107,   478,   295,   296,   317,   315,   312,
     316,   351,   349,   348,   350,   359,   369,   370,   100,   100,
     371,   517,   373,   479,   374,   382,   385,   107,   517,   107,
     861,   861,   372,   402,   376,   304,   379,   474,   400,   403,
     477,   405,   517,   100,   474,   100,   413,   477,   520,   529,
     542,   707,   522,    32,   543,   545,   546,   554,   474,   555,
     297,   298,   299,   558,   306,   307,   308,   309,   310,   565,
     562,   556,   563,   587,   588,    33,   582,   589,   585,   593,
     594,   597,   361,   602,   603,   606,   893,   894,    34,   608,
     609,   610,    35,    36,   900,   901,   619,   478,    37,   623,
      38,    39,    40,    41,   478,   104,   104,    42,   622,   729,
     104,    43,   628,   799,   639,   640,   768,   769,   668,   479,
     672,   772,   665,    44,   671,   675,    45,   683,    46,   685,
     666,   800,   689,   641,   702,   691,   703,   705,   712,   713,
     231,   723,   383,   604,   480,   727,   721,   714,   737,   391,
     479,   733,   738,   762,   740,   741,   632,   742,   107,   107,
     743,   779,   794,   107,   729,   749,   231,   756,   780,   783,
     412,   750,   770,   787,   100,   100,   774,   804,   809,   100,
     386,   805,   778,   777,   113,   414,   767,   823,   734,   829,
     797,   837,   803,   806,   846,   847,   819,   477,   827,   844,
     477,   477,   850,   855,   812,   856,   436,   231,   477,   477,
     864,   871,   868,   849,   415,   416,   417,   418,   418,   418,
     418,   872,   475,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   876,   877,   881,   848,   231,   533,
     480,   890,   482,   479,   104,   892,   898,   899,   477,   904,
     479,   851,   853,   905,   478,   887,   906,   478,   478,   552,
     552,   475,   909,   292,   153,   478,   478,   293,   760,   553,
     629,   480,   481,   433,   435,   517,   431,   874,   432,   548,
     415,   725,   674,   766,   544,   873,   477,   867,   477,   434,
     875,   474,   598,   747,   477,   748,   839,   107,   118,   825,
     572,   146,    27,    63,   775,   478,   360,    32,   785,   782,
     521,   863,   852,   100,   517,   895,   896,   595,   806,   595,
     854,   163,   286,    52,   377,   524,   483,   477,   380,    33,
     474,   897,     0,   477,     0,     0,     0,     0,   482,     0,
       0,     0,    34,   478,     0,   478,     0,    36,     0,   477,
       0,   478,    37,     0,    38,    39,    40,    41,     0,     0,
       0,    42,     0,     0,   480,    43,     0,     0,   481,   482,
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
       0,     0,   642,     0,     0,     0,     0,     0,     0,   479,
      33,   479,   481,     0,   533,     0,     0,   479,     0,   481,
       0,     0,     0,    34,     0,     0,     0,    35,    36,   711,
       0,     0,     0,    37,     0,    38,    39,    40,    41,     0,
       0,   480,    42,   643,   480,   480,    43,     0,     0,     0,
     479,     0,   480,   480,     0,     0,   479,     0,    44,     0,
       0,    45,     0,    46,     0,     0,   483,     0,     0,     0,
       0,     0,   479,   483,     0,     0,     0,     0,   644,   645,
       0,   761,   646,   647,   648,   649,   613,     0,   650,   651,
       0,   652,   480,     0,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   686,     0,     0,     0,
     686,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,   452,
     472,   165,   166,   167,   168,     0,     0,   169,    80,   453,
      81,     0,     0,    82,   454,     0,   455,   456,    83,     0,
       0,   457,    84,     0,     0,     0,     0,     0,   171,     0,
     458,    85,   459,   460,   461,   462,     0,     0,    86,     0,
       0,     0,   463,    87,     0,   172,   173,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,    89,     0,
      90,   174,     0,     0,    91,     0,   465,   175,   466,   176,
     467,   177,    92,    93,   468,   469,    94,   470,     0,   290,
       0,   471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   180,     0,   181,   182,     0,
       0,   183,   184,   185,   186,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,    54,   472,   165,   166,
     167,   168,     0,     0,   169,    80,   453,    81,     0,     0,
      82,   454,     0,     0,   456,    83,     0,     0,   457,    84,
       0,     0,     0,     0,     0,   171,     0,   458,    85,   459,
     460,   461,   462,     0,     0,    86,     0,     0,     0,   463,
      87,     0,   172,   173,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,    89,     0,    90,   174,     0,
       0,    91,     0,   465,   175,   466,   176,   467,   177,    92,
      93,   468,   469,    94,   470,     0,     0,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,   165,   166,   167,   168,
       0,     0,   169,    80,     0,    81,     0,     0,    82,   170,
       0,   179,   180,    83,   181,   182,     0,    84,   183,   184,
     185,   186,   187,   171,     0,     0,    85,     0,     0,     0,
       0,     0,   361,    86,   472,     0,     0,     0,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,   532,     0,    91,
       0,     0,   175,     0,   176,     0,   177,    92,    93,   178,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
     180,     0,   181,   182,     0,     0,   183,   184,   185,   186,
     187,     0,     0,     0,    54,     0,   165,   166,   167,   168,
     386,   709,   169,    80,     0,    81,     0,     0,    82,   170,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
       0,     0,     0,   171,     0,     0,    85,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,   532,     0,    91,
       0,     0,   175,     0,   176,     0,   177,    92,    93,   178,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,   165,   166,   167,   168,     0,     0,
     169,    80,     0,    81,     0,     0,    82,   170,     0,   179,
     180,    83,   181,   182,     0,    84,   183,   184,   185,   186,
     187,   171,     0,     0,    85,     0,     0,     0,     0,     0,
     386,    86,     0,     0,     0,     0,    87,     0,   172,   173,
      88,     0,   406,     0,     0,     0,     0,     0,     0,   407,
       0,    89,     0,    90,   174,     0,     0,    91,     0,     0,
     175,     0,   176,     0,   177,    92,    93,   178,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,   165,   166,   167,   168,     0,     0,   169,    80,
       0,    81,     0,     0,    82,   170,     0,     0,     0,    83,
       0,     0,     0,    84,     0,     0,     0,   179,   180,   171,
     181,   182,    85,     0,   183,   184,   185,   186,   187,    86,
       0,     0,     0,     0,    87,     0,   172,   173,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    90,   174,     0,     0,    91,     0,     0,   175,     0,
     176,     0,   177,    92,    93,   178,     0,    94,     0,     0,
     300,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     165,   166,   167,   168,     0,     0,   169,    80,     0,    81,
       0,     0,    82,   170,     0,     0,     0,    83,     0,     0,
       0,    84,     0,     0,     0,   179,   180,   171,   181,   182,
      85,     0,   183,   184,   185,   186,   187,    86,     0,     0,
       0,     0,    87,     0,   172,   173,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    90,
     174,     0,     0,    91,     0,     0,   175,     0,   176,     0,
     177,    92,    93,   178,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,   165,   166,
     167,   168,     0,     0,   169,    80,     0,    81,     0,     0,
      82,   170,     0,   179,   180,    83,   181,   182,   547,    84,
     183,   184,   185,   186,   187,   171,     0,     0,    85,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
      87,     0,   172,   173,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,    90,   174,     0,
       0,    91,     0,     0,   175,     0,   176,     0,   177,    92,
      93,   178,     0,    94,     0,     0,   290,     0,     0,     0,
       0,     0,     0,     0,    54,     0,   165,   166,   167,   168,
       0,     0,   169,    80,     0,    81,     0,     0,    82,   170,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
       0,   179,   180,   171,   181,   182,    85,     0,   183,   184,
     185,   186,   187,    86,     0,     0,     0,     0,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,     0,     0,    91,
       0,     0,   175,     0,   176,     0,   177,    92,    93,   178,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,   165,   166,   167,   168,     0,     0,
     169,    80,     0,    81,     0,     0,    82,   170,     0,     0,
       0,    83,     0,     0,     0,    84,     0,     0,     0,   179,
     180,   171,   181,   182,    85,     0,   183,   184,   185,   186,
     187,    86,     0,     0,     0,     0,    87,     0,   172,   173,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    90,   174,     0,     0,    91,     0,   439,
     175,     0,   176,     0,   177,    92,    93,   178,    80,    94,
      81,     0,     0,    82,     0,    58,   440,     0,    83,     0,
      59,     0,    84,     0,    60,   441,   442,     0,     0,     0,
       0,    85,     0,     0,     0,     0,   443,     0,    86,    61,
       0,     0,     0,    87,     0,     0,     0,    88,    54,     0,
       0,   182,     0,     0,     0,   184,   185,    80,    89,    81,
      90,     0,    82,     0,    91,    62,     0,    83,     0,     0,
       0,    84,    92,    93,   525,     0,    94,     0,     0,   444,
      85,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,    87,     0,     0,     0,    88,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    89,    81,    90,
       0,    82,     0,    91,     0,     0,    83,     0,     0,     0,
      84,    92,    93,   445,     0,    94,     0,     0,   526,    85,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
      54,    87,     0,     0,     0,    88,     0,     0,     0,    80,
       0,    81,     0,     0,    82,     0,    89,     0,    90,    83,
       0,     0,    91,    84,    54,     0,     0,     0,     0,     0,
      92,    93,    85,    80,    94,    81,     0,    95,    82,    86,
       0,     0,     0,    83,    87,     0,     0,    84,    88,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    89,
       0,    90,     0,    86,     0,    91,     0,     0,    87,     0,
       0,     0,    88,    92,    93,     0,     0,    94,     0,     0,
     290,     0,     0,    89,     0,    90,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,    92,    93,     0,
       0,    94,     0,     0,   389
};

static const short int yycheck[] =
{
       3,     1,    73,    99,   355,   293,    59,   488,     3,   571,
     106,   107,    15,   182,   244,   588,   591,    59,   603,    15,
     150,   778,   779,   160,     3,     0,   559,     4,   473,    29,
     160,   361,   160,   384,     4,    35,     4,    11,   160,   160,
     119,   120,   121,   160,    98,    82,   100,    12,   160,    99,
     121,   160,   160,   457,     3,   617,   301,   302,     3,    59,
       3,    99,   819,   134,   665,     4,   137,     4,   121,   140,
     671,     4,    46,    73,     4,    59,     4,     4,     4,   118,
      99,     4,     3,     4,    52,     4,     4,   844,     4,     4,
       4,   141,     4,     4,     4,   236,   123,     4,   137,    98,
     581,    69,    72,   141,   705,   134,   639,    72,   137,   239,
      99,   123,   125,   140,    53,   118,   561,     0,   588,   172,
      99,   121,   141,   100,    99,   124,   139,   457,   140,   182,
     172,   272,   602,    72,   134,   668,   125,   137,   713,    72,
     140,   115,   116,   146,   123,   140,   283,   150,   733,   906,
     146,   154,   737,   283,   157,   283,   401,   160,   488,   133,
     134,   283,   283,   234,   235,   738,   283,   336,   337,   702,
     703,   283,   172,   122,   283,   283,   125,   122,    99,   122,
     125,    98,   182,   122,   140,   122,   142,   125,   172,   122,
     804,   805,   122,    99,   122,   122,   122,   293,   182,   122,
     138,   122,   123,   122,   122,   234,   122,   122,   122,   305,
     122,   122,   122,    30,   287,    99,    15,    98,   448,    18,
     142,   451,    99,    98,   454,   142,    99,    99,   842,   843,
      99,    99,   623,    98,   234,   235,   239,   467,   468,   469,
     313,   294,   295,   124,    43,    62,   808,   124,    98,    48,
     641,   581,   294,   295,   827,   830,   125,   141,   588,   124,
      98,   142,   265,    98,    63,     4,    65,   142,   141,   141,
      87,    88,    89,    90,    91,    92,    93,   142,    77,    78,
     283,   354,    81,    98,   129,   130,   124,   340,   341,   124,
     904,   905,   142,    99,   294,   295,    99,    20,   340,   341,
     862,   863,    25,     4,   142,   358,    29,   142,   361,   124,
     294,   295,   385,   366,   125,   368,   358,    99,    98,   142,
     123,    44,   375,    99,   366,   378,   368,   142,    99,    99,
      99,    99,    17,   375,    99,   141,   378,   741,   742,    99,
     340,   341,   125,    98,   124,   749,   750,    70,   140,    34,
     123,   122,    16,    98,     4,   100,   340,   341,   358,   141,
      24,   361,   142,   109,   110,   141,   366,   140,   368,   124,
     373,   141,   141,   141,   358,   375,   141,   361,   378,   138,
     361,   141,   366,     4,   368,   789,     4,   440,   441,     4,
     123,   375,   125,   874,   378,    16,   122,   123,   440,   441,
     122,     4,   455,    24,   142,   122,   139,   140,   738,   131,
     132,   741,   742,   455,   131,   132,   113,   114,   706,   749,
     750,   517,   151,   122,   123,   829,   155,   138,   122,   158,
     124,    54,   161,    56,   122,   488,   124,   361,    61,   122,
     440,   441,   122,   122,   444,   124,   446,   342,   343,   344,
     345,    98,    98,   100,   100,   455,   440,   441,   123,   789,
     125,     3,   692,   693,   868,   140,   140,   142,   142,   122,
     123,   455,   525,    98,     4,   100,   457,   138,   140,   532,
     142,   140,    98,   525,   100,    98,   890,   100,   488,   138,
     532,   721,    98,   138,   100,   846,   847,   827,   140,   829,
     142,    94,    95,   123,   488,   835,   123,   488,   140,   562,
     563,   140,   101,   102,   103,   104,   105,   106,   107,   108,
     562,   563,   111,   112,   620,   525,    94,    95,   581,    96,
      97,   140,   532,   457,   587,   588,   589,   141,   868,   346,
     347,   525,   338,   339,   874,   587,    98,   589,   532,   602,
     139,   900,   901,   849,   850,   142,   125,    98,   123,   123,
     890,   561,   562,   563,   488,   123,   123,    98,   123,   125,
     124,   117,   135,   126,   136,   141,   124,    98,   562,   563,
       4,   581,    98,   361,    50,     4,    99,   587,   588,   589,
     820,   821,   141,     4,   141,   182,   141,   581,   124,     4,
     581,     4,   602,   587,   588,   589,     4,   588,   142,   124,
     124,   707,   139,    10,   124,   124,   124,    98,   602,   124,
     179,   180,   181,   124,   183,   184,   185,   186,   187,     4,
      53,   138,    53,   123,   123,    32,   142,   123,   142,   123,
     123,   123,   140,   123,   123,   141,   876,   877,    45,   142,
     142,   142,    49,    50,   884,   885,   124,   581,    55,    98,
      57,    58,    59,    60,   588,   718,   719,    64,   141,   672,
     723,    68,   124,   744,   123,   123,   718,   719,   123,   457,
     140,   723,    99,    80,    99,    86,    83,   142,    85,   142,
      98,   744,   142,   139,   123,   142,   123,    99,   124,   139,
     287,   123,   289,     4,   361,   140,   124,    98,   142,   296,
     488,   123,    98,   138,   142,   124,     4,   124,   718,   719,
     124,   141,    42,   723,   727,   124,   313,   140,   731,   732,
     317,   124,   124,   139,   718,   719,   124,   124,   100,   723,
     140,   124,    95,    94,   744,   332,   140,   124,     4,    28,
     140,     4,   141,   756,   123,   123,   141,   738,   142,   141,
     741,   742,   141,   124,   767,   124,   353,   354,   749,   750,
     142,   138,   124,    97,   333,   334,   335,   336,   337,   338,
     339,   141,   835,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   124,   124,   140,    96,   385,   386,
     457,   124,   361,   581,   857,   138,   124,   124,   789,    95,
     588,   814,   815,    94,   738,   857,   141,   741,   742,   406,
     407,   874,   124,   172,   131,   749,   750,   172,   707,   407,
     554,   488,   361,   350,   352,   835,   348,   835,   349,   400,
     399,   666,   584,   714,   395,   833,   827,   827,   829,   351,
     835,   835,   466,   694,   835,   694,   800,   857,    77,   788,
     446,   118,     4,    48,   727,   789,   239,    10,   732,   731,
     370,   821,   814,   857,   874,   878,   879,   464,   881,   466,
     815,   140,   162,    24,   265,   373,   361,   868,   283,    32,
     874,   881,    -1,   874,    -1,    -1,    -1,    -1,   457,    -1,
      -1,    -1,    45,   827,    -1,   829,    -1,    50,    -1,   890,
      -1,   835,    55,    -1,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,   581,    68,    -1,    -1,   457,   488,
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
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,   827,
      32,   829,   581,    -1,   641,    -1,    -1,   835,    -1,   588,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,   628,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    -1,
      -1,   738,    64,    74,   741,   742,    68,    -1,    -1,    -1,
     868,    -1,   749,   750,    -1,    -1,   874,    -1,    80,    -1,
      -1,    83,    -1,    85,    -1,    -1,   581,    -1,    -1,    -1,
      -1,    -1,   890,   588,    -1,    -1,    -1,    -1,   109,   110,
      -1,   708,   113,   114,   115,   116,   713,    -1,   119,   120,
      -1,   122,   789,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   733,    -1,    -1,    -1,
     737,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     122,   123,    -1,    -1,   126,   127,   128,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,     4,
     142,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,   122,   123,    -1,
      -1,   126,   127,   128,   129,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,     4,   142,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,   119,   120,    23,   122,   123,    -1,    27,   126,   127,
     128,   129,   130,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,   140,    43,   142,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,   122,   123,    -1,    -1,   126,   127,   128,   129,
     130,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
     140,   141,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,   119,
     120,    23,   122,   123,    -1,    27,   126,   127,   128,   129,
     130,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     140,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,   119,   120,    33,
     122,   123,    36,    -1,   126,   127,   128,   129,   130,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,   119,   120,    33,   122,   123,
      36,    -1,   126,   127,   128,   129,   130,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,   119,   120,    23,   122,   123,   124,    27,
     126,   127,   128,   129,   130,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,   119,   120,    33,   122,   123,    36,    -1,   126,   127,
     128,   129,   130,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,   119,
     120,    33,   122,   123,    36,    -1,   126,   127,   128,   129,
     130,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,     4,
      72,    -1,    74,    -1,    76,    77,    78,    79,    13,    81,
      15,    -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,     4,    -1,
      -1,   123,    -1,    -1,    -1,   127,   128,    13,    63,    15,
      65,    -1,    18,    -1,    69,    70,    -1,    23,    -1,    -1,
      -1,    27,    77,    78,    30,    -1,    81,    -1,    -1,    84,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    63,    15,    65,
      -1,    18,    -1,    69,    -1,    -1,    23,    -1,    -1,    -1,
      27,    77,    78,   128,    -1,    81,    -1,    -1,    84,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
       4,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    63,    -1,    65,    23,
      -1,    -1,    69,    27,     4,    -1,    -1,    -1,    -1,    -1,
      77,    78,    36,    13,    81,    15,    -1,    84,    18,    43,
      -1,    -1,    -1,    23,    48,    -1,    -1,    27,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    63,
      -1,    65,    -1,    43,    -1,    69,    -1,    -1,    48,    -1,
      -1,    -1,    52,    77,    78,    -1,    -1,    81,    -1,    -1,
      84,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    82,   271,   272,   280,   281,   282,   283,     4,   146,
     277,   278,     0,   273,   275,   284,   285,   286,   290,   336,
     346,   360,   367,   368,   369,   370,   379,   281,   125,   139,
     142,     4,    10,    32,    45,    49,    50,    55,    57,    58,
      59,    60,    64,    68,    80,    83,    85,   287,   288,   289,
     273,   285,   370,    99,     4,   277,   125,   277,    20,    25,
      29,    44,    70,   289,    30,    62,    87,    88,    89,    90,
      91,    92,    93,   371,   372,   373,   142,   140,   279,     4,
      13,    15,    18,    23,    27,    36,    43,    48,    52,    63,
      65,    69,    77,    78,    81,    84,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   277,   303,     4,
       4,     4,   147,   277,   374,   375,   377,   138,   272,   142,
     276,   138,   291,   292,   122,   122,     3,   159,   159,   159,
       4,   138,   361,   362,   138,   347,   348,   138,   337,   338,
      98,   100,   123,   376,   378,   274,   284,   147,   155,   293,
     140,   294,   123,   153,   140,   363,   293,   140,   349,   293,
     140,   339,   100,   375,   380,     6,     7,     8,     9,    12,
      19,    33,    50,    51,    66,    72,    74,    76,    79,   119,
     120,   122,   123,   126,   127,   128,   129,   130,   144,   145,
     151,   155,   163,   164,   165,   166,   167,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   208,   277,   141,    98,    98,   273,   286,   295,   296,
     297,   298,   299,   300,   301,   310,   317,   321,   324,   329,
     333,   276,   273,   302,   305,   306,   307,   309,   273,   364,
     365,   366,   276,   273,   350,   351,   352,   353,   355,   356,
     358,   276,   273,   286,   298,   299,   300,   310,   317,   321,
     324,   329,   340,   341,   342,   276,   380,    99,   125,   123,
      84,   148,   149,   157,   123,   123,   123,   190,   190,   190,
      84,   151,   155,   195,   208,   277,   190,   190,   190,   190,
     190,   125,   125,    99,   125,   123,   124,    98,   119,   120,
     121,   101,   102,   103,   104,   105,   106,   107,   108,   111,
     112,   139,   207,   122,   131,   132,   129,   130,   109,   110,
      11,    46,   115,   116,   133,   134,   113,   114,   126,   135,
     136,   117,   118,   137,    99,   123,   293,   147,   287,   141,
     297,   140,   142,   213,   304,    54,    56,    61,   308,   124,
      98,     4,   141,    98,    50,   354,   141,   352,   287,   141,
     342,   171,     4,   208,   123,    99,   140,   343,   148,    84,
     148,   208,   122,   159,   192,   193,   194,   192,   192,   122,
     124,   159,     4,     4,   171,     4,    54,    61,   161,   162,
     168,   208,   208,     4,   208,   190,   190,   190,   190,   195,
     195,   196,   196,   148,   148,   197,   197,   197,   197,   198,
     198,   199,   200,   201,   202,   203,   208,   171,   168,     4,
      21,    30,    31,    41,    84,   128,   148,   322,   325,   326,
     328,   330,     4,    14,    19,    21,    22,    26,    35,    37,
      38,    39,    40,    47,    62,    71,    73,    75,    79,    80,
      82,    86,   142,   148,   151,   155,   167,   174,   175,   177,
     188,   189,   190,   206,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   224,   227,   228,   229,   230,   231,   238,
     239,   240,   241,   242,   250,   251,   252,   253,   254,   255,
     257,   258,   263,   264,   265,   266,   268,   277,   148,   148,
     142,   306,   139,   141,   366,    30,    84,   148,   100,   124,
     168,   171,    67,   208,   222,   223,   343,   344,   345,   124,
     124,   124,   124,   124,   194,   124,   124,   124,   187,   192,
     100,   160,   208,   160,    98,   124,   138,   100,   124,   123,
     148,   148,    53,    53,   277,     4,     4,    53,    72,   220,
     221,   277,   278,   323,   383,   142,   213,   334,   142,   213,
     335,   138,   142,   213,   148,   142,   212,   123,   123,   123,
       4,    16,    24,   123,   123,   208,   256,   123,   256,   213,
     213,   213,   123,   123,     4,   220,   141,   211,   142,   142,
     142,     4,     4,   208,   209,   148,     4,     4,    72,   124,
     100,   148,   141,    98,   190,   190,   190,   190,   124,   162,
     208,   302,     4,   225,   226,   220,   277,   148,   148,   123,
     123,   139,    33,    74,   109,   110,   113,   114,   115,   116,
     119,   120,   122,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   327,    99,    98,   142,   123,   383,
      72,    99,   140,   211,   225,    86,   148,   219,   228,   243,
     246,   249,   148,   142,   209,   142,   208,   210,   208,   142,
     208,   142,    17,    34,   259,   260,   262,   208,   219,   267,
     210,     4,   123,   123,   383,    99,   158,   159,    99,   141,
     222,   190,   124,   139,    98,   142,   142,   381,   123,   123,
     302,   124,   222,   123,   305,   221,   302,   140,   305,   273,
     311,   314,   315,   123,     4,   269,   270,   142,    98,     4,
     142,   124,   124,   124,   123,   213,   213,   260,   262,   124,
     124,   140,   142,   359,   302,   302,   140,   305,   179,   343,
     158,   208,   138,   331,   332,   209,   226,   140,   148,   148,
     124,   213,   148,   100,   124,   311,   100,    94,    95,   141,
     273,   312,   315,   273,   313,   314,   210,   139,    98,   124,
     210,   244,   247,   228,    42,   212,   212,   140,   232,   147,
     155,   212,   212,   141,   124,   124,   273,   357,   100,   100,
      12,    72,   273,   318,   319,   320,     4,     4,     4,   141,
     384,   384,   384,   124,   208,   270,   212,   142,   208,    28,
      16,    24,   233,   234,   235,   236,   237,     4,   261,   261,
     359,   359,    94,    95,   141,   383,   123,   123,    96,    97,
     141,   273,   320,   273,   319,   124,   124,    98,   124,   384,
     142,   213,   316,   316,   142,   245,   248,   249,   124,   212,
     209,   138,   141,   235,   215,   237,   124,   124,   359,   359,
     384,   140,   168,   168,   382,   382,   382,   148,   383,   383,
     124,   212,   138,   213,   213,   273,   273,   357,   124,   124,
     213,   213,     4,   212,    95,    94,   141,   381,   381,   124,
     359,   359,   384
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
#line 1152 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_attrib(); */ ;}
    break;

  case 533:
#line 1155 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_attrib(); */ ;}
    break;

  case 534:
#line 1158 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_accessor(); */ ;}
    break;

  case 535:
#line 1161 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_accessor();*/ ;}
    break;

  case 536:
#line 1164 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_getset();*/ ;}
    break;

  case 537:
#line 1167 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_getset();*/ ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2755 "yacc.cpp"

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


#line 1172 "C:\\Users\\Mohamed Khair\\Desktop\\Quad M\\compiler\\src\\compiler\\Parser\\yacc.y"


int yyerror(char *s)
{
	printf("ERRROOOOORRRR");
	getchar();
	getchar();
	return 1;
}


int yylex()
{
	return lexer->yylex();
}



