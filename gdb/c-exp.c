/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

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
     INT = 258,
     FLOAT = 259,
     DECFLOAT = 260,
     STRING = 261,
     CHAR = 262,
     NAME = 263,
     COMPLETE = 264,
     TYPENAME = 265,
     NAME_OR_INT = 266,
     OPERATOR = 267,
     STRUCT = 268,
     CLASS = 269,
     UNION = 270,
     ENUM = 271,
     SIZEOF = 272,
     UNSIGNED = 273,
     COLONCOLON = 274,
     TEMPLATE = 275,
     ERROR = 276,
     NEW = 277,
     DELETE = 278,
     REINTERPRET_CAST = 279,
     DYNAMIC_CAST = 280,
     STATIC_CAST = 281,
     CONST_CAST = 282,
     SIGNED_KEYWORD = 283,
     LONG = 284,
     SHORT = 285,
     INT_KEYWORD = 286,
     CONST_KEYWORD = 287,
     VOLATILE_KEYWORD = 288,
     DOUBLE_KEYWORD = 289,
     VARIABLE = 290,
     ASSIGN_MODIFY = 291,
     TRUEKEYWORD = 292,
     FALSEKEYWORD = 293,
     ABOVE_COMMA = 294,
     OROR = 295,
     ANDAND = 296,
     NOTEQUAL = 297,
     EQUAL = 298,
     GEQ = 299,
     LEQ = 300,
     RSH = 301,
     LSH = 302,
     DECREMENT = 303,
     INCREMENT = 304,
     UNARY = 305,
     DOT_STAR = 306,
     ARROW_STAR = 307,
     ARROW = 308,
     BLOCKNAME = 309,
     FILENAME = 310
   };
#endif
#define INT 258
#define FLOAT 259
#define DECFLOAT 260
#define STRING 261
#define CHAR 262
#define NAME 263
#define COMPLETE 264
#define TYPENAME 265
#define NAME_OR_INT 266
#define OPERATOR 267
#define STRUCT 268
#define CLASS 269
#define UNION 270
#define ENUM 271
#define SIZEOF 272
#define UNSIGNED 273
#define COLONCOLON 274
#define TEMPLATE 275
#define ERROR 276
#define NEW 277
#define DELETE 278
#define REINTERPRET_CAST 279
#define DYNAMIC_CAST 280
#define STATIC_CAST 281
#define CONST_CAST 282
#define SIGNED_KEYWORD 283
#define LONG 284
#define SHORT 285
#define INT_KEYWORD 286
#define CONST_KEYWORD 287
#define VOLATILE_KEYWORD 288
#define DOUBLE_KEYWORD 289
#define VARIABLE 290
#define ASSIGN_MODIFY 291
#define TRUEKEYWORD 292
#define FALSEKEYWORD 293
#define ABOVE_COMMA 294
#define OROR 295
#define ANDAND 296
#define NOTEQUAL 297
#define EQUAL 298
#define GEQ 299
#define LEQ 300
#define RSH 301
#define LSH 302
#define DECREMENT 303
#define INCREMENT 304
#define UNARY 305
#define DOT_STAR 306
#define ARROW_STAR 307
#define ARROW 308
#define BLOCKNAME 309
#define FILENAME 310




/* Copy the first part of user declarations.  */
#line 38 "c-exp.y"


#include "defs.h"
#include "gdb_string.h"
#include <ctype.h>
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "c-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "charset.h"
#include "block.h"
#include "cp-support.h"
#include "dfp.h"
#include "gdb_assert.h"
#include "macroscope.h"

#define parse_type builtin_type (parse_gdbarch)

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list. */

#define	yymaxdepth c_maxdepth
#define	yyparse	c_parse_internal
#define	yylex	c_lex
#define	yyerror	c_error
#define	yylval	c_lval
#define	yychar	c_char
#define	yydebug	c_debug
#define	yypact	c_pact	
#define	yyr1	c_r1			
#define	yyr2	c_r2			
#define	yydef	c_def		
#define	yychk	c_chk		
#define	yypgo	c_pgo		
#define	yyact	c_act		
#define	yyexca	c_exca
#define yyerrflag c_errflag
#define yynerrs	c_nerrs
#define	yyps	c_ps
#define	yypv	c_pv
#define	yys	c_s
#define	yy_yys	c_yys
#define	yystate	c_state
#define	yytmp	c_tmp
#define	yyv	c_v
#define	yy_yyv	c_yyv
#define	yyval	c_val
#define	yylloc	c_lloc
#define yyreds	c_reds		/* With YYDEBUG defined */
#define yytoks	c_toks		/* With YYDEBUG defined */
#define yyname	c_name		/* With YYDEBUG defined */
#define yyrule	c_rule		/* With YYDEBUG defined */
#define yylhs	c_yylhs
#define yylen	c_yylen
#define yydefred c_yydefred
#define yydgoto	c_yydgoto
#define yysindex c_yysindex
#define yyrindex c_yyrindex
#define yygindex c_yygindex
#define yytable	 c_yytable
#define yycheck	 c_yycheck

#ifndef YYDEBUG
#define	YYDEBUG 1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

int yyparse (void);

static int yylex (void);

void yyerror (char *);



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 127 "c-exp.y"
typedef union YYSTYPE {
    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val_int;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct {
      gdb_byte val[16];
      struct type *type;
    } typed_val_decfloat;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    struct typed_stoken tsval;
    struct ttype tsym;
    struct symtoken ssym;
    int voidval;
    struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;

    struct stoken_vector svec;
    struct type **tvec;
    int *ivec;
  } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 300 "c-exp.c.tmp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 157 "c-exp.y"

/* YYSTYPE gets defined by %union */
static int parse_number (char *, int, int, YYSTYPE *);
static struct stoken operator_stoken (const char *);


/* Line 214 of yacc.c.  */
#line 317 "c-exp.c.tmp"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE xfree
# endif
# ifndef YYMALLOC
#  define YYMALLOC xmalloc
# endif

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
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
	  register YYSIZE_T yyi;		\
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
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  109
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1106

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  33
/* YYNRULES -- Number of rules. */
#define YYNRULES  207
/* YYNRULES -- Number of states. */
#define YYNSTATES  320

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    61,    47,     2,
      67,    76,    59,    57,    39,    58,    65,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,     2,
      50,    41,    51,    42,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    75,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    45,    78,    74,     2,     2,     2,
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
      35,    36,    37,    38,    40,    43,    44,    48,    49,    52,
      53,    54,    55,    62,    63,    64,    68,    69,    70,    71,
      72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    18,    21,
      24,    27,    30,    33,    36,    39,    42,    45,    48,    52,
      57,    61,    65,    69,    73,    78,    82,    86,    90,    95,
      96,   102,   104,   105,   107,   111,   117,   119,   123,   128,
     133,   137,   141,   145,   149,   153,   157,   161,   165,   169,
     173,   177,   181,   185,   189,   193,   197,   201,   205,   209,
     213,   219,   223,   227,   229,   231,   233,   235,   237,   239,
     241,   246,   254,   262,   270,   278,   280,   283,   285,   287,
     289,   291,   293,   297,   301,   305,   310,   312,   315,   317,
     320,   322,   323,   327,   329,   331,   333,   334,   336,   339,
     341,   344,   346,   350,   353,   355,   358,   360,   363,   367,
     370,   374,   376,   378,   380,   382,   384,   387,   391,   394,
     398,   402,   406,   409,   412,   416,   421,   425,   429,   434,
     438,   443,   447,   452,   455,   459,   462,   466,   469,   473,
     475,   478,   481,   484,   487,   490,   493,   495,   498,   500,
     506,   509,   512,   514,   518,   520,   522,   524,   526,   528,
     532,   534,   539,   542,   545,   547,   549,   551,   554,   557,
     562,   567,   570,   573,   576,   579,   582,   585,   588,   591,
     594,   597,   600,   603,   606,   609,   612,   615,   618,   621,
     624,   627,   630,   633,   636,   639,   642,   645,   648,   652,
     656,   659,   661,   663,   665,   667,   669,   671
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      81,     0,    -1,    83,    -1,    82,    -1,   102,    -1,    84,
      -1,    83,    39,    84,    -1,    59,    84,    -1,    47,    84,
      -1,    58,    84,    -1,    57,    84,    -1,    73,    84,    -1,
      74,    84,    -1,    63,    84,    -1,    62,    84,    -1,    84,
      63,    -1,    84,    62,    -1,    17,    84,    -1,    84,    70,
     111,    -1,    84,    70,   111,     9,    -1,    84,    70,     9,
      -1,    84,    70,    92,    -1,    84,    69,    84,    -1,    84,
      65,   111,    -1,    84,    65,   111,     9,    -1,    84,    65,
       9,    -1,    84,    65,    92,    -1,    84,    68,    84,    -1,
      84,    66,    83,    75,    -1,    -1,    84,    67,    85,    87,
      76,    -1,    77,    -1,    -1,    84,    -1,    87,    39,    84,
      -1,    84,    67,   106,    76,    94,    -1,    78,    -1,    86,
      87,    88,    -1,    86,   102,    88,    84,    -1,    67,   102,
      76,    84,    -1,    67,    83,    76,    -1,    84,    56,    84,
      -1,    84,    59,    84,    -1,    84,    60,    84,    -1,    84,
      61,    84,    -1,    84,    57,    84,    -1,    84,    58,    84,
      -1,    84,    55,    84,    -1,    84,    54,    84,    -1,    84,
      49,    84,    -1,    84,    48,    84,    -1,    84,    53,    84,
      -1,    84,    52,    84,    -1,    84,    50,    84,    -1,    84,
      51,    84,    -1,    84,    47,    84,    -1,    84,    46,    84,
      -1,    84,    45,    84,    -1,    84,    44,    84,    -1,    84,
      43,    84,    -1,    84,    42,    84,    79,    84,    -1,    84,
      41,    84,    -1,    84,    36,    84,    -1,     3,    -1,     7,
      -1,    11,    -1,     4,    -1,     5,    -1,    91,    -1,    35,
      -1,    17,    67,   102,    76,    -1,    24,    50,   102,    51,
      67,    84,    76,    -1,    26,    50,   102,    51,    67,    84,
      76,    -1,    25,    50,   102,    51,    67,    84,    76,    -1,
      27,    50,   102,    51,    67,    84,    76,    -1,     6,    -1,
      89,     6,    -1,    89,    -1,    37,    -1,    38,    -1,    71,
      -1,    72,    -1,    90,    19,   111,    -1,    90,    19,   111,
      -1,   103,    19,   111,    -1,   103,    19,    74,   111,    -1,
      92,    -1,    19,   111,    -1,   112,    -1,    56,     8,    -1,
     109,    -1,    -1,    94,    93,    94,    -1,    95,    -1,   109,
      -1,    96,    -1,    -1,    59,    -1,    59,    98,    -1,    47,
      -1,    47,    98,    -1,    99,    -1,    67,    98,    76,    -1,
      99,   100,    -1,   100,    -1,    99,   101,    -1,   101,    -1,
      66,    75,    -1,    66,     3,    75,    -1,    67,    76,    -1,
      67,   106,    76,    -1,   107,    -1,    10,    -1,    31,    -1,
      29,    -1,    30,    -1,    29,    31,    -1,    29,    28,    31,
      -1,    29,    28,    -1,    28,    29,    31,    -1,    18,    29,
      31,    -1,    29,    18,    31,    -1,    29,    18,    -1,    29,
      29,    -1,    29,    29,    31,    -1,    29,    29,    28,    31,
      -1,    29,    29,    28,    -1,    28,    29,    29,    -1,    28,
      29,    29,    31,    -1,    18,    29,    29,    -1,    18,    29,
      29,    31,    -1,    29,    29,    18,    -1,    29,    29,    18,
      31,    -1,    30,    31,    -1,    30,    28,    31,    -1,    30,
      28,    -1,    18,    30,    31,    -1,    30,    18,    -1,    30,
      18,    31,    -1,    34,    -1,    29,    34,    -1,    13,   111,
      -1,    14,   111,    -1,    15,   111,    -1,    16,   111,    -1,
      18,   105,    -1,    18,    -1,    28,   105,    -1,    28,    -1,
      20,   111,    50,   102,    51,    -1,    96,   103,    -1,   103,
      96,    -1,   104,    -1,   103,    19,   111,    -1,    10,    -1,
      31,    -1,    29,    -1,    30,    -1,   102,    -1,   106,    39,
     102,    -1,   103,    -1,   107,    97,    98,    97,    -1,    32,
      33,    -1,    33,    32,    -1,   108,    -1,    32,    -1,    33,
      -1,    12,    22,    -1,    12,    23,    -1,    12,    22,    66,
      75,    -1,    12,    23,    66,    75,    -1,    12,    57,    -1,
      12,    58,    -1,    12,    59,    -1,    12,    60,    -1,    12,
      61,    -1,    12,    46,    -1,    12,    47,    -1,    12,    45,
      -1,    12,    74,    -1,    12,    73,    -1,    12,    41,    -1,
      12,    50,    -1,    12,    51,    -1,    12,    36,    -1,    12,
      55,    -1,    12,    54,    -1,    12,    49,    -1,    12,    48,
      -1,    12,    53,    -1,    12,    52,    -1,    12,    44,    -1,
      12,    43,    -1,    12,    63,    -1,    12,    62,    -1,    12,
      39,    -1,    12,    69,    -1,    12,    70,    -1,    12,    67,
      76,    -1,    12,    66,    75,    -1,    12,   107,    -1,     8,
      -1,    71,    -1,    10,    -1,    11,    -1,   110,    -1,     8,
      -1,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   249,   249,   250,   253,   260,   261,   266,   270,   274,
     278,   282,   286,   290,   294,   298,   302,   306,   310,   316,
     323,   333,   341,   345,   351,   358,   368,   376,   380,   387,
     384,   394,   398,   401,   405,   409,   421,   424,   431,   437,
     443,   449,   453,   457,   461,   465,   469,   473,   477,   481,
     485,   489,   493,   497,   501,   505,   509,   513,   517,   521,
     525,   529,   533,   539,   546,   555,   566,   573,   580,   583,
     587,   595,   601,   607,   613,   622,   639,   657,   691,   698,
     707,   715,   721,   731,   746,   761,   787,   788,   816,   870,
     876,   877,   880,   883,   884,   888,   889,   892,   894,   896,
     898,   900,   903,   905,   910,   917,   919,   923,   925,   929,
     931,   943,   947,   949,   951,   953,   955,   957,   959,   961,
     963,   965,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   985,   987,   989,   991,   993,   995,   997,   999,  1001,
    1003,  1005,  1008,  1011,  1014,  1017,  1021,  1023,  1027,  1032,
    1036,  1038,  1040,  1088,  1113,  1114,  1120,  1126,  1135,  1140,
    1147,  1148,  1152,  1153,  1156,  1160,  1162,  1166,  1168,  1170,
    1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,  1190,
    1192,  1194,  1196,  1198,  1200,  1240,  1242,  1244,  1246,  1248,
    1250,  1252,  1254,  1256,  1258,  1260,  1262,  1264,  1266,  1268,
    1270,  1285,  1286,  1287,  1288,  1289,  1292,  1293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DECFLOAT", "STRING",
  "CHAR", "NAME", "COMPLETE", "TYPENAME", "NAME_OR_INT", "OPERATOR",
  "STRUCT", "CLASS", "UNION", "ENUM", "SIZEOF", "UNSIGNED", "COLONCOLON",
  "TEMPLATE", "ERROR", "NEW", "DELETE", "REINTERPRET_CAST", "DYNAMIC_CAST",
  "STATIC_CAST", "CONST_CAST", "SIGNED_KEYWORD", "LONG", "SHORT",
  "INT_KEYWORD", "CONST_KEYWORD", "VOLATILE_KEYWORD", "DOUBLE_KEYWORD",
  "VARIABLE", "ASSIGN_MODIFY", "TRUEKEYWORD", "FALSEKEYWORD", "','",
  "ABOVE_COMMA", "'='", "'?'", "OROR", "ANDAND", "'|'", "'^'", "'&'",
  "NOTEQUAL", "EQUAL", "'<'", "'>'", "GEQ", "LEQ", "RSH", "LSH", "'@'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "DECREMENT", "INCREMENT", "UNARY",
  "'.'", "'['", "'('", "DOT_STAR", "ARROW_STAR", "ARROW", "BLOCKNAME",
  "FILENAME", "'!'", "'~'", "']'", "')'", "'{'", "'}'", "':'", "$accept",
  "start", "type_exp", "exp1", "exp", "@1", "lcurly", "arglist", "rcurly",
  "string_exp", "block", "variable", "qualified_name", "space_identifier",
  "const_or_volatile", "cv_with_space_id",
  "const_or_volatile_or_space_identifier_noopt",
  "const_or_volatile_or_space_identifier", "abs_decl", "direct_abs_decl",
  "array_mod", "func_mod", "type", "typebase", "qualified_type",
  "typename", "nonempty_typelist", "ptype", "const_and_volatile",
  "const_or_volatile_noopt", "operator", "name", "name_not_typename", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    44,
     294,    61,    63,   295,   296,   124,    94,    38,   297,   298,
      60,    62,   299,   300,   301,   302,    64,    43,    45,    42,
      47,    37,   303,   304,   305,    46,    91,    40,   306,   307,
     308,   309,   310,    33,   126,    93,    41,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    80,    81,    81,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      84,    86,    87,    87,    87,    84,    88,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    89,    89,    84,    84,    84,
      90,    90,    90,    91,    92,    92,    91,    91,    91,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   105,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   111,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     4,
       3,     3,     3,     3,     4,     3,     3,     3,     4,     0,
       5,     1,     0,     1,     3,     5,     1,     3,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     7,     7,     7,     1,     2,     1,     1,     1,
       1,     1,     3,     3,     3,     4,     1,     2,     1,     2,
       1,     0,     3,     1,     1,     1,     0,     1,     2,     1,
       2,     1,     3,     2,     1,     2,     1,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     2,     3,     2,     3,
       3,     3,     2,     2,     3,     4,     3,     3,     4,     3,
       4,     3,     4,     2,     3,     2,     3,     2,     3,     1,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     5,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     4,     2,     2,     1,     1,     1,     2,     2,     4,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
      91,    63,    66,    67,    75,    64,   206,   112,    65,     0,
       0,     0,     0,    91,   146,     0,     0,     0,     0,     0,
       0,   148,   114,   115,   113,   165,   166,   139,    69,    78,
      79,    91,    91,    91,    91,    91,    91,    91,   207,    81,
      91,    91,    31,     0,     3,     2,     5,    32,    77,     0,
      68,    86,     0,    93,    91,     4,   160,   152,   111,   164,
      94,    88,   201,   203,   204,    91,   202,   205,   141,   142,
     143,   144,    91,    17,    91,   154,   156,   157,   155,   145,
      87,     0,    91,    91,    91,    91,   156,   157,   147,   122,
     118,   123,   116,   140,   137,   135,   133,   162,   163,     8,
      10,     9,     7,    14,    13,     0,     0,    11,    12,     1,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    16,    15,    91,    91,    29,    91,    91,
      91,    33,     0,     0,    76,     0,     0,    91,   150,     0,
     151,    95,     0,   167,   168,   184,   195,   181,   192,   191,
     178,   176,   177,   188,   187,   182,   183,   190,   189,   186,
     185,   171,   172,   173,   174,   175,   194,   193,     0,     0,
     196,   197,   180,   179,   160,   200,     0,   129,   120,   136,
      91,     0,     0,     0,     0,   127,   119,   121,   117,   131,
     126,   124,   138,   134,    40,    91,     6,    62,    61,     0,
      59,    58,    57,    56,    55,    50,    49,    53,    54,    52,
      51,    48,    47,    41,    45,    46,    42,    43,    44,    25,
     203,    26,    23,     0,    32,   158,     0,    27,    22,    20,
      21,    18,    91,    36,    37,    91,    83,    89,    92,    90,
       0,     0,    84,    99,    97,     0,    91,    96,   101,   104,
     106,     0,     0,   199,   198,    70,   130,     0,     0,     0,
       0,     0,   128,   132,   125,    39,    91,    24,    28,     0,
      91,    91,    19,    34,    38,   153,    85,   100,    98,     0,
     107,   109,     0,     0,   161,    91,   103,   105,   169,   170,
     149,    91,    91,    91,    91,    60,    30,   159,    35,   108,
     102,   110,     0,     0,     0,     0,    71,    73,    72,    74
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    43,    44,   105,    46,   234,    47,   142,   244,    48,
      49,    50,    51,   147,    52,    53,    54,   152,   257,   258,
     259,   260,   235,    74,    57,    79,   293,    58,    59,    60,
      67,    68,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const short yypact[] =
{
     368,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    58,
      58,    58,    58,   443,    64,    58,    58,   -37,   -33,   -19,
      -4,   143,   170,   105,  -140,    -6,    23,  -140,  -140,  -140,
    -140,   368,   368,   368,   368,   368,   368,   368,    45,  -140,
     368,   368,  -140,    67,  -140,    38,   867,   293,    75,    73,
    -140,  -140,    41,  -140,   245,  -140,    -7,  -140,   130,  -140,
      69,  -140,  -140,  -140,  -140,   583,  -140,  -140,  -140,  -140,
    -140,  -140,   368,   173,   159,  -140,   110,    97,  -140,  -140,
    -140,    95,   245,   245,   245,   245,   126,  -140,  -140,   129,
     144,   216,  -140,  -140,   145,   150,  -140,  -140,  -140,   173,
     173,   173,   173,   173,   173,   -24,    85,   173,   173,  -140,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,  -140,  -140,   650,   368,   245,   368,   368,
     677,   867,   -36,   106,  -140,    58,   177,     1,    24,    50,
    -140,  -140,    12,   121,   134,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   132,   138,
    -140,  -140,  -140,  -140,    24,   130,   140,   186,  -140,  -140,
     245,   167,   181,   197,   198,   190,  -140,  -140,  -140,   206,
     219,  -140,  -140,  -140,  -140,   368,   867,   867,   867,   684,
     923,   949,   974,   998,   509,  1019,  1019,  1036,  1036,  1036,
    1036,   276,   276,   351,   426,   426,   173,   173,   173,  -140,
     115,  -140,   242,   -25,   293,  -140,   -23,   606,   606,  -140,
    -140,   243,   368,  -140,  -140,   368,   235,  -140,  -140,  -140,
      58,    58,   187,   203,   -22,    15,   136,     7,    65,  -140,
    -140,   182,   191,  -140,  -140,   518,  -140,   217,   200,   205,
     214,   215,  -140,  -140,  -140,   173,   368,  -140,  -140,    -3,
     245,     1,  -140,   867,   173,  -140,  -140,  -140,  -140,   208,
    -140,  -140,   209,    -1,  -140,   195,  -140,  -140,  -140,  -140,
    -140,   368,   368,   368,   368,   896,  -140,  -140,  -140,  -140,
    -140,  -140,   723,   759,   795,   831,  -140,  -140,  -140,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -140,  -140,  -140,     2,   -12,  -140,  -140,    52,   151,  -140,
    -140,  -140,   -44,  -140,  -139,  -140,   -26,    30,   -74,  -140,
      35,    44,     4,     0,  -140,   267,   168,   249,  -140,  -138,
    -140,    -5,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -154
static const short yytable[] =
{
      56,    73,    45,   242,    55,    69,    70,    71,   248,   249,
      80,    81,   149,    82,   110,   110,   280,    83,   289,    99,
     100,   101,   102,   103,   104,    25,    26,    97,   107,   108,
     150,    84,   151,    25,    26,   141,   242,    56,   280,    25,
      26,   106,   243,   250,   255,   256,    85,    56,   150,   -91,
     278,   143,   204,   281,   148,    98,    25,    26,    62,   253,
      63,    64,    65,   -91,   -80,   184,    62,   109,    63,    64,
      65,   254,    56,   306,    75,   311,   186,   110,   255,   256,
     -91,   144,   184,   184,   184,   184,   191,   192,   193,   194,
     290,   231,   145,    76,    77,    78,   240,   146,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    66,   150,    94,   251,   -90,   237,   238,   189,    66,
     232,   255,   295,    95,  -112,   241,    96,   184,   233,   187,
     246,   188,   308,   249,   252,   190,     7,  -112,  -112,     9,
      10,    11,    12,    75,    14,   195,    16,   196,   150,   151,
     197,   205,    25,    26,    21,    22,    23,    24,    25,    26,
      27,  -112,    86,    87,    78,   198,   202,   -96,   149,   287,
     288,   203,   292,   253,   243,   247,   -91,   261,    89,   -96,
     184,    25,    26,   275,   267,   254,   -96,   -96,    90,    91,
     262,    92,   255,   256,    93,     7,  -153,   263,     9,    10,
      11,    12,   291,    14,   264,    16,   265,   266,   268,  -153,
    -153,   272,   141,    21,    22,    23,    24,    25,    26,    27,
     283,   151,   269,   284,   199,   133,   134,   273,   135,   136,
     137,   138,   139,   140,   200,   285,   286,   201,   270,   271,
     274,   277,   282,   275,   -82,     7,   184,   298,     9,    10,
      11,    12,   254,    14,   305,    16,   299,   301,   300,   255,
     256,   291,   302,    21,    22,    23,    24,    25,    26,    27,
     184,   303,   304,   309,   307,   310,   279,   294,    88,   312,
     313,   314,   315,   296,   245,   184,     1,     2,     3,     4,
       5,     6,   297,     7,     8,   236,     9,    10,    11,    12,
      13,    14,    15,    16,   185,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,   127,   128,   129,   130,   131,   132,   133,   134,
      31,   135,   136,   137,   138,   139,   140,     0,     0,   -91,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
      37,     0,     0,     0,    38,    39,    40,    41,     0,     0,
      42,     1,     2,     3,     4,     5,     6,     0,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,    30,     0,   128,   129,
     130,   131,   132,   133,   134,    31,   135,   136,   137,   138,
     139,   140,     0,     0,     0,    32,    33,    34,     0,     0,
      35,    36,     0,     0,     0,    37,     0,     0,     0,    38,
      39,    40,    41,     0,     0,    42,     1,     2,     3,     4,
       5,     6,     0,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,    30,     0,     0,     0,   130,   131,   132,   133,   134,
      31,   135,   136,   137,   138,   139,   140,     0,     0,     0,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
      72,     0,     0,     0,    38,    39,    40,    41,     0,     0,
      42,     1,     2,     3,     4,     5,     6,     0,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,    30,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
      35,    36,     0,     0,     0,    37,     0,     0,     0,    38,
      39,    40,    41,     7,     0,    42,     9,    10,    11,    12,
       0,    14,     0,    16,     0,   153,   154,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,     0,   155,
       0,     0,   156,     0,   157,     0,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
     171,   172,   173,   174,   175,   176,   177,     0,     0,   178,
     179,     0,   180,   181,     0,     0,   182,   183,    62,   229,
     230,    64,    65,     9,    10,    11,    12,     0,    14,     0,
      16,   135,   136,   137,   138,   139,   140,     0,    21,    22,
      23,    24,    25,    26,    27,    62,   239,   230,    64,    65,
       9,    10,    11,    12,     0,    14,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
     111,    66,     0,     0,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    66,   135,
     136,   137,   138,   139,   140,     0,     0,     0,     0,   111,
       0,     0,     0,   276,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,     0,   111,     0,     0,     0,   316,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
       0,   111,     0,     0,     0,   317,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,     0,
     135,   136,   137,   138,   139,   140,     0,   111,     0,     0,
       0,   318,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,     0,   135,   136,   137,   138,
     139,   140,     0,   111,     0,     0,     0,   319,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,   135,   136,   137,   138,   139,   140,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,   135,   136,   137,   138,   139,   140,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,   135,   136,   137,   138,   139,   140,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,   135,   136,   137,   138,   139,   140
};

static const short yycheck[] =
{
       0,    13,     0,    39,     0,    10,    11,    12,   147,   147,
      15,    16,    19,    50,    39,    39,    39,    50,     3,    31,
      32,    33,    34,    35,    36,    32,    33,    33,    40,    41,
      56,    50,    58,    32,    33,    47,    39,    37,    39,    32,
      33,    37,    78,    19,    66,    67,    50,    47,    74,    56,
      75,    47,    76,    76,    54,    32,    32,    33,     8,    47,
      10,    11,    12,    56,    19,    65,     8,     0,    10,    11,
      12,    59,    72,    76,    10,    76,    72,    39,    66,    67,
      56,     6,    82,    83,    84,    85,    82,    83,    84,    85,
      75,   135,    19,    29,    30,    31,   140,    56,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    71,   148,    18,    74,    56,   138,   139,    31,    71,
     135,    66,    67,    28,    19,   140,    31,   137,   136,    29,
     145,    31,   281,   281,   149,    50,    10,    32,    33,    13,
      14,    15,    16,    10,    18,    29,    20,    31,   184,   185,
      31,    76,    32,    33,    28,    29,    30,    31,    32,    33,
      34,    56,    29,    30,    31,    31,    31,    47,    19,   253,
     254,    31,   256,    47,    78,     8,    56,    66,    18,    59,
     190,    32,    33,   205,   190,    59,    66,    67,    28,    29,
      66,    31,    66,    67,    34,    10,    19,    75,    13,    14,
      15,    16,    76,    18,    76,    20,    76,    31,    51,    32,
      33,    31,   234,    28,    29,    30,    31,    32,    33,    34,
     242,   257,    51,   245,    18,    62,    63,    31,    65,    66,
      67,    68,    69,    70,    28,   250,   251,    31,    51,    51,
      31,     9,     9,   265,    19,    10,   256,    75,    13,    14,
      15,    16,    59,    18,   276,    20,    75,    67,    51,    66,
      67,    76,    67,    28,    29,    30,    31,    32,    33,    34,
     280,    67,    67,    75,   280,    76,   234,   257,    21,   301,
     302,   303,   304,   258,   143,   295,     3,     4,     5,     6,
       7,     8,   258,    10,    11,   137,    13,    14,    15,    16,
      17,    18,    19,    20,    65,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    56,    57,    58,    59,    60,    61,    62,    63,
      47,    65,    66,    67,    68,    69,    70,    -1,    -1,    56,
      57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    57,    58,
      59,    60,    61,    62,    63,    47,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    -1,    77,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      47,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    10,    -1,    77,    13,    14,    15,    16,
      -1,    18,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    39,    -1,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    73,    74,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    65,    66,    67,    68,    69,    70,    -1,    28,    29,
      30,    31,    32,    33,    34,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    71,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    71,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    79,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    -1,    36,    -1,    -1,    -1,    76,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      -1,    36,    -1,    -1,    -1,    76,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    -1,    36,    -1,    -1,
      -1,    76,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    -1,    36,    -1,    -1,    -1,    76,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    13,
      14,    15,    16,    17,    18,    19,    20,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    37,
      38,    47,    57,    58,    59,    62,    63,    67,    71,    72,
      73,    74,    77,    81,    82,    83,    84,    86,    89,    90,
      91,    92,    94,    95,    96,   102,   103,   104,   107,   108,
     109,   112,     8,    10,    11,    12,    71,   110,   111,   111,
     111,   111,    67,    84,   103,    10,    29,    30,    31,   105,
     111,   111,    50,    50,    50,    50,    29,    30,   105,    18,
      28,    29,    31,    34,    18,    28,    31,    33,    32,    84,
      84,    84,    84,    84,    84,    83,   102,    84,    84,     0,
      39,    36,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    66,    67,    68,    69,
      70,    84,    87,   102,     6,    19,    56,    93,   103,    19,
      96,    96,    97,    22,    23,    36,    39,    41,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    58,    59,    60,    61,    62,    63,    66,    67,
      69,    70,    73,    74,   103,   107,   102,    29,    31,    31,
      50,   102,   102,   102,   102,    29,    31,    31,    31,    18,
      28,    31,    31,    31,    76,    76,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,     9,
      10,    92,   111,    83,    85,   102,   106,    84,    84,     9,
      92,   111,    39,    78,    88,    88,   111,     8,    94,   109,
      19,    74,   111,    47,    59,    66,    67,    98,    99,   100,
     101,    66,    66,    75,    76,    76,    31,   102,    51,    51,
      51,    51,    31,    31,    31,    84,    79,     9,    75,    87,
      39,    76,     9,    84,    84,   111,   111,    98,    98,     3,
      75,    76,    98,   106,    97,    67,   100,   101,    75,    75,
      51,    67,    67,    67,    67,    84,    76,   102,    94,    75,
      76,    76,    84,    84,    84,    84,    76,    76,    76,    76
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
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
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
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
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

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
  register const char *yys = yystr;

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
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



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
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

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
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to xreallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



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
	/* Give user a chance to xreallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

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
        case 4:
#line 254 "c-exp.y"
    { write_exp_elt_opcode(OP_TYPE);
			  write_exp_elt_type(yyvsp[0].tval);
			  write_exp_elt_opcode(OP_TYPE);}
    break;

  case 6:
#line 262 "c-exp.y"
    { write_exp_elt_opcode (BINOP_COMMA); }
    break;

  case 7:
#line 267 "c-exp.y"
    { write_exp_elt_opcode (UNOP_IND); }
    break;

  case 8:
#line 271 "c-exp.y"
    { write_exp_elt_opcode (UNOP_ADDR); }
    break;

  case 9:
#line 275 "c-exp.y"
    { write_exp_elt_opcode (UNOP_NEG); }
    break;

  case 10:
#line 279 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PLUS); }
    break;

  case 11:
#line 283 "c-exp.y"
    { write_exp_elt_opcode (UNOP_LOGICAL_NOT); }
    break;

  case 12:
#line 287 "c-exp.y"
    { write_exp_elt_opcode (UNOP_COMPLEMENT); }
    break;

  case 13:
#line 291 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PREINCREMENT); }
    break;

  case 14:
#line 295 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PREDECREMENT); }
    break;

  case 15:
#line 299 "c-exp.y"
    { write_exp_elt_opcode (UNOP_POSTINCREMENT); }
    break;

  case 16:
#line 303 "c-exp.y"
    { write_exp_elt_opcode (UNOP_POSTDECREMENT); }
    break;

  case 17:
#line 307 "c-exp.y"
    { write_exp_elt_opcode (UNOP_SIZEOF); }
    break;

  case 18:
#line 311 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 19:
#line 317 "c-exp.y"
    { mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string (yyvsp[-1].sval);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 20:
#line 324 "c-exp.y"
    { struct stoken s;
			  mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_PTR);
			  s.ptr = "";
			  s.length = 0;
			  write_exp_string (s);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 21:
#line 334 "c-exp.y"
    { /* exp->type::name becomes exp->*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 22:
#line 342 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 23:
#line 346 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 24:
#line 352 "c-exp.y"
    { mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string (yyvsp[-1].sval);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 25:
#line 359 "c-exp.y"
    { struct stoken s;
			  mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_STRUCT);
			  s.ptr = "";
			  s.length = 0;
			  write_exp_string (s);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 26:
#line 369 "c-exp.y"
    { /* exp.type::name becomes exp.*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 27:
#line 377 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 28:
#line 381 "c-exp.y"
    { write_exp_elt_opcode (BINOP_SUBSCRIPT); }
    break;

  case 29:
#line 387 "c-exp.y"
    { start_arglist (); }
    break;

  case 30:
#line 389 "c-exp.y"
    { write_exp_elt_opcode (OP_FUNCALL);
			  write_exp_elt_longcst ((LONGEST) end_arglist ());
			  write_exp_elt_opcode (OP_FUNCALL); }
    break;

  case 31:
#line 395 "c-exp.y"
    { start_arglist (); }
    break;

  case 33:
#line 402 "c-exp.y"
    { arglist_len = 1; }
    break;

  case 34:
#line 406 "c-exp.y"
    { arglist_len++; }
    break;

  case 35:
#line 410 "c-exp.y"
    { int i;
			  write_exp_elt_opcode (TYPE_INSTANCE);
			  write_exp_elt_longcst ((LONGEST) yyvsp[-2].ivec[0]);
			  for (i = 0; i < yyvsp[-2].ivec[0]; ++i)
			    write_exp_elt_type (yyvsp[-2].tvec[i + 1]);
			  write_exp_elt_longcst((LONGEST) yyvsp[-2].ivec[0]);
			  write_exp_elt_opcode (TYPE_INSTANCE);
			  xfree (yyvsp[-2].tvec);
			}
    break;

  case 36:
#line 422 "c-exp.y"
    { yyval.lval = end_arglist () - 1; }
    break;

  case 37:
#line 425 "c-exp.y"
    { write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) yyvsp[0].lval);
			  write_exp_elt_opcode (OP_ARRAY); }
    break;

  case 38:
#line 432 "c-exp.y"
    { write_exp_elt_opcode (UNOP_MEMVAL);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_MEMVAL); }
    break;

  case 39:
#line 438 "c-exp.y"
    { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 40:
#line 444 "c-exp.y"
    { }
    break;

  case 41:
#line 450 "c-exp.y"
    { write_exp_elt_opcode (BINOP_REPEAT); }
    break;

  case 42:
#line 454 "c-exp.y"
    { write_exp_elt_opcode (BINOP_MUL); }
    break;

  case 43:
#line 458 "c-exp.y"
    { write_exp_elt_opcode (BINOP_DIV); }
    break;

  case 44:
#line 462 "c-exp.y"
    { write_exp_elt_opcode (BINOP_REM); }
    break;

  case 45:
#line 466 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ADD); }
    break;

  case 46:
#line 470 "c-exp.y"
    { write_exp_elt_opcode (BINOP_SUB); }
    break;

  case 47:
#line 474 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LSH); }
    break;

  case 48:
#line 478 "c-exp.y"
    { write_exp_elt_opcode (BINOP_RSH); }
    break;

  case 49:
#line 482 "c-exp.y"
    { write_exp_elt_opcode (BINOP_EQUAL); }
    break;

  case 50:
#line 486 "c-exp.y"
    { write_exp_elt_opcode (BINOP_NOTEQUAL); }
    break;

  case 51:
#line 490 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LEQ); }
    break;

  case 52:
#line 494 "c-exp.y"
    { write_exp_elt_opcode (BINOP_GEQ); }
    break;

  case 53:
#line 498 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LESS); }
    break;

  case 54:
#line 502 "c-exp.y"
    { write_exp_elt_opcode (BINOP_GTR); }
    break;

  case 55:
#line 506 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_AND); }
    break;

  case 56:
#line 510 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_XOR); }
    break;

  case 57:
#line 514 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_IOR); }
    break;

  case 58:
#line 518 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_AND); }
    break;

  case 59:
#line 522 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_OR); }
    break;

  case 60:
#line 526 "c-exp.y"
    { write_exp_elt_opcode (TERNOP_COND); }
    break;

  case 61:
#line 530 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN); }
    break;

  case 62:
#line 534 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (yyvsp[-1].opcode);
			  write_exp_elt_opcode (BINOP_ASSIGN_MODIFY); }
    break;

  case 63:
#line 540 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (yyvsp[0].typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)(yyvsp[0].typed_val_int.val));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 64:
#line 547 "c-exp.y"
    {
			  struct stoken_vector vec;
			  vec.len = 1;
			  vec.tokens = &yyvsp[0].tsval;
			  write_exp_string_vector (yyvsp[0].tsval.type, &vec);
			}
    break;

  case 65:
#line 556 "c-exp.y"
    { YYSTYPE val;
			  parse_number (yyvsp[0].ssym.stoken.ptr, yyvsp[0].ssym.stoken.length, 0, &val);
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (val.typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)val.typed_val_int.val);
			  write_exp_elt_opcode (OP_LONG);
			}
    break;

  case 66:
#line 567 "c-exp.y"
    { write_exp_elt_opcode (OP_DOUBLE);
			  write_exp_elt_type (yyvsp[0].typed_val_float.type);
			  write_exp_elt_dblcst (yyvsp[0].typed_val_float.dval);
			  write_exp_elt_opcode (OP_DOUBLE); }
    break;

  case 67:
#line 574 "c-exp.y"
    { write_exp_elt_opcode (OP_DECFLOAT);
			  write_exp_elt_type (yyvsp[0].typed_val_decfloat.type);
			  write_exp_elt_decfloatcst (yyvsp[0].typed_val_decfloat.val);
			  write_exp_elt_opcode (OP_DECFLOAT); }
    break;

  case 70:
#line 588 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_int);
			  CHECK_TYPEDEF (yyvsp[-1].tval);
			  write_exp_elt_longcst ((LONGEST) TYPE_LENGTH (yyvsp[-1].tval));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 71:
#line 596 "c-exp.y"
    { write_exp_elt_opcode (UNOP_REINTERPRET_CAST);
			  write_exp_elt_type (yyvsp[-4].tval);
			  write_exp_elt_opcode (UNOP_REINTERPRET_CAST); }
    break;

  case 72:
#line 602 "c-exp.y"
    { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-4].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 73:
#line 608 "c-exp.y"
    { write_exp_elt_opcode (UNOP_DYNAMIC_CAST);
			  write_exp_elt_type (yyvsp[-4].tval);
			  write_exp_elt_opcode (UNOP_DYNAMIC_CAST); }
    break;

  case 74:
#line 614 "c-exp.y"
    { /* We could do more error checking here, but
			     it doesn't seem worthwhile.  */
			  write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-4].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 75:
#line 623 "c-exp.y"
    {
			  /* We copy the string here, and not in the
			     lexer, to guarantee that we do not leak a
			     string.  Note that we follow the
			     NUL-termination convention of the
			     lexer.  */
			  struct typed_stoken *vec = XNEW (struct typed_stoken);
			  yyval.svec.len = 1;
			  yyval.svec.tokens = vec;

			  vec->type = yyvsp[0].tsval.type;
			  vec->length = yyvsp[0].tsval.length;
			  vec->ptr = xmalloc (yyvsp[0].tsval.length + 1);
			  memcpy (vec->ptr, yyvsp[0].tsval.ptr, yyvsp[0].tsval.length + 1);
			}
    break;

  case 76:
#line 640 "c-exp.y"
    {
			  /* Note that we NUL-terminate here, but just
			     for convenience.  */
			  char *p;
			  ++yyval.svec.len;
			  yyval.svec.tokens = xrealloc (yyval.svec.tokens,
					       yyval.svec.len * sizeof (struct typed_stoken));

			  p = xmalloc (yyvsp[0].tsval.length + 1);
			  memcpy (p, yyvsp[0].tsval.ptr, yyvsp[0].tsval.length + 1);

			  yyval.svec.tokens[yyval.svec.len - 1].type = yyvsp[0].tsval.type;
			  yyval.svec.tokens[yyval.svec.len - 1].length = yyvsp[0].tsval.length;
			  yyval.svec.tokens[yyval.svec.len - 1].ptr = p;
			}
    break;

  case 77:
#line 658 "c-exp.y"
    {
			  int i;
			  enum c_string_type type = C_STRING;

			  for (i = 0; i < yyvsp[0].svec.len; ++i)
			    {
			      switch (yyvsp[0].svec.tokens[i].type)
				{
				case C_STRING:
				  break;
				case C_WIDE_STRING:
				case C_STRING_16:
				case C_STRING_32:
				  if (type != C_STRING
				      && type != yyvsp[0].svec.tokens[i].type)
				    error ("Undefined string concatenation.");
				  type = yyvsp[0].svec.tokens[i].type;
				  break;
				default:
				  /* internal error */
				  internal_error (__FILE__, __LINE__,
						  "unrecognized type in string concatenation");
				}
			    }

			  write_exp_string_vector (type, &yyvsp[0].svec);
			  for (i = 0; i < yyvsp[0].svec.len; ++i)
			    xfree (yyvsp[0].svec.tokens[i].ptr);
			  xfree (yyvsp[0].svec.tokens);
			}
    break;

  case 78:
#line 692 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (parse_type->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 1);
                          write_exp_elt_opcode (OP_LONG); }
    break;

  case 79:
#line 699 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (parse_type->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 0);
                          write_exp_elt_opcode (OP_LONG); }
    break;

  case 80:
#line 708 "c-exp.y"
    {
			  if (yyvsp[0].ssym.sym)
			    yyval.bval = SYMBOL_BLOCK_VALUE (yyvsp[0].ssym.sym);
			  else
			    error ("No file or function \"%s\".",
				   copy_name (yyvsp[0].ssym.stoken));
			}
    break;

  case 81:
#line 716 "c-exp.y"
    {
			  yyval.bval = yyvsp[0].bval;
			}
    break;

  case 82:
#line 722 "c-exp.y"
    { struct symbol *tem
			    = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					     VAR_DOMAIN, (int *) NULL);
			  if (!tem || SYMBOL_CLASS (tem) != LOC_BLOCK)
			    error ("No function \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));
			  yyval.bval = SYMBOL_BLOCK_VALUE (tem); }
    break;

  case 83:
#line 732 "c-exp.y"
    { struct symbol *sym;
			  sym = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					       VAR_DOMAIN, (int *) NULL);
			  if (sym == 0)
			    error ("No symbol \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));

			  write_exp_elt_opcode (OP_VAR_VALUE);
			  /* block_found is set by lookup_symbol.  */
			  write_exp_elt_block (block_found);
			  write_exp_elt_sym (sym);
			  write_exp_elt_opcode (OP_VAR_VALUE); }
    break;

  case 84:
#line 747 "c-exp.y"
    {
			  struct type *type = yyvsp[-2].tval;
			  CHECK_TYPEDEF (type);
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 85:
#line 762 "c-exp.y"
    {
			  struct type *type = yyvsp[-3].tval;
			  struct stoken tmp_token;
			  CHECK_TYPEDEF (type);
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  tmp_token.ptr = (char*) alloca (yyvsp[0].sval.length + 2);
			  tmp_token.length = yyvsp[0].sval.length + 1;
			  tmp_token.ptr[0] = '~';
			  memcpy (tmp_token.ptr+1, yyvsp[0].sval.ptr, yyvsp[0].sval.length);
			  tmp_token.ptr[tmp_token.length] = 0;

			  /* Check for valid destructor name.  */
			  destructor_name_p (tmp_token.ptr, type);
			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (tmp_token);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 87:
#line 789 "c-exp.y"
    {
			  char *name = copy_name (yyvsp[0].sval);
			  struct symbol *sym;
			  struct minimal_symbol *msymbol;

			  sym =
			    lookup_symbol (name, (const struct block *) NULL,
					   VAR_DOMAIN, (int *) NULL);
			  if (sym)
			    {
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      break;
			    }

			  msymbol = lookup_minimal_symbol (name, NULL, NULL);
			  if (msymbol != NULL)
			    write_exp_msymbol (msymbol);
			  else if (!have_full_symbols () && !have_partial_symbols ())
			    error ("No symbol table is loaded.  Use the \"file\" command.");
			  else
			    error ("No symbol \"%s\" in current context.", name);
			}
    break;

  case 88:
#line 817 "c-exp.y"
    { struct symbol *sym = yyvsp[0].ssym.sym;

			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0
				      || contained_in (block_found, 
						       innermost_block))
				    innermost_block = block_found;
				}

			      write_exp_elt_opcode (OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			    }
			  else if (yyvsp[0].ssym.is_a_field_of_this)
			    {
			      /* C++: it hangs off of `this'.  Must
			         not inadvertently convert from a method call
				 to data ref.  */
			      if (innermost_block == 0
				  || contained_in (block_found,
						   innermost_block))
				innermost_block = block_found;
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			      write_exp_string (yyvsp[0].ssym.stoken);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			    }
			  else
			    {
			      struct minimal_symbol *msymbol;
			      char *arg = copy_name (yyvsp[0].ssym.stoken);

			      msymbol =
				lookup_minimal_symbol (arg, NULL, NULL);
			      if (msymbol != NULL)
				write_exp_msymbol (msymbol);
			      else if (!have_full_symbols () && !have_partial_symbols ())
				error ("No symbol table is loaded.  Use the \"file\" command.");
			      else
				error ("No symbol \"%s\" in current context.",
				       copy_name (yyvsp[0].ssym.stoken));
			    }
			}
    break;

  case 89:
#line 871 "c-exp.y"
    { push_type_address_space (copy_name (yyvsp[0].ssym.stoken));
		  push_type (tp_space_identifier);
		}
    break;

  case 97:
#line 893 "c-exp.y"
    { push_type (tp_pointer); yyval.voidval = 0; }
    break;

  case 98:
#line 895 "c-exp.y"
    { push_type (tp_pointer); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 99:
#line 897 "c-exp.y"
    { push_type (tp_reference); yyval.voidval = 0; }
    break;

  case 100:
#line 899 "c-exp.y"
    { push_type (tp_reference); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 102:
#line 904 "c-exp.y"
    { yyval.voidval = yyvsp[-1].voidval; }
    break;

  case 103:
#line 906 "c-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			}
    break;

  case 104:
#line 911 "c-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			  yyval.voidval = 0;
			}
    break;

  case 105:
#line 918 "c-exp.y"
    { push_type (tp_function); }
    break;

  case 106:
#line 920 "c-exp.y"
    { push_type (tp_function); }
    break;

  case 107:
#line 924 "c-exp.y"
    { yyval.lval = -1; }
    break;

  case 108:
#line 926 "c-exp.y"
    { yyval.lval = yyvsp[-1].typed_val_int.val; }
    break;

  case 109:
#line 930 "c-exp.y"
    { yyval.voidval = 0; }
    break;

  case 110:
#line 932 "c-exp.y"
    { xfree (yyvsp[-1].tvec); yyval.voidval = 0; }
    break;

  case 112:
#line 948 "c-exp.y"
    { yyval.tval = yyvsp[0].tsym.type; }
    break;

  case 113:
#line 950 "c-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 114:
#line 952 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 115:
#line 954 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 116:
#line 956 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 117:
#line 958 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 118:
#line 960 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 119:
#line 962 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 120:
#line 964 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 121:
#line 966 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 122:
#line 968 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 123:
#line 970 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 124:
#line 972 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 125:
#line 974 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 126:
#line 976 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 127:
#line 978 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 128:
#line 980 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 129:
#line 982 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 130:
#line 984 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 131:
#line 986 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 132:
#line 988 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 133:
#line 990 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 134:
#line 992 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 135:
#line 994 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 136:
#line 996 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 137:
#line 998 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 138:
#line 1000 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 139:
#line 1002 "c-exp.y"
    { yyval.tval = parse_type->builtin_double; }
    break;

  case 140:
#line 1004 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_double; }
    break;

  case 141:
#line 1006 "c-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 142:
#line 1009 "c-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 143:
#line 1012 "c-exp.y"
    { yyval.tval = lookup_union (copy_name (yyvsp[0].sval),
					     expression_context_block); }
    break;

  case 144:
#line 1015 "c-exp.y"
    { yyval.tval = lookup_enum (copy_name (yyvsp[0].sval),
					    expression_context_block); }
    break;

  case 145:
#line 1018 "c-exp.y"
    { yyval.tval = lookup_unsigned_typename (parse_language,
							 parse_gdbarch,
							 TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 146:
#line 1022 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_int; }
    break;

  case 147:
#line 1024 "c-exp.y"
    { yyval.tval = lookup_signed_typename (parse_language,
						       parse_gdbarch,
						       TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 148:
#line 1028 "c-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 149:
#line 1033 "c-exp.y"
    { yyval.tval = lookup_template_type(copy_name(yyvsp[-3].sval), yyvsp[-1].tval,
						    expression_context_block);
			}
    break;

  case 150:
#line 1037 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[0].tval); }
    break;

  case 151:
#line 1039 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[-1].tval); }
    break;

  case 153:
#line 1089 "c-exp.y"
    {
		  struct type *type = yyvsp[-2].tval;
		  struct type *new_type;
		  char *ncopy = alloca (yyvsp[0].sval.length + 1);

		  memcpy (ncopy, yyvsp[0].sval.ptr, yyvsp[0].sval.length);
		  ncopy[yyvsp[0].sval.length] = '\0';

		  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
		      && TYPE_CODE (type) != TYPE_CODE_UNION
		      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
		    error ("`%s' is not defined as an aggregate type.",
			   TYPE_NAME (type));

		  new_type = cp_lookup_nested_type (type, ncopy,
						    expression_context_block);
		  if (new_type == NULL)
		    error ("No type \"%s\" within class or namespace \"%s\".",
			   ncopy, TYPE_NAME (type));
		  
		  yyval.tval = new_type;
		}
    break;

  case 155:
#line 1115 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "int";
		  yyval.tsym.stoken.length = 3;
		  yyval.tsym.type = parse_type->builtin_int;
		}
    break;

  case 156:
#line 1121 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "long";
		  yyval.tsym.stoken.length = 4;
		  yyval.tsym.type = parse_type->builtin_long;
		}
    break;

  case 157:
#line 1127 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "short";
		  yyval.tsym.stoken.length = 5;
		  yyval.tsym.type = parse_type->builtin_short;
		}
    break;

  case 158:
#line 1136 "c-exp.y"
    { yyval.tvec = (struct type **) xmalloc (sizeof (struct type *) * 2);
		  yyval.ivec[0] = 1;	/* Number of types in vector */
		  yyval.tvec[1] = yyvsp[0].tval;
		}
    break;

  case 159:
#line 1141 "c-exp.y"
    { int len = sizeof (struct type *) * (++(yyvsp[-2].ivec[0]) + 1);
		  yyval.tvec = (struct type **) xrealloc ((char *) yyvsp[-2].tvec, len);
		  yyval.tvec[yyval.ivec[0]] = yyvsp[0].tval;
		}
    break;

  case 161:
#line 1149 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[-3].tval); }
    break;

  case 164:
#line 1157 "c-exp.y"
    { push_type (tp_const);
			  push_type (tp_volatile); 
			}
    break;

  case 165:
#line 1161 "c-exp.y"
    { push_type (tp_const); }
    break;

  case 166:
#line 1163 "c-exp.y"
    { push_type (tp_volatile); }
    break;

  case 167:
#line 1167 "c-exp.y"
    { yyval.sval = operator_stoken (" new"); }
    break;

  case 168:
#line 1169 "c-exp.y"
    { yyval.sval = operator_stoken (" delete"); }
    break;

  case 169:
#line 1171 "c-exp.y"
    { yyval.sval = operator_stoken (" new[]"); }
    break;

  case 170:
#line 1173 "c-exp.y"
    { yyval.sval = operator_stoken (" delete[]"); }
    break;

  case 171:
#line 1175 "c-exp.y"
    { yyval.sval = operator_stoken ("+"); }
    break;

  case 172:
#line 1177 "c-exp.y"
    { yyval.sval = operator_stoken ("-"); }
    break;

  case 173:
#line 1179 "c-exp.y"
    { yyval.sval = operator_stoken ("*"); }
    break;

  case 174:
#line 1181 "c-exp.y"
    { yyval.sval = operator_stoken ("/"); }
    break;

  case 175:
#line 1183 "c-exp.y"
    { yyval.sval = operator_stoken ("%"); }
    break;

  case 176:
#line 1185 "c-exp.y"
    { yyval.sval = operator_stoken ("^"); }
    break;

  case 177:
#line 1187 "c-exp.y"
    { yyval.sval = operator_stoken ("&"); }
    break;

  case 178:
#line 1189 "c-exp.y"
    { yyval.sval = operator_stoken ("|"); }
    break;

  case 179:
#line 1191 "c-exp.y"
    { yyval.sval = operator_stoken ("~"); }
    break;

  case 180:
#line 1193 "c-exp.y"
    { yyval.sval = operator_stoken ("!"); }
    break;

  case 181:
#line 1195 "c-exp.y"
    { yyval.sval = operator_stoken ("="); }
    break;

  case 182:
#line 1197 "c-exp.y"
    { yyval.sval = operator_stoken ("<"); }
    break;

  case 183:
#line 1199 "c-exp.y"
    { yyval.sval = operator_stoken (">"); }
    break;

  case 184:
#line 1201 "c-exp.y"
    { const char *op = "unknown";
			  switch (yyvsp[0].opcode)
			    {
			    case BINOP_RSH:
			      op = ">>=";
			      break;
			    case BINOP_LSH:
			      op = "<<=";
			      break;
			    case BINOP_ADD:
			      op = "+=";
			      break;
			    case BINOP_SUB:
			      op = "-=";
			      break;
			    case BINOP_MUL:
			      op = "*=";
			      break;
			    case BINOP_DIV:
			      op = "/=";
			      break;
			    case BINOP_REM:
			      op = "%=";
			      break;
			    case BINOP_BITWISE_IOR:
			      op = "|=";
			      break;
			    case BINOP_BITWISE_AND:
			      op = "&=";
			      break;
			    case BINOP_BITWISE_XOR:
			      op = "^=";
			      break;
			    default:
			      break;
			    }

			  yyval.sval = operator_stoken (op);
			}
    break;

  case 185:
#line 1241 "c-exp.y"
    { yyval.sval = operator_stoken ("<<"); }
    break;

  case 186:
#line 1243 "c-exp.y"
    { yyval.sval = operator_stoken (">>"); }
    break;

  case 187:
#line 1245 "c-exp.y"
    { yyval.sval = operator_stoken ("=="); }
    break;

  case 188:
#line 1247 "c-exp.y"
    { yyval.sval = operator_stoken ("!="); }
    break;

  case 189:
#line 1249 "c-exp.y"
    { yyval.sval = operator_stoken ("<="); }
    break;

  case 190:
#line 1251 "c-exp.y"
    { yyval.sval = operator_stoken (">="); }
    break;

  case 191:
#line 1253 "c-exp.y"
    { yyval.sval = operator_stoken ("&&"); }
    break;

  case 192:
#line 1255 "c-exp.y"
    { yyval.sval = operator_stoken ("||"); }
    break;

  case 193:
#line 1257 "c-exp.y"
    { yyval.sval = operator_stoken ("++"); }
    break;

  case 194:
#line 1259 "c-exp.y"
    { yyval.sval = operator_stoken ("--"); }
    break;

  case 195:
#line 1261 "c-exp.y"
    { yyval.sval = operator_stoken (","); }
    break;

  case 196:
#line 1263 "c-exp.y"
    { yyval.sval = operator_stoken ("->*"); }
    break;

  case 197:
#line 1265 "c-exp.y"
    { yyval.sval = operator_stoken ("->"); }
    break;

  case 198:
#line 1267 "c-exp.y"
    { yyval.sval = operator_stoken ("()"); }
    break;

  case 199:
#line 1269 "c-exp.y"
    { yyval.sval = operator_stoken ("[]"); }
    break;

  case 200:
#line 1271 "c-exp.y"
    { char *name;
			  long length;
			  struct ui_file *buf = mem_fileopen ();

			  c_print_type (yyvsp[0].tval, NULL, buf, -1, 0);
			  name = ui_file_xstrdup (buf, &length);
			  ui_file_delete (buf);
			  yyval.sval = operator_stoken (name);
			  xfree (name);
			}
    break;

  case 201:
#line 1285 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 202:
#line 1286 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 203:
#line 1287 "c-exp.y"
    { yyval.sval = yyvsp[0].tsym.stoken; }
    break;

  case 204:
#line 1288 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 205:
#line 1289 "c-exp.y"
    { yyval.sval = yyvsp[0].sval; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 2986 "c-exp.c.tmp"

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
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1303 "c-exp.y"


/* Returns a stoken of the operator name given by OP (which does not
   include the string "operator").  */ 
static struct stoken
operator_stoken (const char *op)
{
  static const char *operator_string = "operator";
  struct stoken st = { NULL, 0 };
  st.length = strlen (operator_string) + strlen (op);
  st.ptr = xmalloc (st.length + 1);
  strcpy (st.ptr, operator_string);
  strcat (st.ptr, op);

  /* The toplevel (c_parse) will free the memory allocated here.  */
  make_cleanup (xfree, st.ptr);
  return st;
};

/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (char *p, int len, int parsed_float, YYSTYPE *putithere)
{
  /* FIXME: Shouldn't these be unsigned?  We don't deal with negative values
     here, and we do kind of silly things like cast to unsigned.  */
  LONGEST n = 0;
  LONGEST prevn = 0;
  ULONGEST un;

  int i = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;

  /* Number of "L" suffixes encountered.  */
  int long_p = 0;

  /* We have found a "L" or "U" suffix.  */
  int found_suffix = 0;

  ULONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      /* It's a float since it contains a point or an exponent.  */
      char *s;
      int num;	/* number of tokens scanned by scanf */
      char saved_char;

      /* If it ends at "df", "dd" or "dl", take it as type of decimal floating
         point.  Return DECFLOAT.  */

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'f')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_decfloat;
	  decimal_from_string (putithere->typed_val_decfloat.val, 4,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'd')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_decdouble;
	  decimal_from_string (putithere->typed_val_decfloat.val, 8,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'l')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_declong;
	  decimal_from_string (putithere->typed_val_decfloat.val, 16,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      s = xmalloc (len);
      saved_char = p[len];
      p[len] = 0;	/* null-terminate the token */
      num = sscanf (p, "%" DOUBLEST_SCAN_FORMAT "%s",
		    &putithere->typed_val_float.dval, s);
      p[len] = saved_char;	/* restore the input stream */

      if (num == 1)
	putithere->typed_val_float.type = 
	  parse_type->builtin_double;

      if (num == 2 )
	{
	  /* See if it has any float suffix: 'f' for float, 'l' for long 
	     double.  */
	  if (!strcasecmp (s, "f"))
	    putithere->typed_val_float.type = 
	      parse_type->builtin_float;
	  else if (!strcasecmp (s, "l"))
	    putithere->typed_val_float.type = 
	      parse_type->builtin_long_double;
	  else
	    {
	      xfree (s);
	      return ERROR;
	    }
	}

      xfree (s);
      return FLOAT;
    }

  /* Handle base-switching prefixes 0x, 0t, 0d, 0 */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;

      case 'b':
      case 'B':
	if (len >= 3)
	  {
	    p += 2;
	    base = 2;
	    len -= 2;
	  }
	break;

      case 't':
      case 'T':
      case 'd':
      case 'D':
	if (len >= 3)
	  {
	    p += 2;
	    base = 10;
	    len -= 2;
	  }
	break;

      default:
	base = 8;
	break;
      }

  while (len-- > 0)
    {
      c = *p++;
      if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
      if (c != 'l' && c != 'u')
	n *= base;
      if (c >= '0' && c <= '9')
	{
	  if (found_suffix)
	    return ERROR;
	  n += i = c - '0';
	}
      else
	{
	  if (base > 10 && c >= 'a' && c <= 'f')
	    {
	      if (found_suffix)
		return ERROR;
	      n += i = c - 'a' + 10;
	    }
	  else if (c == 'l')
	    {
	      ++long_p;
	      found_suffix = 1;
	    }
	  else if (c == 'u')
	    {
	      unsigned_p = 1;
	      found_suffix = 1;
	    }
	  else
	    return ERROR;	/* Char not a digit */
	}
      if (i >= base)
	return ERROR;		/* Invalid digit in this base */

      /* Portably test for overflow (only works for nonzero values, so make
	 a second check for zero).  FIXME: Can't we just make n and prevn
	 unsigned and avoid this?  */
      if (c != 'l' && c != 'u' && (prevn >= n) && n != 0)
	unsigned_p = 1;		/* Try something unsigned */

      /* Portably test for unsigned overflow.
	 FIXME: This check is wrong; for example it doesn't find overflow
	 on 0x123456789 when LONGEST is 32 bits.  */
      if (c != 'l' && c != 'u' && n != 0)
	{	
	  if ((unsigned_p && (ULONGEST) prevn >= (ULONGEST) n))
	    error ("Numeric constant too large.");
	}
      prevn = n;
    }

  /* An integer constant is an int, a long, or a long long.  An L
     suffix forces it to be long; an LL suffix forces it to be long
     long.  If not forced to a larger size, it gets the first type of
     the above that it fits in.  To figure out whether it fits, we
     shift it right and see whether anything remains.  Note that we
     can't shift sizeof (LONGEST) * HOST_CHAR_BIT bits or more in one
     operation, because many compilers will warn about such a shift
     (which always produces a zero result).  Sometimes gdbarch_int_bit
     or gdbarch_long_bit will be that big, sometimes not.  To deal with
     the case where it is we just always shift the value more than
     once, with fewer bits each time.  */

  un = (ULONGEST)n >> 2;
  if (long_p == 0
      && (un >> (gdbarch_int_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (gdbarch_int_bit (parse_gdbarch) - 1);

      /* A large decimal (not hex or octal) constant (between INT_MAX
	 and UINT_MAX) is a long or unsigned long, according to ANSI,
	 never an unsigned int, but this code treats it as unsigned
	 int.  This probably should be fixed.  GCC gives a warning on
	 such constants.  */

      unsigned_type = parse_type->builtin_unsigned_int;
      signed_type = parse_type->builtin_int;
    }
  else if (long_p <= 1
	   && (un >> (gdbarch_long_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (gdbarch_long_bit (parse_gdbarch) - 1);
      unsigned_type = parse_type->builtin_unsigned_long;
      signed_type = parse_type->builtin_long;
    }
  else
    {
      int shift;
      if (sizeof (ULONGEST) * HOST_CHAR_BIT 
	  < gdbarch_long_long_bit (parse_gdbarch))
	/* A long long does not fit in a LONGEST.  */
	shift = (sizeof (ULONGEST) * HOST_CHAR_BIT - 1);
      else
	shift = (gdbarch_long_long_bit (parse_gdbarch) - 1);
      high_bit = (ULONGEST) 1 << shift;
      unsigned_type = parse_type->builtin_unsigned_long_long;
      signed_type = parse_type->builtin_long_long;
    }

   putithere->typed_val_int.val = n;

   /* If the high bit of the worked out type is set then this number
      has to be unsigned. */

   if (unsigned_p || (n & high_bit)) 
     {
       putithere->typed_val_int.type = unsigned_type;
     }
   else 
     {
       putithere->typed_val_int.type = signed_type;
     }

   return INT;
}

/* Temporary obstack used for holding strings.  */
static struct obstack tempbuf;
static int tempbuf_init;

/* Parse a C escape sequence.  The initial backslash of the sequence
   is at (*PTR)[-1].  *PTR will be updated to point to just after the
   last character of the sequence.  If OUTPUT is not NULL, the
   translated form of the escape sequence will be written there.  If
   OUTPUT is NULL, no output is written and the call will only affect
   *PTR.  If an escape sequence is expressed in target bytes, then the
   entire sequence will simply be copied to OUTPUT.  Return 1 if any
   character was emitted, 0 otherwise.  */

int
c_parse_escape (char **ptr, struct obstack *output)
{
  char *tokptr = *ptr;
  int result = 1;

  /* Some escape sequences undergo character set conversion.  Those we
     translate here.  */
  switch (*tokptr)
    {
      /* Hex escapes do not undergo character set conversion, so keep
	 the escape sequence for later.  */
    case 'x':
      if (output)
	obstack_grow_str (output, "\\x");
      ++tokptr;
      if (!isxdigit (*tokptr))
	error (_("\\x escape without a following hex digit"));
      while (isxdigit (*tokptr))
	{
	  if (output)
	    obstack_1grow (output, *tokptr);
	  ++tokptr;
	}
      break;

      /* Octal escapes do not undergo character set conversion, so
	 keep the escape sequence for later.  */
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      {
	int i;
	if (output)
	  obstack_grow_str (output, "\\");
	for (i = 0;
	     i < 3 && isdigit (*tokptr) && *tokptr != '8' && *tokptr != '9';
	     ++i)
	  {
	    if (output)
	      obstack_1grow (output, *tokptr);
	    ++tokptr;
	  }
      }
      break;

      /* We handle UCNs later.  We could handle them here, but that
	 would mean a spurious error in the case where the UCN could
	 be converted to the target charset but not the host
	 charset.  */
    case 'u':
    case 'U':
      {
	char c = *tokptr;
	int i, len = c == 'U' ? 8 : 4;
	if (output)
	  {
	    obstack_1grow (output, '\\');
	    obstack_1grow (output, *tokptr);
	  }
	++tokptr;
	if (!isxdigit (*tokptr))
	  error (_("\\%c escape without a following hex digit"), c);
	for (i = 0; i < len && isxdigit (*tokptr); ++i)
	  {
	    if (output)
	      obstack_1grow (output, *tokptr);
	    ++tokptr;
	  }
      }
      break;

      /* We must pass backslash through so that it does not
	 cause quoting during the second expansion.  */
    case '\\':
      if (output)
	obstack_grow_str (output, "\\\\");
      ++tokptr;
      break;

      /* Escapes which undergo conversion.  */
    case 'a':
      if (output)
	obstack_1grow (output, '\a');
      ++tokptr;
      break;
    case 'b':
      if (output)
	obstack_1grow (output, '\b');
      ++tokptr;
      break;
    case 'f':
      if (output)
	obstack_1grow (output, '\f');
      ++tokptr;
      break;
    case 'n':
      if (output)
	obstack_1grow (output, '\n');
      ++tokptr;
      break;
    case 'r':
      if (output)
	obstack_1grow (output, '\r');
      ++tokptr;
      break;
    case 't':
      if (output)
	obstack_1grow (output, '\t');
      ++tokptr;
      break;
    case 'v':
      if (output)
	obstack_1grow (output, '\v');
      ++tokptr;
      break;

      /* GCC extension.  */
    case 'e':
      if (output)
	obstack_1grow (output, HOST_ESCAPE_CHAR);
      ++tokptr;
      break;

      /* Backslash-newline expands to nothing at all.  */
    case '\n':
      ++tokptr;
      result = 0;
      break;

      /* A few escapes just expand to the character itself.  */
    case '\'':
    case '\"':
    case '?':
      /* GCC extensions.  */
    case '(':
    case '{':
    case '[':
    case '%':
      /* Unrecognized escapes turn into the character itself.  */
    default:
      if (output)
	obstack_1grow (output, *tokptr);
      ++tokptr;
      break;
    }
  *ptr = tokptr;
  return result;
}

/* Parse a string or character literal from TOKPTR.  The string or
   character may be wide or unicode.  *OUTPTR is set to just after the
   end of the literal in the input string.  The resulting token is
   stored in VALUE.  This returns a token value, either STRING or
   CHAR, depending on what was parsed.  *HOST_CHARS is set to the
   number of host characters in the literal.  */
static int
parse_string_or_char (char *tokptr, char **outptr, struct typed_stoken *value,
		      int *host_chars)
{
  int quote, i;
  enum c_string_type type;

  /* Build the gdb internal form of the input string in tempbuf.  Note
     that the buffer is null byte terminated *only* for the
     convenience of debugging gdb itself and printing the buffer
     contents when the buffer contains no embedded nulls.  Gdb does
     not depend upon the buffer being null byte terminated, it uses
     the length string instead.  This allows gdb to handle C strings
     (as well as strings in other languages) with embedded null
     bytes */

  if (!tempbuf_init)
    tempbuf_init = 1;
  else
    obstack_free (&tempbuf, NULL);
  obstack_init (&tempbuf);

  /* Record the string type.  */
  if (*tokptr == 'L')
    {
      type = C_WIDE_STRING;
      ++tokptr;
    }
  else if (*tokptr == 'u')
    {
      type = C_STRING_16;
      ++tokptr;
    }
  else if (*tokptr == 'U')
    {
      type = C_STRING_32;
      ++tokptr;
    }
  else
    type = C_STRING;

  /* Skip the quote.  */
  quote = *tokptr;
  if (quote == '\'')
    type |= C_CHAR;
  ++tokptr;

  *host_chars = 0;

  while (*tokptr)
    {
      char c = *tokptr;
      if (c == '\\')
	{
	  ++tokptr;
	  *host_chars += c_parse_escape (&tokptr, &tempbuf);
	}
      else if (c == quote)
	break;
      else
	{
	  obstack_1grow (&tempbuf, c);
	  ++tokptr;
	  /* FIXME: this does the wrong thing with multi-byte host
	     characters.  We could use mbrlen here, but that would
	     make "set host-charset" a bit less useful.  */
	  ++*host_chars;
	}
    }

  if (*tokptr != quote)
    {
      if (quote == '"')
	error ("Unterminated string in expression.");
      else
	error ("Unmatched single quote.");
    }
  ++tokptr;

  value->type = type;
  value->ptr = obstack_base (&tempbuf);
  value->length = obstack_object_size (&tempbuf);

  *outptr = tokptr;

  return quote == '"' ? STRING : CHAR;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
  int cxx_only;
};

static const struct token tokentab3[] =
  {
    {">>=", ASSIGN_MODIFY, BINOP_RSH, 0},
    {"<<=", ASSIGN_MODIFY, BINOP_LSH, 0},
    {"->*", ARROW_STAR, BINOP_END, 1}
  };

static const struct token tokentab2[] =
  {
    {"+=", ASSIGN_MODIFY, BINOP_ADD, 0},
    {"-=", ASSIGN_MODIFY, BINOP_SUB, 0},
    {"*=", ASSIGN_MODIFY, BINOP_MUL, 0},
    {"/=", ASSIGN_MODIFY, BINOP_DIV, 0},
    {"%=", ASSIGN_MODIFY, BINOP_REM, 0},
    {"|=", ASSIGN_MODIFY, BINOP_BITWISE_IOR, 0},
    {"&=", ASSIGN_MODIFY, BINOP_BITWISE_AND, 0},
    {"^=", ASSIGN_MODIFY, BINOP_BITWISE_XOR, 0},
    {"++", INCREMENT, BINOP_END, 0},
    {"--", DECREMENT, BINOP_END, 0},
    {"->", ARROW, BINOP_END, 0},
    {"&&", ANDAND, BINOP_END, 0},
    {"||", OROR, BINOP_END, 0},
    /* "::" is *not* only C++: gdb overrides its meaning in several
       different ways, e.g., 'filename'::func, function::variable.  */
    {"::", COLONCOLON, BINOP_END, 0},
    {"<<", LSH, BINOP_END, 0},
    {">>", RSH, BINOP_END, 0},
    {"==", EQUAL, BINOP_END, 0},
    {"!=", NOTEQUAL, BINOP_END, 0},
    {"<=", LEQ, BINOP_END, 0},
    {">=", GEQ, BINOP_END, 0},
    {".*", DOT_STAR, BINOP_END, 1}
  };

/* Identifier-like tokens.  */
static const struct token ident_tokens[] =
  {
    {"unsigned", UNSIGNED, OP_NULL, 0},
    {"template", TEMPLATE, OP_NULL, 1},
    {"volatile", VOLATILE_KEYWORD, OP_NULL, 0},
    {"struct", STRUCT, OP_NULL, 0},
    {"signed", SIGNED_KEYWORD, OP_NULL, 0},
    {"sizeof", SIZEOF, OP_NULL, 0},
    {"double", DOUBLE_KEYWORD, OP_NULL, 0},
    {"false", FALSEKEYWORD, OP_NULL, 1},
    {"class", CLASS, OP_NULL, 1},
    {"union", UNION, OP_NULL, 0},
    {"short", SHORT, OP_NULL, 0},
    {"const", CONST_KEYWORD, OP_NULL, 0},
    {"enum", ENUM, OP_NULL, 0},
    {"long", LONG, OP_NULL, 0},
    {"true", TRUEKEYWORD, OP_NULL, 1},
    {"int", INT_KEYWORD, OP_NULL, 0},
    {"new", NEW, OP_NULL, 1},
    {"delete", DELETE, OP_NULL, 1},
    {"operator", OPERATOR, OP_NULL, 1},

    {"and", ANDAND, BINOP_END, 1},
    {"and_eq", ASSIGN_MODIFY, BINOP_BITWISE_AND, 1},
    {"bitand", '&', OP_NULL, 1},
    {"bitor", '|', OP_NULL, 1},
    {"compl", '~', OP_NULL, 1},
    {"not", '!', OP_NULL, 1},
    {"not_eq", NOTEQUAL, BINOP_END, 1},
    {"or", OROR, BINOP_END, 1},
    {"or_eq", ASSIGN_MODIFY, BINOP_BITWISE_IOR, 1},
    {"xor", '^', OP_NULL, 1},
    {"xor_eq", ASSIGN_MODIFY, BINOP_BITWISE_XOR, 1},

    {"const_cast", CONST_CAST, OP_NULL, 1 },
    {"dynamic_cast", DYNAMIC_CAST, OP_NULL, 1 },
    {"static_cast", STATIC_CAST, OP_NULL, 1 },
    {"reinterpret_cast", REINTERPRET_CAST, OP_NULL, 1 }
  };

/* When we find that lexptr (the global var defined in parse.c) is
   pointing at a macro invocation, we expand the invocation, and call
   scan_macro_expansion to save the old lexptr here and point lexptr
   into the expanded text.  When we reach the end of that, we call
   end_macro_expansion to pop back to the value we saved here.  The
   macro expansion code promises to return only fully-expanded text,
   so we don't need to "push" more than one level.

   This is disgusting, of course.  It would be cleaner to do all macro
   expansion beforehand, and then hand that to lexptr.  But we don't
   really know where the expression ends.  Remember, in a command like

     (gdb) break *ADDRESS if CONDITION

   we evaluate ADDRESS in the scope of the current frame, but we
   evaluate CONDITION in the scope of the breakpoint's location.  So
   it's simply wrong to try to macro-expand the whole thing at once.  */
static char *macro_original_text;

/* We save all intermediate macro expansions on this obstack for the
   duration of a single parse.  The expansion text may sometimes have
   to live past the end of the expansion, due to yacc lookahead.
   Rather than try to be clever about saving the data for a single
   token, we simply keep it all and delete it after parsing has
   completed.  */
static struct obstack expansion_obstack;

static void
scan_macro_expansion (char *expansion)
{
  char *copy;

  /* We'd better not be trying to push the stack twice.  */
  gdb_assert (! macro_original_text);

  /* Copy to the obstack, and then free the intermediate
     expansion.  */
  copy = obstack_copy0 (&expansion_obstack, expansion, strlen (expansion));
  xfree (expansion);

  /* Save the old lexptr value, so we can return to it when we're done
     parsing the expanded text.  */
  macro_original_text = lexptr;
  lexptr = copy;
}


static int
scanning_macro_expansion (void)
{
  return macro_original_text != 0;
}


static void 
finished_macro_expansion (void)
{
  /* There'd better be something to pop back to.  */
  gdb_assert (macro_original_text);

  /* Pop back to the original text.  */
  lexptr = macro_original_text;
  macro_original_text = 0;
}


static void
scan_macro_cleanup (void *dummy)
{
  if (macro_original_text)
    finished_macro_expansion ();

  obstack_free (&expansion_obstack, NULL);
}

/* Return true iff the token represents a C++ cast operator.  */

static int
is_cast_operator (const char *token, int len)
{
  return (! strncmp (token, "dynamic_cast", len)
	  || ! strncmp (token, "static_cast", len)
	  || ! strncmp (token, "reinterpret_cast", len)
	  || ! strncmp (token, "const_cast", len));
}

/* The scope used for macro expansion.  */
static struct macro_scope *expression_macro_scope;

/* This is set if a NAME token appeared at the very end of the input
   string, with no whitespace separating the name from the EOF.  This
   is used only when parsing to do field name completion.  */
static int saw_name_at_eof;

/* This is set if the previously-returned token was a structure
   operator -- either '.' or ARROW.  This is used only when parsing to
   do field name completion.  */
static int last_was_structop;

/* Read one token, getting characters through lexptr.  */

static int
yylex (void)
{
  int c;
  int namelen;
  unsigned int i;
  char *tokstart;
  int saw_structop = last_was_structop;
  char *copy;

  last_was_structop = 0;

 retry:

  /* Check if this is a macro invocation that we need to expand.  */
  if (! scanning_macro_expansion ())
    {
      char *expanded = macro_expand_next (&lexptr,
                                          standard_macro_lookup,
                                          expression_macro_scope);

      if (expanded)
        scan_macro_expansion (expanded);
    }

  prev_lexptr = lexptr;

  tokstart = lexptr;
  /* See if it is a special token of length 3.  */
  for (i = 0; i < sizeof tokentab3 / sizeof tokentab3[0]; i++)
    if (strncmp (tokstart, tokentab3[i].operator, 3) == 0)
      {
	if (tokentab3[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	lexptr += 3;
	yylval.opcode = tokentab3[i].opcode;
	return tokentab3[i].token;
      }

  /* See if it is a special token of length 2.  */
  for (i = 0; i < sizeof tokentab2 / sizeof tokentab2[0]; i++)
    if (strncmp (tokstart, tokentab2[i].operator, 2) == 0)
      {
	if (tokentab2[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	lexptr += 2;
	yylval.opcode = tokentab2[i].opcode;
	if (in_parse_field && tokentab2[i].token == ARROW)
	  last_was_structop = 1;
	return tokentab2[i].token;
      }

  switch (c = *tokstart)
    {
    case 0:
      /* If we were just scanning the result of a macro expansion,
         then we need to resume scanning the original text.
	 If we're parsing for field name completion, and the previous
	 token allows such completion, return a COMPLETE token.
         Otherwise, we were already scanning the original text, and
         we're really done.  */
      if (scanning_macro_expansion ())
        {
          finished_macro_expansion ();
          goto retry;
        }
      else if (saw_name_at_eof)
	{
	  saw_name_at_eof = 0;
	  return COMPLETE;
	}
      else if (saw_structop)
	return COMPLETE;
      else
        return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '[':
    case '(':
      paren_depth++;
      lexptr++;
      return c;

    case ']':
    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return c;

    case ',':
      if (comma_terminates
          && paren_depth == 0
          && ! scanning_macro_expansion ())
	return 0;
      lexptr++;
      return c;

    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] < '0' || lexptr[1] > '9')
	{
	  if (in_parse_field)
	    last_was_structop = 1;
	  goto symbol;		/* Nope, must be a symbol. */
	}
      /* FALL THRU into number case.  */

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
	/* It's a number.  */
	int got_dot = 0, got_e = 0, toktype;
	char *p = tokstart;
	int hex = input_radix > 10;

	if (c == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	  }
	else if (c == '0' && (p[1]=='t' || p[1]=='T' || p[1]=='d' || p[1]=='D'))
	  {
	    p += 2;
	    hex = 0;
	  }

	for (;; ++p)
	  {
	    /* This test includes !hex because 'e' is a valid hex digit
	       and thus does not indicate a floating point number when
	       the radix is hex.  */
	    if (!hex && !got_e && (*p == 'e' || *p == 'E'))
	      got_dot = got_e = 1;
	    /* This test does not include !hex, because a '.' always indicates
	       a decimal floating point number regardless of the radix.  */
	    else if (!got_dot && *p == '.')
	      got_dot = 1;
	    else if (got_e && (p[-1] == 'e' || p[-1] == 'E')
		     && (*p == '-' || *p == '+'))
	      /* This is the sign of the exponent, not the end of the
		 number.  */
	      continue;
	    /* We will take any letters or digits.  parse_number will
	       complain if past the radix, or if L or U are not final.  */
	    else if ((*p < '0' || *p > '9')
		     && ((*p < 'a' || *p > 'z')
				  && (*p < 'A' || *p > 'Z')))
	      break;
	  }
	toktype = parse_number (tokstart, p - tokstart, got_dot|got_e, &yylval);
        if (toktype == ERROR)
	  {
	    char *err_copy = (char *) alloca (p - tokstart + 1);

	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error ("Invalid number \"%s\".", err_copy);
	  }
	lexptr = p;
	return toktype;
      }

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '@':
    case '<':
    case '>':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return c;

    case 'L':
    case 'u':
    case 'U':
      if (tokstart[1] != '"' && tokstart[1] != '\'')
	break;
      /* Fall through.  */
    case '\'':
    case '"':
      {
	int host_len;
	int result = parse_string_or_char (tokstart, &lexptr, &yylval.tsval,
					   &host_len);
	if (result == CHAR)
	  {
	    if (host_len == 0)
	      error ("Empty character constant.");
	    else if (host_len > 2 && c == '\'')
	      {
		++tokstart;
		namelen = lexptr - tokstart - 1;
		goto tryname;
	      }
	    else if (host_len > 1)
	      error ("Invalid character constant.");
	  }
	return result;
      }
    }

  if (!(c == '_' || c == '$'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error ("Invalid character '%c' in expression.", c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '<');)
    {
      /* Template parameter lists are part of the name.
	 FIXME: This mishandles `print $a<4&&$a>3'.  */

      if (c == '<')
	{
	  if (! is_cast_operator (tokstart, namelen))
	    {
	      /* Scan ahead to get rest of the template specification.  Note
		 that we look ahead only when the '<' adjoins non-whitespace
		 characters; for comparison expressions, e.g. "a < b > c",
		 there must be spaces before the '<', etc. */
               
	      char * p = find_template_name_end (tokstart + namelen);
	      if (p)
		namelen = p - tokstart;
	    }
	  break;
	}
      c = tokstart[++namelen];
    }

  /* The token "if" terminates the expression and is NOT removed from
     the input stream.  It doesn't count if it appears in the
     expansion of a macro.  */
  if (namelen == 2
      && tokstart[0] == 'i'
      && tokstart[1] == 'f'
      && ! scanning_macro_expansion ())
    {
      return 0;
    }

  /* For the same reason (breakpoint conditions), "thread N"
     terminates the expression.  "thread" could be an identifier, but
     an identifier is never followed by a number without intervening
     punctuation.  "task" is similar.  Handle abbreviations of these,
     similarly to breakpoint.c:find_condition_and_thread.  */
  if (namelen >= 1
      && (strncmp (tokstart, "thread", namelen) == 0
	  || strncmp (tokstart, "task", namelen) == 0)
      && (tokstart[namelen] == ' ' || tokstart[namelen] == '\t')
      && ! scanning_macro_expansion ())
    {
      char *p = tokstart + namelen + 1;
      while (*p == ' ' || *p == '\t')
	p++;
      if (*p >= '0' && *p <= '9')
	return 0;
    }

  lexptr += namelen;

  tryname:

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  /* Catch specific keywords.  */
  copy = copy_name (yylval.sval);
  for (i = 0; i < sizeof ident_tokens / sizeof ident_tokens[0]; i++)
    if (strcmp (copy, ident_tokens[i].operator) == 0)
      {
	if (ident_tokens[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	/* It is ok to always set this, even though we don't always
	   strictly need to.  */
	yylval.opcode = ident_tokens[i].opcode;
	return ident_tokens[i].token;
      }

  if (*tokstart == '$')
    {
      write_dollar_variable (yylval.sval);
      return VARIABLE;
    }
  
  /* Use token-type BLOCKNAME for symbols that happen to be defined as
     functions or symtabs.  If this is not so, then ...
     Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
  {
    struct symbol *sym;
    int is_a_field_of_this = 0;
    int hextype;

    sym = lookup_symbol (copy, expression_context_block,
			 VAR_DOMAIN,
			 parse_language->la_language == language_cplus
			 ? &is_a_field_of_this : (int *) NULL);
    /* Call lookup_symtab, not lookup_partial_symtab, in case there are
       no psymtabs (coff, xcoff, or some future change to blow away the
       psymtabs once once symbols are read).  */
    if (sym && SYMBOL_CLASS (sym) == LOC_BLOCK)
      {
	yylval.ssym.sym = sym;
	yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	return BLOCKNAME;
      }
    else if (!sym)
      {				/* See if it's a file name. */
	struct symtab *symtab;

	symtab = lookup_symtab (copy);

	if (symtab)
	  {
	    yylval.bval = BLOCKVECTOR_BLOCK (BLOCKVECTOR (symtab), STATIC_BLOCK);
	    return FILENAME;
	  }
      }

    if (sym && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
        {
	  /* NOTE: carlton/2003-09-25: There used to be code here to
	     handle nested types.  It didn't work very well.  See the
	     comment before qualified_type for more info.  */
	  yylval.tsym.type = SYMBOL_TYPE (sym);
	  return TYPENAME;
        }
    yylval.tsym.type
      = language_lookup_primitive_type_by_name (parse_language,
						parse_gdbarch, copy);
    if (yylval.tsym.type != NULL)
      return TYPENAME;

    /* Input names that aren't symbols but ARE valid hex numbers,
       when the input radix permits them, can be names or numbers
       depending on the parse.  Note we support radixes > 16 here.  */
    if (!sym 
        && ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10)
	    || (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10)))
      {
 	YYSTYPE newlval;	/* Its value is ignored.  */
	hextype = parse_number (tokstart, namelen, 0, &newlval);
	if (hextype == INT)
	  {
	    yylval.ssym.sym = sym;
	    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	    return NAME_OR_INT;
	  }
      }

    /* Any other kind of symbol */
    yylval.ssym.sym = sym;
    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
    if (in_parse_field && *lexptr == '\0')
      saw_name_at_eof = 1;
    return NAME;
  }
}

int
c_parse (void)
{
  int result;
  struct cleanup *back_to = make_cleanup (free_current_contents,
					  &expression_macro_scope);

  /* Set up the scope for macro expansion.  */
  expression_macro_scope = NULL;

  if (expression_context_block)
    expression_macro_scope
      = sal_macro_scope (find_pc_line (expression_context_pc, 0));
  else
    expression_macro_scope = default_macro_scope ();
  if (! expression_macro_scope)
    expression_macro_scope = user_macro_scope ();

  /* Initialize macro expansion code.  */
  obstack_init (&expansion_obstack);
  gdb_assert (! macro_original_text);
  make_cleanup (scan_macro_cleanup, 0);

  make_cleanup_restore_integer (&yydebug);
  yydebug = parser_debug;

  /* Initialize some state used by the lexer.  */
  last_was_structop = 0;
  saw_name_at_eof = 0;

  result = yyparse ();
  do_cleanups (back_to);
  return result;
}


void
yyerror (char *msg)
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error ("A %s in expression, near `%s'.", (msg ? msg : "error"), lexptr);
}


