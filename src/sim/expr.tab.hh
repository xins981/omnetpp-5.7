/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_EXPRYY_EXPR_TAB_HH_INCLUDED
# define YY_EXPRYY_EXPR_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int expryydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOUBLETYPE = 258,
    INTTYPE = 259,
    STRINGTYPE = 260,
    BOOLTYPE = 261,
    XMLTYPE = 262,
    TRUE_ = 263,
    FALSE_ = 264,
    NAN_ = 265,
    INF_ = 266,
    THIS_ = 267,
    PARENT = 268,
    ASK_ = 269,
    DEFAULT_ = 270,
    CONST_ = 271,
    SIZEOF_ = 272,
    INDEX_ = 273,
    EXISTS = 274,
    TYPENAME = 275,
    XMLDOC_ = 276,
    NAME = 277,
    INTCONSTANT = 278,
    REALCONSTANT = 279,
    STRINGCONSTANT = 280,
    EQ_ = 281,
    NE_ = 282,
    GE_ = 283,
    LE_ = 284,
    AND_ = 285,
    OR_ = 286,
    XOR_ = 287,
    NOT_ = 288,
    BINAND_ = 289,
    BINOR_ = 290,
    BINXOR_ = 291,
    BINCOMPL_ = 292,
    SHIFTLEFT_ = 293,
    SHIFTRIGHT_ = 294,
    INVALID_CHAR = 295,
    UMIN_ = 296
  };
#endif
/* Tokens.  */
#define DOUBLETYPE 258
#define INTTYPE 259
#define STRINGTYPE 260
#define BOOLTYPE 261
#define XMLTYPE 262
#define TRUE_ 263
#define FALSE_ 264
#define NAN_ 265
#define INF_ 266
#define THIS_ 267
#define PARENT 268
#define ASK_ 269
#define DEFAULT_ 270
#define CONST_ 271
#define SIZEOF_ 272
#define INDEX_ 273
#define EXISTS 274
#define TYPENAME 275
#define XMLDOC_ 276
#define NAME 277
#define INTCONSTANT 278
#define REALCONSTANT 279
#define STRINGCONSTANT 280
#define EQ_ 281
#define NE_ 282
#define GE_ 283
#define LE_ 284
#define AND_ 285
#define OR_ 286
#define XOR_ 287
#define NOT_ 288
#define BINAND_ 289
#define BINOR_ 290
#define BINXOR_ 291
#define BINCOMPL_ 292
#define SHIFTLEFT_ 293
#define SHIFTRIGHT_ 294
#define INVALID_CHAR 295
#define UMIN_ 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE expryylval;

int expryyparse (void);

#endif /* !YY_EXPRYY_EXPR_TAB_HH_INCLUDED  */
