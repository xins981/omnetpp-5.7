/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

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

#ifndef YY_NED2YY_NED2_TAB_HH_INCLUDED
# define YY_NED2YY_NED2_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ned2yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IMPORT = 258,
    PACKAGE = 259,
    PROPERTY = 260,
    MODULE = 261,
    SIMPLE = 262,
    NETWORK = 263,
    CHANNEL = 264,
    MODULEINTERFACE = 265,
    CHANNELINTERFACE = 266,
    EXTENDS = 267,
    LIKE = 268,
    TYPES = 269,
    PARAMETERS = 270,
    GATES = 271,
    SUBMODULES = 272,
    CONNECTIONS = 273,
    ALLOWUNCONNECTED = 274,
    DOUBLETYPE = 275,
    INTTYPE = 276,
    STRINGTYPE = 277,
    BOOLTYPE = 278,
    XMLTYPE = 279,
    VOLATILE = 280,
    INPUT_ = 281,
    OUTPUT_ = 282,
    INOUT_ = 283,
    IF = 284,
    FOR = 285,
    RIGHTARROW = 286,
    LEFTARROW = 287,
    DBLARROW = 288,
    TO = 289,
    TRUE_ = 290,
    FALSE_ = 291,
    NAN_ = 292,
    INF_ = 293,
    THIS_ = 294,
    PARENT = 295,
    DEFAULT = 296,
    ASK = 297,
    CONST_ = 298,
    SIZEOF = 299,
    INDEX_ = 300,
    EXISTS = 301,
    TYPENAME = 302,
    XMLDOC = 303,
    NAME = 304,
    PROPNAME = 305,
    INTCONSTANT = 306,
    REALCONSTANT = 307,
    STRINGCONSTANT = 308,
    CHARCONSTANT = 309,
    PLUSPLUS = 310,
    DOUBLEASTERISK = 311,
    EQ = 312,
    NE = 313,
    GE = 314,
    LE = 315,
    AND = 316,
    OR = 317,
    XOR = 318,
    NOT = 319,
    BIN_AND = 320,
    BIN_OR = 321,
    BIN_XOR = 322,
    BIN_COMPL = 323,
    SHIFT_LEFT = 324,
    SHIFT_RIGHT = 325,
    EXPRESSION_SELECTOR = 326,
    CHAR = 327,
    INVALID_CHAR = 328,
    UMIN = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE ned2yylval;
extern YYLTYPE ned2yylloc;
int ned2yyparse (omnetpp::nedxml::ParseContext *np);

#endif /* !YY_NED2YY_NED2_TAB_HH_INCLUDED  */
