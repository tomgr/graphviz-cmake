
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum gmltokentype {
     GRAPH = 258,
     NODE = 259,
     EDGE = 260,
     DIRECTED = 261,
     ID = 262,
     SOURCE = 263,
     TARGET = 264,
     XVAL = 265,
     YVAL = 266,
     WVAL = 267,
     HVAL = 268,
     LABEL = 269,
     GRAPHICS = 270,
     LABELGRAPHICS = 271,
     TYPE = 272,
     FILL = 273,
     OUTLINE = 274,
     OUTLINESTYLE = 275,
     OUTLINEWIDTH = 276,
     WIDTH = 277,
     STYLE = 278,
     LINE = 279,
     POINT = 280,
     TEXT = 281,
     FONTSIZE = 282,
     FONTNAME = 283,
     COLOR = 284,
     INTEGER = 285,
     REAL = 286,
     STRING = 287,
     NAME = 288,
     LIST = 289
   };
#endif
/* Tokens.  */
#define GRAPH 258
#define NODE 259
#define EDGE 260
#define DIRECTED 261
#define ID 262
#define SOURCE 263
#define TARGET 264
#define XVAL 265
#define YVAL 266
#define WVAL 267
#define HVAL 268
#define LABEL 269
#define GRAPHICS 270
#define LABELGRAPHICS 271
#define TYPE 272
#define FILL 273
#define OUTLINE 274
#define OUTLINESTYLE 275
#define OUTLINEWIDTH 276
#define WIDTH 277
#define STYLE 278
#define LINE 279
#define POINT 280
#define TEXT 281
#define FONTSIZE 282
#define FONTNAME 283
#define COLOR 284
#define INTEGER 285
#define REAL 286
#define STRING 287
#define NAME 288
#define LIST 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 275 "../../cmd/tools/gmlparse.y"

    int i;
    char *str;
    gmlnode* np;
    gmledge* ep;
    gmlattr* ap;
    Dt_t*    list;



/* Line 1676 of yacc.c  */
#line 131 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define gmlstype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE gmllval;


