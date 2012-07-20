
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

/* All symbols defined below should begin with aag or YY, to avoid
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
#line 14 "../../lib/cgraph/grammar.y"


#include <stdio.h>  /* SAFE */
#include <cghdr.h>	/* SAFE */
extern void aagerror(char *);	/* gets mapped to aagerror, see below */

#ifdef _WIN32
#define gettxt(a,b)	(b)
#endif

static char Key[] = "key";

typedef union s {					/* possible items in generic list */
		Agnode_t		*n;
		Agraph_t		*subg;
		Agedge_t		*e;
		Agsym_t			*asym;	/* bound attribute */
		char			*name;	/* unbound attribute */
		struct item_s	*list;	/* list-of-lists (for edgestmt) */
} val_t;

typedef struct item_s {		/* generic list */
	int				tag;	/* T_node, T_subgraph, T_edge, T_attr */
	val_t			u;		/* primary element */
	char			*str;	/* secondary value - port or attr value */
	struct item_s	*next;
} item;

typedef struct list_s {		/* maintain head and tail ptrs for fast append */
	item			*first;
	item			*last;
} list_t;

/* functions */
static void appendnode(char *name, char *port, char *sport);
static void attrstmt(int tkind, char *macroname);
static void startgraph(char *name, int directed, int strict);
static void bufferedges(void);
static void newedge(Agnode_t *t, char *tport, Agnode_t *h, char *hport, char *key);
static void edgerhs(Agnode_t *n, char *tport, item *hlist, char *key);
static void appendattr(char *name, char *value);
static void bindattrs(int kind);
static void applyattrs(void *obj);
static void endgraph(void);
static void endnode(void);
static void endedge(void);
static char* concat(char*, char*);
static char* concatPort(char*, char*);

static void opensubg(char *name);
static void closesubg(void);

/* global */
static Agraph_t *G;



/* Line 189 of yacc.c  */
#line 131 "y.tab.c"

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
   enum aagtokentype {
     T_graph = 258,
     T_node = 259,
     T_edge = 260,
     T_digraph = 261,
     T_subgraph = 262,
     T_strict = 263,
     T_edgeop = 264,
     T_list = 265,
     T_attr = 266,
     T_atom = 267,
     T_qatom = 268
   };
#endif
/* Tokens.  */
#define T_graph 258
#define T_node 259
#define T_edge 260
#define T_digraph 261
#define T_subgraph 262
#define T_strict 263
#define T_edgeop 264
#define T_list 265
#define T_attr 266
#define T_atom 267
#define T_qatom 268




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 71 "../../lib/cgraph/grammar.y"

			int				i;
			char			*str;
			struct Agnode_s	*n;



/* Line 214 of yacc.c  */
#line 201 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define aagstype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 213 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 aagtype_uint8;
#else
typedef unsigned char aagtype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 aagtype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char aagtype_int8;
#else
typedef short int aagtype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 aagtype_uint16;
#else
typedef unsigned short int aagtype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 aagtype_int16;
#else
typedef short int aagtype_int16;
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
YYID (int aagi)
#else
static int
YYID (aagi)
    int aagi;
#endif
{
  return aagi;
}
#endif

#if ! defined aagoverflow || YYERROR_VERBOSE

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
#endif /* ! defined aagoverflow || YYERROR_VERBOSE */


#if (! defined aagoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union aagalloc
{
  aagtype_int16 aagss_alloc;
  YYSTYPE aagvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union aagalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (aagtype_int16) + sizeof (YYSTYPE)) \
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
	  YYSIZE_T aagi;				\
	  for (aagi = 0; aagi < (Count); aagi++)	\
	    (To)[aagi] = (From)[aagi];		\
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
	YYSIZE_T aagnewbytes;						\
	YYCOPY (&aagptr->Stack_alloc, Stack, aagsize);			\
	Stack = &aagptr->Stack_alloc;					\
	aagnewbytes = aagstacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	aagptr += aagnewbytes / sizeof (*aagptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   59

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  79

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   268

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? aagtranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const aagtype_uint8 aagtranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    18,    16,
       2,    19,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    14,     2,    15,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const aagtype_uint8 aagprhs[] =
{
       0,     0,     3,     6,     8,     9,    13,    17,    19,    20,
      22,    23,    25,    27,    29,    30,    33,    35,    37,    38,
      41,    44,    48,    50,    52,    53,    58,    59,    61,    65,
      67,    71,    77,    81,    83,    85,    87,    89,    92,    93,
      95,    96,   101,   104,   105,   108,   110,   112,   116,   119,
     121,   122,   126,   129,   131,   132,   134,   136,   137,   139,
     141,   143
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const aagtype_int8 aagrhs[] =
{
      25,     0,    -1,    27,    26,    -1,     1,    -1,    -1,    14,
      31,    15,    -1,    29,    30,    28,    -1,    56,    -1,    -1,
       8,    -1,    -1,     3,    -1,     6,    -1,    32,    -1,    -1,
      32,    34,    -1,    34,    -1,    16,    -1,    -1,    41,    33,
      -1,    35,    33,    -1,    36,    37,    44,    -1,    39,    -1,
      52,    -1,    -1,     9,    38,    36,    37,    -1,    -1,    40,
      -1,    39,    17,    40,    -1,    56,    -1,    56,    18,    56,
      -1,    56,    18,    56,    18,    56,    -1,    42,    43,    45,
      -1,    51,    -1,     3,    -1,     4,    -1,     5,    -1,    56,
      19,    -1,    -1,    45,    -1,    -1,    44,    20,    46,    21,
      -1,    46,    47,    -1,    -1,    48,    55,    -1,    49,    -1,
      50,    -1,    56,    19,    56,    -1,    22,    56,    -1,    49,
      -1,    -1,    54,    53,    26,    -1,     7,    56,    -1,     7,
      -1,    -1,    16,    -1,    17,    -1,    -1,    12,    -1,    57,
      -1,    13,    -1,    57,    23,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const aagtype_uint8 aagrline[] =
{
       0,    88,    88,    89,    90,    93,    95,    98,    98,   100,
     100,   102,   102,   104,   104,   106,   106,   108,   108,   110,
     111,   114,   118,   118,   120,   120,   121,   125,   125,   127,
     128,   129,   132,   133,   136,   137,   138,   141,   142,   145,
     145,   147,   149,   150,   152,   155,   155,   157,   160,   163,
     166,   166,   169,   170,   171,   174,   174,   174,   176,   177,
     180,   181
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const aagtname[] =
{
  "$end", "error", "$undefined", "T_graph", "T_node", "T_edge",
  "T_digraph", "T_subgraph", "T_strict", "T_edgeop", "T_list", "T_attr",
  "T_atom", "T_qatom", "'{'", "'}'", "';'", "','", "':'", "'='", "'['",
  "']'", "'@'", "'+'", "$accept", "graph", "body", "hdr", "optgraphname",
  "optstrict", "graphtype", "optstmtlist", "stmtlist", "optsemi", "stmt",
  "compound", "simple", "rcompound", "$@1", "nodelist", "node", "attrstmt",
  "attrtype", "optmacroname", "optattr", "attrlist", "optattrdefs",
  "attrdefs", "attritem", "attrassignment", "attrmacro", "graphattrdefs",
  "subgraph", "$@2", "optsubghdr", "optseparator", "atom", "qatom", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const aagtype_uint16 aagtoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   123,   125,    59,    44,    58,    61,
      91,    93,    64,    43
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const aagtype_uint8 aagr1[] =
{
       0,    24,    25,    25,    25,    26,    27,    28,    28,    29,
      29,    30,    30,    31,    31,    32,    32,    33,    33,    34,
      34,    35,    36,    36,    38,    37,    37,    39,    39,    40,
      40,    40,    41,    41,    42,    42,    42,    43,    43,    44,
      44,    45,    46,    46,    47,    48,    48,    49,    50,    51,
      53,    52,    54,    54,    54,    55,    55,    55,    56,    56,
      57,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const aagtype_uint8 aagr2[] =
{
       0,     2,     2,     1,     0,     3,     3,     1,     0,     1,
       0,     1,     1,     1,     0,     2,     1,     1,     0,     2,
       2,     3,     1,     1,     0,     4,     0,     1,     3,     1,
       3,     5,     3,     1,     1,     1,     1,     2,     0,     1,
       0,     4,     2,     0,     2,     1,     1,     3,     2,     1,
       0,     3,     2,     1,     0,     1,     1,     0,     1,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const aagtype_uint8 aagdefact[] =
{
       0,     3,     9,     0,     0,     0,     1,    14,     2,    11,
      12,     8,    34,    35,    36,    53,    58,    60,     0,    13,
      16,    18,    26,    22,    27,    18,    38,    49,    33,    23,
      50,    29,    59,     6,     7,    52,     5,    15,    17,    20,
      24,    40,     0,    19,    40,     0,     0,     0,     0,     0,
      54,    21,    39,    28,    29,     0,    32,    37,    51,    30,
      47,    61,    26,    43,     0,    25,     0,    31,    41,     0,
      42,    57,    45,    46,     0,    48,    55,    56,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const aagtype_int8 aagdefgoto[] =
{
      -1,     3,     8,     4,    33,     5,    11,    18,    19,    39,
      20,    21,    22,    41,    50,    23,    24,    25,    26,    44,
      51,    52,    66,    70,    71,    27,    73,    28,    29,    46,
      30,    78,    31,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -15
static const aagtype_int8 aagpact[] =
{
      18,   -15,   -15,    20,     9,     3,   -15,    -2,   -15,   -15,
     -15,     1,   -15,   -15,   -15,     1,   -15,   -15,    10,    -2,
     -15,    19,    25,    21,   -15,    19,     1,   -15,   -15,   -15,
     -15,    11,    17,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,     1,   -15,   -15,    22,     9,     1,     1,    29,
      15,    23,   -15,   -15,    26,    23,    27,   -15,   -15,    28,
     -15,   -15,    25,   -15,     1,   -15,    -5,   -15,   -15,     1,
     -15,    16,   -15,   -15,    30,   -15,   -15,   -15,   -15
};

/* YYPGOTO[NTERM-NUM].  */
static const aagtype_int8 aagpgoto[] =
{
     -15,   -15,    -1,   -15,   -15,   -15,   -15,   -15,   -15,    31,
      32,   -15,     0,   -14,   -15,   -15,    12,   -15,   -15,   -15,
       8,    13,   -15,   -15,   -15,    -7,   -15,   -15,   -15,   -15,
     -15,   -15,   -11,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const aagtype_int8 aagtable[] =
{
      34,    12,    13,    14,    35,    15,     9,    16,    17,    10,
      16,    17,   -54,    16,    17,    45,    68,    69,    -4,     1,
       6,   -10,    15,     7,   -10,    36,     2,    16,    17,    47,
      48,    54,    76,    77,    40,    38,    59,    60,    42,    54,
      49,    57,    61,    63,    47,    58,    64,   -39,    65,    48,
      62,    37,    55,    67,    53,    74,    43,    56,    75,    72
};

static const aagtype_uint8 aagcheck[] =
{
      11,     3,     4,     5,    15,     7,     3,    12,    13,     6,
      12,    13,    14,    12,    13,    26,    21,    22,     0,     1,
       0,     3,     7,    14,     6,    15,     8,    12,    13,    18,
      19,    42,    16,    17,     9,    16,    47,    48,    17,    50,
      23,    19,    13,    20,    18,    46,    18,    20,    62,    19,
      50,    19,    44,    64,    42,    66,    25,    44,    69,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const aagtype_uint8 aagstos[] =
{
       0,     1,     8,    25,    27,    29,     0,    14,    26,     3,
       6,    30,     3,     4,     5,     7,    12,    13,    31,    32,
      34,    35,    36,    39,    40,    41,    42,    49,    51,    52,
      54,    56,    57,    28,    56,    56,    15,    34,    16,    33,
       9,    37,    17,    33,    43,    56,    53,    18,    19,    23,
      38,    44,    45,    40,    56,    44,    45,    19,    26,    56,
      56,    13,    36,    20,    18,    37,    46,    56,    21,    22,
      47,    48,    49,    50,    56,    56,    16,    17,    55
};

#define aagerrok		(aagerrstatus = 0)
#define aagclearin	(aagchar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto aagacceptlab
#define YYABORT		goto aagabortlab
#define YYERROR		goto aagerrorlab


/* Like YYERROR except do call aagerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto aagerrlab

#define YYRECOVERING()  (!!aagerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (aagchar == YYEMPTY && aaglen == 1)				\
    {								\
      aagchar = (Token);						\
      aaglval = (Value);						\
      aagtoken = YYTRANSLATE (aagchar);				\
      YYPOPSTACK (1);						\
      goto aagbackup;						\
    }								\
  else								\
    {								\
      aagerror (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `aaglex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX aaglex (YYLEX_PARAM)
#else
# define YYLEX aaglex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (aagdebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (aagdebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      aag_symbol_print (stderr,						  \
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
aag_symbol_value_print (FILE *aagoutput, int aagtype, YYSTYPE const * const aagvaluep)
#else
static void
aag_symbol_value_print (aagoutput, aagtype, aagvaluep)
    FILE *aagoutput;
    int aagtype;
    YYSTYPE const * const aagvaluep;
#endif
{
  if (!aagvaluep)
    return;
# ifdef YYPRINT
  if (aagtype < YYNTOKENS)
    YYPRINT (aagoutput, aagtoknum[aagtype], *aagvaluep);
# else
  YYUSE (aagoutput);
# endif
  switch (aagtype)
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
aag_symbol_print (FILE *aagoutput, int aagtype, YYSTYPE const * const aagvaluep)
#else
static void
aag_symbol_print (aagoutput, aagtype, aagvaluep)
    FILE *aagoutput;
    int aagtype;
    YYSTYPE const * const aagvaluep;
#endif
{
  if (aagtype < YYNTOKENS)
    YYFPRINTF (aagoutput, "token %s (", aagtname[aagtype]);
  else
    YYFPRINTF (aagoutput, "nterm %s (", aagtname[aagtype]);

  aag_symbol_value_print (aagoutput, aagtype, aagvaluep);
  YYFPRINTF (aagoutput, ")");
}

/*------------------------------------------------------------------.
| aag_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
aag_stack_print (aagtype_int16 *aagbottom, aagtype_int16 *aagtop)
#else
static void
aag_stack_print (aagbottom, aagtop)
    aagtype_int16 *aagbottom;
    aagtype_int16 *aagtop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; aagbottom <= aagtop; aagbottom++)
    {
      int aagbot = *aagbottom;
      YYFPRINTF (stderr, " %d", aagbot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (aagdebug)							\
    aag_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
aag_reduce_print (YYSTYPE *aagvsp, int aagrule)
#else
static void
aag_reduce_print (aagvsp, aagrule)
    YYSTYPE *aagvsp;
    int aagrule;
#endif
{
  int aagnrhs = aagr2[aagrule];
  int aagi;
  unsigned long int aaglno = aagrline[aagrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     aagrule - 1, aaglno);
  /* The symbols being reduced.  */
  for (aagi = 0; aagi < aagnrhs; aagi++)
    {
      YYFPRINTF (stderr, "   $%d = ", aagi + 1);
      aag_symbol_print (stderr, aagrhs[aagprhs[aagrule] + aagi],
		       &(aagvsp[(aagi + 1) - (aagnrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (aagdebug)				\
    aag_reduce_print (aagvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int aagdebug;
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

# ifndef aagstrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define aagstrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
aagstrlen (const char *aagstr)
#else
static YYSIZE_T
aagstrlen (aagstr)
    const char *aagstr;
#endif
{
  YYSIZE_T aaglen;
  for (aaglen = 0; aagstr[aaglen]; aaglen++)
    continue;
  return aaglen;
}
#  endif
# endif

# ifndef aagstpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define aagstpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
aagstpcpy (char *aagdest, const char *aagsrc)
#else
static char *
aagstpcpy (aagdest, aagsrc)
    char *aagdest;
    const char *aagsrc;
#endif
{
  char *aagd = aagdest;
  const char *aags = aagsrc;

  while ((*aagd++ = *aags++) != '\0')
    continue;

  return aagd - 1;
}
#  endif
# endif

# ifndef aagtnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for aagerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from aagtname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
aagtnamerr (char *aagres, const char *aagstr)
{
  if (*aagstr == '"')
    {
      YYSIZE_T aagn = 0;
      char const *aagp = aagstr;

      for (;;)
	switch (*++aagp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++aagp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (aagres)
	      aagres[aagn] = *aagp;
	    aagn++;
	    break;

	  case '"':
	    if (aagres)
	      aagres[aagn] = '\0';
	    return aagn;
	  }
    do_not_strip_quotes: ;
    }

  if (! aagres)
    return aagstrlen (aagstr);

  return aagstpcpy (aagres, aagstr) - aagres;
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
aagsyntax_error (char *aagresult, int aagstate, int aagchar)
{
  int aagn = aagpact[aagstate];

  if (! (YYPACT_NINF < aagn && aagn <= YYLAST))
    return 0;
  else
    {
      int aagtype = YYTRANSLATE (aagchar);
      YYSIZE_T aagsize0 = aagtnamerr (0, aagtname[aagtype]);
      YYSIZE_T aagsize = aagsize0;
      YYSIZE_T aagsize1;
      int aagsize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *aagarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int aagx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *aagfmt;
      char const *aagf;
      static char const aagunexpected[] = "syntax error, unexpected %s";
      static char const aagexpecting[] = ", expecting %s";
      static char const aagor[] = " or %s";
      char aagformat[sizeof aagunexpected
		    + sizeof aagexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof aagor - 1))];
      char const *aagprefix = aagexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int aagxbegin = aagn < 0 ? -aagn : 0;

      /* Stay within bounds of both aagcheck and aagtname.  */
      int aagchecklim = YYLAST - aagn + 1;
      int aagxend = aagchecklim < YYNTOKENS ? aagchecklim : YYNTOKENS;
      int aagcount = 1;

      aagarg[0] = aagtname[aagtype];
      aagfmt = aagstpcpy (aagformat, aagunexpected);

      for (aagx = aagxbegin; aagx < aagxend; ++aagx)
	if (aagcheck[aagx + aagn] == aagx && aagx != YYTERROR)
	  {
	    if (aagcount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		aagcount = 1;
		aagsize = aagsize0;
		aagformat[sizeof aagunexpected - 1] = '\0';
		break;
	      }
	    aagarg[aagcount++] = aagtname[aagx];
	    aagsize1 = aagsize + aagtnamerr (0, aagtname[aagx]);
	    aagsize_overflow |= (aagsize1 < aagsize);
	    aagsize = aagsize1;
	    aagfmt = aagstpcpy (aagfmt, aagprefix);
	    aagprefix = aagor;
	  }

      aagf = YY_(aagformat);
      aagsize1 = aagsize + aagstrlen (aagf);
      aagsize_overflow |= (aagsize1 < aagsize);
      aagsize = aagsize1;

      if (aagsize_overflow)
	return YYSIZE_MAXIMUM;

      if (aagresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *aagp = aagresult;
	  int aagi = 0;
	  while ((*aagp = *aagf) != '\0')
	    {
	      if (*aagp == '%' && aagf[1] == 's' && aagi < aagcount)
		{
		  aagp += aagtnamerr (aagp, aagarg[aagi++]);
		  aagf += 2;
		}
	      else
		{
		  aagp++;
		  aagf++;
		}
	    }
	}
      return aagsize;
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
aagdestruct (const char *aagmsg, int aagtype, YYSTYPE *aagvaluep)
#else
static void
aagdestruct (aagmsg, aagtype, aagvaluep)
    const char *aagmsg;
    int aagtype;
    YYSTYPE *aagvaluep;
#endif
{
  YYUSE (aagvaluep);

  if (!aagmsg)
    aagmsg = "Deleting";
  YY_SYMBOL_PRINT (aagmsg, aagtype, aagvaluep, aaglocationp);

  switch (aagtype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int aagparse (void *YYPARSE_PARAM);
#else
int aagparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int aagparse (void);
#else
int aagparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int aagchar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE aaglval;

/* Number of syntax errors so far.  */
int aagnerrs;



/*-------------------------.
| aagparse or aagpush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
aagparse (void *YYPARSE_PARAM)
#else
int
aagparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
aagparse (void)
#else
int
aagparse ()

#endif
#endif
{


    int aagstate;
    /* Number of tokens to shift before error messages enabled.  */
    int aagerrstatus;

    /* The stacks and their tools:
       `aagss': related to states.
       `aagvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow aagoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    aagtype_int16 aagssa[YYINITDEPTH];
    aagtype_int16 *aagss;
    aagtype_int16 *aagssp;

    /* The semantic value stack.  */
    YYSTYPE aagvsa[YYINITDEPTH];
    YYSTYPE *aagvs;
    YYSTYPE *aagvsp;

    YYSIZE_T aagstacksize;

  int aagn;
  int aagresult;
  /* Lookahead token as an internal (translated) token number.  */
  int aagtoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE aagval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char aagmsgbuf[128];
  char *aagmsg = aagmsgbuf;
  YYSIZE_T aagmsg_alloc = sizeof aagmsgbuf;
#endif

#define YYPOPSTACK(N)   (aagvsp -= (N), aagssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int aaglen = 0;

  aagtoken = 0;
  aagss = aagssa;
  aagvs = aagvsa;
  aagstacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  aagstate = 0;
  aagerrstatus = 0;
  aagnerrs = 0;
  aagchar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  aagssp = aagss;
  aagvsp = aagvs;

  goto aagsetstate;

/*------------------------------------------------------------.
| aagnewstate -- Push a new state, which is found in aagstate.  |
`------------------------------------------------------------*/
 aagnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  aagssp++;

 aagsetstate:
  *aagssp = aagstate;

  if (aagss + aagstacksize - 1 <= aagssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T aagsize = aagssp - aagss + 1;

#ifdef aagoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *aagvs1 = aagvs;
	aagtype_int16 *aagss1 = aagss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if aagoverflow is a macro.  */
	aagoverflow (YY_("memory exhausted"),
		    &aagss1, aagsize * sizeof (*aagssp),
		    &aagvs1, aagsize * sizeof (*aagvsp),
		    &aagstacksize);

	aagss = aagss1;
	aagvs = aagvs1;
      }
#else /* no aagoverflow */
# ifndef YYSTACK_RELOCATE
      goto aagexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= aagstacksize)
	goto aagexhaustedlab;
      aagstacksize *= 2;
      if (YYMAXDEPTH < aagstacksize)
	aagstacksize = YYMAXDEPTH;

      {
	aagtype_int16 *aagss1 = aagss;
	union aagalloc *aagptr =
	  (union aagalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (aagstacksize));
	if (! aagptr)
	  goto aagexhaustedlab;
	YYSTACK_RELOCATE (aagss_alloc, aagss);
	YYSTACK_RELOCATE (aagvs_alloc, aagvs);
#  undef YYSTACK_RELOCATE
	if (aagss1 != aagssa)
	  YYSTACK_FREE (aagss1);
      }
# endif
#endif /* no aagoverflow */

      aagssp = aagss + aagsize - 1;
      aagvsp = aagvs + aagsize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) aagstacksize));

      if (aagss + aagstacksize - 1 <= aagssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", aagstate));

  if (aagstate == YYFINAL)
    YYACCEPT;

  goto aagbackup;

/*-----------.
| aagbackup.  |
`-----------*/
aagbackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  aagn = aagpact[aagstate];
  if (aagn == YYPACT_NINF)
    goto aagdefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (aagchar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      aagchar = YYLEX;
    }

  if (aagchar <= YYEOF)
    {
      aagchar = aagtoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      aagtoken = YYTRANSLATE (aagchar);
      YY_SYMBOL_PRINT ("Next token is", aagtoken, &aaglval, &aaglloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  aagn += aagtoken;
  if (aagn < 0 || YYLAST < aagn || aagcheck[aagn] != aagtoken)
    goto aagdefault;
  aagn = aagtable[aagn];
  if (aagn <= 0)
    {
      if (aagn == 0 || aagn == YYTABLE_NINF)
	goto aagerrlab;
      aagn = -aagn;
      goto aagreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (aagerrstatus)
    aagerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", aagtoken, &aaglval, &aaglloc);

  /* Discard the shifted token.  */
  aagchar = YYEMPTY;

  aagstate = aagn;
  *++aagvsp = aaglval;

  goto aagnewstate;


/*-----------------------------------------------------------.
| aagdefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
aagdefault:
  aagn = aagdefact[aagstate];
  if (aagn == 0)
    goto aagerrlab;
  goto aagreduce;


/*-----------------------------.
| aagreduce -- Do a reduction.  |
`-----------------------------*/
aagreduce:
  /* aagn is the number of a rule to reduce with.  */
  aaglen = aagr2[aagn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  aagval = aagvsp[1-aaglen];


  YY_REDUCE_PRINT (aagn);
  switch (aagn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 88 "../../lib/cgraph/grammar.y"
    {endgraph();}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 89 "../../lib/cgraph/grammar.y"
    {if (G) {agclose(G); G = Ag_G_global = NIL(Agraph_t*);}}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 95 "../../lib/cgraph/grammar.y"
    {startgraph((aagvsp[(3) - (3)].str),(aagvsp[(2) - (3)].i),(aagvsp[(1) - (3)].i));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 98 "../../lib/cgraph/grammar.y"
    {(aagval.str)=(aagvsp[(1) - (1)].str);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 98 "../../lib/cgraph/grammar.y"
    {(aagval.str)=0;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 100 "../../lib/cgraph/grammar.y"
    {(aagval.i)=1;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 100 "../../lib/cgraph/grammar.y"
    {(aagval.i)=0;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 102 "../../lib/cgraph/grammar.y"
    {(aagval.i) = 0;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 102 "../../lib/cgraph/grammar.y"
    {(aagval.i) = 1;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 115 "../../lib/cgraph/grammar.y"
    {if ((aagvsp[(2) - (3)].i)) endedge(); else endnode();}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 120 "../../lib/cgraph/grammar.y"
    {bufferedges();}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 120 "../../lib/cgraph/grammar.y"
    {(aagval.i) = 1;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 121 "../../lib/cgraph/grammar.y"
    {(aagval.i) = 0;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 127 "../../lib/cgraph/grammar.y"
    {appendnode((aagvsp[(1) - (1)].str),NIL(char*),NIL(char*));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 128 "../../lib/cgraph/grammar.y"
    {appendnode((aagvsp[(1) - (3)].str),(aagvsp[(3) - (3)].str),NIL(char*));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 "../../lib/cgraph/grammar.y"
    {appendnode((aagvsp[(1) - (5)].str),(aagvsp[(3) - (5)].str),(aagvsp[(5) - (5)].str));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 132 "../../lib/cgraph/grammar.y"
    {attrstmt((aagvsp[(1) - (3)].i),(aagvsp[(2) - (3)].str));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 133 "../../lib/cgraph/grammar.y"
    {attrstmt(T_graph,NIL(char*));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 136 "../../lib/cgraph/grammar.y"
    {(aagval.i) = T_graph;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 137 "../../lib/cgraph/grammar.y"
    {(aagval.i) = T_node;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 138 "../../lib/cgraph/grammar.y"
    {(aagval.i) = T_edge;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 141 "../../lib/cgraph/grammar.y"
    {(aagval.str) = (aagvsp[(1) - (2)].str);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 142 "../../lib/cgraph/grammar.y"
    {(aagval.str) = NIL(char*); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 157 "../../lib/cgraph/grammar.y"
    {appendattr((aagvsp[(1) - (3)].str),(aagvsp[(3) - (3)].str));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 160 "../../lib/cgraph/grammar.y"
    {appendattr((aagvsp[(2) - (2)].str),NIL(char*));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 166 "../../lib/cgraph/grammar.y"
    {opensubg((aagvsp[(1) - (1)].str));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 166 "../../lib/cgraph/grammar.y"
    {closesubg();}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 169 "../../lib/cgraph/grammar.y"
    {(aagval.str)=(aagvsp[(2) - (2)].str);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 170 "../../lib/cgraph/grammar.y"
    {(aagval.str)=NIL(char*);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 171 "../../lib/cgraph/grammar.y"
    {(aagval.str)=NIL(char*);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 176 "../../lib/cgraph/grammar.y"
    {(aagval.str) = (aagvsp[(1) - (1)].str);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 177 "../../lib/cgraph/grammar.y"
    {(aagval.str) = (aagvsp[(1) - (1)].str);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 180 "../../lib/cgraph/grammar.y"
    {(aagval.str) = (aagvsp[(1) - (1)].str);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 181 "../../lib/cgraph/grammar.y"
    {(aagval.str) = concat((aagvsp[(1) - (3)].str),(aagvsp[(3) - (3)].str));}
    break;



/* Line 1455 of yacc.c  */
#line 1713 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", aagr1[aagn], &aagval, &aagloc);

  YYPOPSTACK (aaglen);
  aaglen = 0;
  YY_STACK_PRINT (aagss, aagssp);

  *++aagvsp = aagval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  aagn = aagr1[aagn];

  aagstate = aagpgoto[aagn - YYNTOKENS] + *aagssp;
  if (0 <= aagstate && aagstate <= YYLAST && aagcheck[aagstate] == *aagssp)
    aagstate = aagtable[aagstate];
  else
    aagstate = aagdefgoto[aagn - YYNTOKENS];

  goto aagnewstate;


/*------------------------------------.
| aagerrlab -- here on detecting error |
`------------------------------------*/
aagerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!aagerrstatus)
    {
      ++aagnerrs;
#if ! YYERROR_VERBOSE
      aagerror (YY_("syntax error"));
#else
      {
	YYSIZE_T aagsize = aagsyntax_error (0, aagstate, aagchar);
	if (aagmsg_alloc < aagsize && aagmsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T aagalloc = 2 * aagsize;
	    if (! (aagsize <= aagalloc && aagalloc <= YYSTACK_ALLOC_MAXIMUM))
	      aagalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (aagmsg != aagmsgbuf)
	      YYSTACK_FREE (aagmsg);
	    aagmsg = (char *) YYSTACK_ALLOC (aagalloc);
	    if (aagmsg)
	      aagmsg_alloc = aagalloc;
	    else
	      {
		aagmsg = aagmsgbuf;
		aagmsg_alloc = sizeof aagmsgbuf;
	      }
	  }

	if (0 < aagsize && aagsize <= aagmsg_alloc)
	  {
	    (void) aagsyntax_error (aagmsg, aagstate, aagchar);
	    aagerror (aagmsg);
	  }
	else
	  {
	    aagerror (YY_("syntax error"));
	    if (aagsize != 0)
	      goto aagexhaustedlab;
	  }
      }
#endif
    }



  if (aagerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (aagchar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (aagchar == YYEOF)
	    YYABORT;
	}
      else
	{
	  aagdestruct ("Error: discarding",
		      aagtoken, &aaglval);
	  aagchar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto aagerrlab1;


/*---------------------------------------------------.
| aagerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
aagerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label aagerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto aagerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (aaglen);
  aaglen = 0;
  YY_STACK_PRINT (aagss, aagssp);
  aagstate = *aagssp;
  goto aagerrlab1;


/*-------------------------------------------------------------.
| aagerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
aagerrlab1:
  aagerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      aagn = aagpact[aagstate];
      if (aagn != YYPACT_NINF)
	{
	  aagn += YYTERROR;
	  if (0 <= aagn && aagn <= YYLAST && aagcheck[aagn] == YYTERROR)
	    {
	      aagn = aagtable[aagn];
	      if (0 < aagn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (aagssp == aagss)
	YYABORT;


      aagdestruct ("Error: popping",
		  aagstos[aagstate], aagvsp);
      YYPOPSTACK (1);
      aagstate = *aagssp;
      YY_STACK_PRINT (aagss, aagssp);
    }

  *++aagvsp = aaglval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", aagstos[aagn], aagvsp, aaglsp);

  aagstate = aagn;
  goto aagnewstate;


/*-------------------------------------.
| aagacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
aagacceptlab:
  aagresult = 0;
  goto aagreturn;

/*-----------------------------------.
| aagabortlab -- YYABORT comes here.  |
`-----------------------------------*/
aagabortlab:
  aagresult = 1;
  goto aagreturn;

#if !defined(aagoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| aagexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
aagexhaustedlab:
  aagerror (YY_("memory exhausted"));
  aagresult = 2;
  /* Fall through.  */
#endif

aagreturn:
  if (aagchar != YYEMPTY)
     aagdestruct ("Cleanup: discarding lookahead",
		 aagtoken, &aaglval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (aaglen);
  YY_STACK_PRINT (aagss, aagssp);
  while (aagssp != aagss)
    {
      aagdestruct ("Cleanup: popping",
		  aagstos[*aagssp], aagvsp);
      YYPOPSTACK (1);
    }
#ifndef aagoverflow
  if (aagss != aagssa)
    YYSTACK_FREE (aagss);
#endif
#if YYERROR_VERBOSE
  if (aagmsg != aagmsgbuf)
    YYSTACK_FREE (aagmsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (aagresult);
}



/* Line 1675 of yacc.c  */
#line 183 "../../lib/cgraph/grammar.y"


#define NILitem  NIL(item*)

/* globals */
static	Agraph_t	*Subgraph;	/* most recent subgraph that was opened */
static	Agdisc_t	*Disc;		/* discipline passed to agread or agconcat */
static	list_t	Nodelist,Edgelist,Attrlist;

static item *newitem(int tag, void *p0, char *p1)
{
	item	*rv = agalloc(G,sizeof(item));
	rv->tag = tag; rv->u.name = (char*)p0; rv->str = p1;
	return rv;
}

static item *cons_node(Agnode_t *n, char *port)
	{ return newitem(T_node,n,port); }

static item *cons_attr(char *name, char *value)
	{ return newitem(T_atom,name,value); }

static item *cons_list(item *list)
	{ return newitem(T_list,list,NIL(char*)); }

static item *cons_subg(Agraph_t *subg)
	{ return newitem(T_subgraph,subg,NIL(char*)); }

#ifdef NOTDEF
static item *cons_edge(Agedge_t *e)
	{ return newitem(T_edge,e,NIL(char*)); }
#endif

static void delete_items(item *ilist)
{
	item	*p,*pn;

	for (p = ilist; p; p = pn) {
		pn = p->next;
		switch(p->tag) {
			case T_list: delete_items(p->u.list); break;
			case T_atom: case T_attr: agstrfree(G,p->str); break;
		}
		agfree(G,p);
	}
}

static void deletelist(list_t *list)
{
	delete_items(list->first);
	list->first = list->last = NILitem;
}

#ifdef NOTDEF
static void listins(list_t *list, item *v)
{
	v->next = list->first;
	list->first = v;
	if (list->last == NILitem) list->last = v;
}
#endif

static void listapp(list_t *list, item *v)
{
	if (list->last) list->last->next = v;
	list->last = v;
	if (list->first == NILitem) list->first = v;
}


/* attrs */
static void appendattr(char *name, char *value)
{
	item		*v;

	assert(value != NIL(char*));
	v = cons_attr(name,value);
	listapp(&Attrlist,v);
}

static void bindattrs(int kind)
{
	item		*aptr;
	char		*name;

	for (aptr = Attrlist.first; aptr; aptr = aptr->next) {
		assert(aptr->tag == T_atom);	/* signifies unbound attr */
		name = aptr->u.name;
		if ((kind == AGEDGE) && streq(name,Key)) continue;
		if ((aptr->u.asym = agattr(G,kind,name,NIL(char*))) == NILsym)
			aptr->u.asym = agattr(G,kind,name,"");
		aptr->tag = T_attr;				/* signifies bound attr */
		agstrfree(G,name);
	}
}

static void applyattrs(void *obj)
{
	item		*aptr;

	for (aptr = Attrlist.first; aptr; aptr = aptr->next) {
		if (aptr->tag == T_attr) {
			if (aptr->u.asym && !aptr->u.asym->fixed) {
				agxset(obj,aptr->u.asym,aptr->str);
			}
		}
		else {
			assert(AGTYPE(obj) == AGEDGE);
			assert(aptr->tag == T_atom);
			assert(streq(aptr->u.name,Key));
		}
	}
}

static void nomacros(void)
{
	agerr(AGWARN,"attribute macros not implemented");
}

static void attrstmt(int tkind, char *macroname)
{
	item			*aptr;
	int				kind;

		/* creating a macro def */
	if (macroname) nomacros();
		/* invoking a macro def */
	for (aptr = Attrlist.first; aptr; aptr = aptr->next)
		if (aptr->str == NIL(char*)) nomacros();

	switch(tkind) {
		case T_graph: kind = AGRAPH; break;
		case T_node: kind = AGNODE; break;
		case T_edge: kind = AGEDGE; break;
		default : abort();
	}
	bindattrs(kind);	/* set up defaults for new attributes */
	for (aptr = Attrlist.first; aptr; aptr = aptr->next)
		agattr(G,kind,aptr->u.asym->name,aptr->str);
	deletelist(&Attrlist);
}

/* nodes */

static void appendnode(char *name, char *port, char *sport)
{
	item		*elt;

	if (sport) {
		port = concatPort (port, sport);
	}
	elt = cons_node(agnode(G,name,TRUE),port);
	listapp(&Nodelist,elt);
	agstrfree(G,name);
}

	/* apply current optional attrs to Nodelist and clean up lists */
static void endnode()
{
	item	*ptr;

	bindattrs(AGNODE);
	for (ptr = Nodelist.first; ptr; ptr = ptr->next)
		applyattrs(ptr->u.n);
	deletelist(&Nodelist);
	deletelist(&Attrlist);
}

/* edges - store up node/subg lists until optional edge key can be seen */

static void bufferedges()
{
	item	*v;

	if (Nodelist.first) {
		v = cons_list(Nodelist.first);
		Nodelist.first = Nodelist.last = NILitem;
	}
	else {v = cons_subg(Subgraph); Subgraph = NIL(Agraph_t*);}
	listapp(&Edgelist,v);
}

static void endedge(void)
{
	char			*key;
	item			*aptr,*tptr,*p;

	Agnode_t		*t;
	Agraph_t		*subg;

	bufferedges();	/* pick up the terminal nodelist or subg */
	bindattrs(AGEDGE);

	/* look for "key" pseudo-attribute */
	key = NIL(char*);
	for (aptr = Attrlist.first; aptr; aptr = aptr->next) {
		if ((aptr->tag == T_atom) && streq(aptr->u.name,Key))
			key = aptr->str;
	}

	/* can make edges with node lists or subgraphs */
	for (p = Edgelist.first; p->next; p = p->next) {
		if (p->tag == T_subgraph) {
			subg = p->u.subg;
			for (t = agfstnode(subg); t; t = agnxtnode(subg,t))
				edgerhs(agsubnode(G,t,FALSE),NIL(char*),p->next,key);
		}
		else {
			for (tptr = p->u.list; tptr; tptr = tptr->next)
				edgerhs(tptr->u.n,tptr->str,p->next,key);
		}
	}
	deletelist(&Edgelist);
	deletelist(&Attrlist);
}

/* concat:
 */
static char*
concat (char* s1, char* s2)
{
  char*  s;
  char   buf[BUFSIZ];
  char*  sym;
  int    len = strlen(s1) + strlen(s2) + 1;

  if (len <= BUFSIZ) sym = buf;
  else sym = (char*)malloc(len);
  strcpy(sym,s1);
  strcat(sym,s2);
  s = agstrdup (G,sym);
  agstrfree (G,s1);
  agstrfree (G,s2);
  if (sym != buf) free (sym);
  return s;
}

/* concatPort:
 */
static char*
concatPort (char* s1, char* s2)
{
  char*  s;
  char   buf[BUFSIZ];
  char*  sym;
  int    len = strlen(s1) + strlen(s2) + 2;  /* one more for ':' */

  if (len <= BUFSIZ) sym = buf;
  else sym = (char*)malloc(len);
  sprintf (sym, "%s:%s", s1, s2);
  s = agstrdup (G,sym);
  agstrfree (G,s1);
  agstrfree (G,s2);
  if (sym != buf) free (sym);
  return s;
}


static void edgerhs(Agnode_t *tail, char *tport, item *hlist, char *key)
{
	Agnode_t		*head;
	Agraph_t		*subg;
	item			*hptr;

	if (hlist->tag == T_subgraph) {
		subg = hlist->u.subg;
		for (head = agfstnode(subg); head; head = agnxtnode(subg,head))
			newedge(tail,tport,agsubnode(G,head,FALSE),NIL(char*),key);
	}
	else {
		for (hptr = hlist->u.list; hptr; hptr = hptr->next)
			newedge(tail,tport,agsubnode(G,hptr->u.n,FALSE),hptr->str,key);
	}
}

static void mkport(Agedge_t *e, char *name, char *val)
{
	Agsym_t *attr;
	if (val) {
		if ((attr = agattr(G,AGEDGE,name,NIL(char*))) == NILsym)
			attr = agattr(G,AGEDGE,name,"");
		if (!attr->fixed)
			agxset(e,attr,val);
	}
}

static void newedge(Agnode_t *t, char *tport, Agnode_t *h, char *hport, char *key)
{
	Agedge_t 	*e;

	e = agedge(G,t,h,key,TRUE);
	if (e) {		/* can fail if graph is strict and t==h */
		char    *tp = tport;
		char    *hp = hport;
		if ((agtail(e) != aghead(e)) && (aghead(e) == t)) {
			/* could happen with an undirected edge */
			char    *temp;
			temp = tp; tp = hp; hp = temp;
		}
		mkport(e,TAILPORT_ID,tp);
		mkport(e,HEADPORT_ID,hp);
		applyattrs(e);
	}
}

/* graphs and subgraphs */


static void startgraph(char *name, int directed, int strict)
{
	static Agdesc_t	req;	/* get rid of warnings */

	if (G == NILgraph) {
		req.directed = directed;
		req.strict = strict;
		req.maingraph = TRUE;
		Ag_G_global = G = agopen(name,req,Disc);
	}
	else {
		Ag_G_global = G;
	}
	agstrfree(NIL(Agraph_t*),name);
}

static void endgraph()
{
	aglexeof();
	aginternalmapclearlocalnames(G);
}

static void opensubg(char *name)
{
	G = agsubg(G,name,TRUE);
	agstrfree(G,name);
}

static void closesubg()
{
	Subgraph = G;
	if ((G = agparent(G)) == NIL(Agraph_t*))
		aagerror("libgraph: parser lost root graph\n");
}

extern FILE *aagin;
Agraph_t *agconcat(Agraph_t *g, void *chan, Agdisc_t *disc)
{
	aagin = chan;
	G = g;
	Ag_G_global = NILgraph;
	Disc = (disc? disc :  &AgDefaultDisc);
	aglexinit(Disc, chan);
	aagparse();
	return Ag_G_global;
}

Agraph_t *agread(void *fp, Agdisc_t *disc) {return agconcat(NILgraph,fp,disc); }

