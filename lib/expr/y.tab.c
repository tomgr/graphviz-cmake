
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 14 "../../lib/expr/exparse.y"



/*
 * Glenn Fowler
 * AT&T Research
 *
 * expression library grammar and compiler
 *
 * NOTE: procedure arguments not implemented yet
 */

#ifdef WIN32
#include <config.h>

#ifdef GVDLL
#define _BLD_sfio 1
#endif
#endif

#include <stdio.h>
#include <ast.h>

#undef	RS	/* hp.pa <signal.h> grabs this!! */



/* Line 189 of yacc.c  */
#line 101 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MINTOKEN = 258,
     INTEGER = 259,
     UNSIGNED = 260,
     CHARACTER = 261,
     FLOATING = 262,
     STRING = 263,
     VOIDTYPE = 264,
     ADDRESS = 265,
     ARRAY = 266,
     BREAK = 267,
     CALL = 268,
     CASE = 269,
     CONSTANT = 270,
     CONTINUE = 271,
     DECLARE = 272,
     DEFAULT = 273,
     DYNAMIC = 274,
     ELSE = 275,
     EXIT = 276,
     FOR = 277,
     FUNCTION = 278,
     GSUB = 279,
     ITERATE = 280,
     ITERATER = 281,
     ID = 282,
     IF = 283,
     LABEL = 284,
     MEMBER = 285,
     NAME = 286,
     POS = 287,
     PRAGMA = 288,
     PRE = 289,
     PRINT = 290,
     PRINTF = 291,
     PROCEDURE = 292,
     QUERY = 293,
     RAND = 294,
     RETURN = 295,
     SCANF = 296,
     SPLIT = 297,
     SPRINTF = 298,
     SRAND = 299,
     SSCANF = 300,
     SUB = 301,
     SUBSTR = 302,
     SWITCH = 303,
     TOKENS = 304,
     UNSET = 305,
     WHILE = 306,
     F2I = 307,
     F2S = 308,
     I2F = 309,
     I2S = 310,
     S2B = 311,
     S2F = 312,
     S2I = 313,
     F2X = 314,
     I2X = 315,
     S2X = 316,
     X2F = 317,
     X2I = 318,
     X2S = 319,
     X2X = 320,
     XPRINT = 321,
     OR = 322,
     AND = 323,
     NE = 324,
     EQ = 325,
     GE = 326,
     LE = 327,
     RS = 328,
     LS = 329,
     IN_OP = 330,
     UNARY = 331,
     DEC = 332,
     INC = 333,
     CAST = 334,
     MAXTOKEN = 335
   };
#endif
/* Tokens.  */
#define MINTOKEN 258
#define INTEGER 259
#define UNSIGNED 260
#define CHARACTER 261
#define FLOATING 262
#define STRING 263
#define VOIDTYPE 264
#define ADDRESS 265
#define ARRAY 266
#define BREAK 267
#define CALL 268
#define CASE 269
#define CONSTANT 270
#define CONTINUE 271
#define DECLARE 272
#define DEFAULT 273
#define DYNAMIC 274
#define ELSE 275
#define EXIT 276
#define FOR 277
#define FUNCTION 278
#define GSUB 279
#define ITERATE 280
#define ITERATER 281
#define ID 282
#define IF 283
#define LABEL 284
#define MEMBER 285
#define NAME 286
#define POS 287
#define PRAGMA 288
#define PRE 289
#define PRINT 290
#define PRINTF 291
#define PROCEDURE 292
#define QUERY 293
#define RAND 294
#define RETURN 295
#define SCANF 296
#define SPLIT 297
#define SPRINTF 298
#define SRAND 299
#define SSCANF 300
#define SUB 301
#define SUBSTR 302
#define SWITCH 303
#define TOKENS 304
#define UNSET 305
#define WHILE 306
#define F2I 307
#define F2S 308
#define I2F 309
#define I2S 310
#define S2B 311
#define S2F 312
#define S2I 313
#define F2X 314
#define I2X 315
#define S2X 316
#define X2F 317
#define X2I 318
#define X2S 319
#define X2X 320
#define XPRINT 321
#define OR 322
#define AND 323
#define NE 324
#define EQ 325
#define GE 326
#define LE 327
#define RS 328
#define LS 329
#define IN_OP 330
#define UNARY 331
#define DEC 332
#define INC 333
#define CAST 334
#define MAXTOKEN 335




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 42 "../../lib/expr/exparse.y"

	struct Exnode_s*expr;
	double		floating;
	struct Exref_s*	reference;
	struct Exid_s*	id;
	Sflong_t	integer;
	int		op;
	char*		string;
	void*		user;
	struct Exbuf_s*	buffer;



/* Line 214 of yacc.c  */
#line 311 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 167 "../../lib/expr/exparse.y"


#include "exgram.h"



/* Line 264 of yacc.c  */
#line 330 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,    92,     2,    89,    75,     2,
      97,   102,    87,    84,    67,    85,   105,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,   101,
      78,    68,    79,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    73,   100,    91,     2,     2,     2,
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
      65,    66,    71,    72,    76,    77,    80,    81,    82,    83,
      86,    93,    94,    95,    96,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    11,    16,    17,    20,
      24,    27,    28,    33,    40,    46,    56,    62,    67,    74,
      80,    81,    90,    94,    98,   102,   103,   106,   109,   111,
     114,   118,   121,   123,   127,   128,   133,   135,   137,   139,
     141,   143,   145,   146,   149,   150,   152,   156,   161,   165,
     169,   173,   177,   181,   185,   189,   193,   197,   201,   205,
     209,   213,   217,   221,   225,   229,   233,   237,   238,   239,
     247,   250,   253,   256,   259,   262,   265,   270,   275,   280,
     285,   290,   297,   306,   311,   315,   319,   324,   329,   334,
     339,   344,   347,   350,   353,   357,   360,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     389,   392,   396,   398,   399,   402,   406,   407,   411,   412,
     414,   416,   420,   421,   423,   425,   427,   431,   432,   436,
     437,   439,   443,   446,   449,   450,   453,   455,   456,   457
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     107,     0,    -1,   111,   108,    -1,    -1,   108,   109,    -1,
      -1,    29,    70,   110,   111,    -1,    -1,   111,   112,    -1,
      99,   111,   100,    -1,   125,   101,    -1,    -1,    17,   113,
     119,   101,    -1,    28,    97,   126,   102,   112,   124,    -1,
      22,    97,   133,   102,   112,    -1,    22,    97,   125,   101,
     125,   101,   125,   102,   112,    -1,    26,    97,   133,   102,
     112,    -1,    50,    97,    19,   102,    -1,    50,    97,    19,
      67,   126,   102,    -1,    51,    97,   126,   102,   112,    -1,
      -1,    48,    97,   126,   114,   102,    99,   115,   100,    -1,
      12,   125,   101,    -1,    16,   125,   101,    -1,    40,   125,
     101,    -1,    -1,   115,   116,    -1,   117,   111,    -1,   118,
      -1,   117,   118,    -1,    14,   130,    70,    -1,    18,    70,
      -1,   120,    -1,   119,    67,   120,    -1,    -1,   122,   121,
     134,   145,    -1,    31,    -1,    19,    -1,    27,    -1,    23,
      -1,    31,    -1,    19,    -1,    -1,    20,   112,    -1,    -1,
     126,    -1,    97,   126,   102,    -1,    97,    17,   102,   126,
      -1,   126,    78,   126,    -1,   126,    85,   126,    -1,   126,
      87,   126,    -1,   126,    88,   126,    -1,   126,    89,   126,
      -1,   126,    83,   126,    -1,   126,    82,   126,    -1,   126,
      79,   126,    -1,   126,    81,   126,    -1,   126,    80,   126,
      -1,   126,    77,   126,    -1,   126,    76,   126,    -1,   126,
      75,   126,    -1,   126,    73,   126,    -1,   126,    74,   126,
      -1,   126,    84,   126,    -1,   126,    72,   126,    -1,   126,
      71,   126,    -1,   126,    67,   126,    -1,    -1,    -1,   126,
      69,   127,   126,    70,   128,   126,    -1,    90,   126,    -1,
      92,    19,    -1,    91,   126,    -1,    85,   126,    -1,    84,
     126,    -1,    75,   133,    -1,    11,   103,   136,   104,    -1,
      23,    97,   136,   102,    -1,    24,    97,   136,   102,    -1,
      46,    97,   136,   102,    -1,    47,    97,   136,   102,    -1,
     129,    97,   126,    67,    19,   102,    -1,   129,    97,   126,
      67,    19,    67,   126,   102,    -1,    21,    97,   126,   102,
      -1,    39,    97,   102,    -1,    44,    97,   102,    -1,    44,
      97,   126,   102,    -1,    37,    97,   136,   102,    -1,    35,
      97,   136,   102,    -1,   131,    97,   136,   102,    -1,   132,
      97,   136,   102,    -1,   133,   144,    -1,    95,   133,    -1,
     133,    95,    -1,   126,    86,    19,    -1,    94,   133,    -1,
     133,    94,    -1,   130,    -1,    42,    -1,    49,    -1,    15,
      -1,     7,    -1,     4,    -1,     8,    -1,     5,    -1,    36,
      -1,    38,    -1,    43,    -1,    41,    -1,    45,    -1,    27,
     142,    -1,    19,   135,   142,    -1,    31,    -1,    -1,   103,
     104,    -1,   103,    17,   104,    -1,    -1,   103,   126,   104,
      -1,    -1,   137,    -1,   126,    -1,   137,    67,   126,    -1,
      -1,    17,    -1,   139,    -1,   140,    -1,   139,    67,   140,
      -1,    -1,    17,   141,   123,    -1,    -1,   143,    -1,   105,
      27,   143,    -1,   105,    27,    -1,   105,    31,    -1,    -1,
      68,   126,    -1,   144,    -1,    -1,    -1,    97,   146,   138,
     147,   102,    99,   111,   100,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   175,   175,   196,   197,   200,   200,   236,   239,   254,
     258,   262,   262,   266,   276,   289,   304,   317,   325,   336,
     346,   346,   357,   369,   373,   386,   415,   418,   447,   448,
     451,   472,   478,   479,   486,   486,   535,   536,   537,   538,
     541,   542,   546,   549,   556,   559,   562,   566,   570,   615,
     619,   623,   627,   631,   635,   639,   643,   647,   651,   655,
     659,   663,   667,   671,   675,   688,   692,   701,   701,   701,
     740,   760,   767,   771,   775,   779,   783,   787,   791,   795,
     799,   803,   807,   811,   817,   821,   825,   831,   836,   840,
     864,   899,   923,   931,   939,   950,   954,   958,   961,   962,
     964,   971,   976,   981,   986,   993,   994,   995,   998,   999,
    1002,  1006,  1026,  1039,  1042,  1046,  1060,  1063,  1070,  1073,
    1081,  1086,  1093,  1096,  1102,  1105,  1109,  1120,  1120,  1132,
    1135,  1147,  1166,  1170,  1177,  1180,  1187,  1188,  1201,  1188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINTOKEN", "INTEGER", "UNSIGNED",
  "CHARACTER", "FLOATING", "STRING", "VOIDTYPE", "ADDRESS", "ARRAY",
  "BREAK", "CALL", "CASE", "CONSTANT", "CONTINUE", "DECLARE", "DEFAULT",
  "DYNAMIC", "ELSE", "EXIT", "FOR", "FUNCTION", "GSUB", "ITERATE",
  "ITERATER", "ID", "IF", "LABEL", "MEMBER", "NAME", "POS", "PRAGMA",
  "PRE", "PRINT", "PRINTF", "PROCEDURE", "QUERY", "RAND", "RETURN",
  "SCANF", "SPLIT", "SPRINTF", "SRAND", "SSCANF", "SUB", "SUBSTR",
  "SWITCH", "TOKENS", "UNSET", "WHILE", "F2I", "F2S", "I2F", "I2S", "S2B",
  "S2F", "S2I", "F2X", "I2X", "S2X", "X2F", "X2I", "X2S", "X2X", "XPRINT",
  "','", "'='", "'?'", "':'", "OR", "AND", "'|'", "'^'", "'&'", "NE", "EQ",
  "'<'", "'>'", "GE", "LE", "RS", "LS", "'+'", "'-'", "IN_OP", "'*'",
  "'/'", "'%'", "'!'", "'~'", "'#'", "UNARY", "DEC", "INC", "CAST", "'('",
  "MAXTOKEN", "'{'", "'}'", "';'", "')'", "'['", "']'", "'.'", "$accept",
  "program", "action_list", "action", "$@1", "statement_list", "statement",
  "$@2", "$@3", "switch_list", "switch_item", "case_list", "case_item",
  "dcl_list", "dcl_item", "$@4", "dcl_name", "name", "else_opt",
  "expr_opt", "expr", "$@5", "$@6", "splitop", "constant", "print", "scan",
  "variable", "array", "index", "args", "arg_list", "formals",
  "formal_list", "formal_item", "$@7", "members", "member", "assign",
  "initialize", "$@8", "$@9", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    44,    61,    63,
      58,   322,   323,   124,    94,    38,   324,   325,    60,    62,
     326,   327,   328,   329,    43,    45,   330,    42,    47,    37,
      33,   126,    35,   331,   332,   333,   334,    40,   335,   123,
     125,    59,    41,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   108,   108,   110,   109,   111,   111,   112,
     112,   113,   112,   112,   112,   112,   112,   112,   112,   112,
     114,   112,   112,   112,   112,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   121,   120,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   128,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   129,   129,
     130,   130,   130,   130,   130,   131,   131,   131,   132,   132,
     133,   133,   133,   134,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   138,   139,   139,   141,   140,   142,
     142,   142,   143,   143,   144,   144,   145,   146,   147,   145
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     4,     0,     2,     3,
       2,     0,     4,     6,     5,     9,     5,     4,     6,     5,
       0,     8,     3,     3,     3,     0,     2,     2,     1,     2,
       3,     2,     1,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     0,     7,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     4,
       4,     6,     8,     4,     3,     3,     4,     4,     4,     4,
       4,     2,     2,     2,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     0,     2,     3,     0,     3,     0,     1,
       1,     3,     0,     1,     1,     1,     3,     0,     3,     0,
       1,     3,     2,     2,     0,     2,     1,     0,     0,     8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     3,     1,   102,   104,   101,   103,     0,    44,
     100,    44,    11,   116,     0,     0,     0,     0,     0,   129,
       0,   112,     0,   105,     0,   106,     0,    44,   108,    98,
     107,     0,   109,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     2,
       8,     0,    45,     0,    97,     0,     0,   134,   118,     0,
       0,     0,     0,   129,     0,    44,   118,   118,     0,     0,
     110,   130,     0,   118,   118,     0,     0,     0,   118,   118,
       0,     0,     0,    75,    74,    73,    70,    72,    71,    95,
      92,     0,     0,    44,     0,     4,    10,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     118,     0,    96,    93,    91,   120,     0,   119,    22,    23,
      37,    39,    38,    36,     0,    32,    34,     0,   111,     0,
       0,   134,     0,     0,     0,   132,   133,     0,     0,     0,
      84,    24,    85,     0,     0,     0,    20,     0,     0,     0,
      46,     9,     5,    66,     0,    65,    64,    61,    62,    60,
      59,    58,    48,    55,    57,    56,    54,    53,    63,    49,
      94,    50,    51,    52,     0,     0,     0,   135,    76,     0,
       0,    12,   113,   117,    83,    44,    44,    77,    78,    44,
       0,   131,    44,    88,    87,    86,    79,    80,     0,     0,
      17,    44,    47,     7,     0,     0,    89,    90,   121,    33,
       0,   134,     0,    14,    16,   132,    42,     0,     0,    19,
       6,    68,   116,     0,   114,   137,   136,    35,    44,    44,
      13,    25,    18,     0,     0,    81,   115,   122,     0,    43,
       0,    69,     0,   127,   138,   124,   125,    44,     0,     0,
      21,    26,     7,    28,    82,     0,     0,     0,    15,     0,
      31,    27,    29,    41,    40,   128,     0,   127,   126,    30,
       7,    44,   139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    49,    95,   213,     2,    50,    61,   208,   250,
     261,   262,   263,   134,   135,   192,   136,   275,   240,    51,
      52,   164,   243,    53,    54,    55,    56,    57,   221,    63,
     126,   127,   254,   255,   256,   265,    70,    71,   124,   237,
     247,   266
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
    -180,    29,   229,  -180,  -180,  -180,  -180,  -180,   -63,   711,
    -180,   711,  -180,   -41,    -7,    -4,     4,     5,     6,     1,
      10,  -180,    11,  -180,    14,  -180,    17,   711,  -180,  -180,
    -180,    20,  -180,    23,    24,    25,  -180,    27,    30,    28,
     711,   711,   711,   711,   106,    28,    28,   617,  -180,   102,
    -180,    33,   891,    38,  -180,    40,    41,    18,   711,    42,
      44,    68,   711,     1,   711,   711,   711,   711,    28,     8,
    -180,  -180,   711,   711,   711,    37,    46,   125,   711,   711,
     711,   122,   711,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,    52,   312,   327,    72,  -180,  -180,   711,  -180,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   136,   711,   711,   711,   711,   711,
     711,   711,  -180,  -180,  -180,   935,    53,    91,  -180,  -180,
    -180,  -180,  -180,  -180,   -49,  -180,  -180,   214,  -180,   409,
      58,   -44,    73,    74,    75,    81,  -180,   506,    76,    99,
    -180,  -180,  -180,   598,   100,   101,   891,   -57,   692,   711,
    -180,  -180,  -180,   935,   711,   953,   970,   986,  1001,  1015,
    1029,  1029,   110,   110,   110,   110,    96,    96,   -73,   -73,
    -180,  -180,  -180,  -180,   914,   103,   104,   935,  -180,   711,
      68,  -180,   108,  -180,  -180,   711,   521,  -180,  -180,   521,
      61,  -180,   521,  -180,  -180,  -180,  -180,  -180,   116,   711,
    -180,   521,  -180,  -180,   868,   805,  -180,  -180,   935,  -180,
     -15,   -43,   112,  -180,  -180,  -180,   184,   113,   786,  -180,
     229,  -180,   -54,   117,  -180,  -180,  -180,  -180,   711,   521,
    -180,  -180,  -180,   711,   711,  -180,  -180,   206,   123,  -180,
      -6,   935,   834,   124,  -180,   157,  -180,   521,   111,   158,
    -180,  -180,    82,  -180,  -180,   -10,   127,   218,  -180,   161,
    -180,   229,  -180,  -180,  -180,  -180,   139,  -180,  -180,  -180,
    -180,   424,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,  -180,   -48,  -179,  -180,  -180,  -180,
    -180,  -180,   -23,  -180,    57,  -180,  -180,  -180,  -180,    -8,
     -36,  -180,  -180,  -180,   -16,  -180,  -180,   -12,  -180,  -180,
      31,  -180,  -180,  -180,   -24,  -180,   186,   109,    63,  -180,
    -180,  -180
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -124
static const yytype_int16 yytable[] =
{
      93,    59,   233,    60,    84,    85,    86,    87,   258,   273,
     209,    92,   259,   244,   115,   116,   117,   223,   190,    76,
     224,   274,   125,   226,   121,   121,   137,    83,   139,     3,
     125,   125,   229,    89,    90,   145,   147,   125,   125,   146,
      58,   153,   125,   125,   156,   210,   158,    13,   245,    62,
     122,   123,   191,   141,   235,    19,   144,   140,   196,    21,
     249,   163,    62,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   268,   181,
     182,   183,   184,   125,   125,   187,   121,   130,   225,   234,
      64,   131,   146,    65,   260,   132,   258,   142,   143,   133,
     259,    66,    67,    68,   148,   149,    69,    72,    73,   154,
     155,    74,   122,   123,    75,     4,     5,    77,     6,     7,
      78,    79,    80,   212,    81,    88,    10,    82,   214,     4,
       5,    94,     6,     7,    96,   118,     8,   119,   120,   150,
      10,   157,   162,   128,    13,   129,    14,   151,    16,    17,
     185,   186,    19,   218,   159,   180,    21,   188,   189,   195,
      22,    23,    24,    25,    26,   230,    28,    29,    30,    31,
      32,    33,    34,   228,    36,   197,   198,   199,   203,   163,
     112,   113,   114,   115,   116,   117,   200,   222,  -124,  -124,
    -124,  -124,   110,   111,   112,   113,   114,   115,   116,   117,
      39,   204,   206,   207,   239,   216,   217,   251,   252,    40,
      41,   220,   241,   238,   271,    42,    43,    44,   227,    45,
      46,   246,    47,   253,   267,   257,  -123,   152,   270,   276,
     248,   279,   281,     4,     5,   277,     6,     7,   280,   272,
       8,     9,   269,   278,    10,    11,    12,   219,    13,   138,
      14,    15,    16,    17,   201,    18,    19,    20,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    97,     0,    98,   236,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,   193,    42,
      43,    44,     0,    45,    46,     0,    47,     0,    48,     0,
     -44,     4,     5,     0,     6,     7,     0,     0,     8,     9,
       0,     0,    10,    11,    12,     0,    13,     0,    14,    15,
      16,    17,     0,    18,    19,    20,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    97,
       0,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,     0,   160,     0,     0,    42,    43,    44,
       0,    45,    46,     0,    47,     0,    48,   161,     4,     5,
       0,     6,     7,     0,     0,     8,     9,     0,     0,    10,
      11,    12,     0,    13,     0,    14,    15,    16,    17,     0,
      18,    19,    20,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    97,     0,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,   194,     0,     0,    42,    43,    44,     0,    45,    46,
       0,    47,     0,    48,   282,     4,     5,     0,     6,     7,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
      13,     0,    14,    15,    16,    17,     0,    18,    19,    20,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    97,     0,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,   202,     0,
       0,    42,    43,    44,     0,    45,    46,     0,    47,     0,
      48,     4,     5,     0,     6,     7,     0,     0,     8,     0,
       0,     0,    10,     0,    91,     0,    13,     0,    14,     0,
      16,    17,     0,     0,    19,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,     0,    28,    29,
      30,    31,    32,    33,    34,    97,    36,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
     205,    40,    41,     0,     0,     0,     0,    42,    43,    44,
       0,    45,    46,     0,    47,     4,     5,     0,     6,     7,
       0,     0,     8,     0,     0,     0,    10,     0,     0,     0,
      13,     0,    14,     0,    16,    17,     0,     0,    19,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,     0,    28,    29,    30,    31,    32,    33,    34,    97,
      36,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,   211,    40,    41,     0,     0,     0,
       0,    42,    43,    44,     0,    45,    46,     0,    47,     4,
       5,     0,     6,     7,     0,     0,     8,     0,     0,     0,
      10,     0,     0,     0,   232,     0,    14,     0,    16,    17,
       0,     0,    19,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,     0,    28,    29,    30,    31,
      32,    33,    34,    97,    36,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,   242,    40,
      41,     0,     0,     0,     0,    42,    43,    44,     0,    45,
      46,    97,    47,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,   264,    98,   231,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    97,     0,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   215,     0,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,  -124,  -124,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      48,     9,    17,    11,    40,    41,    42,    43,    14,    19,
      67,    47,    18,    67,    87,    88,    89,   196,    67,    27,
     199,    31,    58,   202,    68,    68,    62,    39,    64,     0,
      66,    67,   211,    45,    46,    27,    72,    73,    74,    31,
     103,    77,    78,    79,    80,   102,    82,    19,   102,   103,
      94,    95,   101,    65,    97,    27,    68,    65,   102,    31,
     239,    97,   103,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   257,   115,
     116,   117,   118,   119,   120,   121,    68,    19,    27,   104,
      97,    23,    31,    97,   100,    27,    14,    66,    67,    31,
      18,    97,    97,    97,    73,    74,   105,    97,    97,    78,
      79,    97,    94,    95,    97,     4,     5,    97,     7,     8,
      97,    97,    97,   159,    97,    19,    15,    97,   164,     4,
       5,    29,     7,     8,   101,    97,    11,    97,    97,   102,
      15,    19,    70,   101,    19,   101,    21,   101,    23,    24,
     119,   120,    27,   189,   102,    19,    31,   104,    67,   101,
      35,    36,    37,    38,    39,   213,    41,    42,    43,    44,
      45,    46,    47,   209,    49,   102,   102,   102,   102,   215,
      84,    85,    86,    87,    88,    89,   105,   195,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      75,   102,   102,   102,    20,   102,   102,   243,   244,    84,
      85,   103,    99,   101,   262,    90,    91,    92,   102,    94,
      95,   104,    97,    17,    67,   102,   102,   102,    70,   102,
     238,    70,   280,     4,     5,    17,     7,     8,    99,   262,
      11,    12,   258,   267,    15,    16,    17,   190,    19,    63,
      21,    22,    23,    24,   145,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    67,    -1,    69,   221,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,   104,    90,
      91,    92,    -1,    94,    95,    -1,    97,    -1,    99,    -1,
     101,     4,     5,    -1,     7,     8,    -1,    -1,    11,    12,
      -1,    -1,    15,    16,    17,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    67,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    -1,   102,    -1,    -1,    90,    91,    92,
      -1,    94,    95,    -1,    97,    -1,    99,   100,     4,     5,
      -1,     7,     8,    -1,    -1,    11,    12,    -1,    -1,    15,
      16,    17,    -1,    19,    -1,    21,    22,    23,    24,    -1,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    67,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,   102,    -1,    -1,    90,    91,    92,    -1,    94,    95,
      -1,    97,    -1,    99,   100,     4,     5,    -1,     7,     8,
      -1,    -1,    11,    12,    -1,    -1,    15,    16,    17,    -1,
      19,    -1,    21,    22,    23,    24,    -1,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    67,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,   102,    -1,
      -1,    90,    91,    92,    -1,    94,    95,    -1,    97,    -1,
      99,     4,     5,    -1,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    17,    -1,    19,    -1,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    67,    49,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    84,    85,    -1,    -1,    -1,    -1,    90,    91,    92,
      -1,    94,    95,    -1,    97,     4,     5,    -1,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    67,
      49,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    84,    85,    -1,    -1,    -1,
      -1,    90,    91,    92,    -1,    94,    95,    -1,    97,     4,
       5,    -1,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    67,    49,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    84,
      85,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    94,
      95,    67,    97,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,   102,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    67,    -1,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    67,    -1,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   107,   111,     0,     4,     5,     7,     8,    11,    12,
      15,    16,    17,    19,    21,    22,    23,    24,    26,    27,
      28,    31,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    75,
      84,    85,    90,    91,    92,    94,    95,    97,    99,   108,
     112,   125,   126,   129,   130,   131,   132,   133,   103,   125,
     125,   113,   103,   135,    97,    97,    97,    97,    97,   105,
     142,   143,    97,    97,    97,    97,   125,    97,    97,    97,
      97,    97,    97,   133,   126,   126,   126,   126,    19,   133,
     133,    17,   126,   111,    29,   109,   101,    67,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    97,    97,
      97,    68,    94,    95,   144,   126,   136,   137,   101,   101,
      19,    23,    27,    31,   119,   120,   122,   126,   142,   126,
     125,   133,   136,   136,   133,    27,    31,   126,   136,   136,
     102,   101,   102,   126,   136,   136,   126,    19,   126,   102,
     102,   100,    70,   126,   127,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
      19,   126,   126,   126,   126,   136,   136,   126,   104,    67,
      67,   101,   121,   104,   102,   101,   102,   102,   102,   102,
     105,   143,   102,   102,   102,   102,   102,   102,   114,    67,
     102,   102,   126,   110,   126,    67,   102,   102,   126,   120,
     103,   134,   125,   112,   112,    27,   112,   102,   126,   112,
     111,    70,    19,    17,   104,    97,   144,   145,   101,    20,
     124,    99,   102,   128,    67,   102,   104,   146,   125,   112,
     115,   126,   126,    17,   138,   139,   140,   102,    14,    18,
     100,   116,   117,   118,   102,   141,   147,    67,   112,   130,
      70,   111,   118,    19,    31,   123,   102,    17,   140,    70,
      99,   111,   100
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

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
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 2:

/* Line 1455 of yacc.c  */
#line 176 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(1) - (2)].expr) && !(expr.program->disc->flags & EX_STRICT))
			{
				if (expr.program->main.value && !(expr.program->disc->flags & EX_RETAIN))
					exfreenode(expr.program, expr.program->main.value);
				if ((yyvsp[(1) - (2)].expr)->op == S2B)
				{
					Exnode_t*	x;

					x = (yyvsp[(1) - (2)].expr);
					(yyvsp[(1) - (2)].expr) = x->data.operand.left;
					x->data.operand.left = 0;
					exfreenode(expr.program, x);
				}
				expr.program->main.lex = PROCEDURE;
				expr.program->main.value = exnewnode(expr.program, PROCEDURE, 1, (yyvsp[(1) - (2)].expr)->type, NiL, (yyvsp[(1) - (2)].expr));
			}
		}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 200 "../../lib/expr/exparse.y"
    {
				register Dtdisc_t*	disc;

				if (expr.procedure)
					exerror("no nested function definitions");
				(yyvsp[(1) - (2)].id)->lex = PROCEDURE;
				expr.procedure = (yyvsp[(1) - (2)].id)->value = exnewnode(expr.program, PROCEDURE, 1, (yyvsp[(1) - (2)].id)->type, NiL, NiL);
				expr.procedure->type = INTEGER;
				if (!(disc = newof(0, Dtdisc_t, 1, 0)))
					exerror("out of space [frame discipline]");
				disc->key = offsetof(Exid_t, name);
				if (!(expr.procedure->data.procedure.frame = dtopen(disc, Dtset)) || !dtview(expr.procedure->data.procedure.frame, expr.program->symbols))
					exerror("out of space [frame table]");
				expr.program->symbols = expr.program->frame = expr.procedure->data.procedure.frame;
			}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 215 "../../lib/expr/exparse.y"
    {
			expr.procedure = 0;
			if (expr.program->frame)
			{
				expr.program->symbols = expr.program->frame->view;
				dtview(expr.program->frame, NiL);
			}
			if ((yyvsp[(4) - (4)].expr) && (yyvsp[(4) - (4)].expr)->op == S2B)
			{
				Exnode_t*	x;

				x = (yyvsp[(4) - (4)].expr);
				(yyvsp[(4) - (4)].expr) = x->data.operand.left;
				x->data.operand.left = 0;
				exfreenode(expr.program, x);
			}
			(yyvsp[(1) - (4)].id)->value->data.operand.right = excast(expr.program, (yyvsp[(4) - (4)].expr), (yyvsp[(1) - (4)].id)->type, NiL, 0);
		}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 236 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 240 "../../lib/expr/exparse.y"
    {
			if (!(yyvsp[(1) - (2)].expr))
				(yyval.expr) = (yyvsp[(2) - (2)].expr);
			else if (!(yyvsp[(2) - (2)].expr))
				(yyval.expr) = (yyvsp[(1) - (2)].expr);
			else if ((yyvsp[(1) - (2)].expr)->op == CONSTANT)
			{
				exfreenode(expr.program, (yyvsp[(1) - (2)].expr));
				(yyval.expr) = (yyvsp[(2) - (2)].expr);
			}
			else (yyval.expr) = exnewnode(expr.program, ';', 1, (yyvsp[(2) - (2)].expr)->type, (yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].expr));
		}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 255 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(2) - (3)].expr);
		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 259 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = ((yyvsp[(1) - (2)].expr) && (yyvsp[(1) - (2)].expr)->type == STRING) ? exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(1) - (2)].expr), NiL) : (yyvsp[(1) - (2)].expr);
		}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 262 "../../lib/expr/exparse.y"
    {expr.declare=(yyvsp[(1) - (1)].id)->type;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 263 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(3) - (4)].expr);
		}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 267 "../../lib/expr/exparse.y"
    {
			if (exisAssign ((yyvsp[(3) - (6)].expr)))
				exwarn ("assignment used as boolean in if statement");
			if ((yyvsp[(3) - (6)].expr)->type == STRING)
				(yyvsp[(3) - (6)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(3) - (6)].expr), NiL);
			else if (!INTEGRAL((yyvsp[(3) - (6)].expr)->type))
				(yyvsp[(3) - (6)].expr) = excast(expr.program, (yyvsp[(3) - (6)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (6)].id)->index, 1, INTEGER, (yyvsp[(3) - (6)].expr), exnewnode(expr.program, ':', 1, (yyvsp[(5) - (6)].expr) ? (yyvsp[(5) - (6)].expr)->type : 0, (yyvsp[(5) - (6)].expr), (yyvsp[(6) - (6)].expr)));
		}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 277 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ITERATE, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.generate.array = (yyvsp[(3) - (5)].expr);
			if (!(yyvsp[(3) - (5)].expr)->data.variable.index || (yyvsp[(3) - (5)].expr)->data.variable.index->op != DYNAMIC)
				exerror("simple index variable expected");
			(yyval.expr)->data.generate.index = (yyvsp[(3) - (5)].expr)->data.variable.index->data.variable.symbol;
			if ((yyvsp[(3) - (5)].expr)->op == ID && (yyval.expr)->data.generate.index->type != INTEGER)
				exerror("integer index variable expected");
			exfreenode(expr.program, (yyvsp[(3) - (5)].expr)->data.variable.index);
			(yyvsp[(3) - (5)].expr)->data.variable.index = 0;
			(yyval.expr)->data.generate.statement = (yyvsp[(5) - (5)].expr);
		}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 290 "../../lib/expr/exparse.y"
    {
			if (!(yyvsp[(5) - (9)].expr))
			{
				(yyvsp[(5) - (9)].expr) = exnewnode(expr.program, CONSTANT, 0, INTEGER, NiL, NiL);
				(yyvsp[(5) - (9)].expr)->data.constant.value.integer = 1;
			}
			else if ((yyvsp[(5) - (9)].expr)->type == STRING)
				(yyvsp[(5) - (9)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(5) - (9)].expr), NiL);
			else if (!INTEGRAL((yyvsp[(5) - (9)].expr)->type))
				(yyvsp[(5) - (9)].expr) = excast(expr.program, (yyvsp[(5) - (9)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (9)].id)->index, 1, INTEGER, (yyvsp[(5) - (9)].expr), exnewnode(expr.program, ';', 1, 0, (yyvsp[(7) - (9)].expr), (yyvsp[(9) - (9)].expr)));
			if ((yyvsp[(3) - (9)].expr))
				(yyval.expr) = exnewnode(expr.program, ';', 1, INTEGER, (yyvsp[(3) - (9)].expr), (yyval.expr));
		}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 305 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ITERATER, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.generate.array = (yyvsp[(3) - (5)].expr);
			if (!(yyvsp[(3) - (5)].expr)->data.variable.index || (yyvsp[(3) - (5)].expr)->data.variable.index->op != DYNAMIC)
				exerror("simple index variable expected");
			(yyval.expr)->data.generate.index = (yyvsp[(3) - (5)].expr)->data.variable.index->data.variable.symbol;
			if ((yyvsp[(3) - (5)].expr)->op == ID && (yyval.expr)->data.generate.index->type != INTEGER)
				exerror("integer index variable expected");
			exfreenode(expr.program, (yyvsp[(3) - (5)].expr)->data.variable.index);
			(yyvsp[(3) - (5)].expr)->data.variable.index = 0;
			(yyval.expr)->data.generate.statement = (yyvsp[(5) - (5)].expr);
		}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 318 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(3) - (4)].id)->local.pointer == 0)
              			exerror("cannot apply unset to non-array %s", (yyvsp[(3) - (4)].id)->name);
			(yyval.expr) = exnewnode(expr.program, UNSET, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(3) - (4)].id);
			(yyval.expr)->data.variable.index = NiL;
		}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 326 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(3) - (6)].id)->local.pointer == 0)
              			exerror("cannot apply unset to non-array %s", (yyvsp[(3) - (6)].id)->name);
			if (((yyvsp[(3) - (6)].id)->index_type > 0) && ((yyvsp[(5) - (6)].expr)->type != (yyvsp[(3) - (6)].id)->index_type))
            		    exerror("%s indices must have type %s, not %s", 
				(yyvsp[(3) - (6)].id)->name, extypename(expr.program, (yyvsp[(3) - (6)].id)->index_type),extypename(expr.program, (yyvsp[(5) - (6)].expr)->type));
			(yyval.expr) = exnewnode(expr.program, UNSET, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(3) - (6)].id);
			(yyval.expr)->data.variable.index = (yyvsp[(5) - (6)].expr);
		}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 337 "../../lib/expr/exparse.y"
    {
			if (exisAssign ((yyvsp[(3) - (5)].expr)))
				exwarn ("assignment used as boolean in while statement");
			if ((yyvsp[(3) - (5)].expr)->type == STRING)
				(yyvsp[(3) - (5)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(3) - (5)].expr), NiL);
			else if (!INTEGRAL((yyvsp[(3) - (5)].expr)->type))
				(yyvsp[(3) - (5)].expr) = excast(expr.program, (yyvsp[(3) - (5)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (5)].id)->index, 1, INTEGER, (yyvsp[(3) - (5)].expr), exnewnode(expr.program, ';', 1, 0, NiL, (yyvsp[(5) - (5)].expr)));
		}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 346 "../../lib/expr/exparse.y"
    {expr.declare=(yyvsp[(3) - (3)].expr)->type;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 347 "../../lib/expr/exparse.y"
    {
			register Switch_t*	sw = expr.swstate;

			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (8)].id)->index, 1, INTEGER, (yyvsp[(3) - (8)].expr), exnewnode(expr.program, DEFAULT, 1, 0, sw->defcase, sw->firstcase));
			expr.swstate = expr.swstate->prev;
			if (sw->base)
				free(sw->base);
			if (sw != &swstate)
				free(sw);
		}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 358 "../../lib/expr/exparse.y"
    {
		loopop:
			if (!(yyvsp[(2) - (3)].expr))
			{
				(yyvsp[(2) - (3)].expr) = exnewnode(expr.program, CONSTANT, 0, INTEGER, NiL, NiL);
				(yyvsp[(2) - (3)].expr)->data.constant.value.integer = 1;
			}
			else if (!INTEGRAL((yyvsp[(2) - (3)].expr)->type))
				(yyvsp[(2) - (3)].expr) = excast(expr.program, (yyvsp[(2) - (3)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (3)].id)->index, 1, INTEGER, (yyvsp[(2) - (3)].expr), NiL);
		}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 370 "../../lib/expr/exparse.y"
    {
			goto loopop;
		}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 374 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(2) - (3)].expr))
			{
				if (expr.procedure && !expr.procedure->type)
					exerror("return in void function");
				(yyvsp[(2) - (3)].expr) = excast(expr.program, (yyvsp[(2) - (3)].expr), expr.procedure ? expr.procedure->type : INTEGER, NiL, 0);
			}
			(yyval.expr) = exnewnode(expr.program, RETURN, 1, (yyvsp[(2) - (3)].expr) ? (yyvsp[(2) - (3)].expr)->type : 0, (yyvsp[(2) - (3)].expr), NiL);
		}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 386 "../../lib/expr/exparse.y"
    {
			register Switch_t*		sw;
			int				n;

			if (expr.swstate)
			{
				if (!(sw = newof(0, Switch_t, 1, 0)))
				{
					exerror("out of space [switch]");
					sw = &swstate;
				}
				sw->prev = expr.swstate;
			}
			else sw = &swstate;
			expr.swstate = sw;
			sw->type = expr.declare;
			sw->firstcase = 0;
			sw->lastcase = 0;
			sw->defcase = 0;
			sw->def = 0;
			n = 8;
			if (!(sw->base = newof(0, Extype_t*, n, 0)))
			{
				exerror("out of space [case]");
				n = 0;
			}
			sw->cur = sw->base;
			sw->last = sw->base + n;
		}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 419 "../../lib/expr/exparse.y"
    {
			register Switch_t*	sw = expr.swstate;
			int			n;

			(yyval.expr) = exnewnode(expr.program, CASE, 1, 0, (yyvsp[(2) - (2)].expr), NiL);
			if (sw->cur > sw->base)
			{
				if (sw->lastcase)
					sw->lastcase->data.select.next = (yyval.expr);
				else sw->firstcase = (yyval.expr);
				sw->lastcase = (yyval.expr);
				n = sw->cur - sw->base;
				sw->cur = sw->base;
				(yyval.expr)->data.select.constant = (Extype_t**)exalloc(expr.program, (n + 1) * sizeof(Extype_t*));
				memcpy((yyval.expr)->data.select.constant, sw->base, n * sizeof(Extype_t*));
				(yyval.expr)->data.select.constant[n] = 0;
			}
			else (yyval.expr)->data.select.constant = 0;
			if (sw->def)
			{
				sw->def = 0;
				if (sw->defcase)
					exerror("duplicate default in switch");
				else sw->defcase = (yyvsp[(2) - (2)].expr);
			}
		}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 452 "../../lib/expr/exparse.y"
    {
			int	n;

			if (expr.swstate->cur >= expr.swstate->last)
			{
				n = expr.swstate->cur - expr.swstate->base;
				if (!(expr.swstate->base = newof(expr.swstate->base, Extype_t*, 2 * n, 0)))
				{
					exerror("too many case labels for switch");
					n = 0;
				}
				expr.swstate->cur = expr.swstate->base + n;
				expr.swstate->last = expr.swstate->base + 2 * n;
			}
			if (expr.swstate->cur)
			{
				(yyvsp[(2) - (3)].expr) = excast(expr.program, (yyvsp[(2) - (3)].expr), expr.swstate->type, NiL, 0);
				*expr.swstate->cur++ = &((yyvsp[(2) - (3)].expr)->data.constant.value);
			}
		}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 473 "../../lib/expr/exparse.y"
    {
			expr.swstate->def = 1;
		}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 480 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(3) - (3)].expr))
				(yyval.expr) = (yyvsp[(1) - (3)].expr) ? exnewnode(expr.program, ',', 1, (yyvsp[(3) - (3)].expr)->type, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)) : (yyvsp[(3) - (3)].expr);
		}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 486 "../../lib/expr/exparse.y"
    {checkName ((yyvsp[(1) - (1)].id)); expr.id=(yyvsp[(1) - (1)].id);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 487 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
			(yyvsp[(1) - (4)].id)->type = expr.declare;
			if ((yyvsp[(4) - (4)].expr) && (yyvsp[(4) - (4)].expr)->op == PROCEDURE)
			{
				(yyvsp[(1) - (4)].id)->lex = PROCEDURE;
				(yyvsp[(1) - (4)].id)->type = (yyvsp[(4) - (4)].expr)->type;
				(yyvsp[(1) - (4)].id)->value = (yyvsp[(4) - (4)].expr);
			}
			else
			{
				(yyvsp[(1) - (4)].id)->lex = DYNAMIC;
				(yyvsp[(1) - (4)].id)->value = exnewnode(expr.program, 0, 0, 0, NiL, NiL);
				if ((yyvsp[(3) - (4)].integer) && !(yyvsp[(1) - (4)].id)->local.pointer)
				{
					Dtdisc_t*	disc;

					if (!(disc = newof(0, Dtdisc_t, 1, 0)))
						exerror("out of space [associative array]");
					if ((yyvsp[(3) - (4)].integer) == INTEGER) {
						disc->key = offsetof(Exassoc_t, key);
						disc->size = sizeof(Extype_t);
						disc->comparf = (Dtcompar_f)cmpKey;
					}
					else {
						disc->key = offsetof(Exassoc_t, name);
					}
					if (!((yyvsp[(1) - (4)].id)->local.pointer = (char*)dtopen(disc, Dtoset)))
						exerror("%s: cannot initialize associative array", (yyvsp[(1) - (4)].id)->name);
					(yyvsp[(1) - (4)].id)->index_type = (yyvsp[(3) - (4)].integer); /* -1 indicates no typechecking */
				}
				if ((yyvsp[(4) - (4)].expr))
				{
					if ((yyvsp[(4) - (4)].expr)->type != (yyvsp[(1) - (4)].id)->type)
					{
						(yyvsp[(4) - (4)].expr)->type = (yyvsp[(1) - (4)].id)->type;
						(yyvsp[(4) - (4)].expr)->data.operand.right = excast(expr.program, (yyvsp[(4) - (4)].expr)->data.operand.right, (yyvsp[(1) - (4)].id)->type, NiL, 0);
					}
					(yyvsp[(4) - (4)].expr)->data.operand.left = exnewnode(expr.program, DYNAMIC, 0, (yyvsp[(1) - (4)].id)->type, NiL, NiL);
					(yyvsp[(4) - (4)].expr)->data.operand.left->data.variable.symbol = (yyvsp[(1) - (4)].id);
					(yyval.expr) = (yyvsp[(4) - (4)].expr);
				}
				else if (!(yyvsp[(3) - (4)].integer))
					(yyvsp[(1) - (4)].id)->value->data.value = exzero((yyvsp[(1) - (4)].id)->type);
			}
		}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 546 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 550 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(2) - (2)].expr);
		}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 556 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 563 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(2) - (3)].expr);
		}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 567 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = ((yyvsp[(4) - (4)].expr)->type == (yyvsp[(2) - (4)].id)->type) ? (yyvsp[(4) - (4)].expr) : excast(expr.program, (yyvsp[(4) - (4)].expr), (yyvsp[(2) - (4)].id)->type, NiL, 0);
		}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 571 "../../lib/expr/exparse.y"
    {
			int	rel;

		relational:
			rel = INTEGER;
			goto coerce;
		binary:
			rel = 0;
		coerce:
			if (!(yyvsp[(1) - (3)].expr)->type)
			{
				if (!(yyvsp[(3) - (3)].expr)->type)
					(yyvsp[(1) - (3)].expr)->type = (yyvsp[(3) - (3)].expr)->type = rel ? STRING : INTEGER;
				else (yyvsp[(1) - (3)].expr)->type = (yyvsp[(3) - (3)].expr)->type;
			}
			else if (!(yyvsp[(3) - (3)].expr)->type) (yyvsp[(3) - (3)].expr)->type = (yyvsp[(1) - (3)].expr)->type;
			if ((yyvsp[(1) - (3)].expr)->type != (yyvsp[(3) - (3)].expr)->type)
			{
				if ((yyvsp[(1) - (3)].expr)->type == STRING)
					(yyvsp[(1) - (3)].expr) = excast(expr.program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)->type, (yyvsp[(3) - (3)].expr), 0);
				else if ((yyvsp[(3) - (3)].expr)->type == STRING)
					(yyvsp[(3) - (3)].expr) = excast(expr.program, (yyvsp[(3) - (3)].expr), (yyvsp[(1) - (3)].expr)->type, (yyvsp[(1) - (3)].expr), 0);
				else if ((yyvsp[(1) - (3)].expr)->type == FLOATING)
					(yyvsp[(3) - (3)].expr) = excast(expr.program, (yyvsp[(3) - (3)].expr), FLOATING, (yyvsp[(1) - (3)].expr), 0);
				else if ((yyvsp[(3) - (3)].expr)->type == FLOATING)
					(yyvsp[(1) - (3)].expr) = excast(expr.program, (yyvsp[(1) - (3)].expr), FLOATING, (yyvsp[(3) - (3)].expr), 0);
			}
			if (!rel)
				rel = ((yyvsp[(1) - (3)].expr)->type == STRING) ? STRING : (((yyvsp[(1) - (3)].expr)->type == UNSIGNED) ? UNSIGNED : (yyvsp[(3) - (3)].expr)->type);
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(2) - (3)].op), 1, rel, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
			if (!expr.program->errors && (yyvsp[(1) - (3)].expr)->op == CONSTANT && (yyvsp[(3) - (3)].expr)->op == CONSTANT)
			{
				expr.program->vc = expr.program->vm;
				(yyval.expr)->data.constant.value = exeval(expr.program, (yyval.expr), NiL);
				expr.program->vc = expr.program->ve;
				(yyval.expr)->binary = 0;
				(yyval.expr)->op = CONSTANT;
				exfreenode(expr.program, (yyvsp[(1) - (3)].expr));
				exfreenode(expr.program, (yyvsp[(3) - (3)].expr));
			}
			else if (!BUILTIN((yyvsp[(1) - (3)].expr)->type) || !BUILTIN((yyvsp[(3) - (3)].expr)->type)) {
				checkBinary(expr.program, (yyvsp[(1) - (3)].expr), (yyval.expr), (yyvsp[(3) - (3)].expr));
			}
		}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 616 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 620 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 624 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 628 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 632 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 636 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 640 "../../lib/expr/exparse.y"
    {
			goto relational;
		}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 644 "../../lib/expr/exparse.y"
    {
			goto relational;
		}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 648 "../../lib/expr/exparse.y"
    {
			goto relational;
		}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 652 "../../lib/expr/exparse.y"
    {
			goto relational;
		}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 656 "../../lib/expr/exparse.y"
    {
			goto relational;
		}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 660 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 664 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 668 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 672 "../../lib/expr/exparse.y"
    {
			goto binary;
		}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 676 "../../lib/expr/exparse.y"
    {
		logical:
			if ((yyvsp[(1) - (3)].expr)->type == STRING)
				(yyvsp[(1) - (3)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(1) - (3)].expr), NiL);
			else if (!BUILTIN((yyvsp[(1) - (3)].expr)->type))
				(yyvsp[(1) - (3)].expr) = excast(expr.program, (yyvsp[(1) - (3)].expr), INTEGER, NiL, 0);
			if ((yyvsp[(3) - (3)].expr)->type == STRING)
				(yyvsp[(3) - (3)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(3) - (3)].expr), NiL);
			else if (!BUILTIN((yyvsp[(3) - (3)].expr)->type))
				(yyvsp[(3) - (3)].expr) = excast(expr.program, (yyvsp[(3) - (3)].expr), INTEGER, NiL, 0);
			goto binary;
		}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 689 "../../lib/expr/exparse.y"
    {
			goto logical;
		}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 693 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(1) - (3)].expr)->op == CONSTANT)
			{
				exfreenode(expr.program, (yyvsp[(1) - (3)].expr));
				(yyval.expr) = (yyvsp[(3) - (3)].expr);
			}
			else (yyval.expr) = exnewnode(expr.program, ',', 1, (yyvsp[(3) - (3)].expr)->type, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 701 "../../lib/expr/exparse.y"
    {expr.nolabel=1;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 701 "../../lib/expr/exparse.y"
    {expr.nolabel=0;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 702 "../../lib/expr/exparse.y"
    {
			if (!(yyvsp[(4) - (7)].expr)->type)
			{
				if (!(yyvsp[(7) - (7)].expr)->type)
					(yyvsp[(4) - (7)].expr)->type = (yyvsp[(7) - (7)].expr)->type = INTEGER;
				else (yyvsp[(4) - (7)].expr)->type = (yyvsp[(7) - (7)].expr)->type;
			}
			else if (!(yyvsp[(7) - (7)].expr)->type)
				(yyvsp[(7) - (7)].expr)->type = (yyvsp[(4) - (7)].expr)->type;
			if ((yyvsp[(1) - (7)].expr)->type == STRING)
				(yyvsp[(1) - (7)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(1) - (7)].expr), NiL);
			else if (!INTEGRAL((yyvsp[(1) - (7)].expr)->type))
				(yyvsp[(1) - (7)].expr) = excast(expr.program, (yyvsp[(1) - (7)].expr), INTEGER, NiL, 0);
			if ((yyvsp[(4) - (7)].expr)->type != (yyvsp[(7) - (7)].expr)->type)
			{
				if ((yyvsp[(4) - (7)].expr)->type == STRING || (yyvsp[(7) - (7)].expr)->type == STRING)
					exerror("if statement string type mismatch");
				else if ((yyvsp[(4) - (7)].expr)->type == FLOATING)
					(yyvsp[(7) - (7)].expr) = excast(expr.program, (yyvsp[(7) - (7)].expr), FLOATING, NiL, 0);
				else if ((yyvsp[(7) - (7)].expr)->type == FLOATING)
					(yyvsp[(4) - (7)].expr) = excast(expr.program, (yyvsp[(4) - (7)].expr), FLOATING, NiL, 0);
			}
			if ((yyvsp[(1) - (7)].expr)->op == CONSTANT)
			{
				if ((yyvsp[(1) - (7)].expr)->data.constant.value.integer)
				{
					(yyval.expr) = (yyvsp[(4) - (7)].expr);
					exfreenode(expr.program, (yyvsp[(7) - (7)].expr));
				}
				else
				{
					(yyval.expr) = (yyvsp[(7) - (7)].expr);
					exfreenode(expr.program, (yyvsp[(4) - (7)].expr));
				}
				exfreenode(expr.program, (yyvsp[(1) - (7)].expr));
			}
			else (yyval.expr) = exnewnode(expr.program, '?', 1, (yyvsp[(4) - (7)].expr)->type, (yyvsp[(1) - (7)].expr), exnewnode(expr.program, ':', 1, (yyvsp[(4) - (7)].expr)->type, (yyvsp[(4) - (7)].expr), (yyvsp[(7) - (7)].expr)));
		}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 741 "../../lib/expr/exparse.y"
    {
		iunary:
			if ((yyvsp[(2) - (2)].expr)->type == STRING)
				(yyvsp[(2) - (2)].expr) = exnewnode(expr.program, S2B, 1, INTEGER, (yyvsp[(2) - (2)].expr), NiL);
			else if (!INTEGRAL((yyvsp[(2) - (2)].expr)->type))
				(yyvsp[(2) - (2)].expr) = excast(expr.program, (yyvsp[(2) - (2)].expr), INTEGER, NiL, 0);
		unary:
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (2)].op), 1, (yyvsp[(2) - (2)].expr)->type == UNSIGNED ? INTEGER : (yyvsp[(2) - (2)].expr)->type, (yyvsp[(2) - (2)].expr), NiL);
			if ((yyvsp[(2) - (2)].expr)->op == CONSTANT)
			{
				(yyval.expr)->data.constant.value = exeval(expr.program, (yyval.expr), NiL);
				(yyval.expr)->binary = 0;
				(yyval.expr)->op = CONSTANT;
				exfreenode(expr.program, (yyvsp[(2) - (2)].expr));
			}
			else if (!BUILTIN((yyvsp[(2) - (2)].expr)->type)) {
				checkBinary(expr.program, (yyvsp[(2) - (2)].expr), (yyval.expr), 0);
			}
		}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 761 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(2) - (2)].id)->local.pointer == 0)
              			exerror("cannot apply '#' operator to non-array %s", (yyvsp[(2) - (2)].id)->name);
			(yyval.expr) = exnewnode(expr.program, '#', 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(2) - (2)].id);
		}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 768 "../../lib/expr/exparse.y"
    {
			goto iunary;
		}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 772 "../../lib/expr/exparse.y"
    {
			goto unary;
		}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 776 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(2) - (2)].expr);
		}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 780 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ADDRESS, 0, T((yyvsp[(2) - (2)].expr)->type), (yyvsp[(2) - (2)].expr), NiL);
		}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 784 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ARRAY, 1, T((yyvsp[(1) - (4)].id)->type), call(0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].expr)), (yyvsp[(3) - (4)].expr));
		}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 788 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, FUNCTION, 1, T((yyvsp[(1) - (4)].id)->type), call(0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].expr)), (yyvsp[(3) - (4)].expr));
		}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 792 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewsub (expr.program, (yyvsp[(3) - (4)].expr), GSUB);
		}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 796 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewsub (expr.program, (yyvsp[(3) - (4)].expr), SUB);
		}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 800 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewsubstr (expr.program, (yyvsp[(3) - (4)].expr));
		}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 804 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewsplit (expr.program, (yyvsp[(1) - (6)].id)->index, (yyvsp[(5) - (6)].id), (yyvsp[(3) - (6)].expr), NiL);
		}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 808 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewsplit (expr.program, (yyvsp[(1) - (8)].id)->index, (yyvsp[(5) - (8)].id), (yyvsp[(3) - (8)].expr), (yyvsp[(7) - (8)].expr));
		}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 812 "../../lib/expr/exparse.y"
    {
			if (!INTEGRAL((yyvsp[(3) - (4)].expr)->type))
				(yyvsp[(3) - (4)].expr) = excast(expr.program, (yyvsp[(3) - (4)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, EXIT, 1, INTEGER, (yyvsp[(3) - (4)].expr), NiL);
		}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 818 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, RAND, 0, FLOATING, NiL, NiL);
		}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 822 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, SRAND, 0, INTEGER, NiL, NiL);
		}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 826 "../../lib/expr/exparse.y"
    {
			if (!INTEGRAL((yyvsp[(3) - (4)].expr)->type))
				(yyvsp[(3) - (4)].expr) = excast(expr.program, (yyvsp[(3) - (4)].expr), INTEGER, NiL, 0);
			(yyval.expr) = exnewnode(expr.program, SRAND, 1, INTEGER, (yyvsp[(3) - (4)].expr), NiL);
		}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 832 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CALL, 1, (yyvsp[(1) - (4)].id)->type, NiL, (yyvsp[(3) - (4)].expr));
			(yyval.expr)->data.call.procedure = (yyvsp[(1) - (4)].id);
		}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 837 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exprint(expr.program, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].expr));
		}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 841 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (4)].id)->index, 0, (yyvsp[(1) - (4)].id)->type, NiL, NiL);
			if ((yyvsp[(3) - (4)].expr) && (yyvsp[(3) - (4)].expr)->data.operand.left->type == INTEGER)
			{
				(yyval.expr)->data.print.descriptor = (yyvsp[(3) - (4)].expr)->data.operand.left;
				(yyvsp[(3) - (4)].expr) = (yyvsp[(3) - (4)].expr)->data.operand.right;
			}
			else switch ((yyvsp[(1) - (4)].id)->index)
			{
			case QUERY:
				(yyval.expr)->data.print.descriptor = exnewnode(expr.program, CONSTANT, 0, INTEGER, NiL, NiL);
				(yyval.expr)->data.print.descriptor->data.constant.value.integer = 2;
				break;
			case PRINTF:
				(yyval.expr)->data.print.descriptor = exnewnode(expr.program, CONSTANT, 0, INTEGER, NiL, NiL);
				(yyval.expr)->data.print.descriptor->data.constant.value.integer = 1;
				break;
			case SPRINTF:
				(yyval.expr)->data.print.descriptor = 0;
				break;
			}
			(yyval.expr)->data.print.args = preprint((yyvsp[(3) - (4)].expr));
		}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 865 "../../lib/expr/exparse.y"
    {
			register Exnode_t*	x;

			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (4)].id)->index, 0, (yyvsp[(1) - (4)].id)->type, NiL, NiL);
			if ((yyvsp[(3) - (4)].expr) && (yyvsp[(3) - (4)].expr)->data.operand.left->type == INTEGER)
			{
				(yyval.expr)->data.scan.descriptor = (yyvsp[(3) - (4)].expr)->data.operand.left;
				(yyvsp[(3) - (4)].expr) = (yyvsp[(3) - (4)].expr)->data.operand.right;
			}
			else switch ((yyvsp[(1) - (4)].id)->index)
			{
			case SCANF:
				(yyval.expr)->data.scan.descriptor = 0;
				break;
			case SSCANF:
				if ((yyvsp[(3) - (4)].expr) && (yyvsp[(3) - (4)].expr)->data.operand.left->type == STRING)
				{
					(yyval.expr)->data.scan.descriptor = (yyvsp[(3) - (4)].expr)->data.operand.left;
					(yyvsp[(3) - (4)].expr) = (yyvsp[(3) - (4)].expr)->data.operand.right;
				}
				else
					exerror("%s: string argument expected", (yyvsp[(1) - (4)].id)->name);
				break;
			}
			if (!(yyvsp[(3) - (4)].expr) || !(yyvsp[(3) - (4)].expr)->data.operand.left || (yyvsp[(3) - (4)].expr)->data.operand.left->type != STRING)
				exerror("%s: format argument expected", (yyvsp[(1) - (4)].id)->name);
			(yyval.expr)->data.scan.format = (yyvsp[(3) - (4)].expr)->data.operand.left;
			for (x = (yyval.expr)->data.scan.args = (yyvsp[(3) - (4)].expr)->data.operand.right; x; x = x->data.operand.right)
			{
                if (x->data.operand.left->op != ADDRESS)
                    exerror("%s: address argument expected", (yyvsp[(1) - (4)].id)->name);
                x->data.operand.left = x->data.operand.left->data.operand.left;
			}
		}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 900 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(2) - (2)].expr))
			{
				if ((yyvsp[(1) - (2)].expr)->op == ID && !expr.program->disc->setf)
					exerror("%s: variable assignment not supported", (yyvsp[(1) - (2)].expr)->data.variable.symbol->name);
				else
				{
					if (!(yyvsp[(1) - (2)].expr)->type)
						(yyvsp[(1) - (2)].expr)->type = (yyvsp[(2) - (2)].expr)->type;
#if 0
					else if ((yyvsp[(2) - (2)].expr)->type != (yyvsp[(1) - (2)].expr)->type && (yyvsp[(1) - (2)].expr)->type >= 0200)
#else
					else if ((yyvsp[(2) - (2)].expr)->type != (yyvsp[(1) - (2)].expr)->type)
#endif
					{
						(yyvsp[(2) - (2)].expr)->type = (yyvsp[(1) - (2)].expr)->type;
						(yyvsp[(2) - (2)].expr)->data.operand.right = excast(expr.program, (yyvsp[(2) - (2)].expr)->data.operand.right, (yyvsp[(1) - (2)].expr)->type, NiL, 0);
					}
					(yyvsp[(2) - (2)].expr)->data.operand.left = (yyvsp[(1) - (2)].expr);
					(yyval.expr) = (yyvsp[(2) - (2)].expr);
				}
			}
		}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 924 "../../lib/expr/exparse.y"
    {
		pre:
			if ((yyvsp[(2) - (2)].expr)->type == STRING)
				exerror("++ and -- invalid for string variables");
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(1) - (2)].op), 0, (yyvsp[(2) - (2)].expr)->type, (yyvsp[(2) - (2)].expr), NiL);
			(yyval.expr)->subop = PRE;
		}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 932 "../../lib/expr/exparse.y"
    {
		pos:
			if ((yyvsp[(1) - (2)].expr)->type == STRING)
				exerror("++ and -- invalid for string variables");
			(yyval.expr) = exnewnode(expr.program, (yyvsp[(2) - (2)].op), 0, (yyvsp[(1) - (2)].expr)->type, (yyvsp[(1) - (2)].expr), NiL);
			(yyval.expr)->subop = POS;
		}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 940 "../../lib/expr/exparse.y"
    {
			if ((yyvsp[(3) - (3)].id)->local.pointer == 0)
              			exerror("cannot apply IN to non-array %s", (yyvsp[(3) - (3)].id)->name);
			if (((yyvsp[(3) - (3)].id)->index_type > 0) && ((yyvsp[(1) - (3)].expr)->type != (yyvsp[(3) - (3)].id)->index_type))
            		    exerror("%s indices must have type %s, not %s", 
				(yyvsp[(3) - (3)].id)->name, extypename(expr.program, (yyvsp[(3) - (3)].id)->index_type),extypename(expr.program, (yyvsp[(1) - (3)].expr)->type));
			(yyval.expr) = exnewnode(expr.program, IN_OP, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(3) - (3)].id);
			(yyval.expr)->data.variable.index = (yyvsp[(1) - (3)].expr);
		}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 951 "../../lib/expr/exparse.y"
    {
			goto pre;
		}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 955 "../../lib/expr/exparse.y"
    {
			goto pos;
		}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 965 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CONSTANT, 0, (yyvsp[(1) - (1)].id)->type, NiL, NiL);
			if (!expr.program->disc->reff)
				exerror("%s: identifier references not supported", (yyvsp[(1) - (1)].id)->name);
			else (yyval.expr)->data.constant.value = (*expr.program->disc->reff)(expr.program, (yyval.expr), (yyvsp[(1) - (1)].id), NiL, NiL, EX_SCALAR, expr.program->disc);
		}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 972 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CONSTANT, 0, FLOATING, NiL, NiL);
			(yyval.expr)->data.constant.value.floating = (yyvsp[(1) - (1)].floating);
		}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 977 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CONSTANT, 0, INTEGER, NiL, NiL);
			(yyval.expr)->data.constant.value.integer = (yyvsp[(1) - (1)].integer);
		}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 982 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CONSTANT, 0, STRING, NiL, NiL);
			(yyval.expr)->data.constant.value.string = (yyvsp[(1) - (1)].string);
		}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 987 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, CONSTANT, 0, UNSIGNED, NiL, NiL);
			(yyval.expr)->data.constant.value.integer = (yyvsp[(1) - (1)].integer);
		}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1003 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = makeVar(expr.program, (yyvsp[(1) - (2)].id), 0, 0, (yyvsp[(2) - (2)].reference));
		}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1007 "../../lib/expr/exparse.y"
    {
            Exnode_t*   n;

            n = exnewnode(expr.program, DYNAMIC, 0, (yyvsp[(1) - (3)].id)->type, NiL, NiL);
            n->data.variable.symbol = (yyvsp[(1) - (3)].id);
            n->data.variable.reference = 0;
            if (((n->data.variable.index = (yyvsp[(2) - (3)].expr)) == 0) != ((yyvsp[(1) - (3)].id)->local.pointer == 0))
              exerror("%s: is%s an array", (yyvsp[(1) - (3)].id)->name, (yyvsp[(1) - (3)].id)->local.pointer ? "" : " not");
			if ((yyvsp[(1) - (3)].id)->local.pointer && ((yyvsp[(1) - (3)].id)->index_type > 0)) {
				if ((yyvsp[(2) - (3)].expr)->type != (yyvsp[(1) - (3)].id)->index_type)
            		exerror("%s: indices must have type %s, not %s", 
						(yyvsp[(1) - (3)].id)->name, extypename(expr.program, (yyvsp[(1) - (3)].id)->index_type),extypename(expr.program, (yyvsp[(2) - (3)].expr)->type));
			}
			if ((yyvsp[(3) - (3)].reference)) {
              n->data.variable.dyna =exnewnode(expr.program, 0, 0, 0, NiL, NiL);
              (yyval.expr) = makeVar(expr.program, (yyvsp[(1) - (3)].id), (yyvsp[(2) - (3)].expr), n, (yyvsp[(3) - (3)].reference));
            }
            else (yyval.expr) = n;
		}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1027 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ID, 0, STRING, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(1) - (1)].id);
			(yyval.expr)->data.variable.reference = 0;
			(yyval.expr)->data.variable.index = 0;
			(yyval.expr)->data.variable.dyna = 0;
			if (!(expr.program->disc->flags & EX_UNDECLARED))
				exerror("unknown identifier");
		}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1039 "../../lib/expr/exparse.y"
    {
			(yyval.integer) = 0;
		}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1043 "../../lib/expr/exparse.y"
    {
			(yyval.integer) = -1;
		}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1047 "../../lib/expr/exparse.y"
    {
			/* If DECLARE is VOID, its type is 0, so this acts like
			 * the empty case.
			 */
			if (INTEGRAL((yyvsp[(2) - (3)].id)->type))
				(yyval.integer) = INTEGER;
			else
				(yyval.integer) = (yyvsp[(2) - (3)].id)->type;
				
		}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1060 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1064 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(2) - (3)].expr);
		}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1070 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1074 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = (yyvsp[(1) - (1)].expr)->data.operand.left;
			(yyvsp[(1) - (1)].expr)->data.operand.left = (yyvsp[(1) - (1)].expr)->data.operand.right = 0;
			exfreenode(expr.program, (yyvsp[(1) - (1)].expr));
		}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1082 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ',', 1, 0, exnewnode(expr.program, ',', 1, (yyvsp[(1) - (1)].expr)->type, (yyvsp[(1) - (1)].expr), NiL), NiL);
			(yyval.expr)->data.operand.right = (yyval.expr)->data.operand.left;
		}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1087 "../../lib/expr/exparse.y"
    {
			(yyvsp[(1) - (3)].expr)->data.operand.right = (yyvsp[(1) - (3)].expr)->data.operand.right->data.operand.right = exnewnode(expr.program, ',', 1, (yyvsp[(1) - (3)].expr)->type, (yyvsp[(3) - (3)].expr), NiL);
		}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1093 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1097 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
			if ((yyvsp[(1) - (1)].id)->type)
				exerror("(void) expected");
		}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1106 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ',', 1, (yyvsp[(1) - (1)].expr)->type, (yyvsp[(1) - (1)].expr), NiL);
		}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1110 "../../lib/expr/exparse.y"
    {
			register Exnode_t*	x;
			register Exnode_t*	y;

			(yyval.expr) = (yyvsp[(1) - (3)].expr);
			for (x = (yyvsp[(1) - (3)].expr); (y = x->data.operand.right); x = y);
			x->data.operand.right = exnewnode(expr.program, ',', 1, (yyvsp[(3) - (3)].expr)->type, (yyvsp[(3) - (3)].expr), NiL);
		}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1120 "../../lib/expr/exparse.y"
    {expr.declare=(yyvsp[(1) - (1)].id)->type;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1121 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, ID, 0, (yyvsp[(1) - (3)].id)->type, NiL, NiL);
			(yyval.expr)->data.variable.symbol = (yyvsp[(3) - (3)].id);
			(yyvsp[(3) - (3)].id)->lex = DYNAMIC;
			(yyvsp[(3) - (3)].id)->type = (yyvsp[(1) - (3)].id)->type;
			(yyvsp[(3) - (3)].id)->value = exnewnode(expr.program, 0, 0, 0, NiL, NiL);
			expr.procedure->data.procedure.arity++;
		}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1132 "../../lib/expr/exparse.y"
    {
			(yyval.reference) = expr.refs = expr.lastref = 0;
		}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1136 "../../lib/expr/exparse.y"
    {
			Exref_t*	r;

			r = ALLOCATE(expr.program, Exref_t);
			r->symbol = (yyvsp[(1) - (1)].id);
			expr.refs = r;
			expr.lastref = r;
			r->next = 0;
			r->index = 0;
			(yyval.reference) = expr.refs;
		}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1148 "../../lib/expr/exparse.y"
    {
			Exref_t*	r;
			Exref_t*	l;

			r = ALLOCATE(expr.program, Exref_t);
			r->symbol = (yyvsp[(3) - (3)].id);
			r->index = 0;
			r->next = 0;
			l = ALLOCATE(expr.program, Exref_t);
			l->symbol = (yyvsp[(2) - (3)].id);
			l->index = 0;
			l->next = r;
			expr.refs = l;
			expr.lastref = r;
			(yyval.reference) = expr.refs;
        }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1167 "../../lib/expr/exparse.y"
    {
			(yyval.id) = (yyvsp[(2) - (2)].id);
		}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1171 "../../lib/expr/exparse.y"
    {
			(yyval.id) = (yyvsp[(2) - (2)].id);
		}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1177 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = 0;
		}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1181 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = exnewnode(expr.program, '=', 1, (yyvsp[(2) - (2)].expr)->type, NiL, (yyvsp[(2) - (2)].expr));
			(yyval.expr)->subop = (yyvsp[(1) - (2)].op);
		}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1188 "../../lib/expr/exparse.y"
    {
				register Dtdisc_t*	disc;

				if (expr.procedure)
					exerror("no nested function definitions");
				expr.procedure = exnewnode(expr.program, PROCEDURE, 1, expr.declare, NiL, NiL);
				if (!(disc = newof(0, Dtdisc_t, 1, 0)))
					exerror("out of space [frame discipline]");
				disc->key = offsetof(Exid_t, name);
				if (!(expr.procedure->data.procedure.frame = dtopen(disc, Dtset)) || !dtview(expr.procedure->data.procedure.frame, expr.program->symbols))
					exerror("out of space [frame table]");
				expr.program->symbols = expr.program->frame = expr.procedure->data.procedure.frame;
				expr.program->formals = 1;
			}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1201 "../../lib/expr/exparse.y"
    {
				expr.program->formals = 0;
				expr.id->lex = PROCEDURE;
				expr.id->type = expr.declare;
			}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1206 "../../lib/expr/exparse.y"
    {
			(yyval.expr) = expr.procedure;
			expr.procedure = 0;
			if (expr.program->frame)
			{
				expr.program->symbols = expr.program->frame->view;
				dtview(expr.program->frame, NiL);
			}
			(yyval.expr)->data.operand.left = (yyvsp[(3) - (8)].expr);
			(yyval.expr)->data.operand.right = excast(expr.program, (yyvsp[(7) - (8)].expr), (yyval.expr)->type, NiL, 0);

			/*
			 * NOTE: procedure definition was slipped into the
			 *	 declaration initializer statement production,
			 *	 therefore requiring the statement terminator
			 */

			exunlex(expr.program, ';');
		}
    break;



/* Line 1455 of yacc.c  */
#line 3514 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1227 "../../lib/expr/exparse.y"


#include "exgram.h"

