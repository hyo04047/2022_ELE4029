/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NOELSE = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     RETURN = 262,
     INT = 263,
     VOID = 264,
     ID = 265,
     NUM = 266,
     EQ = 267,
     NE = 268,
     LT = 269,
     LE = 270,
     GT = 271,
     GE = 272,
     PLUS = 273,
     MINUS = 274,
     TIMES = 275,
     OVER = 276,
     SEMI = 277,
     COMMA = 278,
     LPAREN = 279,
     RPAREN = 280,
     LCURLY = 281,
     RCURLY = 282,
     LBRACE = 283,
     RBRACE = 284,
     ASSIGN = 285,
     ERROR = 286
   };
#endif
/* Tokens.  */
#define NOELSE 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define RETURN 262
#define INT 263
#define VOID 264
#define ID 265
#define NUM 266
#define EQ 267
#define NE 268
#define LT 269
#define LE 270
#define GT 271
#define GE 272
#define PLUS 273
#define MINUS 274
#define TIMES 275
#define OVER 276
#define SEMI 277
#define COMMA 278
#define LPAREN 279
#define RPAREN 280
#define LCURLY 281
#define RCURLY 282
#define LBRACE 283
#define RBRACE 284
#define ASSIGN 285
#define ERROR 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

