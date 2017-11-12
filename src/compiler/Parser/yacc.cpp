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
#define PLUS 365
#define MINUS 366
#define STAR 367
#define SLASH 368
#define PERCENT 369
#define AND 370
#define OR 371
#define EXCLAMATION_POINT 372
#define TILDE 373
#define QUESTION_MARK 374
#define POWER 375
#define EQUAL 376
#define PLUSEQ 377
#define MINUSEQ 378
#define STAREQ 379
#define DIVEQ 380
#define MODEQ 381
#define XOREQ 382
#define ANDEQ 383
#define OREQ 384
#define LTLT 385
#define GTGT 386
#define GTGTEQ 387
#define LTLTEQ 388
#define EQEQ 389
#define NOTEQ 390
#define LEQ 391
#define GEQ 392
#define ANDAND 393
#define OROR 394
#define PLUSPLUS 395
#define MINUSMINUS 396
#define ARROW 397
#define THEN 398




/* Copy the first part of user declarations.  */
#line 9 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"

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
#line 37 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
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
#line 410 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 422 "yacc.cpp"

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
#define YYLAST   2761

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
#define YYMAXUTOK   398

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
      -1,    69,    -1,   149,   112,    -1,    84,   112,    -1,   158,
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
       4,    -1,    12,    99,   172,   100,    -1,   187,   140,    -1,
     187,   141,    -1,   178,    -1,    50,   149,   103,   169,   104,
      -1,    50,   150,    99,   172,   100,   159,   180,    -1,    50,
     158,   344,    -1,    -1,   344,    -1,    76,   103,   149,   104,
      -1,    76,   103,    84,   104,    -1,    19,   103,   209,   104,
      -1,    79,   103,   209,   104,    -1,   187,   142,     4,    -1,
     115,   191,    -1,    66,   103,   149,   104,    -1,   164,    -1,
     278,    -1,   175,    -1,   176,    -1,   184,    -1,   187,    -1,
     117,   191,    -1,   118,   191,    -1,   192,    -1,   140,   191,
      -1,   141,   191,    -1,   188,    -1,   110,   191,    -1,   111,
     191,    -1,   112,   191,    -1,   189,    -1,   190,    -1,   185,
      -1,   103,   209,   104,   188,    -1,   103,   196,   112,   104,
     191,    -1,   103,   278,   160,   193,   104,   191,    -1,   103,
     152,   193,   104,   191,    -1,   103,   156,   193,   104,   191,
      -1,   103,    84,   193,   104,   191,    -1,    -1,   194,    -1,
     195,    -1,   194,   195,    -1,   160,    -1,   112,    -1,   191,
      -1,   196,   112,   191,    -1,   196,   113,   191,    -1,   196,
     114,   191,    -1,   196,    -1,   197,   110,   196,    -1,   197,
     111,   196,    -1,   197,    -1,   198,   130,   197,    -1,   198,
     131,   197,    -1,   198,    -1,   199,   106,   198,    -1,   199,
     105,   198,    -1,   199,   136,   198,    -1,   199,   137,   198,
      -1,   199,    46,   149,    -1,   199,    11,   149,    -1,   199,
      -1,   200,   134,   199,    -1,   200,   135,   199,    -1,   200,
      -1,   201,   115,   200,    -1,   201,    -1,   202,   120,   201,
      -1,   202,    -1,   203,   116,   202,    -1,   203,    -1,   204,
     138,   203,    -1,   204,    -1,   205,   139,   204,    -1,   205,
      -1,   205,   119,   209,   108,   209,    -1,   191,   208,   209,
      -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,   125,
      -1,   126,    -1,   127,    -1,   128,    -1,   129,    -1,   132,
      -1,   133,    -1,   206,    -1,   207,    -1,   209,    -1,   209,
      -1,   218,    -1,   219,    -1,   213,    -1,   214,    -1,   217,
      -1,   228,    -1,   230,    -1,   239,    -1,   252,    -1,   259,
      -1,   264,    -1,   265,    -1,   266,    -1,   267,    -1,   240,
      -1,   269,    -1,   101,   215,   102,    -1,    -1,   216,    -1,
     212,    -1,   216,   212,    -1,   107,    -1,     4,   108,   212,
      -1,   220,   107,    -1,   225,   107,    -1,   149,   221,    -1,
     222,    -1,   221,    98,   222,    -1,     4,    -1,     4,   121,
     223,    -1,   209,    -1,   344,    -1,   224,    -1,    67,   149,
      99,   209,   100,    -1,    21,   149,   226,    -1,   227,    -1,
     226,    98,   227,    -1,     4,   121,   210,    -1,   229,   107,
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
     121,   209,    -1,   273,   274,    -1,   273,   285,    -1,    -1,
     281,    -1,    -1,   369,    -1,    -1,   285,    -1,   274,    49,
     278,   280,   277,    -1,    -1,   107,    -1,     4,    -1,   279,
       4,    -1,     4,   109,    -1,   279,     4,   109,    -1,   101,
     273,   275,   102,    -1,   282,    -1,   281,   282,    -1,   283,
      -1,   284,    -1,    82,     4,   121,   278,   107,    -1,    82,
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
     104,    -1,   110,    -1,   111,    -1,   117,    -1,   118,    -1,
     140,    -1,   141,    -1,    74,    -1,    33,    -1,   112,    -1,
     113,    -1,   114,    -1,   115,    -1,   116,    -1,   120,    -1,
     130,    -1,   131,    -1,   134,    -1,   135,    -1,   105,    -1,
     106,    -1,   137,    -1,   136,    -1,    41,    53,   149,   103,
     149,     4,   104,    -1,    31,    53,   149,   103,   149,     4,
     104,    -1,   274,   288,   331,   336,    -1,     4,   103,   303,
     104,   332,    -1,    -1,   333,    -1,   108,    12,   103,   169,
     104,    -1,   108,    72,   103,   169,   104,    -1,   274,   288,
     118,     4,   103,   104,   214,    -1,   214,    -1,   107,    -1,
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
     274,     4,    -1,   274,     4,   121,   210,    -1,   274,   288,
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
  "DOT", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "AND", "OR",
  "EXCLAMATION_POINT", "TILDE", "QUESTION_MARK", "POWER", "EQUAL",
  "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ",
  "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ", "NOTEQ", "LEQ",
  "GEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS", "ARROW", "THEN",
  "$accept", "literal", "boolean_literal", "namespace_name", "type_name",
  "type", "non_array_type", "simple_type", "primitive_type",
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
     395,   396,   397,   398
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
     131,     0,    98,   109,   110,   111,    95,   103,   104,   106,
     107,     0,     0,     0,     0,    71,   531,     0,    82,    83,
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,   346,   348,     0,   349,
     353,   192,   374,   373,   366,   382,     0,   381,     0,     0,
     296,   505,   499,   296,   485,     0,   473,   477,     0,   449,
     453,     0,    80,     0,    71,     0,   465,    87,     0,     0,
       0,     0,   126,   125,     0,   122,   123,     0,     0,     0,
      65,   121,    67,    68,     0,    66,     0,     0,    72,    46,
       0,    48,    78,    94,   159,   128,   129,   130,   127,   132,
     133,   135,   136,   143,   142,   139,   138,   140,   141,   145,
     146,   148,   150,   152,   154,     0,   156,     0,     0,   303,
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
       0,     0,   417,   416,   428,   429,   410,   411,   418,   419,
     420,   421,   422,   412,   413,   423,   424,   425,   426,   427,
     431,   430,   414,   415,     0,   296,     0,   365,   296,     0,
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
     -11,   116,   123,    36,   -11,  -758,  -758,  -758,   -10,    76,
    -758,   149,  -758,  2500,  -758,    32,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,    36,  -758,   128,  -758,  -758,   176,
    -758,   177,  -758,  -758,  -758,   176,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,   194,  2676,  -758,
    2645,  -758,  -758,   341,   198,   212,  -758,   222,   330,   868,
     340,   351,   369,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   176,  -758,   256,  -758,   -11,   269,   273,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   278,  -758,   289,  -758,   382,
    -758,  -758,  -758,  -758,  -758,  -758,   382,   382,   419,   353,
     373,   377,  -758,  -758,   360,  -758,   374,  -758,   145,  -758,
    -758,    37,   392,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
     400,   302,   406,  -758,   176,   425,  -758,   176,   436,  -758,
      39,  -758,  2264,  -758,  -758,   347,   260,  -758,   448,   454,
     261,   269,   228,  -758,   270,   269,   454,   290,   269,   454,
     298,   269,  -758,  -758,  -758,  -758,  -758,  -758,  -758,    -4,
     450,  -758,  2591,  -758,   451,  -758,  -758,   452,   453,  1977,
    2264,  2264,  2264,  2264,  2264,  2264,  2264,  2264,  -758,  -758,
     449,   455,     5,   456,  -758,  -758,  -758,  -758,   461,   459,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,   312,  -758,  -758,  -758,   390,  -758,   350,
     -63,   138,    19,   281,   457,   446,   458,   430,    93,  -758,
    -758,  -758,   121,  -758,   176,   176,  2676,  -758,   465,   307,
    -758,  -758,  -758,  -758,   -37,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   274,   466,   471,  -758,  -758,  -758,   567,   473,
     475,  -758,  -758,   527,   478,   308,  -758,  -758,  -758,  -758,
    -758,  -758,  2676,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,   480,   315,  -758,  -758,  -758,  2264,   579,  2264,
     278,    73,   485,    21,  2591,  2615,  2264,    17,    24,    69,
     354,   481,   106,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,   587,   589,  2264,   590,  1776,  -758,  2264,  -758,  -758,
     591,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  2264,  2264,  2264,  2264,  2264,  2264,  2264,  2264,
    2591,  2591,  2264,  2264,  2264,  2264,  2264,  2264,  2264,  2264,
    2264,  2264,  2264,  2264,  2264,  1776,   454,  -758,  2421,  -758,
    -758,  1430,  -758,  -758,  -758,  -758,  2591,  -758,  2591,   489,
      36,   477,  -758,   323,  -758,  2548,  -758,  -758,  1223,  -758,
    -758,   375,  -758,   496,  1776,  2264,  1862,  -758,   185,   192,
     202,   497,  -758,  -758,   502,    17,  -758,   503,   504,  2063,
    2350,    17,  -758,  -758,   376,  -758,  2264,  2264,   511,  -758,
     506,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   350,
     350,   -63,   -63,   289,   289,   138,   138,   138,   138,    19,
      19,   281,   457,   446,   458,   505,   430,   380,   508,   140,
    2591,  2591,   561,   562,    70,   613,    30,  -758,   184,  -758,
    -758,   211,   287,   512,   383,  2591,   524,  1546,   529,   530,
     531,   187,   533,   534,  2264,   535,  2264,   538,   388,   538,
     537,   539,  -758,    72,   449,   455,   133,   141,   152,   163,
     168,   175,   390,  -758,  -758,  -758,  -758,   541,  1430,  -758,
    -758,  -758,   540,   542,  -758,   543,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    74,    75,    77,
    -758,  -758,  2264,  -758,  -758,  2591,    78,    40,  -758,  -758,
     544,   394,  2591,  -758,  -758,  -758,  -758,   549,   547,  -758,
    -758,  -758,  -758,  2264,  -758,  2264,  2264,  2264,  -758,   548,
    -758,  -758,  -758,  -758,  1776,  -758,  2264,  -758,  -758,   228,
      80,    81,  2591,  2591,   550,   551,   112,  2407,   557,   119,
    -758,   555,    45,   560,   545,  -758,  -758,  -758,  -758,  -758,
    -758,  1430,  -758,  -758,    80,  -758,   574,  2591,  2178,  2591,
     554,  2264,   556,  2264,  2264,  -758,   564,  2264,   568,    23,
    -758,  -758,  2178,  2264,   520,   566,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,    82,   559,   565,   575,  -758,
     382,   117,  -758,  1661,  -758,  -758,  -758,  -758,  2264,  -758,
    -758,   563,   558,   167,  -758,   183,  -758,   180,   181,   228,
     576,  1862,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   580,    36,   674,  -758,   228,   583,
    -758,    36,    36,  -758,   592,   584,    84,  -758,  -758,   585,
    -758,   597,    86,  -758,   593,  -758,  -758,   594,   595,  -758,
     598,  -758,   397,   538,    23,  -758,  -758,  -758,  -758,   600,
     601,   230,   228,   228,   605,    36,   606,   382,  2264,  -758,
    -758,  -758,   588,  2264,   697,  -758,  -758,   607,  2591,  2591,
     608,   538,  -758,  2591,   408,  -758,   610,    36,   429,   310,
     609,   325,   337,  2264,   596,   205,  -758,  2264,  2264,   673,
    -758,  1546,  1546,   615,    37,  -758,  -758,  -758,  -758,  1546,
    1546,   618,  -758,  -758,   617,   621,    36,   433,  -758,  -758,
    -758,   622,    46,  -758,  -758,  -758,  -758,    36,    87,    88,
    -758,  -758,    89,  -758,  -758,   624,  -758,  -758,  -758,  -758,
     632,  -758,  -758,   636,  -758,  -758,   627,  2264,   728,  1546,
    -758,   626,  -758,  -758,  2264,   708,  -758,   305,  -758,   733,
     733,  -758,  -758,  -758,   230,   230,   343,   639,  -758,  -758,
     635,   640,   346,   643,    36,    36,   638,   642,   244,  -758,
     242,   242,  -758,   641,  -758,  -758,  -758,  2264,   645,  1546,
    2264,   644,   649,   305,  -758,  1314,  -758,  -758,   650,   651,
    -758,  -758,   230,   230,  -758,   646,  1776,  1776,  -758,  -758,
    -758,   659,  -758,   661,  -758,  -758,  -758,  2591,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,   654,  -758,   597,  1546,  -758,
     652,  -758,  -758,  -758,  1430,  -758,   538,   538,   348,   349,
    -758,    36,   655,   657,   538,   538,  -758,    90,  -758,  -758,
    1546,  -758,  -758,  -758,  -758,   667,   669,   664,  -758,  -758,
    -758,  -758,   666,  -758,   230,   230,  -758,  -758,  -758,  -758,
    -758,  -758,  -758
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -758,  -758,  -758,  -758,   -71,   -42,   623,  -758,    16,  -758,
     637,  -758,   -53,  -758,   625,    65,   -96,   366,  -758,   227,
    -758,  -758,  -758,  -758,  -330,  -351,  -758,  -758,   -83,  -758,
    -758,   215,   225,  -758,   283,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,   398,   336,   389,   441,  -758,  -273,
    -758,   405,  -166,   131,     9,   193,   460,   467,   464,   468,
     469,  -758,  -758,   404,  -758,   303,  -575,  -589,  -481,  -403,
    -191,  -758,   -36,  -758,  -758,  -758,  -546,  -445,   135,  -543,
    -758,  -758,   221,    95,  -758,  -573,  -758,  -758,  -758,  -758,
    -758,  -758,   -26,  -758,   -25,  -758,  -758,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,    -9,  -758,  -758,  -758,
    -758,  -758,  -758,   357,  -758,  -758,  -758,   126,    26,   134,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,    29,  -758,   750,
      -3,  -758,  -758,    67,     0,   384,  -758,  -758,   825,  -758,
    -758,   713,     4,  -142,  -176,  -758,   784,  -758,  -758,  -758,
     -24,  -758,  -758,  -758,   599,  -124,  -123,  -122,  -758,  -536,
    -758,  -758,  -604,   463,  -758,  -758,  -758,  -121,   107,  -758,
    -758,   104,   108,    20,  -115,  -758,    22,    28,  -114,  -758,
    -758,  -109,  -758,  -758,  -758,  -758,  -108,  -758,  -758,  -758,
    -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   569,
    -288,  -758,  -758,  -758,  -758,  -758,  -758,  -758,  -758,   578,
    -758,  -758,  -758,  -758,   -34,  -758,  -697,  -758,  -758,  -758,
    -758,  -758,  -758,   472,  -758,  -758,  -758,   820,  -758,  -758,
    -758,  -758,   709,  -758,  -758,  -758,  -758,   686,  -358,  -299,
    -562,  -757
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
     126,   821,   822,   631,   126,   397,   398,   126,   605,    55,
     340,   476,  -293,   530,   566,    57,   274,   275,   276,   277,
     692,    54,   677,    54,   617,   278,   279,   336,   337,    31,
     147,   280,   281,   363,   586,   704,   698,   693,   810,   107,
     358,   724,   859,   147,   361,   341,   147,   728,   148,   112,
     362,     1,   126,   113,    54,   100,   604,   126,   -11,   611,
     710,   612,   616,   567,   632,   566,   701,   880,   734,    88,
     739,   816,   817,   818,   902,   287,   378,   237,   722,    28,
     673,   757,   568,   720,   313,   288,    91,   840,   841,   126,
     156,    29,   618,   159,   314,    50,   635,   670,   811,   104,
       8,   113,   386,    12,   342,   343,   299,   476,   549,   392,
     291,  -532,   726,   311,   113,  -532,   392,   113,   765,   162,
     113,   273,   125,    50,   786,   878,   879,   236,   790,   912,
      51,   258,   125,    31,   263,   344,   345,   272,   476,   274,
     275,   276,   277,   147,   357,   793,   754,   755,   278,   279,
     419,   420,   107,   354,   280,   281,   384,   355,   312,   302,
      54,   392,   124,    30,   125,   125,   -11,   125,   100,   125,
     124,   590,   125,   125,   125,   298,   125,   128,   125,   125,
     125,   125,   125,   591,   381,   354,   401,   910,   911,   355,
     356,   592,   352,  -303,    58,  -303,   708,   666,   251,    59,
     354,    28,   262,    60,   355,   271,   667,    53,   285,   125,
     404,  -214,   353,   641,   113,   113,   236,  -214,    61,  -217,
    -214,   104,   104,   559,  -532,  -217,   845,  -298,  -217,    28,
    -218,   476,   388,   390,   678,   870,  -218,   576,   476,  -218,
     579,  -215,   263,   583,    62,   714,  -219,  -215,   338,   339,
    -215,   437,  -219,  -220,   715,  -219,   599,   600,   601,  -220,
     272,   666,  -220,   718,   719,   361,    56,   104,   104,   539,
     716,   575,   125,   125,   107,   107,   540,   125,   423,   424,
     888,   889,   531,   788,   124,   104,   541,    28,   475,   789,
     100,   100,   361,   104,   125,   104,   446,    81,   578,    76,
      82,   830,   104,    77,   518,   104,   519,  -532,   365,   831,
     366,   751,  -369,   527,    79,   367,   446,   752,   795,   796,
     107,   107,   857,   361,   109,    86,   801,   802,   858,   860,
      87,   425,   426,   427,   428,   110,   100,   100,   107,  -532,
    -532,   517,  -299,  -350,   117,    89,   107,    90,   107,  -532,
     258,    64,  -501,   111,   100,   107,   119,   474,   107,    92,
      93,   121,   100,    94,   100,   126,   826,   104,   104,  -532,
     124,   100,  -474,   607,   100,   581,    28,  -532,   560,   561,
    -450,   125,   104,    65,   777,   778,  -532,  -532,   476,  -351,
    -475,   476,   476,   584,  -532,   346,   347,  -451,   759,   476,
     476,   129,  -532,   130,  -532,   523,   869,  -387,    66,    67,
      68,    69,    70,    71,    72,   475,  -532,   842,   843,  -389,
     107,   107,   848,   849,   564,   231,   571,  -532,  -532,   233,
    -488,  -489,   318,   319,   320,   107,   100,   100,   140,   476,
     141,   131,   333,   334,   335,   891,   399,   334,   335,   421,
     422,   100,   104,   317,   317,   528,   550,   142,   317,   104,
     557,   134,   301,   615,   361,   137,   289,   903,   517,   361,
     621,   296,   317,   150,   620,   882,   883,   476,   361,   476,
     744,   745,   746,   152,   474,   476,   370,   154,   773,   104,
     104,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     637,   638,   330,   331,   707,   107,   157,   370,   475,   776,
     771,   370,   107,   808,   104,   475,   104,   160,   476,   429,
     430,   100,   907,   908,   476,   676,   234,   682,   100,   475,
     885,   886,   235,   289,   294,   295,   296,   317,   311,   315,
     476,   636,   107,   107,   312,   316,   349,   359,   351,   370,
     369,   371,   348,   373,   350,   372,   477,   374,   100,   100,
     376,   517,   379,   382,   385,   400,   478,   107,   517,   107,
     231,   402,   383,   403,   405,   413,   520,   474,   522,   391,
     529,   542,   517,   100,   474,   100,   543,   545,   546,   554,
     555,   707,   558,   556,   562,   563,   231,   565,   474,   582,
     412,   303,   304,   305,   306,   307,   308,   309,   310,   861,
     861,   585,   587,   588,   589,   414,   593,   594,   597,   361,
     602,   641,   603,   606,   479,   623,   672,   608,   619,   609,
     610,   622,   628,   639,   640,   435,   665,   231,   668,   671,
     675,   683,   702,   685,   666,   104,   104,   712,   703,   729,
     104,   689,   477,   799,   705,   691,   768,   769,   604,   713,
     721,   772,   478,   723,   727,   893,   894,   733,   231,   533,
     714,   800,   737,   900,   901,   738,   762,   480,   741,   742,
     740,   632,   743,   477,   749,   750,   756,   386,   767,   552,
     552,   779,   770,   478,   774,   794,   797,   787,   107,   107,
     803,   804,   809,   107,   729,   805,   819,   778,   780,   783,
     777,   823,   734,   827,   100,   100,   829,   837,   846,   100,
     479,   844,   855,   847,   113,   850,   856,   881,   864,   868,
     481,   872,   871,   806,   876,   877,   849,   848,   890,   898,
     892,   899,   904,   905,   812,   483,   906,   595,   153,   595,
     909,   479,   760,   553,   415,   416,   417,   418,   418,   418,
     418,   629,   475,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   480,   418,   292,   477,   293,   548,   874,
     544,   725,   482,   477,   104,   674,   478,   873,   431,   766,
     875,   851,   853,   478,   433,   887,   432,   825,   867,   434,
     747,   475,   436,   598,   480,   613,   839,   118,   748,    27,
     572,   146,    63,   521,   775,   517,   785,   854,   360,   782,
     415,   863,   852,   377,    52,   524,   481,   897,   286,   163,
       0,   474,   380,     0,     0,     0,     0,   107,     0,   630,
       0,   483,     0,     0,   479,     0,     0,     0,     0,     0,
       0,   479,    54,   100,   517,   895,   896,   481,   806,     0,
       0,    80,     0,    81,     0,     0,    82,     0,     0,     0,
     474,    83,   483,     0,   613,    84,   686,   688,   482,     0,
     690,     0,     0,     0,    85,   697,   686,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    87,   480,     0,     0,
      88,     0,     0,     0,   480,     0,   533,     0,     0,   482,
       0,    89,     0,    90,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,   533,    92,    93,     0,     0,    94,
       0,     0,    95,   477,     0,     0,   477,   477,     0,     0,
       0,     0,     0,   478,   477,   477,   478,   478,     0,     0,
     481,     0,     0,     0,   478,   478,     0,   481,     0,     0,
       0,     0,     0,     0,   624,   483,   625,   626,   627,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   477,     0,     0,     0,     0,     0,
       0,   761,     0,     0,   478,     0,   613,     0,     0,     0,
       0,   479,   482,     0,   479,   479,     0,     0,     0,   482,
       0,     0,   479,   479,     0,     0,   686,     0,     0,     0,
     686,     0,   477,     0,   477,     0,     0,     0,     0,     0,
     477,     0,   478,     0,   478,     0,     0,     0,     0,     0,
     478,     0,     0,     0,     0,     0,     0,     0,     0,   711,
       0,     0,   479,     0,   480,     0,     0,   480,   480,     0,
       0,     0,     0,   477,     0,   480,   480,     0,     0,   477,
     824,     0,     0,   478,     0,     0,     0,   828,     0,   478,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
     479,     0,   479,     0,     0,   478,     0,     0,   479,     0,
       0,     0,     0,     0,     0,   480,     0,   481,     0,     0,
     481,   481,     0,   613,     0,     0,     0,     0,   481,   481,
       0,     0,   483,     0,     0,   483,   483,     0,     0,     0,
       0,   479,     0,   483,   483,     0,     0,   479,     0,     0,
       0,     0,     0,   480,     0,   480,     0,     0,     0,     0,
       0,   480,     0,   479,     0,     0,     0,     0,   481,   482,
       0,     0,   482,   482,     0,     0,     0,     0,     0,     0,
     482,   482,     0,   483,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   480,     0,     0,     0,     0,     0,
     480,     0,     0,     0,     0,     0,   481,     0,   481,     0,
       0,     0,     0,     0,   481,     0,   480,   439,     0,     0,
     482,   483,     0,   483,     0,     0,    80,     0,    81,   483,
       0,    82,     0,    58,   440,     0,    83,     0,    59,     0,
      84,     0,    60,   441,   442,     0,     0,   481,     0,    85,
       0,     0,     0,   481,   443,     0,    86,    61,   482,     0,
     482,    87,   483,     0,     0,    88,   482,     0,   483,   481,
       0,     0,     0,     0,     0,     0,    89,     0,    90,     0,
       0,     0,    91,    62,   483,     0,     0,     0,     0,     0,
      92,    93,     0,     0,    94,     0,     0,   444,     0,   482,
       0,     0,     0,     0,     0,   482,     0,     0,   452,     0,
     165,   166,   167,   168,     0,     0,   169,    80,   453,    81,
     830,   482,    82,   454,     0,   455,   456,    83,   831,     0,
     457,    84,     0,     0,     0,     0,     0,   171,     0,   458,
      85,   459,   460,   461,   462,     0,     0,    86,     0,     0,
       0,   463,    87,     0,   172,   173,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,    89,     0,    90,
     174,     0,     0,    91,     0,   465,   175,   466,   176,   467,
     177,    92,    93,   468,   469,    94,   470,     0,   290,     0,
     471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,     0,   179,     0,     0,
       0,   472,     0,     0,   180,   181,   182,     0,     0,   183,
       0,   184,   185,     0,   452,     0,   165,   166,   167,   168,
       0,     0,   169,    80,   453,    81,     0,     0,    82,   454,
       0,   455,   456,    83,   186,   187,   457,    84,     0,     0,
       0,     0,     0,   171,     0,   458,    85,   459,   460,   461,
     462,     0,     0,    86,     0,     0,     0,   463,    87,     0,
     172,   173,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,    89,     0,    90,   174,     0,     0,    91,
       0,   465,   175,   466,   176,   467,   177,    92,    93,   468,
     469,    94,   470,     0,   290,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,     0,   179,     0,     0,     0,   472,     0,     0,
     180,   181,   182,     0,     0,   183,     0,   184,   185,     0,
      54,     0,   165,   166,   167,   168,     0,     0,   169,    80,
     453,    81,     0,     0,    82,   454,     0,     0,   456,    83,
     186,   187,   457,    84,     0,     0,     0,     0,     0,   171,
       0,   458,    85,   459,   460,   461,   462,     0,     0,    86,
       0,     0,     0,   463,    87,     0,   172,   173,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,    89,
       0,    90,   174,     0,     0,    91,     0,   465,   175,   466,
     176,   467,   177,    92,    93,   468,   469,    94,   470,     0,
       0,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,     0,   179,
       0,     0,     0,   472,     0,     0,   180,   181,   182,     0,
       0,   183,     0,   184,   185,    54,     0,   165,   166,   167,
     168,     0,     0,   169,    80,     0,    81,     0,     0,    82,
     170,     0,     0,     0,    83,     0,   186,   187,    84,     0,
       0,     0,     0,     0,   171,     0,     0,    85,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,    87,
       0,   172,   173,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,    90,   174,   532,     0,
      91,     0,     0,   175,     0,   176,     0,   177,    92,    93,
     178,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   386,   709,   179,     0,     0,     0,     0,     0,
       0,   180,   181,   182,     0,     0,   183,     0,   184,   185,
      54,     0,   165,   166,   167,   168,     0,     0,   169,    80,
       0,    81,     0,     0,    82,   170,     0,     0,     0,    83,
       0,   186,   187,    84,     0,     0,     0,     0,     0,   171,
       0,     0,    85,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    87,     0,   172,   173,    88,     0,
     406,     0,     0,     0,     0,     0,     0,   407,     0,    89,
       0,    90,   174,     0,     0,    91,     0,     0,   175,     0,
     176,     0,   177,    92,    93,   178,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,   165,   166,
     167,   168,     0,     0,   169,    80,     0,    81,     0,   179,
      82,   170,     0,     0,     0,    83,   180,   181,   182,    84,
       0,   183,     0,   184,   185,   171,     0,     0,    85,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
      87,     0,   172,   173,    88,     0,   186,   187,     0,     0,
       0,     0,     0,     0,     0,    89,     0,    90,   174,   532,
       0,    91,     0,     0,   175,     0,   176,     0,   177,    92,
      93,   178,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   386,     0,   179,     0,     0,     0,     0,
       0,     0,   180,   181,   182,     0,     0,   183,     0,   184,
     185,    54,     0,   165,   166,   167,   168,     0,     0,   169,
      80,     0,    81,     0,     0,    82,   170,     0,     0,     0,
      83,     0,   186,   187,    84,     0,     0,     0,     0,     0,
     171,     0,     0,    85,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,    87,     0,   172,   173,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    90,   174,     0,     0,    91,     0,     0,   175,
       0,   176,     0,   177,    92,    93,   178,     0,    94,     0,
       0,   297,     0,     0,     0,     0,     0,    54,     0,   165,
     166,   167,   168,     0,     0,   169,    80,     0,    81,     0,
     179,    82,   170,     0,     0,     0,    83,   180,   181,   182,
      84,     0,   183,     0,   184,   185,   171,     0,     0,    85,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,    87,     0,   172,   173,    88,     0,   186,   187,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    90,   174,
       0,     0,    91,     0,     0,   175,     0,   176,     0,   177,
      92,    93,   178,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   179,   547,     0,     0,
       0,     0,     0,   180,   181,   182,     0,     0,   183,     0,
     184,   185,    54,     0,   165,   166,   167,   168,     0,     0,
     169,    80,     0,    81,     0,     0,    82,   170,     0,     0,
       0,    83,     0,   186,   187,    84,     0,     0,     0,     0,
       0,   171,     0,     0,    85,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    87,     0,   172,   173,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    90,   174,     0,     0,    91,     0,     0,
     175,     0,   176,     0,   177,    92,    93,   178,     0,    94,
       0,     0,   290,     0,     0,     0,     0,     0,    54,     0,
     165,   166,   167,   168,     0,     0,   169,    80,     0,    81,
       0,   179,    82,   170,     0,     0,     0,    83,   180,   181,
     182,    84,     0,   183,     0,   184,   185,   171,     0,     0,
      85,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,    87,     0,   172,   173,    88,     0,   186,   187,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    90,
     174,     0,     0,    91,     0,     0,   175,     0,   176,     0,
     177,    92,    93,   178,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,   165,   166,   167,   168,
       0,     0,   169,    80,     0,    81,     0,   179,    82,   170,
       0,     0,     0,    83,   180,   181,   182,    84,     0,   183,
       0,   184,   185,   171,     0,     0,    85,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,    87,     0,
     172,   173,    88,     0,   186,   187,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   174,     0,     0,    91,
       0,     0,   175,     0,   176,   439,   177,    92,    93,   178,
       0,    94,     0,     0,    80,     0,    81,     0,     0,    82,
     642,    58,   440,     0,    83,     0,    59,     0,    84,     0,
      60,   441,   442,   179,     0,     0,     0,    85,     0,     0,
       0,     0,   443,     0,    86,    61,     0,   184,   185,    87,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,   643,     0,     0,    89,     0,    90,     0,     0,     0,
      91,    62,     0,     0,     0,     0,     0,     0,    92,    93,
    -292,     0,    94,     0,     0,   444,     0,     0,     0,     0,
      32,     0,   644,   645,     0,     0,     0,   646,   647,   648,
     649,   650,   651,   652,   653,   654,     0,   655,     0,     0,
       0,     0,    33,     0,     0,     0,     0,   656,   657,   445,
       0,   658,   659,   660,   661,    34,     0,   662,   663,    35,
      36,     0,    54,     0,     0,    37,     0,    38,    39,    40,
      41,    80,     0,    81,    42,     0,    82,     0,    43,     0,
       0,    83,     0,     0,     0,    84,     0,     0,   525,     0,
      44,     0,     0,    45,    85,    46,     0,     0,     0,     0,
       0,    86,     0,     0,     0,    54,    87,     0,     0,     0,
      88,     0,     0,     0,    80,     0,    81,     0,     0,    82,
       0,    89,     0,    90,    83,     0,     0,    91,    84,    54,
       0,     0,     0,     0,     0,    92,    93,    85,    80,    94,
      81,     0,   526,    82,    86,     0,     0,     0,    83,    87,
       0,     0,    84,    88,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,    89,    32,    90,     0,    86,     0,
      91,     0,     0,    87,     0,     0,     0,    88,    92,    93,
       0,     0,    94,     0,     0,   290,     0,    33,    89,     0,
      90,     0,     0,     0,    91,     0,    32,     0,     0,     0,
      34,     0,    92,    93,    35,    36,    94,     0,     0,   389,
      37,     0,    38,    39,    40,    41,     0,     0,    33,    42,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    44,    36,     0,    45,     0,
      46,    37,     0,    38,    39,    40,    41,     0,     0,     0,
      42,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
       0,    46
};

static const short int yycheck[] =
{
       3,     1,    73,    99,   355,   293,    59,   488,   150,   571,
     106,   107,    15,   179,   603,   588,   591,    59,   160,    15,
       3,   778,   779,   559,     3,   298,   299,     3,   473,    29,
      11,   361,     0,   384,     4,    35,   160,   160,   160,   160,
      17,     4,   588,     4,     4,   160,   160,   110,   111,     4,
     121,   160,   160,   244,   457,   617,   602,    34,    12,    59,
     236,   665,   819,   134,   101,    46,   137,   671,   121,   140,
     107,    82,     3,    73,     4,    59,     4,     3,     4,     4,
     623,     4,     4,    53,     4,     4,     4,   844,     4,    52,
       4,     4,     4,     4,     4,    99,   272,   239,   641,   109,
     581,   705,    72,   639,    99,   109,    69,   804,   805,     3,
     134,   121,    72,   137,   109,   118,   561,    72,    72,   172,
       4,   121,   101,     0,   105,   106,   179,   457,   401,   112,
     172,    99,   668,   109,   134,    99,   112,   137,   713,   100,
     140,   283,   112,   146,   733,   842,   843,   150,   737,   906,
     146,   154,   112,     4,   157,   136,   137,   160,   488,   283,
     283,   283,   283,   234,   235,   738,   702,   703,   283,   283,
     336,   337,   172,    99,   283,   283,   103,   103,   109,   179,
       4,   112,   112,   107,   112,   112,   112,   112,   172,   112,
     112,     4,   112,   112,   112,   179,   112,   293,   112,   112,
     112,   112,   112,    16,   287,    99,   302,   904,   905,   103,
     234,    24,   119,   101,    20,   103,    99,    98,   151,    25,
      99,   109,   155,    29,   103,   158,   107,    99,   161,   112,
     313,    98,   139,   121,   234,   235,   239,   104,    44,    98,
     107,   294,   295,   103,    99,   104,   808,   102,   107,   109,
      98,   581,   294,   295,   827,   830,   104,   448,   588,   107,
     451,    98,   265,   454,    70,    98,    98,   104,   130,   131,
     107,   354,   104,    98,   107,   107,   467,   468,   469,   104,
     283,    98,   107,   103,   103,   101,   109,   340,   341,   104,
     107,   107,   112,   112,   294,   295,   104,   112,   340,   341,
     862,   863,   385,    98,   112,   358,   104,   109,   361,   104,
     294,   295,   101,   366,   112,   368,   358,    15,   107,   107,
      18,    16,   375,   101,   366,   378,   368,    99,    54,    24,
      56,   101,   104,   375,     4,    61,   378,   107,   741,   742,
     340,   341,    98,   101,     4,    43,   749,   750,   104,   107,
      48,   342,   343,   344,   345,     4,   340,   341,   358,    99,
      99,   361,   102,   102,   108,    63,   366,    65,   368,    99,
     373,    30,   102,     4,   358,   375,   107,   361,   378,    77,
      78,   108,   366,    81,   368,     3,   789,   440,   441,    99,
     112,   375,   102,   874,   378,   108,   109,    99,   440,   441,
     102,   112,   455,    62,    94,    95,    99,    99,   738,   102,
     102,   741,   742,   455,    99,   134,   135,   102,   706,   749,
     750,   517,    99,     4,    99,   102,   829,   102,    87,    88,
      89,    90,    91,    92,    93,   488,    99,    94,    95,   102,
     440,   441,    96,    97,   444,   142,   446,    99,    99,   102,
     102,   102,   140,   141,   142,   455,   440,   441,    98,   789,
     100,   108,   112,   113,   114,   868,   112,   113,   114,   338,
     339,   455,   525,    98,    98,   100,   100,   103,    98,   532,
     100,   108,   179,   525,   101,   108,   103,   890,   488,   101,
     532,   103,    98,   101,   100,   846,   847,   827,   101,   829,
     103,   692,   693,   103,   488,   835,    98,   101,   100,   562,
     563,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     562,   563,   132,   133,   620,   525,   101,    98,   581,   100,
     721,    98,   532,   100,   587,   588,   589,   101,   868,   346,
     347,   525,   900,   901,   874,   587,    98,   589,   532,   602,
     849,   850,    98,   103,   103,   103,   103,    98,   109,   103,
     890,   561,   562,   563,   109,   104,   120,   102,   138,    98,
     104,     4,   115,    98,   116,   102,   361,    50,   562,   563,
     102,   581,   102,     4,    99,   104,   361,   587,   588,   589,
     287,     4,   289,     4,     4,     4,   107,   581,   121,   296,
     104,   104,   602,   587,   588,   589,   104,   104,   104,    98,
     104,   707,   104,   108,    53,    53,   313,     4,   602,   107,
     317,   180,   181,   182,   183,   184,   185,   186,   187,   820,
     821,   107,   103,   103,   103,   332,   103,   103,   103,   101,
     103,   121,   103,   102,   361,    98,   101,   107,   104,   107,
     107,   102,   104,   103,   103,   352,    99,   354,   103,    99,
      86,   107,   103,   107,    98,   718,   719,   104,   103,   672,
     723,   107,   457,   744,    99,   107,   718,   719,     4,   121,
     104,   723,   457,   103,   101,   876,   877,   103,   385,   386,
      98,   744,   107,   884,   885,    98,   108,   361,   104,   104,
     107,     4,   104,   488,   104,   104,   101,   101,   101,   406,
     407,   102,   104,   488,   104,    42,   101,   121,   718,   719,
     102,   104,   100,   723,   727,   104,   102,    95,   731,   732,
      94,   104,     4,   107,   718,   719,    28,     4,   103,   723,
     457,   102,   104,   103,   744,   102,   104,   101,   107,   104,
     361,   102,   108,   756,   104,   104,    97,    96,   104,   104,
     108,   104,    95,    94,   767,   361,   102,   464,   131,   466,
     104,   488,   707,   407,   333,   334,   335,   336,   337,   338,
     339,   554,   835,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   457,   353,   172,   581,   172,   400,   835,
     395,   666,   361,   588,   857,   584,   581,   833,   348,   714,
     835,   814,   815,   588,   350,   857,   349,   788,   827,   351,
     694,   874,   353,   466,   488,   522,   800,    77,   694,     4,
     446,   118,    48,   370,   727,   835,   732,   815,   239,   731,
     399,   821,   814,   265,    24,   373,   457,   881,   162,   140,
      -1,   835,   283,    -1,    -1,    -1,    -1,   857,    -1,   556,
      -1,   457,    -1,    -1,   581,    -1,    -1,    -1,    -1,    -1,
      -1,   588,     4,   857,   874,   878,   879,   488,   881,    -1,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
     874,    23,   488,    -1,   591,    27,   593,   594,   457,    -1,
     597,    -1,    -1,    -1,    36,   602,   603,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,   581,    -1,    -1,
      52,    -1,    -1,    -1,   588,    -1,   623,    -1,    -1,   488,
      -1,    63,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,   641,    77,    78,    -1,    -1,    81,
      -1,    -1,    84,   738,    -1,    -1,   741,   742,    -1,    -1,
      -1,    -1,    -1,   738,   749,   750,   741,   742,    -1,    -1,
     581,    -1,    -1,    -1,   749,   750,    -1,   588,    -1,    -1,
      -1,    -1,    -1,    -1,   543,   581,   545,   546,   547,    -1,
      -1,    -1,   588,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   789,    -1,    -1,    -1,    -1,    -1,
      -1,   708,    -1,    -1,   789,    -1,   713,    -1,    -1,    -1,
      -1,   738,   581,    -1,   741,   742,    -1,    -1,    -1,   588,
      -1,    -1,   749,   750,    -1,    -1,   733,    -1,    -1,    -1,
     737,    -1,   827,    -1,   829,    -1,    -1,    -1,    -1,    -1,
     835,    -1,   827,    -1,   829,    -1,    -1,    -1,    -1,    -1,
     835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,   789,    -1,   738,    -1,    -1,   741,   742,    -1,
      -1,    -1,    -1,   868,    -1,   749,   750,    -1,    -1,   874,
     787,    -1,    -1,   868,    -1,    -1,    -1,   794,    -1,   874,
      -1,    -1,    -1,    -1,    -1,   890,    -1,    -1,    -1,    -1,
     827,    -1,   829,    -1,    -1,   890,    -1,    -1,   835,    -1,
      -1,    -1,    -1,    -1,    -1,   789,    -1,   738,    -1,    -1,
     741,   742,    -1,   830,    -1,    -1,    -1,    -1,   749,   750,
      -1,    -1,   738,    -1,    -1,   741,   742,    -1,    -1,    -1,
      -1,   868,    -1,   749,   750,    -1,    -1,   874,    -1,    -1,
      -1,    -1,    -1,   827,    -1,   829,    -1,    -1,    -1,    -1,
      -1,   835,    -1,   890,    -1,    -1,    -1,    -1,   789,   738,
      -1,    -1,   741,   742,    -1,    -1,    -1,    -1,    -1,    -1,
     749,   750,    -1,   789,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,
     874,    -1,    -1,    -1,    -1,    -1,   827,    -1,   829,    -1,
      -1,    -1,    -1,    -1,   835,    -1,   890,     4,    -1,    -1,
     789,   827,    -1,   829,    -1,    -1,    13,    -1,    15,   835,
      -1,    18,    -1,    20,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    -1,   868,    -1,    36,
      -1,    -1,    -1,   874,    41,    -1,    43,    44,   827,    -1,
     829,    48,   868,    -1,    -1,    52,   835,    -1,   874,   890,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    69,    70,   890,    -1,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    -1,   868,
      -1,    -1,    -1,    -1,    -1,   874,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    15,
      16,   890,    18,    19,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    21,    22,    23,   140,   141,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,    -1,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
     140,   141,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    23,    -1,   140,   141,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,
      -1,   140,   141,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,   103,
      18,    19,    -1,    -1,    -1,    23,   110,   111,   112,    27,
      -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      23,    -1,   140,   141,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,
     103,    18,    19,    -1,    -1,    -1,    23,   110,   111,   112,
      27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    -1,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    23,    -1,   140,   141,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      -1,   103,    18,    19,    -1,    -1,    -1,    23,   110,   111,
     112,    27,    -1,   115,    -1,   117,   118,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,   103,    18,    19,
      -1,    -1,    -1,    23,   110,   111,   112,    27,    -1,   115,
      -1,   117,   118,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    -1,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    74,     4,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    13,    -1,    15,    -1,    -1,    18,
      33,    20,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    30,    31,   103,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,    43,    44,    -1,   117,   118,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
       0,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      10,    -1,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,   120,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,   130,   131,   118,
      -1,   134,   135,   136,   137,    45,    -1,   140,   141,    49,
      50,    -1,     4,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    13,    -1,    15,    64,    -1,    18,    -1,    68,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      80,    -1,    -1,    83,    36,    85,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,     4,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    13,    -1,    15,    -1,    -1,    18,
      -1,    63,    -1,    65,    23,    -1,    -1,    69,    27,     4,
      -1,    -1,    -1,    -1,    -1,    77,    78,    36,    13,    81,
      15,    -1,    84,    18,    43,    -1,    -1,    -1,    23,    48,
      -1,    -1,    27,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    63,    10,    65,    -1,    43,    -1,
      69,    -1,    -1,    48,    -1,    -1,    -1,    52,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    -1,    32,    63,    -1,
      65,    -1,    -1,    -1,    69,    -1,    10,    -1,    -1,    -1,
      45,    -1,    77,    78,    49,    50,    81,    -1,    -1,    84,
      55,    -1,    57,    58,    59,    60,    -1,    -1,    32,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    80,    50,    -1,    83,    -1,
      85,    55,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    82,   272,   273,   281,   282,   283,   284,     4,   147,
     278,   279,     0,   274,   276,   285,   286,   287,   291,   337,
     347,   361,   368,   369,   370,   371,   380,   282,   109,   121,
     107,     4,    10,    32,    45,    49,    50,    55,    57,    58,
      59,    60,    64,    68,    80,    83,    85,   288,   289,   290,
     274,   286,   371,    99,     4,   278,   109,   278,    20,    25,
      29,    44,    70,   290,    30,    62,    87,    88,    89,    90,
      91,    92,    93,   372,   373,   374,   107,   101,   280,     4,
      13,    15,    18,    23,    27,    36,    43,    48,    52,    63,
      65,    69,    77,    78,    81,    84,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   278,   304,     4,
       4,     4,   148,   278,   375,   376,   378,   108,   273,   107,
     277,   108,   292,   293,   112,   112,     3,   160,   160,   160,
       4,   108,   362,   363,   108,   348,   349,   108,   338,   339,
      98,   100,   103,   377,   379,   275,   285,   148,   156,   294,
     101,   295,   103,   154,   101,   364,   294,   101,   350,   294,
     101,   340,   100,   376,   381,     6,     7,     8,     9,    12,
      19,    33,    50,    51,    66,    72,    74,    76,    79,   103,
     110,   111,   112,   115,   117,   118,   140,   141,   145,   146,
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
     191,   109,   109,    99,   109,   103,   104,    98,   140,   141,
     142,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     132,   133,   208,   112,   113,   114,   110,   111,   130,   131,
      11,    46,   105,   106,   136,   137,   134,   135,   115,   120,
     116,   138,   119,   139,    99,   103,   294,   148,   288,   102,
     298,   101,   107,   214,   305,    54,    56,    61,   309,   104,
      98,     4,   102,    98,    50,   355,   102,   353,   288,   102,
     343,   172,     4,   209,   103,    99,   101,   344,   149,    84,
     149,   209,   112,   160,   193,   194,   195,   193,   193,   112,
     104,   160,     4,     4,   172,     4,    54,    61,   162,   163,
     169,   209,   209,     4,   209,   191,   191,   191,   191,   196,
     196,   197,   197,   149,   149,   198,   198,   198,   198,   199,
     199,   200,   201,   202,   203,   209,   204,   172,   169,     4,
      21,    30,    31,    41,    84,   118,   149,   323,   326,   327,
     329,   331,     4,    14,    19,    21,    22,    26,    35,    37,
      38,    39,    40,    47,    62,    71,    73,    75,    79,    80,
      82,    86,   107,   149,   152,   156,   168,   175,   176,   178,
     189,   190,   191,   207,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   225,   228,   229,   230,   231,   232,   239,
     240,   241,   242,   243,   251,   252,   253,   254,   255,   256,
     258,   259,   264,   265,   266,   267,   269,   278,   149,   149,
     107,   307,   121,   102,   367,    30,    84,   149,   100,   104,
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
     103,   121,    33,    74,   105,   106,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   130,   131,   134,   135,
     136,   137,   140,   141,   328,    99,    98,   107,   103,   384,
      72,    99,   101,   212,   226,    86,   149,   220,   229,   244,
     247,   250,   149,   107,   210,   107,   209,   211,   209,   107,
     209,   107,    17,    34,   260,   261,   263,   209,   220,   268,
     211,     4,   103,   103,   384,    99,   159,   160,    99,   102,
     223,   191,   104,   121,    98,   107,   107,   382,   103,   103,
     303,   104,   223,   103,   306,   222,   303,   101,   306,   274,
     312,   315,   316,   103,     4,   270,   271,   107,    98,     4,
     107,   104,   104,   104,   103,   214,   214,   261,   263,   104,
     104,   101,   107,   360,   303,   303,   101,   306,   180,   344,
     159,   209,   108,   332,   333,   210,   227,   101,   149,   149,
     104,   214,   149,   100,   104,   312,   100,    94,    95,   102,
     274,   313,   316,   274,   314,   315,   211,   121,    98,   104,
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
#line 1168 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_attrib(); */ ;}
    break;

  case 533:
#line 1171 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_attrib(); */ ;}
    break;

  case 534:
#line 1174 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_accessor(); */ ;}
    break;

  case 535:
#line 1177 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_accessor();*/ ;}
    break;

  case 536:
#line 1180 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_enter_getset();*/ ;}
    break;

  case 537:
#line 1183 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"
    { /* lex_exit_getset();*/ ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2804 "yacc.cpp"

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


#line 1188 "C:\\Users\\maher\\Desktop\\Compiler\\compiler\\src\\compiler\\Parser\\yacc.y"


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



