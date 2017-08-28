/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    T_OR = 258,
    T_AND = 259,
    T_LT = 260,
    T_LTE = 261,
    T_GT = 262,
    T_GTE = 263,
    T_NOTEQ = 264,
    T_EQEQ = 265,
    T_PLUS = 266,
    T_MINUS = 267,
    T_ID = 268,
    T_STRING = 269,
    T_CHARACTER = 270,
    T_NOT = 271,
    T_BOOL = 272,
    T_CHAR = 273,
    T_INT = 274,
    T_STR = 275,
    T_INTPTR = 276,
    T_CHARPTR = 277,
    T_IF = 278,
    T_ELSE = 279,
    T_WHILE = 280,
    T_VAR = 281,
    T_PROC = 282,
    T_RET = 283,
    T_NULL = 284,
    T_FSLASH = 285,
    T_EQ = 286,
    T_ADDRESS = 287,
    T_DEREF = 288,
    T_TRUE = 289,
    T_FALSE = 290,
    T_INTBIN = 291,
    T_INTOCT = 292,
    T_INTDEC = 293,
    T_INTHEX = 294,
    T_TIMES = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
