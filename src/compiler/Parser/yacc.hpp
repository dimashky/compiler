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
/* Line 1403 of yacc.c.  */
#line 293 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



