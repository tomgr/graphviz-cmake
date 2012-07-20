
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

/* All symbols defined below should begin with gml or YY, to avoid
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
#line 14 "../../cmd/tools/gmlparse.y"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <arith.h>
#include <gml2gv.h>
#include <agxbuf.h>
#include <assert.h>

#define NEW(t)       (t*)malloc(sizeof(t))
#define N_NEW(n,t)   (t*)malloc((n)*sizeof(t))
#define RALLOC(size,ptr,type) ((type*)realloc(ptr,(size)*sizeof(type)))

typedef unsigned short ushort;

static gmlgraph* G;
static gmlnode* N;
static gmledge* E;
static Dt_t* L;
static Dt_t** liststk;
static int liststk_sz, liststk_cnt;
 
static void free_attr (Dt_t*d, gmlattr* p, Dtdisc_t* ds); /* forward decl */
static char* sortToStr (int sort);    /* forward decl */

static void
free_node (Dt_t*d, gmlnode* p, Dtdisc_t* ds)
{
    if (!p) return;
    if (p->attrlist) dtclose (p->attrlist);
    free (p);
}

static void
free_edge (Dt_t*d, gmledge* p, Dtdisc_t* ds)
{
    if (!p) return;
    if (p->attrlist) dtclose (p->attrlist);
    free (p);
}

static void
free_graph (Dt_t*d, gmlgraph* p, Dtdisc_t* ds)
{
    if (!p) return;
    if (p->nodelist)
	dtclose (p->nodelist);
    if (p->edgelist)
	dtclose (p->edgelist);
    if (p->attrlist)
	dtclose (p->attrlist);
    if (p->graphlist)
	dtclose (p->graphlist);
    free (p);
}

static Dtdisc_t nodeDisc = {
    offsetof(gmlnode,attrlist),
    sizeof(Dt_t*),
    offsetof(gmlnode,link),
    NIL(Dtmake_f),
    (Dtfree_f)free_node,
    NIL(Dtcompar_f),
    NIL(Dthash_f),
    NIL(Dtmemory_f),
    NIL(Dtevent_f)
};

static Dtdisc_t edgeDisc = {
    offsetof(gmledge,attrlist),
    sizeof(Dt_t*),
    offsetof(gmledge,link),
    NIL(Dtmake_f),
    (Dtfree_f)free_edge,
    NIL(Dtcompar_f),
    NIL(Dthash_f),
    NIL(Dtmemory_f),
    NIL(Dtevent_f)
};

static Dtdisc_t attrDisc = {
    offsetof(gmlattr,name),
    sizeof(char*),
    offsetof(gmlattr,link),
    NIL(Dtmake_f),
    (Dtfree_f)free_attr,
    NIL(Dtcompar_f),
    NIL(Dthash_f),
    NIL(Dtmemory_f),
    NIL(Dtevent_f)
};

static Dtdisc_t graphDisc = {
    offsetof(gmlgraph,nodelist),
    sizeof(Dt_t*),
    offsetof(gmlgraph,link),
    NIL(Dtmake_f),
    (Dtfree_f)free_graph,
    NIL(Dtcompar_f),
    NIL(Dthash_f),
    NIL(Dtmemory_f),
    NIL(Dtevent_f)
};

static void
initstk (void)
{
    liststk_sz = 10;
    liststk_cnt = 0;
    liststk = N_NEW(liststk_sz, Dt_t*);
}

static void
cleanup (void)
{
    int i;

    if (liststk) {
	for (i = 0; i < liststk_cnt; i++)
	    dtclose (liststk[i]);
	free (liststk);
	liststk = NULL;
    }
    if (L) {
	dtclose (L);
	L = NULL;
    }
    if (N) {
	free_node (0, N, 0);
	N = NULL;
    }
    if (E) {
	free_edge (0, E, 0);
	E = NULL;
    }
    if (G) {
	free_graph (0, G, 0);
	G = NULL;
    }
}

static void
pushAlist (void)
{
    Dt_t* lp = dtopen (&attrDisc, Dtqueue);

    if (L) {
	if (liststk_cnt == liststk_sz) {
	    liststk_sz *= 2;
	    liststk = RALLOC(liststk_sz, liststk, Dt_t*);
	}
	liststk[liststk_cnt++] = L;
    }
    L = lp;
}

static Dt_t*
popAlist (void)
{
    Dt_t* lp = L;

    if (liststk_cnt)
	L = liststk[--liststk_cnt];
    else
	L = NULL;

    return lp;
}

static void
popG (void)
{
    G = G->parent;
}

static void
pushG (void)
{
    gmlgraph* g = NEW(gmlgraph);

    g->attrlist = dtopen(&attrDisc, Dtqueue);
    g->nodelist = dtopen(&nodeDisc, Dtqueue);
    g->edgelist = dtopen(&edgeDisc, Dtqueue);
    g->graphlist = dtopen(&graphDisc, Dtqueue);
    g->parent = G;
    g->directed = -1;

    if (G)
	dtinsert (G->graphlist, g);

    G = g;
}

static gmlnode*
mkNode (void)
{
    gmlnode* np = NEW(gmlnode);
    np->attrlist = dtopen (&attrDisc, Dtqueue);
    np->id = NULL;
    return np;
}

static gmledge*
mkEdge (void)
{
    gmledge* ep = NEW(gmledge);
    ep->attrlist = dtopen (&attrDisc, Dtqueue);
    ep->source = NULL;
    ep->target = NULL;
    return ep;
}

static gmlattr*
mkAttr (char* name, int sort, int kind, char* str, Dt_t* list)
{
    gmlattr* gp = NEW(gmlattr);

    assert (name || sort);
    if (!name)
	name = strdup (sortToStr (sort));
    gp->sort = sort;
    gp->kind = kind;
    gp->name = name;
    if (str)
	gp->u.value = str;
    else {
	if (dtsize (list) == 0) {
	    dtclose (list);
	    list = 0;
	}
	gp->u.lp = list;
    }
/* fprintf (stderr, "[%x] %d %d \"%s\" \"%s\" \n", gp, sort, kind, (name?name:""),  (str?str:"")); */
    return gp;
}

static int
setDir (char* d)
{
    gmlgraph* g;
    int dir = atoi (d);

    free (d);
    if (dir < 0) dir = -1;
    else if (dir > 0) dir = 1;
    else dir = 0;
    G->directed = dir;

    if (dir >= 0) {
	for (g = G->parent; g; g = g->parent) {
	    if (g->directed < 0)
		g->directed = dir;
	    else if (g->directed != dir)
		return 1;
        }
    }

    return 0;
}



/* Line 189 of yacc.c  */
#line 336 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 275 "../../cmd/tools/gmlparse.y"

    int i;
    char *str;
    gmlnode* np;
    gmledge* ep;
    gmlattr* ap;
    Dt_t*    list;



/* Line 214 of yacc.c  */
#line 451 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define gmlstype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 463 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 gmltype_uint8;
#else
typedef unsigned char gmltype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 gmltype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char gmltype_int8;
#else
typedef short int gmltype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 gmltype_uint16;
#else
typedef unsigned short int gmltype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 gmltype_int16;
#else
typedef short int gmltype_int16;
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
YYID (int gmli)
#else
static int
YYID (gmli)
    int gmli;
#endif
{
  return gmli;
}
#endif

#if ! defined gmloverflow || YYERROR_VERBOSE

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
#endif /* ! defined gmloverflow || YYERROR_VERBOSE */


#if (! defined gmloverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union gmlalloc
{
  gmltype_int16 gmlss_alloc;
  YYSTYPE gmlvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union gmlalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (gmltype_int16) + sizeof (YYSTYPE)) \
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
	  YYSIZE_T gmli;				\
	  for (gmli = 0; gmli < (Count); gmli++)	\
	    (To)[gmli] = (From)[gmli];		\
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
	YYSIZE_T gmlnewbytes;						\
	YYCOPY (&gmlptr->Stack_alloc, Stack, gmlsize);			\
	Stack = &gmlptr->Stack_alloc;					\
	gmlnewbytes = gmlstacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	gmlptr += gmlnewbytes / sizeof (*gmlptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  98

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? gmltranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const gmltype_uint8 gmltranslate[] =
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
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const gmltype_uint8 gmlprhs[] =
{
       0,     0,     3,     7,     9,    10,    12,    16,    18,    19,
      22,    24,    26,    28,    31,    34,    37,    39,    40,    46,
      49,    51,    54,    56,    57,    63,    66,    68,    71,    74,
      76,    77,    82,    84,    85,    88,    90,    93,    96,    99,
     102,   105,   108,   111,   114,   117,   120,   123,   126,   129,
     132,   135,   138,   141,   144,   147,   150,   153,   156,   159,
     162
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const gmltype_int8 gmlrhs[] =
{
      38,     0,    -1,    54,    39,    40,    -1,     1,    -1,    -1,
       3,    -1,    35,    41,    36,    -1,    42,    -1,    -1,    42,
      43,    -1,    43,    -1,    44,    -1,    48,    -1,    39,    40,
      -1,     6,    30,    -1,     7,    30,    -1,    56,    -1,    -1,
       4,    45,    35,    46,    36,    -1,    46,    47,    -1,    47,
      -1,     7,    30,    -1,    56,    -1,    -1,     5,    49,    35,
      50,    36,    -1,    50,    51,    -1,    51,    -1,     8,    30,
      -1,     9,    30,    -1,    56,    -1,    -1,    35,    53,    54,
      36,    -1,    55,    -1,    -1,    55,    56,    -1,    56,    -1,
      33,    30,    -1,    33,    31,    -1,    33,    32,    -1,    33,
      52,    -1,    10,    31,    -1,    11,    31,    -1,    12,    31,
      -1,    13,    31,    -1,    14,    32,    -1,    15,    52,    -1,
      16,    52,    -1,    17,    32,    -1,    18,    32,    -1,    19,
      32,    -1,    20,    32,    -1,    21,    30,    -1,    22,    30,
      -1,    23,    32,    -1,    23,    52,    -1,    24,    52,    -1,
      25,    52,    -1,    26,    32,    -1,    28,    32,    -1,    27,
      30,    -1,    29,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const gmltype_uint16 gmlrline[] =
{
       0,   298,   298,   299,   300,   303,   306,   309,   310,   313,
     314,   317,   318,   319,   320,   327,   328,   331,   331,   334,
     335,   338,   339,   342,   342,   345,   346,   349,   350,   351,
     354,   354,   357,   358,   361,   362,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const gmltname[] =
{
  "$end", "error", "$undefined", "GRAPH", "NODE", "EDGE", "DIRECTED",
  "ID", "SOURCE", "TARGET", "XVAL", "YVAL", "WVAL", "HVAL", "LABEL",
  "GRAPHICS", "LABELGRAPHICS", "TYPE", "FILL", "OUTLINE", "OUTLINESTYLE",
  "OUTLINEWIDTH", "WIDTH", "STYLE", "LINE", "POINT", "TEXT", "FONTSIZE",
  "FONTNAME", "COLOR", "INTEGER", "REAL", "STRING", "NAME", "LIST", "'['",
  "']'", "$accept", "graph", "hdr", "body", "optglist", "glist",
  "glistitem", "node", "$@1", "nlist", "nlistitem", "edge", "$@2", "elist",
  "elistitem", "attrlist", "$@3", "optalist", "alist", "alistitem", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const gmltype_uint16 gmltoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const gmltype_uint8 gmlr1[] =
{
       0,    37,    38,    38,    38,    39,    40,    41,    41,    42,
      42,    43,    43,    43,    43,    43,    43,    45,    44,    46,
      46,    47,    47,    49,    48,    50,    50,    51,    51,    51,
      53,    52,    54,    54,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const gmltype_uint8 gmlr2[] =
{
       0,     2,     3,     1,     0,     1,     3,     1,     0,     2,
       1,     1,     1,     2,     2,     2,     1,     0,     5,     2,
       1,     2,     1,     0,     5,     2,     1,     2,     2,     1,
       0,     4,     1,     0,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const gmltype_uint8 gmldefact[] =
{
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    35,    40,    41,    42,
      43,    44,    30,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    59,    58,    60,    36,
      37,    38,    39,     1,     5,     0,    34,    33,     8,     2,
       0,    17,    23,     0,     0,     0,     0,     7,    10,    11,
      12,    16,    31,     0,     0,    14,    15,    13,     6,     9,
       0,     0,     0,     0,    20,    22,     0,     0,     0,    26,
      29,    21,    18,    19,    27,    28,    24,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const gmltype_int8 gmldefgoto[] =
{
      -1,    23,    65,    59,    66,    67,    68,    69,    73,    83,
      84,    70,    74,    88,    89,    33,    57,    24,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const gmltype_int16 gmlpact[] =
{
       1,   -30,   -26,   -24,   -23,   -22,     0,     2,     2,     3,
       4,     9,    11,   -20,    14,   -29,     2,     2,    17,    20,
      21,    22,    16,    52,    54,   191,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,    24,   -30,   191,    61,   -30,
      25,   -30,   -30,    30,    32,    24,    33,    61,   -30,   -30,
     -30,   -30,   -30,    35,    56,   -30,   -30,   -30,   -30,   -30,
     141,   167,    63,    85,   -30,   -30,    86,    87,   114,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30
};

/* YYPGOTO[NTERM-NUM].  */
static const gmltype_int8 gmlpgoto[] =
{
     -30,   -30,    91,    55,   -30,   -30,    77,   -30,   -30,   -30,
      36,   -30,   -30,   -30,    57,    23,   -30,    89,   -30,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const gmltype_int8 gmltable[] =
{
      56,    -4,     1,    41,   -33,    27,    32,    28,    29,    30,
      39,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    34,    31,    71,    22,    35,    36,    32,    42,    43,
      44,    37,    71,    38,    40,    52,    49,    50,    51,    45,
      46,    32,    53,    47,    48,    85,    90,    54,    85,    58,
      75,    72,    76,    90,    54,    61,    62,    63,    64,    78,
      80,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    81,    82,    91,    22,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    55,    94,    95,    22,    93,
      77,    92,    86,    87,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    79,    97,    60,    22,    82,     0,
      96,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,    86,    87,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22
};

static const gmltype_int8 gmlcheck[] =
{
      25,     0,     1,    32,     3,    31,    35,    31,    31,    31,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     8,    32,    58,    33,    32,    32,    35,    15,    16,
      17,    32,    67,    32,    30,    22,    30,    31,    32,    32,
      30,    35,     0,    32,    32,    80,    81,     3,    83,    35,
      30,    36,    30,    88,     3,     4,     5,     6,     7,    36,
      35,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    35,     7,    30,    33,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    24,    30,    30,    33,    83,
      65,    36,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    67,    88,    57,    33,     7,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    33,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const gmltype_uint8 gmlstos[] =
{
       0,     1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    33,    38,    54,    55,    56,    31,    31,    31,
      31,    32,    35,    52,    52,    32,    32,    32,    32,    30,
      30,    32,    52,    52,    52,    32,    30,    32,    32,    30,
      31,    32,    52,     0,     3,    39,    56,    53,    35,    40,
      54,     4,     5,     6,     7,    39,    41,    42,    43,    44,
      48,    56,    36,    45,    49,    30,    30,    40,    36,    43,
      35,    35,     7,    46,    47,    56,     8,     9,    50,    51,
      56,    30,    36,    47,    30,    30,    36,    51
};

#define gmlerrok		(gmlerrstatus = 0)
#define gmlclearin	(gmlchar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto gmlacceptlab
#define YYABORT		goto gmlabortlab
#define YYERROR		goto gmlerrorlab


/* Like YYERROR except do call gmlerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto gmlerrlab

#define YYRECOVERING()  (!!gmlerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (gmlchar == YYEMPTY && gmllen == 1)				\
    {								\
      gmlchar = (Token);						\
      gmllval = (Value);						\
      gmltoken = YYTRANSLATE (gmlchar);				\
      YYPOPSTACK (1);						\
      goto gmlbackup;						\
    }								\
  else								\
    {								\
      gmlerror (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `gmllex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX gmllex (YYLEX_PARAM)
#else
# define YYLEX gmllex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (gmldebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (gmldebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      gml_symbol_print (stderr,						  \
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
gml_symbol_value_print (FILE *gmloutput, int gmltype, YYSTYPE const * const gmlvaluep)
#else
static void
gml_symbol_value_print (gmloutput, gmltype, gmlvaluep)
    FILE *gmloutput;
    int gmltype;
    YYSTYPE const * const gmlvaluep;
#endif
{
  if (!gmlvaluep)
    return;
# ifdef YYPRINT
  if (gmltype < YYNTOKENS)
    YYPRINT (gmloutput, gmltoknum[gmltype], *gmlvaluep);
# else
  YYUSE (gmloutput);
# endif
  switch (gmltype)
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
gml_symbol_print (FILE *gmloutput, int gmltype, YYSTYPE const * const gmlvaluep)
#else
static void
gml_symbol_print (gmloutput, gmltype, gmlvaluep)
    FILE *gmloutput;
    int gmltype;
    YYSTYPE const * const gmlvaluep;
#endif
{
  if (gmltype < YYNTOKENS)
    YYFPRINTF (gmloutput, "token %s (", gmltname[gmltype]);
  else
    YYFPRINTF (gmloutput, "nterm %s (", gmltname[gmltype]);

  gml_symbol_value_print (gmloutput, gmltype, gmlvaluep);
  YYFPRINTF (gmloutput, ")");
}

/*------------------------------------------------------------------.
| gml_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
gml_stack_print (gmltype_int16 *gmlbottom, gmltype_int16 *gmltop)
#else
static void
gml_stack_print (gmlbottom, gmltop)
    gmltype_int16 *gmlbottom;
    gmltype_int16 *gmltop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; gmlbottom <= gmltop; gmlbottom++)
    {
      int gmlbot = *gmlbottom;
      YYFPRINTF (stderr, " %d", gmlbot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (gmldebug)							\
    gml_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
gml_reduce_print (YYSTYPE *gmlvsp, int gmlrule)
#else
static void
gml_reduce_print (gmlvsp, gmlrule)
    YYSTYPE *gmlvsp;
    int gmlrule;
#endif
{
  int gmlnrhs = gmlr2[gmlrule];
  int gmli;
  unsigned long int gmllno = gmlrline[gmlrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     gmlrule - 1, gmllno);
  /* The symbols being reduced.  */
  for (gmli = 0; gmli < gmlnrhs; gmli++)
    {
      YYFPRINTF (stderr, "   $%d = ", gmli + 1);
      gml_symbol_print (stderr, gmlrhs[gmlprhs[gmlrule] + gmli],
		       &(gmlvsp[(gmli + 1) - (gmlnrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (gmldebug)				\
    gml_reduce_print (gmlvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int gmldebug;
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

# ifndef gmlstrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define gmlstrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
gmlstrlen (const char *gmlstr)
#else
static YYSIZE_T
gmlstrlen (gmlstr)
    const char *gmlstr;
#endif
{
  YYSIZE_T gmllen;
  for (gmllen = 0; gmlstr[gmllen]; gmllen++)
    continue;
  return gmllen;
}
#  endif
# endif

# ifndef gmlstpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define gmlstpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
gmlstpcpy (char *gmldest, const char *gmlsrc)
#else
static char *
gmlstpcpy (gmldest, gmlsrc)
    char *gmldest;
    const char *gmlsrc;
#endif
{
  char *gmld = gmldest;
  const char *gmls = gmlsrc;

  while ((*gmld++ = *gmls++) != '\0')
    continue;

  return gmld - 1;
}
#  endif
# endif

# ifndef gmltnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for gmlerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from gmltname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
gmltnamerr (char *gmlres, const char *gmlstr)
{
  if (*gmlstr == '"')
    {
      YYSIZE_T gmln = 0;
      char const *gmlp = gmlstr;

      for (;;)
	switch (*++gmlp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++gmlp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (gmlres)
	      gmlres[gmln] = *gmlp;
	    gmln++;
	    break;

	  case '"':
	    if (gmlres)
	      gmlres[gmln] = '\0';
	    return gmln;
	  }
    do_not_strip_quotes: ;
    }

  if (! gmlres)
    return gmlstrlen (gmlstr);

  return gmlstpcpy (gmlres, gmlstr) - gmlres;
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
gmlsyntax_error (char *gmlresult, int gmlstate, int gmlchar)
{
  int gmln = gmlpact[gmlstate];

  if (! (YYPACT_NINF < gmln && gmln <= YYLAST))
    return 0;
  else
    {
      int gmltype = YYTRANSLATE (gmlchar);
      YYSIZE_T gmlsize0 = gmltnamerr (0, gmltname[gmltype]);
      YYSIZE_T gmlsize = gmlsize0;
      YYSIZE_T gmlsize1;
      int gmlsize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *gmlarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int gmlx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *gmlfmt;
      char const *gmlf;
      static char const gmlunexpected[] = "syntax error, unexpected %s";
      static char const gmlexpecting[] = ", expecting %s";
      static char const gmlor[] = " or %s";
      char gmlformat[sizeof gmlunexpected
		    + sizeof gmlexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof gmlor - 1))];
      char const *gmlprefix = gmlexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int gmlxbegin = gmln < 0 ? -gmln : 0;

      /* Stay within bounds of both gmlcheck and gmltname.  */
      int gmlchecklim = YYLAST - gmln + 1;
      int gmlxend = gmlchecklim < YYNTOKENS ? gmlchecklim : YYNTOKENS;
      int gmlcount = 1;

      gmlarg[0] = gmltname[gmltype];
      gmlfmt = gmlstpcpy (gmlformat, gmlunexpected);

      for (gmlx = gmlxbegin; gmlx < gmlxend; ++gmlx)
	if (gmlcheck[gmlx + gmln] == gmlx && gmlx != YYTERROR)
	  {
	    if (gmlcount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		gmlcount = 1;
		gmlsize = gmlsize0;
		gmlformat[sizeof gmlunexpected - 1] = '\0';
		break;
	      }
	    gmlarg[gmlcount++] = gmltname[gmlx];
	    gmlsize1 = gmlsize + gmltnamerr (0, gmltname[gmlx]);
	    gmlsize_overflow |= (gmlsize1 < gmlsize);
	    gmlsize = gmlsize1;
	    gmlfmt = gmlstpcpy (gmlfmt, gmlprefix);
	    gmlprefix = gmlor;
	  }

      gmlf = YY_(gmlformat);
      gmlsize1 = gmlsize + gmlstrlen (gmlf);
      gmlsize_overflow |= (gmlsize1 < gmlsize);
      gmlsize = gmlsize1;

      if (gmlsize_overflow)
	return YYSIZE_MAXIMUM;

      if (gmlresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *gmlp = gmlresult;
	  int gmli = 0;
	  while ((*gmlp = *gmlf) != '\0')
	    {
	      if (*gmlp == '%' && gmlf[1] == 's' && gmli < gmlcount)
		{
		  gmlp += gmltnamerr (gmlp, gmlarg[gmli++]);
		  gmlf += 2;
		}
	      else
		{
		  gmlp++;
		  gmlf++;
		}
	    }
	}
      return gmlsize;
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
gmldestruct (const char *gmlmsg, int gmltype, YYSTYPE *gmlvaluep)
#else
static void
gmldestruct (gmlmsg, gmltype, gmlvaluep)
    const char *gmlmsg;
    int gmltype;
    YYSTYPE *gmlvaluep;
#endif
{
  YYUSE (gmlvaluep);

  if (!gmlmsg)
    gmlmsg = "Deleting";
  YY_SYMBOL_PRINT (gmlmsg, gmltype, gmlvaluep, gmllocationp);

  switch (gmltype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int gmlparse (void *YYPARSE_PARAM);
#else
int gmlparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int gmlparse (void);
#else
int gmlparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int gmlchar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE gmllval;

/* Number of syntax errors so far.  */
int gmlnerrs;



/*-------------------------.
| gmlparse or gmlpush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
gmlparse (void *YYPARSE_PARAM)
#else
int
gmlparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
gmlparse (void)
#else
int
gmlparse ()

#endif
#endif
{


    int gmlstate;
    /* Number of tokens to shift before error messages enabled.  */
    int gmlerrstatus;

    /* The stacks and their tools:
       `gmlss': related to states.
       `gmlvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow gmloverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    gmltype_int16 gmlssa[YYINITDEPTH];
    gmltype_int16 *gmlss;
    gmltype_int16 *gmlssp;

    /* The semantic value stack.  */
    YYSTYPE gmlvsa[YYINITDEPTH];
    YYSTYPE *gmlvs;
    YYSTYPE *gmlvsp;

    YYSIZE_T gmlstacksize;

  int gmln;
  int gmlresult;
  /* Lookahead token as an internal (translated) token number.  */
  int gmltoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE gmlval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char gmlmsgbuf[128];
  char *gmlmsg = gmlmsgbuf;
  YYSIZE_T gmlmsg_alloc = sizeof gmlmsgbuf;
#endif

#define YYPOPSTACK(N)   (gmlvsp -= (N), gmlssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int gmllen = 0;

  gmltoken = 0;
  gmlss = gmlssa;
  gmlvs = gmlvsa;
  gmlstacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  gmlstate = 0;
  gmlerrstatus = 0;
  gmlnerrs = 0;
  gmlchar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  gmlssp = gmlss;
  gmlvsp = gmlvs;

  goto gmlsetstate;

/*------------------------------------------------------------.
| gmlnewstate -- Push a new state, which is found in gmlstate.  |
`------------------------------------------------------------*/
 gmlnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  gmlssp++;

 gmlsetstate:
  *gmlssp = gmlstate;

  if (gmlss + gmlstacksize - 1 <= gmlssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T gmlsize = gmlssp - gmlss + 1;

#ifdef gmloverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *gmlvs1 = gmlvs;
	gmltype_int16 *gmlss1 = gmlss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if gmloverflow is a macro.  */
	gmloverflow (YY_("memory exhausted"),
		    &gmlss1, gmlsize * sizeof (*gmlssp),
		    &gmlvs1, gmlsize * sizeof (*gmlvsp),
		    &gmlstacksize);

	gmlss = gmlss1;
	gmlvs = gmlvs1;
      }
#else /* no gmloverflow */
# ifndef YYSTACK_RELOCATE
      goto gmlexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= gmlstacksize)
	goto gmlexhaustedlab;
      gmlstacksize *= 2;
      if (YYMAXDEPTH < gmlstacksize)
	gmlstacksize = YYMAXDEPTH;

      {
	gmltype_int16 *gmlss1 = gmlss;
	union gmlalloc *gmlptr =
	  (union gmlalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (gmlstacksize));
	if (! gmlptr)
	  goto gmlexhaustedlab;
	YYSTACK_RELOCATE (gmlss_alloc, gmlss);
	YYSTACK_RELOCATE (gmlvs_alloc, gmlvs);
#  undef YYSTACK_RELOCATE
	if (gmlss1 != gmlssa)
	  YYSTACK_FREE (gmlss1);
      }
# endif
#endif /* no gmloverflow */

      gmlssp = gmlss + gmlsize - 1;
      gmlvsp = gmlvs + gmlsize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) gmlstacksize));

      if (gmlss + gmlstacksize - 1 <= gmlssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", gmlstate));

  if (gmlstate == YYFINAL)
    YYACCEPT;

  goto gmlbackup;

/*-----------.
| gmlbackup.  |
`-----------*/
gmlbackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  gmln = gmlpact[gmlstate];
  if (gmln == YYPACT_NINF)
    goto gmldefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (gmlchar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      gmlchar = YYLEX;
    }

  if (gmlchar <= YYEOF)
    {
      gmlchar = gmltoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      gmltoken = YYTRANSLATE (gmlchar);
      YY_SYMBOL_PRINT ("Next token is", gmltoken, &gmllval, &gmllloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  gmln += gmltoken;
  if (gmln < 0 || YYLAST < gmln || gmlcheck[gmln] != gmltoken)
    goto gmldefault;
  gmln = gmltable[gmln];
  if (gmln <= 0)
    {
      if (gmln == 0 || gmln == YYTABLE_NINF)
	goto gmlerrlab;
      gmln = -gmln;
      goto gmlreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (gmlerrstatus)
    gmlerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", gmltoken, &gmllval, &gmllloc);

  /* Discard the shifted token.  */
  gmlchar = YYEMPTY;

  gmlstate = gmln;
  *++gmlvsp = gmllval;

  goto gmlnewstate;


/*-----------------------------------------------------------.
| gmldefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
gmldefault:
  gmln = gmldefact[gmlstate];
  if (gmln == 0)
    goto gmlerrlab;
  goto gmlreduce;


/*-----------------------------.
| gmlreduce -- Do a reduction.  |
`-----------------------------*/
gmlreduce:
  /* gmln is the number of a rule to reduce with.  */
  gmllen = gmlr2[gmln];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  gmlval = gmlvsp[1-gmllen];


  YY_REDUCE_PRINT (gmln);
  switch (gmln)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 298 "../../cmd/tools/gmlparse.y"
    {gmllexeof(); if (G->parent) popG(); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 299 "../../cmd/tools/gmlparse.y"
    { cleanup(); YYABORT; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 303 "../../cmd/tools/gmlparse.y"
    { pushG(); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 317 "../../cmd/tools/gmlparse.y"
    { dtinsert (G->nodelist, (gmlvsp[(1) - (1)].np)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 318 "../../cmd/tools/gmlparse.y"
    { dtinsert (G->edgelist, (gmlvsp[(1) - (1)].ep)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 320 "../../cmd/tools/gmlparse.y"
    { 
		if (setDir((gmlvsp[(2) - (2)].str))) { 
		    gmlerror("mixed directed and undirected graphs"); 
		    cleanup ();
		    YYABORT;
		}
	  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 327 "../../cmd/tools/gmlparse.y"
    {/* FIX */}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 328 "../../cmd/tools/gmlparse.y"
    { dtinsert (G->attrlist, (gmlvsp[(1) - (1)].ap)); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 331 "../../cmd/tools/gmlparse.y"
    { N = mkNode(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 331 "../../cmd/tools/gmlparse.y"
    { (gmlval.np) = N; N = NULL; }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 338 "../../cmd/tools/gmlparse.y"
    { N->id = (gmlvsp[(2) - (2)].str); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 339 "../../cmd/tools/gmlparse.y"
    { dtinsert (N->attrlist, (gmlvsp[(1) - (1)].ap)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 342 "../../cmd/tools/gmlparse.y"
    { E = mkEdge(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 342 "../../cmd/tools/gmlparse.y"
    { (gmlval.ep) = E; E = NULL; }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 349 "../../cmd/tools/gmlparse.y"
    { E->source = (gmlvsp[(2) - (2)].str); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 350 "../../cmd/tools/gmlparse.y"
    { E->target = (gmlvsp[(2) - (2)].str); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 351 "../../cmd/tools/gmlparse.y"
    { dtinsert (E->attrlist, (gmlvsp[(1) - (1)].ap)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 354 "../../cmd/tools/gmlparse.y"
    {pushAlist(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 354 "../../cmd/tools/gmlparse.y"
    { (gmlval.list) = popAlist(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 361 "../../cmd/tools/gmlparse.y"
    { dtinsert (L, (gmlvsp[(2) - (2)].ap)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 362 "../../cmd/tools/gmlparse.y"
    { dtinsert (L, (gmlvsp[(1) - (1)].ap)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 365 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr ((gmlvsp[(1) - (2)].str), 0, INTEGER, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 366 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr ((gmlvsp[(1) - (2)].str), 0, REAL, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 367 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr ((gmlvsp[(1) - (2)].str), 0, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 368 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr ((gmlvsp[(1) - (2)].str), 0, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 369 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, XVAL, REAL, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 370 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, YVAL, REAL, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 371 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, WVAL, REAL, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 372 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, HVAL, REAL, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 373 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, LABEL, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 374 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, GRAPHICS, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 375 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, LABELGRAPHICS, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 376 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, TYPE, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 377 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, FILL, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 378 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, OUTLINE, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 379 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, OUTLINESTYLE, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 380 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, OUTLINEWIDTH, INTEGER, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 381 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, OUTLINEWIDTH, INTEGER, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 382 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, STYLE, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 383 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, STYLE, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 384 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, LINE, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 385 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, POINT, LIST, 0, (gmlvsp[(2) - (2)].list)); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 386 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, TEXT, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 387 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, FONTNAME, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 388 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, FONTNAME, INTEGER, (gmlvsp[(2) - (2)].str), 0); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 389 "../../cmd/tools/gmlparse.y"
    { (gmlval.ap) = mkAttr (0, COLOR, STRING, (gmlvsp[(2) - (2)].str), 0); }
    break;



/* Line 1455 of yacc.c  */
#line 2093 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", gmlr1[gmln], &gmlval, &gmlloc);

  YYPOPSTACK (gmllen);
  gmllen = 0;
  YY_STACK_PRINT (gmlss, gmlssp);

  *++gmlvsp = gmlval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  gmln = gmlr1[gmln];

  gmlstate = gmlpgoto[gmln - YYNTOKENS] + *gmlssp;
  if (0 <= gmlstate && gmlstate <= YYLAST && gmlcheck[gmlstate] == *gmlssp)
    gmlstate = gmltable[gmlstate];
  else
    gmlstate = gmldefgoto[gmln - YYNTOKENS];

  goto gmlnewstate;


/*------------------------------------.
| gmlerrlab -- here on detecting error |
`------------------------------------*/
gmlerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!gmlerrstatus)
    {
      ++gmlnerrs;
#if ! YYERROR_VERBOSE
      gmlerror (YY_("syntax error"));
#else
      {
	YYSIZE_T gmlsize = gmlsyntax_error (0, gmlstate, gmlchar);
	if (gmlmsg_alloc < gmlsize && gmlmsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T gmlalloc = 2 * gmlsize;
	    if (! (gmlsize <= gmlalloc && gmlalloc <= YYSTACK_ALLOC_MAXIMUM))
	      gmlalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (gmlmsg != gmlmsgbuf)
	      YYSTACK_FREE (gmlmsg);
	    gmlmsg = (char *) YYSTACK_ALLOC (gmlalloc);
	    if (gmlmsg)
	      gmlmsg_alloc = gmlalloc;
	    else
	      {
		gmlmsg = gmlmsgbuf;
		gmlmsg_alloc = sizeof gmlmsgbuf;
	      }
	  }

	if (0 < gmlsize && gmlsize <= gmlmsg_alloc)
	  {
	    (void) gmlsyntax_error (gmlmsg, gmlstate, gmlchar);
	    gmlerror (gmlmsg);
	  }
	else
	  {
	    gmlerror (YY_("syntax error"));
	    if (gmlsize != 0)
	      goto gmlexhaustedlab;
	  }
      }
#endif
    }



  if (gmlerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (gmlchar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (gmlchar == YYEOF)
	    YYABORT;
	}
      else
	{
	  gmldestruct ("Error: discarding",
		      gmltoken, &gmllval);
	  gmlchar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto gmlerrlab1;


/*---------------------------------------------------.
| gmlerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
gmlerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label gmlerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto gmlerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (gmllen);
  gmllen = 0;
  YY_STACK_PRINT (gmlss, gmlssp);
  gmlstate = *gmlssp;
  goto gmlerrlab1;


/*-------------------------------------------------------------.
| gmlerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
gmlerrlab1:
  gmlerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      gmln = gmlpact[gmlstate];
      if (gmln != YYPACT_NINF)
	{
	  gmln += YYTERROR;
	  if (0 <= gmln && gmln <= YYLAST && gmlcheck[gmln] == YYTERROR)
	    {
	      gmln = gmltable[gmln];
	      if (0 < gmln)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (gmlssp == gmlss)
	YYABORT;


      gmldestruct ("Error: popping",
		  gmlstos[gmlstate], gmlvsp);
      YYPOPSTACK (1);
      gmlstate = *gmlssp;
      YY_STACK_PRINT (gmlss, gmlssp);
    }

  *++gmlvsp = gmllval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", gmlstos[gmln], gmlvsp, gmllsp);

  gmlstate = gmln;
  goto gmlnewstate;


/*-------------------------------------.
| gmlacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
gmlacceptlab:
  gmlresult = 0;
  goto gmlreturn;

/*-----------------------------------.
| gmlabortlab -- YYABORT comes here.  |
`-----------------------------------*/
gmlabortlab:
  gmlresult = 1;
  goto gmlreturn;

#if !defined(gmloverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| gmlexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
gmlexhaustedlab:
  gmlerror (YY_("memory exhausted"));
  gmlresult = 2;
  /* Fall through.  */
#endif

gmlreturn:
  if (gmlchar != YYEMPTY)
     gmldestruct ("Cleanup: discarding lookahead",
		 gmltoken, &gmllval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (gmllen);
  YY_STACK_PRINT (gmlss, gmlssp);
  while (gmlssp != gmlss)
    {
      gmldestruct ("Cleanup: popping",
		  gmlstos[*gmlssp], gmlvsp);
      YYPOPSTACK (1);
    }
#ifndef gmloverflow
  if (gmlss != gmlssa)
    YYSTACK_FREE (gmlss);
#endif
#if YYERROR_VERBOSE
  if (gmlmsg != gmlmsgbuf)
    YYSTACK_FREE (gmlmsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (gmlresult);
}



/* Line 1675 of yacc.c  */
#line 392 "../../cmd/tools/gmlparse.y"


static void
free_attr (Dt_t*d, gmlattr* p, Dtdisc_t* ds)
{
    if (!p) return;
    if ((p->kind == LIST) && p->u.lp)
	dtclose (p->u.lp);
    else
	free (p->u.value);
    free (p->name);
    free (p);
}

static void deparseList (Dt_t* alist, agxbuf* xb); /* forward declaration */

static void
deparseAttr (gmlattr* ap, agxbuf* xb)
{
    if (ap->kind == LIST) {
	agxbput (xb, ap->name);
	agxbputc (xb, ' ');
	deparseList (ap->u.lp, xb);
    }
    else if (ap->kind == STRING) {
	agxbput (xb, ap->name);
	agxbput (xb, " \"");
	agxbput (xb, ap->u.value);
	agxbput (xb, "\"");
    }
    else {
	agxbput (xb, ap->name);
	agxbputc (xb, ' ');
	agxbput (xb, ap->u.value);
    }
}

static void
deparseList (Dt_t* alist, agxbuf* xb)
{
    gmlattr* ap;

    agxbput (xb, "[ "); 
    if (alist) for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	deparseAttr (ap, xb);
	agxbputc (xb, ' ');
    }
    agxbput (xb, "]"); 
  
}

static void
unknown (Agobj_t* obj, gmlattr* ap, agxbuf* xb)
{
    char* str;

    if (ap->kind == LIST) {
	deparseList (ap->u.lp, xb);
	str = agxbuse (xb);
    }
    else
	str = ap->u.value;

    agsafeset (obj, ap->name, str, "");
}

static void
addNodeLabelGraphics (Agnode_t* np, Dt_t* alist, agxbuf* xb, agxbuf* unk)
{
    gmlattr* ap;
    int cnt = 0;

    if (!alist)
	return;

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == TEXT) {
	    agsafeset (np, "label", ap->u.value, "");
	}
	else if (ap->sort == COLOR) {
	    agsafeset (np, "fontcolor", ap->u.value, "");
	}
	else if (ap->sort == FONTSIZE) {
	    agsafeset (np, "fontsize", ap->u.value, "");
	}
	else if (ap->sort == FONTNAME) {
	    agsafeset (np, "fontname", ap->u.value, "");
	}
	else {
	    if (cnt)
		agxbputc (unk, ' '); 
	    else {
		agxbput (unk, "[ "); 
	    }
	    deparseAttr (ap, unk);
	    cnt++;
	}
    }

    if (cnt) {
	agxbput (unk, " ]"); 
	agsafeset (np, "LabelGraphics", agxbuse (unk), "");
    }
    else
	agxbclear (unk); 
}

static void
addEdgeLabelGraphics (Agedge_t* ep, Dt_t* alist, agxbuf* xb, agxbuf* unk)
{
    gmlattr* ap;
    char* x = "0";
    char* y = "0";
    int cnt = 0;

    if (!alist)
	return;

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == TEXT) {
	    agsafeset (ep, "label", ap->u.value, "");
	}
	else if (ap->sort == COLOR) {
	    agsafeset (ep, "fontcolor", ap->u.value, "");
	}
	else if (ap->sort == FONTSIZE) {
	    agsafeset (ep, "fontsize", ap->u.value, "");
	}
	else if (ap->sort == FONTNAME) {
	    agsafeset (ep, "fontname", ap->u.value, "");
	}
	else if (ap->sort == XVAL) {
	    x = ap->u.value;
	}
	else if (ap->sort == YVAL) {
	    y = ap->u.value;
	}
	else {
	    if (cnt)
		agxbputc (unk, ' '); 
	    else {
		agxbput (unk, "[ "); 
	    }
	    deparseAttr (ap, unk);
	    cnt++;
	}
    }

    agxbput (xb, x);
    agxbputc (xb, ',');
    agxbput (xb, y);
    agsafeset (ep, "lp", agxbuse (xb), "");

    if (cnt) {
	agxbput (unk, " ]"); 
	agsafeset (ep, "LabelGraphics", agxbuse (unk), "");
    }
    else
	agxbclear (unk); 
}

static void
addNodeGraphics (Agnode_t* np, Dt_t* alist, agxbuf* xb, agxbuf* unk)
{
    gmlattr* ap;
    char* x = "0";
    char* y = "0";
    char buf[BUFSIZ];
    double d;
    int cnt = 0;

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == XVAL) {
	    x = ap->u.value;
	}
	else if (ap->sort == YVAL) {
	    y = ap->u.value;
	}
	else if (ap->sort == WVAL) {
	    d = atof (ap->u.value);
	    sprintf (buf, "%.04f", d/72.0);
	    agsafeset (np, "width", buf, "");
	}
	else if (ap->sort == HVAL) {
	    d = atof (ap->u.value);
	    sprintf (buf, "%.04f", d/72.0);
	    agsafeset (np, "height", buf, "");
	}
	else if (ap->sort == TYPE) {
	    agsafeset (np, "shape", ap->u.value, "");
	}
	else if (ap->sort == FILL) {
	    agsafeset (np, "color", ap->u.value, "");
	}
	else if (ap->sort == OUTLINE) {
	    agsafeset (np, "pencolor", ap->u.value, "");
	}
	else if ((ap->sort == WIDTH) && (ap->sort == OUTLINEWIDTH )) {
	    agsafeset (np, "penwidth", ap->u.value, "");
	}
	else if ((ap->sort == OUTLINESTYLE) && (ap->sort == OUTLINEWIDTH )) {
	    agsafeset (np, "style", ap->u.value, "");
	}
	else {
	    if (cnt)
		agxbputc (unk, ' '); 
	    else {
		agxbput (unk, "[ "); 
	    }
	    deparseAttr (ap, unk);
	    cnt++;
	}
    }

    agxbput (xb, x);
    agxbputc (xb, ',');
    agxbput (xb, y);
    agsafeset (np, "pos", agxbuse (xb), "");

    if (cnt) {
	agxbput (unk, " ]"); 
	agsafeset (np, "graphics", agxbuse (unk), "");
    }
    else
	agxbclear (unk); 
}

static void
addEdgePoint (Agedge_t* ep, Dt_t* alist, agxbuf* xb)
{
    gmlattr* ap;
    char* x = "0";
    char* y = "0";

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
        if (ap->sort == XVAL) {
	    x = ap->u.value;
	}
	else if (ap->sort == YVAL) {
	    y = ap->u.value;
	}
	else {
	    fprintf (stderr, "non-X/Y field in point attribute");
	    unknown ((Agobj_t*)ep, ap, xb);
	}
    }

    if (agxblen(xb)) agxbputc (xb, ' ');
    agxbput (xb, x);
    agxbputc (xb, ',');
    agxbput (xb, y);
}

static void
addEdgePos (Agedge_t* ep, Dt_t* alist, agxbuf* xb)
{
    gmlattr* ap;
    

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == POINT) {
	    addEdgePoint (ep, ap->u.lp, xb);
	}
	else {
	    fprintf (stderr, "non-point field in line attribute");
	    unknown ((Agobj_t*)ep, ap, xb);
	}
    }
    agsafeset (ep, "pos", agxbuse (xb), "");
}

static void
addEdgeGraphics (Agedge_t* ep, Dt_t* alist, agxbuf* xb, agxbuf* unk)
{
    gmlattr* ap;
    int cnt = 0;

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == WIDTH) {
	    agsafeset (ep, "penwidth", ap->u.value, "");
	}
	else if (ap->sort == STYLE) {
	    agsafeset (ep, "style", ap->u.value, "");
	}
	else if (ap->sort == FILL) {
	    agsafeset (ep, "color", ap->u.value, "");
	}
	else if (ap->sort == LINE) {
	    addEdgePos (ep, ap->u.lp, xb);
	}
	else {
	    if (cnt)
		agxbputc (unk, ' '); 
	    else {
		agxbput (unk, "[ "); 
	    }
	    deparseAttr (ap, unk);
	    cnt++;
	}
    }

    if (cnt) {
	agxbput (unk, " ]"); 
	agsafeset (ep, "graphics", agxbuse (unk), "");
    }
    else
	agxbclear(unk);
}

static void
addAttrs (Agobj_t* obj, Dt_t* alist, agxbuf* xb, agxbuf* unk)
{
    gmlattr* ap;

    for (ap = dtfirst(alist); ap; ap = dtnext (alist, ap)) {
	if (ap->sort == GRAPHICS) {
	    if (AGTYPE(obj) == AGNODE)
		addNodeGraphics ((Agnode_t*)obj, ap->u.lp, xb, unk);
	    else if (AGTYPE(obj) == AGEDGE)
		addEdgeGraphics ((Agedge_t*)obj, ap->u.lp, xb, unk);
	    else
		unknown (obj, ap, xb);
	}
	else if (ap->sort == LABELGRAPHICS) {
	    if (AGTYPE(obj) == AGNODE)
		addNodeLabelGraphics ((Agnode_t*)obj, ap->u.lp, xb, unk);
	    else if (AGTYPE(obj) == AGEDGE)
		addEdgeLabelGraphics ((Agedge_t*)obj, ap->u.lp, xb, unk);
	    else
		unknown (obj, ap, xb);
	}
	else if ((ap->sort == LABEL) && (AGTYPE(obj) != AGRAPH)) {
	    agsafeset (obj, "name", ap->u.value, "");
	}
	else
	    unknown (obj, ap, xb);
    }
}

static Agraph_t*
mkGraph (gmlgraph* G, Agraph_t* parent, char* name, agxbuf* xb, agxbuf* unk)
{
    Agraph_t* g;
    Agnode_t* n;
    Agnode_t* h;
    Agedge_t* e;
    gmlnode*  np;
    gmledge*  ep;
    gmlgraph* gp;

    if (parent) {
	g = agsubg (parent, NULL, 1);
    }
    else if (G->directed >= 1)
	g = agopen (name, Agdirected, 0);
    else
	g = agopen (name, Agundirected, 0);

    if (!parent && L) {
	addAttrs ((Agobj_t*)g, L, xb, unk);
    } 
    for (np = dtfirst(G->nodelist); np; np = dtnext (G->nodelist, np)) {
	if (!np->id) {
	   fprintf (stderr, "node without an id attribute"); 
	   exit (1);
        }
	n = agnode (g, np->id, 1);
	addAttrs ((Agobj_t*)n, np->attrlist, xb, unk);
    }

    for (ep = dtfirst(G->edgelist); ep; ep = dtnext (G->edgelist, ep)) {
	if (!ep->source) {
	   fprintf (stderr, "edge without an source attribute"); 
	   exit (1);
        }
	if (!ep->target) {
	   fprintf (stderr, "node without an target attribute"); 
	   exit (1);
        }
	n = agnode (g, ep->source, 1);
	h = agnode (g, ep->target, 1);
	e = agedge (g, n, h, NULL, 1);
	addAttrs ((Agobj_t*)e, ep->attrlist, xb, unk);
    }
    for (gp = dtfirst(G->graphlist); gp; gp = dtnext (G->graphlist, gp)) {
	mkGraph (gp, g, NULL, xb, unk);
    }

    addAttrs ((Agobj_t*)g, G->attrlist, xb, unk);

    return g;
}

Agraph_t*
gml_to_gv (char* name, FILE* fp, int cnt, int* errors)
{
    Agraph_t* g;
    agxbuf xb;
    unsigned char buf[BUFSIZ];
    agxbuf unk;
    unsigned char unknownb[BUFSIZ];
    int error;

    if (cnt == 0)
	initgmlscan(fp);
    else
	initgmlscan(0);
		
    initstk();
    L = NULL;
    pushAlist ();
    gmlparse ();

    error = gmlerrors();
    *errors |= error;
    if (!G || error)
	g = NULL;
    else {
	agxbinit (&xb, BUFSIZ, buf);
	agxbinit (&unk, BUFSIZ, unknownb);
	g = mkGraph (G, NULL, name, &xb, &unk);
	agxbfree (&xb);
    }

    cleanup ();

    return g;
}

static char*
sortToStr (int sort)
{
    char* s;

    switch (sort) {
    case GRAPH : 
	s = "graph"; break;
    case NODE : 
	s = "node"; break;
    case EDGE : 
	s = "edge"; break;
    case DIRECTED : 
	s = "directed"; break;
    case ID : 
	s = "id"; break;
    case SOURCE : 
	s = "source"; break;
    case TARGET : 
	s = "target"; break;
    case XVAL : 
	s = "xval"; break;
    case YVAL : 
	s = "yval"; break;
    case WVAL : 
	s = "wval"; break;
    case HVAL : 
	s = "hval"; break;
    case LABEL : 
	s = "label"; break;
    case GRAPHICS : 
	s = "graphics"; break;
    case LABELGRAPHICS : 
	s = "labelGraphics"; break;
    case TYPE : 
	s = "type"; break;
    case FILL : 
	s = "fill"; break;
    case OUTLINE : 
	s = "outline"; break;
    case OUTLINESTYLE : 
	s = "outlineStyle"; break;
    case OUTLINEWIDTH : 
	s = "outlineWidth"; break;
    case WIDTH : 
	s = "width"; break;
    case STYLE : 
	s = "style"; break;
    case LINE : 
	s = "line"; break;
    case POINT : 
	s = "point"; break;
    case TEXT : 
	s = "text"; break;
    case FONTSIZE : 
	s = "fontSize"; break;
    case FONTNAME : 
	s = "fontName"; break;
    case COLOR : 
	s = "color"; break;
    case INTEGER : 
	s = "integer"; break;
    case REAL : 
	s = "real"; break;
    case STRING : 
	s = "string"; break;
    case NAME : 
	s = "name"; break;
    case LIST : 
	s = "list"; break;
    case '[' : 
	s = "["; break;
    case ']' : 
	s = "]"; break;
    default : 
	s = NULL;break;
    }

    return s;
}

#if 0
int gmllex ()
{
    int tok = _gmllex();
    char* s = sortToStr (tok);

    if (s)
        fprintf (stderr, "token = %s\n", s);
    else
        fprintf (stderr, "token = <%d>\n", tok);
    return tok;
}
#endif


