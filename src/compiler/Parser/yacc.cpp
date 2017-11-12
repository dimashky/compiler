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
     LEFT_BRACKET_GROUP = 356,
     RIGHT_BRACKET_GROUP = 357,
     LEFT_BRACKET_CIRCLE = 358,
     RIGHT_BRACKET_CIRCLE = 359,
     GREATER = 360,
     SMALLER = 361,
     SEMICOLON = 362,
     COLON = 363,
     DOT = 364,
     PLUSEQ = 365,
     MINUSEQ = 366,
     STAREQ = 367,
     DIVEQ = 368,
     MODEQ = 369,
     XOREQ = 370,
     ANDEQ = 371,
     OREQ = 372,
     LTLT = 373,
     GTGT = 374,
     GTGTEQ = 375,
     LTLTEQ = 376,
     EQEQ = 377,
     NOTEQ = 378,
     LEQ = 379,
     GEQ = 380,
     ANDAND = 381,
     OROR = 382,
     PLUSPLUS = 383,
     MINUSMINUS = 384,
     ARROW = 385,
     PLUS = 386,
     MINUS = 387,
     STAR = 388,
     SLASH = 389,
     PERCENT = 390,
     AND = 391,
     OR = 392,
     EXCLAMATION_POINT = 393,
     TILDE = 394,
     QUESTION_MARK = 395,
     THEN = 396
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
#define LEFT_BRACKET_GROUP 356
#define RIGHT_BRACKET_GROUP 357
#define LEFT_BRACKET_CIRCLE 358
#define RIGHT_BRACKET_CIRCLE 359
#define GREATER 360
#define SMALLER 361
#define SEMICOLON 362
#define COLON 363
#define DOT 364
#define PLUSEQ 365
#define MINUSEQ 366
#define STAREQ 367
#define DIVEQ 368
#define MODEQ 369
#define XOREQ 370
#define ANDEQ 371
#define OREQ 372
#define LTLT 373
#define GTGT 374
#define GTGTEQ 375
#define LTLTEQ 376
#define EQEQ 377
#define NOTEQ 378
#define LEQ 379
#define GEQ 380
#define ANDAND 381
#define OROR 382
#define PLUSPLUS 383
#define MINUSMINUS 384
#define ARROW 385
#define PLUS 386
#define MINUS 387
#define STAR 388
#define SLASH 389
#define PERCENT 390
#define AND 391
#define OR 392
#define EXCLAMATION_POINT 393
#define TILDE 394
#define QUESTION_MARK 395
#define THEN 396




/* Copy the first part of user declarations.  */
#line 9 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"

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
#line 37 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
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
/* Line 196 of yacc.c.  */
#line 406 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 418 "yacc.cpp"

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
#define YYLAST   2824

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
#define YYMAXUTOK   396

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   143,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   142,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141
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
      -1,    69,    -1,   149,   133,    -1,    84,   133,    -1,   158,
     160,    -1,   151,   160,    -1,   278,   160,    -1,    -1,   160,
     159,    -1,     3,    -1,   209,    -1,   163,    -1,   162,    98,
     163,    -1,   209,    -1,    61,   161,    -1,    54,   161,    -1,
     166,    -1,   165,    -1,   145,    -1,   179,    -1,   167,    -1,
     168,    -1,   170,    -1,   173,    -1,   174,    -1,   177,    -1,
     181,    -1,   186,    -1,   182,    -1,   183,    -1,   103,   209,
     104,    -1,   164,   109,     4,    -1,   152,   109,     4,    -1,
     156,   109,     4,    -1,   165,   103,   169,   104,    -1,   278,
     103,   169,   104,    -1,    -1,   162,    -1,   164,    99,   172,
     100,    -1,   278,    99,   172,   100,    -1,    -1,   172,    -1,
     209,    -1,   172,    98,   209,    -1,    72,    -1,    12,   109,
       4,    -1,    12,    99,   172,   100,    -1,   187,   128,    -1,
     187,   129,    -1,   178,    -1,    50,   149,   103,   169,   104,
      -1,    50,   150,    99,   172,   100,   159,   180,    -1,    50,
     158,   344,    -1,    -1,   344,    -1,    76,   103,   149,   104,
      -1,    76,   103,    84,   104,    -1,    19,   103,   209,   104,
      -1,    79,   103,   209,   104,    -1,   187,   130,     4,    -1,
     136,   191,    -1,    66,   103,   149,   104,    -1,   164,    -1,
     278,    -1,   175,    -1,   176,    -1,   184,    -1,   187,    -1,
     138,   191,    -1,   139,   191,    -1,   192,    -1,   128,   191,
      -1,   129,   191,    -1,   188,    -1,   131,   191,    -1,   132,
     191,    -1,   133,   191,    -1,   189,    -1,   190,    -1,   185,
      -1,   103,   209,   104,   188,    -1,   103,   196,   133,   104,
     191,    -1,   103,   278,   160,   193,   104,   191,    -1,   103,
     152,   193,   104,   191,    -1,   103,   156,   193,   104,   191,
      -1,   103,    84,   193,   104,   191,    -1,    -1,   194,    -1,
     195,    -1,   194,   195,    -1,   160,    -1,   133,    -1,   191,
      -1,   196,   133,   191,    -1,   196,   134,   191,    -1,   196,
     135,   191,    -1,   196,    -1,   197,   131,   196,    -1,   197,
     132,   196,    -1,   197,    -1,   198,   118,   197,    -1,   198,
     119,   197,    -1,   198,    -1,   199,   106,   198,    -1,   199,
     105,   198,    -1,   199,   124,   198,    -1,   199,   125,   198,
      -1,   199,    46,   149,    -1,   199,    11,   149,    -1,   199,
      -1,   200,   122,   199,    -1,   200,   123,   199,    -1,   200,
      -1,   201,   136,   200,    -1,   201,    -1,   202,   142,   201,
      -1,   202,    -1,   203,   137,   202,    -1,   203,    -1,   204,
     126,   203,    -1,   204,    -1,   205,   127,   204,    -1,   205,
      -1,   205,   140,   209,   108,   209,    -1,   191,   208,   209,
      -1,   143,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   120,
      -1,   121,    -1,   206,    -1,   207,    -1,   209,    -1,   209,
      -1,   218,    -1,   219,    -1,   213,    -1,   214,    -1,   217,
      -1,   228,    -1,   230,    -1,   239,    -1,   252,    -1,   259,
      -1,   264,    -1,   265,    -1,   266,    -1,   267,    -1,   240,
      -1,   269,    -1,   101,   215,   102,    -1,    -1,   216,    -1,
     212,    -1,   216,   212,    -1,   107,    -1,     4,   108,   212,
      -1,   220,   107,    -1,   225,   107,    -1,   149,   221,    -1,
     222,    -1,   221,    98,   222,    -1,     4,    -1,     4,   143,
     223,    -1,   209,    -1,   344,    -1,   224,    -1,    67,   149,
      99,   209,   100,    -1,    21,   149,   226,    -1,   227,    -1,
     226,    98,   227,    -1,     4,   143,   210,    -1,   229,   107,
      -1,   168,    -1,   178,    -1,   207,    -1,   175,    -1,   176,
      -1,   189,    -1,   190,    -1,   231,    -1,   232,    -1,    40,
     103,   211,   104,   213,    -1,    40,   103,   211,   104,   213,
      28,   213,    -1,    71,   103,   209,   104,   233,    -1,   101,
     234,   102,    -1,    -1,   235,    -1,   236,    -1,   235,   236,
      -1,   237,   216,    -1,   238,    -1,   237,   238,    -1,    16,
     210,   108,    -1,    24,   108,    -1,   241,    -1,   242,    -1,
     243,    -1,   251,    -1,    80,   214,    -1,    86,   103,   211,
     104,   213,    -1,    26,   213,    86,   103,   211,   104,   107,
      -1,    37,   103,   244,   107,   245,   107,   246,   104,   213,
      -1,    -1,   247,    -1,    -1,   248,    -1,    -1,   249,    -1,
     220,    -1,   250,    -1,   211,    -1,   250,    -1,   229,    -1,
     250,    98,   229,    -1,    38,   103,   149,     4,    42,   209,
     104,   213,    -1,   253,    -1,   254,    -1,   255,    -1,   256,
      -1,   258,    -1,    14,   107,    -1,    22,   107,    -1,    39,
       4,   107,    -1,    39,    16,   210,   107,    -1,    39,    24,
     107,    -1,    62,   257,   107,    -1,    -1,   209,    -1,    73,
     257,   107,    -1,    75,   214,   260,    -1,    75,   214,   263,
      -1,    75,   214,   260,   263,    -1,   261,    -1,   260,   261,
      -1,    17,   103,   156,   262,   104,   214,    -1,    17,   103,
     148,   262,   104,   214,    -1,    17,   214,    -1,    -1,     4,
      -1,    34,   214,    -1,    19,   214,    -1,    79,   214,    -1,
      47,   103,   209,   104,   213,    -1,    82,   103,   268,   104,
     213,    -1,   220,    -1,   209,    -1,    35,   103,   149,   270,
     104,   213,    -1,   271,    -1,   270,    98,   271,    -1,     4,
     143,   209,    -1,   273,   274,    -1,   273,   285,    -1,    -1,
     281,    -1,    -1,   369,    -1,    -1,   285,    -1,   274,    49,
     278,   280,   277,    -1,    -1,   107,    -1,     4,    -1,   279,
       4,    -1,     4,   109,    -1,   279,     4,   109,    -1,   101,
     273,   275,   102,    -1,   282,    -1,   281,   282,    -1,   283,
      -1,   284,    -1,    82,     4,   143,   278,   107,    -1,    82,
     147,   107,    -1,   286,    -1,   285,   286,    -1,   276,    -1,
     287,    -1,   291,    -1,   337,    -1,   347,    -1,   361,    -1,
     368,    -1,    -1,   289,    -1,   290,    -1,   289,   290,    -1,
      10,    -1,    32,    -1,    45,    -1,    50,    -1,    55,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    64,    -1,
      68,    -1,    80,    -1,    83,    -1,    85,    -1,   274,   288,
      20,     4,   292,   295,   277,    -1,    -1,   293,    -1,   108,
     156,    -1,   108,   294,    -1,   108,   156,    98,   294,    -1,
     148,    -1,   294,    98,   148,    -1,   101,   296,   102,    -1,
      -1,   297,    -1,   298,    -1,   297,   298,    -1,   299,    -1,
     300,    -1,   301,    -1,   311,    -1,   318,    -1,   322,    -1,
     325,    -1,   330,    -1,   334,    -1,   287,    -1,   274,   288,
      21,   149,   226,   107,    -1,   274,   288,   149,   221,   107,
      -1,   302,   305,    -1,   274,   288,   149,   278,   103,   303,
     104,    -1,   274,   288,    84,   278,   103,   303,   104,    -1,
      -1,   306,    -1,   149,    -1,    84,    -1,   214,    -1,   107,
      -1,   307,    -1,   306,    98,   307,    -1,   308,    -1,   310,
      -1,   274,   309,   149,     4,    -1,    -1,    61,    -1,    54,
      -1,   274,    56,   149,     4,    -1,   274,   288,   149,   278,
     384,   101,   312,   102,   385,    -1,   315,   313,    -1,   316,
     314,    -1,    -1,   316,    -1,    -1,   315,    -1,   274,    94,
     385,   317,   384,    -1,   274,    95,   385,   317,   384,    -1,
     214,    -1,   107,    -1,   274,   288,    30,   149,   221,   107,
      -1,   274,   288,    30,   149,   278,   382,   101,   319,   102,
     383,    -1,   320,   321,    -1,   321,   320,    -1,   274,    96,
     383,   214,   382,    -1,   274,    97,   383,   214,   382,    -1,
     274,   288,   323,   384,   101,   312,   102,   385,    -1,   149,
      72,    99,   306,   100,    -1,   149,   324,    99,   306,   100,
      -1,   279,    72,    -1,   274,   288,   326,   335,    -1,   327,
      -1,   329,    -1,   149,    53,   328,   103,   149,     4,   104,
      -1,   149,    53,   328,   103,   149,     4,    98,   149,     4,
     104,    -1,   131,    -1,   132,    -1,   138,    -1,   139,    -1,
     128,    -1,   129,    -1,    74,    -1,    33,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   142,    -1,
     118,    -1,   119,    -1,   122,    -1,   123,    -1,   105,    -1,
     106,    -1,   125,    -1,   124,    -1,    41,    53,   149,   103,
     149,     4,   104,    -1,    31,    53,   149,   103,   149,     4,
     104,    -1,   274,   288,   331,   336,    -1,     4,   103,   303,
     104,   332,    -1,    -1,   333,    -1,   108,    12,   103,   169,
     104,    -1,   108,    72,   103,   169,   104,    -1,   274,   288,
     139,     4,   103,   104,   214,    -1,   214,    -1,   107,    -1,
     214,    -1,   107,    -1,   274,   288,    70,     4,   338,   340,
     277,    -1,    -1,   339,    -1,   108,   294,    -1,   101,   341,
     102,    -1,    -1,   342,    -1,   343,    -1,   342,   343,    -1,
     299,    -1,   300,    -1,   301,    -1,   311,    -1,   318,    -1,
     322,    -1,   325,    -1,   330,    -1,   287,    -1,   101,   345,
     102,    -1,   101,   346,    98,   102,    -1,    -1,   346,    -1,
     223,    -1,   346,    98,   223,    -1,   274,   288,    44,     4,
     348,   350,   277,    -1,    -1,   349,    -1,   108,   294,    -1,
     101,   351,   102,    -1,    -1,   352,    -1,   353,    -1,   352,
     353,    -1,   354,    -1,   356,    -1,   359,    -1,   357,    -1,
     274,   355,   149,     4,   103,   303,   104,   360,    -1,   274,
     355,    84,     4,   103,   303,   104,   360,    -1,    -1,    50,
      -1,   274,   355,   149,     4,   384,   101,   358,   102,   385,
      -1,   274,   355,   149,    72,    99,   306,   100,   384,   101,
     358,   102,   385,    -1,   274,    94,   360,    -1,   274,    95,
     360,    -1,   274,    94,   360,   274,    95,   360,    -1,   274,
      95,   360,   274,    94,   360,    -1,   274,   355,    30,   149,
       4,   360,    -1,   107,    -1,   101,   102,    -1,   274,   288,
      29,     4,   362,   364,   277,    -1,    -1,   363,    -1,   108,
     154,    -1,   101,   365,   102,    -1,   101,   366,    98,   102,
      -1,    -1,   366,    -1,   367,    -1,   366,    98,   367,    -1,
     274,     4,    -1,   274,     4,   143,   210,    -1,   274,   288,
      25,   304,     4,   103,   303,   104,   107,    -1,   370,    -1,
     371,    -1,   370,   371,    -1,   380,    99,   372,   375,   100,
     381,    -1,   380,    99,   372,   375,    98,   100,   381,    -1,
      -1,   373,    -1,   374,   108,    -1,    87,    -1,    88,    -1,
      30,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      62,    -1,    93,    -1,   376,    -1,   375,    98,   376,    -1,
     378,   377,    -1,    -1,   379,    -1,   148,    -1,   103,   171,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   109,   109,   110,   111,   112,   113,   114,   117,   118,
     124,   127,   131,   132,   135,   136,   139,   140,   141,   144,
     145,   148,   149,   150,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   156,   156,   159,   159,   162,   163,   166,
     167,   168,   170,   172,   175,   179,   183,   184,   187,   188,
     189,   192,   193,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   210,   213,   214,   215,   218,
     219,   221,   223,   226,   227,   229,   231,   234,   235,   238,
     241,   242,   245,   248,   251,   254,   257,   258,   260,   262,
     265,   266,   269,   272,   275,   278,   281,   284,   285,   286,
     287,   288,   291,   292,   293,   294,   297,   300,   303,   304,
     305,   306,   307,   308,   309,   317,   318,   319,   320,   321,
     322,   324,   326,   329,   330,   333,   334,   337,   338,   339,
     340,   343,   344,   345,   348,   349,   350,   353,   354,   355,
     356,   357,   358,   359,   362,   363,   364,   367,   368,   371,
     372,   375,   376,   379,   380,   383,   384,   387,   388,   391,
     394,   394,   394,   394,   394,   394,   395,   395,   395,   395,
     395,   398,   399,   402,   405,   409,   410,   411,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   429,   431,   433,   437,   438,   441,   444,   447,   448,
     451,   454,   455,   458,   459,   462,   463,   464,   467,   470,
     473,   474,   477,   480,   483,   484,   485,   486,   487,   488,
     489,   492,   493,   496,   497,   500,   503,   505,   507,   510,
     511,   514,   517,   518,   521,   522,   525,   526,   527,   528,
     531,   534,   537,   540,   542,   544,   546,   548,   550,   552,
     555,   556,   559,   562,   565,   566,   569,   572,   573,   574,
     575,   576,   579,   582,   585,   586,   587,   590,   592,   594,
     597,   600,   601,   602,   605,   606,   609,   610,   611,   613,
     615,   618,   621,   624,   627,   630,   633,   634,   638,   641,
     642,   645,   648,   649,   651,   653,   655,   657,   659,   661,
     664,   666,   668,   677,   678,   681,   682,   685,   688,   689,
     692,   693,   696,   699,   702,   703,   706,   707,   710,   711,
     712,   713,   714,   724,   726,   729,   730,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   750,   752,   754,   757,   758,   759,   762,   763,   766,
     768,   770,   773,   774,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   787,   790,   793,   796,   800,   801,   803,
     805,   808,   809,   812,   813,   816,   817,   820,   821,   824,
     826,   828,   829,   833,   836,   842,   843,   845,   847,   849,
     851,   854,   860,   866,   867,   870,   871,   877,   878,   881,
     887,   893,   899,   901,   904,   908,   911,   912,   915,   916,
     919,   919,   920,   920,   920,   920,   920,   920,   921,   921,
     921,   921,   921,   921,   922,   922,   922,   922,   922,   922,
     922,   922,   925,   926,   929,   932,   934,   936,   939,   940,
     956,   959,   960,   963,   964,   969,   971,   973,   976,   979,
     981,   983,   986,   987,   990,   991,   992,   993,   994,   995,
     996,   997,   999,  1004,  1005,  1007,  1009,  1012,  1013,  1018,
    1020,  1022,  1025,  1028,  1030,  1032,  1035,  1036,  1039,  1040,
    1041,  1042,  1046,  1047,  1049,  1051,  1054,  1060,  1068,  1069,
    1070,  1071,  1074,  1079,  1080,  1085,  1087,  1089,  1092,  1095,
    1096,  1098,  1100,  1103,  1104,  1107,  1108,  1113,  1118,  1121,
    1122,  1125,  1126,  1128,  1130,  1133,  1136,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,  1147,  1148,  1151,  1153,  1155,
    1158,  1161,  1168,  1171,  1174,  1177,  1180,  1183
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
  "GET", "SET", "ADD", "REMOVE", "\",\"", "\"[\"", "\"]\"",
  "LEFT_BRACKET_GROUP", "RIGHT_BRACKET_GROUP", "LEFT_BRACKET_CIRCLE",
  "RIGHT_BRACKET_CIRCLE", "GREATER", "SMALLER", "SEMICOLON", "COLON",
  "DOT", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ",
  "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ", "NOTEQ", "LEQ",
  "GEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS", "ARROW", "PLUS",
  "MINUS", "STAR", "SLASH", "PERCENT", "AND", "OR", "EXCLAMATION_POINT",
  "TILDE", "QUESTION_MARK", "THEN", "'^'", "'='", "$accept", "literal",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    94,    61
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
       0,     0,    12,    13,     0,     0,     0,   121,   121,   121,
     131,     0,    98,   106,   107,   109,   110,   111,    95,   103,
     104,     0,     0,     0,     0,    71,   531,     0,    82,    83,
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
     133,   135,   136,   143,   142,   139,   138,   140,   141,   145,
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
       0,     0,   417,   416,   428,   429,   424,   425,   426,   427,
     431,   430,   414,   415,   410,   411,   418,   419,   420,   421,
     422,   412,   413,   423,     0,   296,     0,   365,   296,     0,
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
#define YYPACT_NINF -709
static const short int yypact[] =
{
     129,    39,   108,   119,   129,  -709,  -709,  -709,   -26,   125,
    -709,   252,  -709,  1117,  -709,    34,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,   119,  -709,   190,  -709,  -709,   263,
    -709,   187,  -709,  -709,  -709,   263,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,   204,  1730,  -709,
    2739,  -709,  -709,   261,   194,   222,  -709,   270,   360,   868,
     377,   405,   458,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,   263,  -709,   247,  -709,   129,   294,   369,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,   356,  -709,   361,  -709,   478,
    -709,  -709,  -709,  -709,  -709,  -709,   478,   478,   499,   399,
     411,   421,  -709,  -709,   206,  -709,   428,  -709,   243,  -709,
    -709,    37,   432,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
     434,   254,   442,  -709,   263,   445,  -709,   263,   449,  -709,
      68,  -709,  2347,  -709,  -709,   440,   293,  -709,   453,   454,
     298,   294,     6,  -709,   308,   294,   454,   315,   294,   454,
     323,   294,  -709,  -709,  -709,  -709,  -709,  -709,  -709,    85,
     450,  -709,  2666,  -709,   451,  -709,  -709,   452,   455,  2026,
    2347,  2347,  2347,  2347,  2347,  2347,  2347,  2347,  -709,  -709,
     447,   448,   114,   456,  -709,  -709,  -709,  -709,   460,   467,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,   346,  -709,  -709,  -709,   317,  -709,   351,
     -46,    27,   103,   301,   430,   425,   431,   443,    75,  -709,
    -709,  -709,   277,  -709,   263,   263,  1730,  -709,   468,   337,
    -709,  -709,  -709,  -709,   142,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,   253,   469,   473,  -709,  -709,  -709,   568,   472,
     477,  -709,  -709,   527,   480,   348,  -709,  -709,  -709,  -709,
    -709,  -709,  1730,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,   481,   349,  -709,  -709,  -709,  2347,   576,  2347,
     356,   -39,   485,    24,  2666,  2709,  2347,    23,    19,    22,
     358,   487,    93,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,   581,   589,  2347,   590,  1812,  -709,  2347,  -709,  -709,
     591,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  2347,  2347,  2347,  2347,  2347,  2347,  2347,  2347,
    2666,  2666,  2347,  2347,  2347,  2347,  2347,  2347,  2347,  2347,
    2347,  2347,  2347,  2347,  2347,  1812,   454,  -709,  2525,  -709,
    -709,  1462,  -709,  -709,  -709,  -709,  2666,  -709,  2666,   489,
     119,   457,  -709,   350,  -709,  1214,  -709,  -709,  2642,  -709,
    -709,   220,  -709,   494,  1812,  2347,  1919,  -709,   -11,    -9,
       9,   497,  -709,  -709,   502,    23,  -709,   503,   504,  2133,
    2454,    23,  -709,  -709,   262,  -709,  2347,  2347,   511,  -709,
     506,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,   351,
     351,   -46,   -46,   361,   361,    27,    27,    27,    27,   103,
     103,   301,   430,   425,   431,   443,   505,   380,   508,   176,
    2666,  2666,   561,   562,    28,   613,    26,  -709,   185,  -709,
    -709,   258,   235,   512,    90,  2666,   524,  1598,   529,   530,
     531,    83,   533,   534,  2347,   535,  2347,   538,   397,   538,
     537,   539,  -709,    40,   447,   448,   140,   166,   186,   223,
     230,   265,   317,  -709,  -709,  -709,  -709,   541,  1462,  -709,
    -709,  -709,   540,   542,  -709,   543,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,    36,    41,    42,
    -709,  -709,  2347,  -709,  -709,  2666,    43,    20,  -709,  -709,
     544,   408,  2666,  -709,  -709,  -709,  -709,   549,   547,  -709,
    -709,  -709,  -709,  2347,  -709,  2347,  2347,  2347,  -709,   548,
    -709,  -709,  -709,  -709,  1812,  -709,  2347,  -709,  -709,     6,
      44,    45,  2666,  2666,   550,   551,   116,  2506,   556,   124,
    -709,   555,    32,   560,   545,  -709,  -709,  -709,  -709,  -709,
    -709,  1462,  -709,  -709,    44,  -709,   574,  2666,  2240,  2666,
     554,  2347,   557,  2347,  2347,  -709,   564,  2347,   567,    95,
    -709,  -709,  2240,  2347,   498,   565,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,    47,   559,   572,   569,  -709,
     478,   -32,  -709,  1705,  -709,  -709,  -709,  -709,  2347,  -709,
    -709,   563,   536,   132,  -709,   168,  -709,   -15,   -13,     6,
     579,  1919,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,   575,   119,   676,  -709,     6,   583,
    -709,   119,   119,  -709,   592,   584,    48,  -709,  -709,   585,
    -709,   597,    52,  -709,   593,  -709,  -709,   594,   595,  -709,
     598,  -709,   410,   538,    95,  -709,  -709,  -709,  -709,   600,
     601,   266,     6,     6,   596,   119,   605,   478,  2347,  -709,
    -709,  -709,   588,  2347,   697,  -709,  -709,   606,  2666,  2666,
     604,   538,  -709,  2666,   414,  -709,   607,   119,   417,   321,
     610,   359,   364,  2347,   571,   281,  -709,  2347,  2347,   673,
    -709,  1598,  1598,   615,    37,  -709,  -709,  -709,  -709,  1598,
    1598,   618,  -709,  -709,   617,   621,   119,   418,  -709,  -709,
    -709,   622,    30,  -709,  -709,  -709,  -709,   119,    53,    54,
    -709,  -709,    56,  -709,  -709,   624,  -709,  -709,  -709,  -709,
     632,  -709,  -709,   623,  -709,  -709,   626,  2347,   727,  1598,
    -709,   625,  -709,  -709,  2347,   705,  -709,   221,  -709,   732,
     732,  -709,  -709,  -709,   266,   266,   374,   635,  -709,  -709,
     638,   640,   357,   636,   119,   119,   641,   642,   285,  -709,
     289,   289,  -709,   643,  -709,  -709,  -709,  2347,   644,  1598,
    2347,   639,   647,   221,  -709,  1326,  -709,  -709,   648,   650,
    -709,  -709,   266,   266,  -709,   654,  1812,  1812,  -709,  -709,
    -709,   659,  -709,   655,  -709,  -709,  -709,  2666,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,   653,  -709,   597,  1598,  -709,
     651,  -709,  -709,  -709,  1462,  -709,   538,   538,   365,   371,
    -709,   119,   656,   657,   538,   538,  -709,    57,  -709,  -709,
    1598,  -709,  -709,  -709,  -709,   663,   668,   661,  -709,  -709,
    -709,  -709,   662,  -709,   266,   266,  -709,  -709,  -709,  -709,
    -709,  -709,  -709
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -709,  -709,  -709,  -709,   -71,   -42,   609,  -709,    16,  -709,
     637,  -709,   -53,  -709,   627,    63,   -96,   366,  -709,   218,
    -709,  -709,  -709,  -709,  -330,  -351,  -709,  -709,   -73,  -709,
    -709,   215,   225,  -709,   283,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,   394,   381,   404,   441,  -709,  -278,
    -709,   400,  -166,   104,    61,   180,   461,   459,   464,   465,
     466,  -709,  -709,   446,  -709,   303,  -575,  -589,  -481,  -403,
    -191,  -709,   -38,  -709,  -709,  -709,  -376,  -445,   134,  -532,
    -709,  -709,   214,    87,  -709,  -573,  -709,  -709,  -709,  -709,
    -709,  -709,   -28,  -709,   -25,  -709,  -709,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,   -10,  -709,  -709,  -709,
    -709,  -709,  -709,   353,  -709,  -709,  -709,   126,    29,   128,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,    35,  -709,   747,
      -3,  -709,  -709,   110,     0,   382,  -709,  -709,   822,  -709,
    -709,   709,     4,  -142,  -198,  -709,   782,  -709,  -709,  -709,
     -72,  -709,  -709,  -709,   602,  -123,   -84,   -83,  -709,  -536,
    -709,  -709,  -455,   462,  -709,  -709,  -709,   -82,   106,  -709,
    -709,    99,   105,    13,   -80,  -709,    31,    25,   -79,  -709,
    -709,   -78,  -709,  -709,  -709,  -709,   -76,  -709,  -709,  -709,
    -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,   566,
    -288,  -709,  -709,  -709,  -709,  -709,  -709,  -709,  -709,   577,
    -709,  -709,  -709,  -709,   -44,  -709,  -622,  -709,  -709,  -709,
    -709,  -709,  -709,   470,  -709,  -709,  -709,   820,  -709,  -709,
    -709,  -709,   707,  -709,  -709,  -709,  -709,   683,  -378,  -310,
    -562,  -708
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -533
static const short int yytable[] =
{
      13,    10,   112,   127,   438,   387,   104,   607,   237,   669,
     128,   129,    50,   300,   700,   678,   684,    97,   273,    51,
     397,   398,   126,   631,   617,   126,   126,   126,   605,    55,
     566,   476,    54,   530,  -293,    57,    31,   274,   358,   126,
     -11,    54,   810,     8,   604,   611,   612,   616,   632,   566,
     147,   701,   734,   363,   586,   704,   739,   816,   817,   107,
     818,   902,   156,   147,   384,   159,   147,   708,   148,   112,
     821,   822,    54,   113,   378,   100,   275,   276,   277,   567,
     278,   279,   280,    28,   281,   336,   337,   590,   718,    88,
     719,   710,   618,   539,   125,   540,   126,   237,   568,   591,
     673,   125,   811,   720,   670,  -532,    91,   592,    12,   722,
    -369,   859,   692,   541,   340,    50,   635,    29,   125,   104,
     125,   113,   125,   549,   124,   386,   299,   476,   311,   693,
     291,   312,   726,  -532,   113,   354,   880,   113,   765,   355,
     113,   273,   125,    50,   786,   338,   339,   236,   790,   341,
      51,   258,   392,   125,   263,   392,   392,   272,   476,   125,
     274,   124,   356,   147,   357,   793,   754,   755,   162,   -11,
     419,   420,   107,   125,   125,   125,   124,   125,   125,   302,
     125,   125,   840,   841,   287,   125,   125,   125,   100,   125,
     125,   361,   354,   289,   288,   298,   355,   128,   912,   275,
     276,   277,   352,   278,   279,   280,   401,   281,   342,   343,
     724,     1,   677,   313,   381,   353,   728,  -303,  -532,  -303,
     878,   879,   666,   314,    58,    28,   698,   344,   345,    59,
     714,   667,    30,    60,   113,   113,   236,   830,  -214,   715,
     404,   104,   104,   361,  -214,   831,   845,  -214,    61,   362,
     757,   476,   388,   390,   678,   870,    31,   576,   476,   641,
     579,   251,   263,   583,  -217,   262,   666,    54,   271,    81,
    -217,   285,    82,  -217,    62,   716,   599,   600,   601,   559,
     272,   437,   910,   911,  -218,    28,   361,   104,   104,    53,
    -218,    64,   575,  -218,   107,   107,    56,    86,   423,   424,
     888,   889,    87,    28,   140,   104,   141,   365,   475,   366,
     100,   100,   531,   104,   367,   104,   446,    89,   317,    90,
     528,  -215,   104,    65,   518,   104,   519,  -215,  -219,    76,
    -215,    92,    93,   527,  -219,    94,   446,  -219,   795,   796,
     107,   107,  -532,   581,    28,  -298,   801,   802,    66,    67,
      68,    69,    70,    71,    72,   117,   100,   100,   107,   361,
     317,   517,   550,  -220,    79,   578,   107,   751,   107,  -220,
     258,    77,  -220,   752,   100,   107,   354,   474,   107,   788,
     355,   109,   100,   857,   100,   789,   826,   104,   104,   858,
     361,   100,  -532,   607,   100,  -299,   860,  -532,   560,   561,
    -350,   119,   104,   425,   426,   427,   428,  -532,   476,   110,
    -501,   476,   476,   584,  -532,   777,   778,  -474,   759,   476,
     476,   129,  -532,   346,   347,  -450,   869,   321,   322,   323,
     324,   325,   326,   327,   328,   475,  -532,   329,   330,  -351,
     107,   107,   421,   422,   564,   231,   571,  -532,  -532,  -532,
    -475,  -451,   523,   848,   849,   107,   100,   100,  -532,   476,
     331,  -387,   111,  -532,  -532,   891,  -389,  -488,   842,   843,
    -532,   100,   104,  -489,   318,   319,   320,   121,   317,   104,
     557,   126,   301,   615,   333,   334,   335,   903,   517,   124,
     621,   399,   334,   335,   125,   882,   883,   476,   361,   476,
     296,   745,   746,   130,   474,   476,   317,   131,   620,   104,
     104,   361,   370,   744,   773,   370,   370,   776,   808,   134,
     637,   638,   907,   908,   707,   107,   429,   430,   475,   137,
     771,   142,   107,   150,   104,   475,   104,   152,   476,   885,
     886,   100,   233,   154,   476,   676,   157,   682,   100,   475,
     160,   234,   235,   289,   294,   295,   311,   312,   296,   315,
     476,   636,   107,   107,   316,   317,   348,   349,   350,   351,
     359,   370,   371,   369,   372,   373,   477,   374,   100,   100,
     382,   517,   376,   379,   385,   402,   478,   107,   517,   107,
     231,   400,   383,   403,   405,   413,   520,   474,   529,   391,
     522,   542,   517,   100,   474,   100,   543,   545,   546,   554,
     555,   707,   558,   556,   562,   563,   231,   565,   474,   582,
     412,   303,   304,   305,   306,   307,   308,   309,   310,   861,
     861,   585,   587,   588,   589,   414,   593,   594,   597,   361,
     602,   641,   603,   606,   479,   623,   672,   608,   619,   609,
     610,   622,   628,   639,   640,   665,   436,   231,   668,   671,
     675,   683,   702,   666,   685,   104,   104,   712,   705,   729,
     104,   689,   477,   799,   691,   703,   768,   769,   723,   713,
     604,   772,   478,   721,   727,   893,   894,   733,   231,   533,
     714,   800,   737,   900,   901,   738,   762,   756,   741,   742,
     740,   632,   743,   477,   749,   750,   386,   767,   770,   552,
     552,   774,   779,   478,   787,   794,   797,   777,   107,   107,
     803,   804,   809,   107,   729,   805,   819,   778,   780,   783,
     823,   734,   827,   829,   100,   100,   837,   844,   850,   100,
     479,   846,   480,   847,   113,   855,   856,   871,   868,   872,
     864,   848,   876,   806,   877,   881,   849,   890,   904,   892,
     898,   899,   905,   906,   812,   481,   909,   595,   153,   595,
     760,   479,   629,   553,   415,   416,   417,   418,   418,   418,
     418,   292,   475,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   548,   544,   477,   874,   674,   293,
     725,   766,   482,   477,   104,   873,   478,   483,   432,   431,
     875,   851,   853,   478,   433,   887,   434,   867,   435,   598,
     747,   475,   748,   825,   118,   613,    27,   146,   572,   839,
      63,   785,   521,   775,   863,   517,   782,   897,   480,   852,
     415,   360,   377,   524,    52,   286,   854,   163,     0,   380,
       0,   474,     0,     0,     0,     0,     0,   107,     0,   630,
       0,   481,     0,     0,   479,     0,     0,     0,     0,   480,
       0,   479,    54,   100,   517,   895,   896,     0,   806,     0,
       0,    80,     0,    81,     0,     0,    82,     0,     0,     0,
     474,    83,   481,     0,   613,    84,   686,   688,   482,     0,
     690,     0,     0,   483,    85,   697,   686,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    87,     0,     0,     0,
      88,     0,     0,     0,     0,     0,   533,     0,     0,   482,
       0,    89,     0,    90,   483,     0,     0,    91,     0,     0,
       0,     0,     0,     0,   533,    92,    93,     0,     0,    94,
       0,     0,    95,   477,     0,     0,   477,   477,     0,     0,
       0,     0,   480,   478,   477,   477,   478,   478,     0,   480,
       0,     0,     0,     0,   478,   478,     0,     0,     0,     0,
       0,     0,     0,     0,   624,   481,   625,   626,   627,     0,
       0,     0,   481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   477,     0,     0,     0,     0,     0,
       0,   761,     0,     0,   478,     0,   613,     0,     0,     0,
       0,   479,   482,     0,   479,   479,     0,   483,     0,   482,
       0,     0,   479,   479,   483,     0,   686,     0,     0,     0,
     686,     0,   477,     0,   477,     0,     0,     0,     0,     0,
     477,     0,   478,     0,   478,     0,     0,     0,     0,     0,
     478,     0,     0,     0,     0,     0,     0,     0,     0,   711,
       0,     0,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   477,     0,     0,     0,     0,     0,   477,
     824,     0,     0,   478,     0,     0,     0,   828,     0,   478,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
     479,     0,   479,     0,     0,   478,     0,  -292,   479,   480,
       0,     0,   480,   480,     0,     0,     0,    32,     0,     0,
     480,   480,     0,   613,     0,     0,     0,     0,     0,     0,
       0,     0,   481,     0,     0,   481,   481,     0,     0,    33,
       0,   479,     0,   481,   481,     0,     0,   479,     0,     0,
       0,     0,    34,     0,     0,     0,    35,    36,     0,     0,
     480,     0,    37,   479,    38,    39,    40,    41,     0,   482,
       0,    42,   482,   482,   483,    43,     0,   483,   483,     0,
     482,   482,     0,   481,     0,   483,   483,    44,     0,     0,
      45,     0,    46,     0,     0,     0,     0,     0,   480,     0,
     480,     0,     0,     0,     0,     0,   480,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,    81,
     482,   481,    82,   481,     0,   483,     0,    83,     0,   481,
       0,    84,     0,     0,   525,     0,     0,     0,     0,   480,
      85,     0,     0,     0,     0,   480,     0,    86,     0,     0,
       0,     0,    87,     0,     0,     0,    88,     0,   482,     0,
     482,   480,   481,   483,     0,   483,   482,    89,   481,    90,
       0,   483,     0,    91,     0,     0,     0,     0,     0,     0,
       0,    92,    93,     0,   481,    94,     0,     0,   526,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
       0,     0,     0,     0,   483,   482,     0,     0,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,   482,   165,   166,   167,   168,   483,     0,   169,    80,
     453,    81,   830,     0,    82,   454,     0,   455,   456,    83,
     831,     0,   457,    84,     0,     0,     0,     0,     0,   171,
       0,   458,    85,   459,   460,   461,   462,     0,     0,    86,
       0,     0,     0,   463,    87,     0,   172,   173,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,    89,
       0,    90,   174,     0,     0,    91,     0,   465,   175,   466,
     176,   467,   177,    92,    93,   468,   469,    94,   470,     0,
     290,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,     0,   179,
       0,     0,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,     0,   182,   183,   184,
       0,     0,   185,     0,   186,   187,   452,     0,   165,   166,
     167,   168,     0,     0,   169,    80,   453,    81,     0,     0,
      82,   454,     0,   455,   456,    83,     0,     0,   457,    84,
       0,     0,     0,     0,     0,   171,     0,   458,    85,   459,
     460,   461,   462,     0,     0,    86,     0,     0,     0,   463,
      87,     0,   172,   173,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,    89,     0,    90,   174,     0,
       0,    91,     0,   465,   175,   466,   176,   467,   177,    92,
      93,   468,   469,    94,   470,     0,   290,     0,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   361,     0,   179,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   181,     0,   182,   183,   184,     0,     0,   185,     0,
     186,   187,    54,     0,   165,   166,   167,   168,     0,     0,
     169,    80,   453,    81,     0,     0,    82,   454,     0,     0,
     456,    83,     0,     0,   457,    84,     0,     0,     0,     0,
       0,   171,     0,   458,    85,   459,   460,   461,   462,     0,
       0,    86,     0,     0,     0,   463,    87,     0,   172,   173,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,    89,     0,    90,   174,     0,     0,    91,     0,   465,
     175,   466,   176,   467,   177,    92,    93,   468,   469,    94,
     470,     0,     0,     0,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
       0,   179,     0,     0,     0,   472,     0,     0,     0,    54,
       0,   165,   166,   167,   168,     0,     0,   169,    80,     0,
      81,     0,     0,    82,   170,     0,   180,   181,    83,   182,
     183,   184,    84,     0,   185,     0,   186,   187,   171,     0,
      32,    85,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,    87,     0,   172,   173,    88,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,    89,     0,
      90,   174,   532,     0,    91,    34,     0,   175,     0,   176,
      36,   177,    92,    93,   178,    37,    94,    38,    39,    40,
      41,     0,     0,     0,    42,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,   386,   709,   179,     0,
      44,     0,     0,    45,     0,    46,    54,     0,   165,   166,
     167,   168,     0,     0,   169,    80,     0,    81,     0,     0,
      82,   170,     0,   180,   181,    83,   182,   183,   184,    84,
       0,   185,     0,   186,   187,   171,     0,     0,    85,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
      87,     0,   172,   173,    88,     0,   406,     0,     0,     0,
       0,     0,     0,   407,     0,    89,     0,    90,   174,     0,
       0,    91,     0,     0,   175,     0,   176,     0,   177,    92,
      93,   178,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,    54,     0,   165,   166,   167,   168,     0,
       0,   169,    80,     0,    81,     0,     0,    82,   170,     0,
     180,   181,    83,   182,   183,   184,    84,     0,   185,     0,
     186,   187,   171,     0,     0,    85,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,    87,     0,   172,
     173,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,    90,   174,   532,     0,    91,     0,
       0,   175,     0,   176,     0,   177,    92,    93,   178,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     386,     0,   179,     0,     0,     0,     0,     0,     0,     0,
      54,     0,   165,   166,   167,   168,     0,     0,   169,    80,
       0,    81,     0,     0,    82,   170,     0,   180,   181,    83,
     182,   183,   184,    84,     0,   185,     0,   186,   187,   171,
       0,     0,    85,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    87,     0,   172,   173,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    90,   174,     0,     0,    91,     0,     0,   175,     0,
     176,     0,   177,    92,    93,   178,     0,    94,     0,     0,
     297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,    54,     0,   165,
     166,   167,   168,     0,     0,   169,    80,     0,    81,     0,
       0,    82,   170,     0,   180,   181,    83,   182,   183,   184,
      84,     0,   185,     0,   186,   187,   171,     0,     0,    85,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,    87,     0,   172,   173,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    90,   174,
       0,     0,    91,     0,     0,   175,     0,   176,     0,   177,
      92,    93,   178,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   179,   547,     0,     0,
       0,     0,     0,     0,    54,     0,   165,   166,   167,   168,
       0,     0,   169,    80,     0,    81,     0,     0,    82,   170,
       0,   180,   181,    83,   182,   183,   184,    84,     0,   185,
       0,   186,   187,   171,     0,     0,    85,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,     0,     0,    91,
       0,     0,   175,     0,   176,     0,   177,    92,    93,   178,
       0,    94,     0,     0,   290,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,    54,     0,   165,   166,   167,   168,     0,     0,   169,
      80,     0,    81,     0,     0,    82,   170,     0,   180,   181,
      83,   182,   183,   184,    84,     0,   185,     0,   186,   187,
     171,     0,     0,    85,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,    87,     0,   172,   173,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    90,   174,     0,     0,    91,     0,     0,   175,
       0,   176,     0,   177,    92,    93,   178,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     165,   166,   167,   168,     0,     0,   169,    80,     0,    81,
       0,     0,    82,   170,     0,   180,   181,    83,   182,   183,
     184,    84,     0,   185,     0,   186,   187,   171,     0,     0,
      85,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,    87,     0,   172,   173,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    90,
     174,     0,     0,    91,     0,     0,   175,     0,   176,   439,
     177,    92,    93,   178,     0,    94,     0,     0,    80,   642,
      81,     0,     0,    82,     0,    58,   440,     0,    83,     0,
      59,     0,    84,     0,    60,   441,   442,   179,     0,     0,
       0,    85,     0,     0,     0,     0,   443,     0,    86,    61,
       0,     0,     0,    87,     0,     0,     0,    88,     0,     0,
     643,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,   186,   187,    91,    62,     0,     0,     0,     0,
       0,     0,    92,    93,     0,     0,    94,     0,     0,   444,
       0,   644,   645,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   646,   647,     0,     0,   648,   649,
     650,   651,     0,     0,   652,   653,     0,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   439,     0,   663,     0,
       0,     0,     0,     0,     0,    80,     0,    81,     0,     0,
      82,     0,    58,   440,   445,    83,     0,    59,     0,    84,
      54,    60,   441,   442,     0,     0,     0,     0,    85,    80,
       0,    81,     0,   443,    82,    86,    61,     0,     0,    83,
      87,     0,     0,    84,    88,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    89,     0,    90,     0,    86,
       0,    91,    62,    54,    87,     0,     0,     0,    88,    92,
      93,     0,    80,    94,    81,     0,   444,    82,     0,    89,
       0,    90,    83,     0,     0,    91,    84,     0,     0,     0,
       0,     0,     0,    92,    93,    85,     0,    94,     0,    32,
     290,     0,    86,     0,     0,     0,     0,    87,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    89,     0,    90,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    34,     0,    92,    93,    35,    36,
      94,     0,     0,   389,    37,     0,    38,    39,    40,    41,
       0,     0,     0,    42,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    45,     0,    46
};

static const short int yycheck[] =
{
       3,     1,    73,    99,   355,   293,    59,   488,   150,   571,
     106,   107,    15,   179,   603,   588,   591,    59,   160,    15,
     298,   299,     3,   559,     4,     3,     3,     3,   473,    29,
       4,   361,     4,   384,     0,    35,     4,   160,   236,     3,
       4,     4,    12,     4,     4,     4,     4,     4,     4,     4,
     121,     4,     4,   244,   457,   617,     4,     4,     4,    59,
       4,     4,   134,   134,   103,   137,   137,    99,   121,   140,
     778,   779,     4,    73,   272,    59,   160,   160,   160,    53,
     160,   160,   160,   109,   160,   131,   132,     4,   103,    52,
     103,   623,    72,   104,   133,   104,     3,   239,    72,    16,
     581,   133,    72,   639,    72,    99,    69,    24,     0,   641,
     104,   819,    17,   104,    11,   118,   561,   143,   133,   172,
     133,   121,   133,   401,   133,   101,   179,   457,   109,    34,
     172,   109,   668,    99,   134,    99,   844,   137,   713,   103,
     140,   283,   133,   146,   733,   118,   119,   150,   737,    46,
     146,   154,   133,   133,   157,   133,   133,   160,   488,   133,
     283,   133,   234,   234,   235,   738,   702,   703,   100,   133,
     336,   337,   172,   133,   133,   133,   133,   133,   133,   179,
     133,   133,   804,   805,    99,   133,   133,   133,   172,   133,
     133,   101,    99,   103,   109,   179,   103,   293,   906,   283,
     283,   283,   127,   283,   283,   283,   302,   283,   105,   106,
     665,    82,   588,    99,   287,   140,   671,   101,    99,   103,
     842,   843,    98,   109,    20,   109,   602,   124,   125,    25,
      98,   107,   107,    29,   234,   235,   239,    16,    98,   107,
     313,   294,   295,   101,   104,    24,   808,   107,    44,   107,
     705,   581,   294,   295,   827,   830,     4,   448,   588,   143,
     451,   151,   265,   454,    98,   155,    98,     4,   158,    15,
     104,   161,    18,   107,    70,   107,   467,   468,   469,   103,
     283,   354,   904,   905,    98,   109,   101,   340,   341,    99,
     104,    30,   107,   107,   294,   295,   109,    43,   340,   341,
     862,   863,    48,   109,    98,   358,   100,    54,   361,    56,
     294,   295,   385,   366,    61,   368,   358,    63,    98,    65,
     100,    98,   375,    62,   366,   378,   368,   104,    98,   107,
     107,    77,    78,   375,   104,    81,   378,   107,   741,   742,
     340,   341,    99,   108,   109,   102,   749,   750,    87,    88,
      89,    90,    91,    92,    93,   108,   340,   341,   358,   101,
      98,   361,   100,    98,     4,   107,   366,   101,   368,   104,
     373,   101,   107,   107,   358,   375,    99,   361,   378,    98,
     103,     4,   366,    98,   368,   104,   789,   440,   441,   104,
     101,   375,    99,   874,   378,   102,   107,    99,   440,   441,
     102,   107,   455,   342,   343,   344,   345,    99,   738,     4,
     102,   741,   742,   455,    99,    94,    95,   102,   706,   749,
     750,   517,    99,   122,   123,   102,   829,   110,   111,   112,
     113,   114,   115,   116,   117,   488,    99,   120,   121,   102,
     440,   441,   338,   339,   444,   142,   446,    99,    99,    99,
     102,   102,   102,    96,    97,   455,   440,   441,    99,   789,
     143,   102,     4,    99,    99,   868,   102,   102,    94,    95,
      99,   455,   525,   102,   128,   129,   130,   108,    98,   532,
     100,     3,   179,   525,   133,   134,   135,   890,   488,   133,
     532,   133,   134,   135,   133,   846,   847,   827,   101,   829,
     103,   692,   693,     4,   488,   835,    98,   108,   100,   562,
     563,   101,    98,   103,   100,    98,    98,   100,   100,   108,
     562,   563,   900,   901,   620,   525,   346,   347,   581,   108,
     721,   103,   532,   101,   587,   588,   589,   103,   868,   849,
     850,   525,   102,   101,   874,   587,   101,   589,   532,   602,
     101,    98,    98,   103,   103,   103,   109,   109,   103,   103,
     890,   561,   562,   563,   104,    98,   136,   142,   137,   126,
     102,    98,     4,   104,   102,    98,   361,    50,   562,   563,
       4,   581,   102,   102,    99,     4,   361,   587,   588,   589,
     287,   104,   289,     4,     4,     4,   107,   581,   104,   296,
     143,   104,   602,   587,   588,   589,   104,   104,   104,    98,
     104,   707,   104,   108,    53,    53,   313,     4,   602,   107,
     317,   180,   181,   182,   183,   184,   185,   186,   187,   820,
     821,   107,   103,   103,   103,   332,   103,   103,   103,   101,
     103,   143,   103,   102,   361,    98,   101,   107,   104,   107,
     107,   102,   104,   103,   103,    99,   353,   354,   103,    99,
      86,   107,   103,    98,   107,   718,   719,   104,    99,   672,
     723,   107,   457,   744,   107,   103,   718,   719,   103,   143,
       4,   723,   457,   104,   101,   876,   877,   103,   385,   386,
      98,   744,   107,   884,   885,    98,   108,   101,   104,   104,
     107,     4,   104,   488,   104,   104,   101,   101,   104,   406,
     407,   104,   102,   488,   143,    42,   101,    94,   718,   719,
     102,   104,   100,   723,   727,   104,   102,    95,   731,   732,
     104,     4,   107,    28,   718,   719,     4,   102,   102,   723,
     457,   103,   361,   103,   744,   104,   104,   108,   104,   102,
     107,    96,   104,   756,   104,   101,    97,   104,    95,   108,
     104,   104,    94,   102,   767,   361,   104,   464,   131,   466,
     707,   488,   554,   407,   333,   334,   335,   336,   337,   338,
     339,   172,   835,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   400,   395,   581,   835,   584,   172,
     666,   714,   361,   588,   857,   833,   581,   361,   349,   348,
     835,   814,   815,   588,   350,   857,   351,   827,   352,   466,
     694,   874,   694,   788,    77,   522,     4,   118,   446,   800,
      48,   732,   370,   727,   821,   835,   731,   881,   457,   814,
     399,   239,   265,   373,    24,   162,   815,   140,    -1,   283,
      -1,   835,    -1,    -1,    -1,    -1,    -1,   857,    -1,   556,
      -1,   457,    -1,    -1,   581,    -1,    -1,    -1,    -1,   488,
      -1,   588,     4,   857,   874,   878,   879,    -1,   881,    -1,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
     874,    23,   488,    -1,   591,    27,   593,   594,   457,    -1,
     597,    -1,    -1,   457,    36,   602,   603,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,   488,
      -1,    63,    -1,    65,   488,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,   641,    77,    78,    -1,    -1,    81,
      -1,    -1,    84,   738,    -1,    -1,   741,   742,    -1,    -1,
      -1,    -1,   581,   738,   749,   750,   741,   742,    -1,   588,
      -1,    -1,    -1,    -1,   749,   750,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   543,   581,   545,   546,   547,    -1,
      -1,    -1,   588,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   789,    -1,    -1,    -1,    -1,    -1,
      -1,   708,    -1,    -1,   789,    -1,   713,    -1,    -1,    -1,
      -1,   738,   581,    -1,   741,   742,    -1,   581,    -1,   588,
      -1,    -1,   749,   750,   588,    -1,   733,    -1,    -1,    -1,
     737,    -1,   827,    -1,   829,    -1,    -1,    -1,    -1,    -1,
     835,    -1,   827,    -1,   829,    -1,    -1,    -1,    -1,    -1,
     835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,   789,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,   874,
     787,    -1,    -1,   868,    -1,    -1,    -1,   794,    -1,   874,
      -1,    -1,    -1,    -1,    -1,   890,    -1,    -1,    -1,    -1,
     827,    -1,   829,    -1,    -1,   890,    -1,     0,   835,   738,
      -1,    -1,   741,   742,    -1,    -1,    -1,    10,    -1,    -1,
     749,   750,    -1,   830,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   738,    -1,    -1,   741,   742,    -1,    -1,    32,
      -1,   868,    -1,   749,   750,    -1,    -1,   874,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    -1,
     789,    -1,    55,   890,    57,    58,    59,    60,    -1,   738,
      -1,    64,   741,   742,   738,    68,    -1,   741,   742,    -1,
     749,   750,    -1,   789,    -1,   749,   750,    80,    -1,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,   827,    -1,
     829,    -1,    -1,    -1,    -1,    -1,   835,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,
     789,   827,    18,   829,    -1,   789,    -1,    23,    -1,   835,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,   868,
      36,    -1,    -1,    -1,    -1,   874,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    -1,   827,    -1,
     829,   890,   868,   827,    -1,   829,   835,    63,   874,    65,
      -1,   835,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,   890,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   868,
      -1,    -1,    -1,    -1,   868,   874,    -1,    -1,    -1,    -1,
     874,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,   890,     6,     7,     8,     9,   890,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,
      -1,    -1,   136,    -1,   138,   139,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   129,    -1,   131,   132,   133,    -1,    -1,   136,    -1,
     138,   139,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    -1,   128,   129,    23,   131,
     132,   133,    27,    -1,   136,    -1,   138,   139,    33,    -1,
      10,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    45,    -1,    72,    -1,    74,
      50,    76,    77,    78,    79,    55,    81,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,    -1,
      80,    -1,    -1,    83,    -1,    85,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,   128,   129,    23,   131,   132,   133,    27,
      -1,   136,    -1,   138,   139,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,
     128,   129,    23,   131,   132,   133,    27,    -1,   136,    -1,
     138,   139,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,    -1,
      -1,    72,    -1,    74,    -1,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,   128,   129,    23,
     131,   132,   133,    27,    -1,   136,    -1,   138,   139,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,   128,   129,    23,   131,   132,   133,
      27,    -1,   136,    -1,   138,   139,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      -1,   128,   129,    23,   131,   132,   133,    27,    -1,   136,
      -1,   138,   139,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    -1,   128,   129,
      23,   131,   132,   133,    27,    -1,   136,    -1,   138,   139,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    -1,   128,   129,    23,   131,   132,
     133,    27,    -1,   136,    -1,   138,   139,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,     4,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    13,    33,
      15,    -1,    -1,    18,    -1,    20,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    30,    31,   103,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,   138,   139,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    84,
      -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,   123,
     124,   125,    -1,    -1,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     4,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    -1,    -1,
      18,    -1,    20,    21,   139,    23,    -1,    25,    -1,    27,
       4,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    13,
      -1,    15,    -1,    41,    18,    43,    44,    -1,    -1,    23,
      48,    -1,    -1,    27,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    63,    -1,    65,    -1,    43,
      -1,    69,    70,     4,    48,    -1,    -1,    -1,    52,    77,
      78,    -1,    13,    81,    15,    -1,    84,    18,    -1,    63,
      -1,    65,    23,    -1,    -1,    69,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    36,    -1,    81,    -1,    10,
      84,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    63,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    77,    78,    49,    50,
      81,    -1,    -1,    84,    55,    -1,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    82,   272,   273,   281,   282,   283,   284,     4,   147,
     278,   279,     0,   274,   276,   285,   286,   287,   291,   337,
     347,   361,   368,   369,   370,   371,   380,   282,   109,   143,
     107,     4,    10,    32,    45,    49,    50,    55,    57,    58,
      59,    60,    64,    68,    80,    83,    85,   288,   289,   290,
     274,   286,   371,    99,     4,   278,   109,   278,    20,    25,
      29,    44,    70,   290,    30,    62,    87,    88,    89,    90,
      91,    92,    93,   372,   373,   374,   107,   101,   280,     4,
      13,    15,    18,    23,    27,    36,    43,    48,    52,    63,
      65,    69,    77,    78,    81,    84,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   278,   304,     4,
       4,     4,   148,   278,   375,   376,   378,   108,   273,   107,
     277,   108,   292,   293,   133,   133,     3,   160,   160,   160,
       4,   108,   362,   363,   108,   348,   349,   108,   338,   339,
      98,   100,   103,   377,   379,   275,   285,   148,   156,   294,
     101,   295,   103,   154,   101,   364,   294,   101,   350,   294,
     101,   340,   100,   376,   381,     6,     7,     8,     9,    12,
      19,    33,    50,    51,    66,    72,    74,    76,    79,   103,
     128,   129,   131,   132,   133,   136,   138,   139,   145,   146,
     152,   156,   164,   165,   166,   167,   168,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   209,   278,   102,    98,    98,   274,   287,   296,   297,
     298,   299,   300,   301,   302,   311,   318,   322,   325,   330,
     334,   277,   274,   303,   306,   307,   308,   310,   274,   365,
     366,   367,   277,   274,   351,   352,   353,   354,   356,   357,
     359,   277,   274,   287,   299,   300,   301,   311,   318,   322,
     325,   330,   341,   342,   343,   277,   381,    99,   109,   103,
      84,   149,   150,   158,   103,   103,   103,    84,   152,   156,
     196,   209,   278,   191,   191,   191,   191,   191,   191,   191,
     191,   109,   109,    99,   109,   103,   104,    98,   128,   129,
     130,   110,   111,   112,   113,   114,   115,   116,   117,   120,
     121,   143,   208,   133,   134,   135,   131,   132,   118,   119,
      11,    46,   105,   106,   124,   125,   122,   123,   136,   142,
     137,   126,   127,   140,    99,   103,   294,   148,   288,   102,
     298,   101,   107,   214,   305,    54,    56,    61,   309,   104,
      98,     4,   102,    98,    50,   355,   102,   353,   288,   102,
     343,   172,     4,   209,   103,    99,   101,   344,   149,    84,
     149,   209,   133,   160,   193,   194,   195,   193,   193,   133,
     104,   160,     4,     4,   172,     4,    54,    61,   162,   163,
     169,   209,   209,     4,   209,   191,   191,   191,   191,   196,
     196,   197,   197,   149,   149,   198,   198,   198,   198,   199,
     199,   200,   201,   202,   203,   204,   209,   172,   169,     4,
      21,    30,    31,    41,    84,   139,   149,   323,   326,   327,
     329,   331,     4,    14,    19,    21,    22,    26,    35,    37,
      38,    39,    40,    47,    62,    71,    73,    75,    79,    80,
      82,    86,   107,   149,   152,   156,   168,   175,   176,   178,
     189,   190,   191,   207,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   225,   228,   229,   230,   231,   232,   239,
     240,   241,   242,   243,   251,   252,   253,   254,   255,   256,
     258,   259,   264,   265,   266,   267,   269,   278,   149,   149,
     107,   307,   143,   102,   367,    30,    84,   149,   100,   104,
     169,   172,    67,   209,   223,   224,   344,   345,   346,   104,
     104,   104,   104,   104,   195,   104,   104,   104,   188,   193,
     100,   161,   209,   161,    98,   104,   108,   100,   104,   103,
     149,   149,    53,    53,   278,     4,     4,    53,    72,   221,
     222,   278,   279,   324,   384,   107,   214,   335,   107,   214,
     336,   108,   107,   214,   149,   107,   213,   103,   103,   103,
       4,    16,    24,   103,   103,   209,   257,   103,   257,   214,
     214,   214,   103,   103,     4,   221,   102,   212,   107,   107,
     107,     4,     4,   209,   210,   149,     4,     4,    72,   104,
     100,   149,   102,    98,   191,   191,   191,   191,   104,   163,
     209,   303,     4,   226,   227,   221,   278,   149,   149,   103,
     103,   143,    33,    74,   105,   106,   118,   119,   122,   123,
     124,   125,   128,   129,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   142,   328,    99,    98,   107,   103,   384,
      72,    99,   101,   212,   226,    86,   149,   220,   229,   244,
     247,   250,   149,   107,   210,   107,   209,   211,   209,   107,
     209,   107,    17,    34,   260,   261,   263,   209,   220,   268,
     211,     4,   103,   103,   384,    99,   159,   160,    99,   102,
     223,   191,   104,   143,    98,   107,   107,   382,   103,   103,
     303,   104,   223,   103,   306,   222,   303,   101,   306,   274,
     312,   315,   316,   103,     4,   270,   271,   107,    98,     4,
     107,   104,   104,   104,   103,   214,   214,   261,   263,   104,
     104,   101,   107,   360,   303,   303,   101,   306,   180,   344,
     159,   209,   108,   332,   333,   210,   227,   101,   149,   149,
     104,   214,   149,   100,   104,   312,   100,    94,    95,   102,
     274,   313,   316,   274,   314,   315,   211,   143,    98,   104,
     211,   245,   248,   229,    42,   213,   213,   101,   233,   148,
     156,   213,   213,   102,   104,   104,   274,   358,   100,   100,
      12,    72,   274,   319,   320,   321,     4,     4,     4,   102,
     385,   385,   385,   104,   209,   271,   213,   107,   209,    28,
      16,    24,   234,   235,   236,   237,   238,     4,   262,   262,
     360,   360,    94,    95,   102,   384,   103,   103,    96,    97,
     102,   274,   321,   274,   320,   104,   104,    98,   104,   385,
     107,   214,   317,   317,   107,   246,   249,   250,   104,   213,
     210,   108,   102,   236,   216,   238,   104,   104,   360,   360,
     385,   101,   169,   169,   383,   383,   383,   149,   384,   384,
     104,   213,   108,   214,   214,   274,   274,   358,   104,   104,
     214,   214,     4,   213,    95,    94,   102,   382,   382,   104,
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
#line 1168 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_attrib(); */ ;}
    break;

  case 533:
#line 1171 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_attrib(); */ ;}
    break;

  case 534:
#line 1174 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_accessor(); */ ;}
    break;

  case 535:
#line 1177 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_accessor();*/ ;}
    break;

  case 536:
#line 1180 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_getset();*/ ;}
    break;

  case 537:
#line 1183 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_getset();*/ ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2812 "yacc.cpp"

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


#line 1188 "C:\\Users\\maher\\Desktop\\New folder\\compiler\\src\\compiler\\Parser\\yacc.y"


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



