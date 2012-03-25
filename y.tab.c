#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20100610

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include "include.h"
#define YYDEBUG 1
int yylex(void);
void yerror(char *);
#line 16 "parser.y"
typedef union {
	char* value;
	TokenType tokentype; 
} YYSTYPE;
#line 29 "y.tab.c"
/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

extern int YYPARSE_DECL();
extern int YYLEX_DECL();

#define ABSTYPE 257
#define AND 258
#define ANDALSO 259
#define AS 260
#define CASE 261
#define DATATYPE 262
#define DO 263
#define ELSE 264
#define END 265
#define EXCEPTION 266
#define FN 267
#define FUN 268
#define HANDLE 269
#define IF 270
#define IN 271
#define INFIX 272
#define INFIXR 273
#define LET 274
#define LOCAL 275
#define NONFIX 276
#define NOT 277
#define OF 278
#define OP 279
#define OPEN 280
#define OR 281
#define ORELSE 282
#define RAISE 283
#define REC 284
#define THEN 285
#define TYPE 286
#define VAL 287
#define WITH 288
#define WITHTYPE 289
#define WHILE 290
#define NUMBER 291
#define FLOAT 292
#define BOOL 293
#define VARIABLE 294
#define NEWLINE 295
#define CONSTANT 296
#define NE 297
#define GT 298
#define LE 299
#define LT 300
#define GE 301
#define ASSIGNMENT 302
#define INFIXOP 305
#define FALSE 306
#define TRUE 307
#define COMPOUNDIDENT 308
#define IDENT 309
#define COMPOUNDNAME 310
#define NAME 311
#define INFIXOPERATOR 312
#define STRINGESCAPE 313
#define NUMERAL 314
#define TYPEVAR 315
#define LABEL 316
#define ALPHANUMERICIDENT 317
#define DIGIT 318
#define LETTER 319
#define COMMENT 320
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    2,    1,    1,    4,    4,    5,    6,    8,
    8,    7,    7,    7,    7,    7,    7,    7,   15,   15,
   15,   15,   15,   15,   15,   15,   11,   11,   12,   12,
   18,   18,   18,   14,   14,   10,   10,   16,   16,   16,
   22,   22,   13,   25,   25,   19,   27,   27,   26,   26,
   28,   28,   23,   23,   23,   29,   29,    3,    3,    3,
    3,   30,   30,   30,   30,   31,   31,   32,   34,   34,
   33,   33,   33,   33,   33,   33,   33,   33,   33,   33,
   33,   35,   37,   37,   36,   36,   38,   38,    9,    9,
   40,   40,   39,   39,   39,   39,   21,   21,   21,   21,
   21,   43,   43,   44,   44,   17,   17,   45,   45,   45,
   46,   46,   46,   46,   46,   46,   50,   51,   48,   47,
   47,   52,   52,   49,   49,   41,   41,   41,   20,   20,
   42,   42,   53,   54,   54,   24,
};
static const short yylen[] = {                            2,
    3,    1,    0,    1,    1,    1,    1,    2,    6,    2,
    1,    7,    6,    3,    3,    3,    6,    6,    7,    6,
    3,    3,    3,    6,    6,    0,    2,    1,    6,    4,
    2,    2,    0,    3,    1,    7,    0,    3,    6,    3,
    2,    0,    5,    2,    0,    5,    2,    0,    4,    2,
    2,    0,    1,    4,    0,    2,    0,    3,    3,    3,
    1,    1,    6,    4,    4,    3,    1,    2,    2,    0,
    1,    2,    2,    4,    4,    3,    2,    6,    2,    2,
    5,    2,    3,    1,    3,    1,    5,    0,    1,    1,
    3,    3,    1,    2,    5,    3,    1,    1,    1,    3,
    3,    2,    0,    3,    0,    1,    1,    2,    4,    3,
    1,    1,    2,    6,    2,    1,    2,    2,    5,    2,
    0,    3,    0,    5,    0,    1,    1,    1,    1,    2,
    1,    1,    4,    3,    0,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   71,    0,    0,    0,    0,    0,    0,    4,    5,    6,
    7,    0,    0,   62,    0,    0,    0,   53,    0,    0,
    0,    0,    0,    0,    0,   99,  136,    0,    0,   97,
    0,    0,    0,    0,    0,   98,  132,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   93,    0,    0,   90,    0,    0,
    0,   72,   82,   77,    0,    0,    0,   79,   80,    0,
    0,    8,    0,    0,    0,    0,    0,   68,    0,   73,
    0,    0,    0,    0,    0,    0,    0,   28,   16,  130,
    0,    0,    0,    0,   14,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,    0,
    0,    0,    0,    0,    0,    0,   94,    0,    0,   76,
    0,    2,    1,   59,   60,  111,    0,    0,   58,  112,
  106,    0,    0,  116,    0,   66,   69,    0,    0,    0,
    0,    0,    0,   34,    0,   65,   27,    0,  102,    0,
  100,  101,    0,    0,    0,   38,   40,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   96,
    0,   91,   92,   64,   83,    0,  118,    0,  115,    0,
    0,  108,  113,  117,    0,    0,   74,   75,   56,   54,
    0,    0,    0,    0,    0,    0,    0,   30,    0,   41,
    0,  133,    0,    0,   23,   21,    0,   22,    0,    0,
   81,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  110,    0,    0,   85,   17,
    0,    0,   50,    0,   46,  104,    0,   32,   31,    0,
    0,   63,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   11,    9,   18,    0,   43,    0,    0,   13,   95,
    0,   78,    0,    0,  109,    0,    0,    0,   51,   47,
   39,   29,  134,    0,    0,    0,    0,    0,    0,    0,
    0,   10,   44,   12,    0,    0,    0,    0,  120,    0,
  119,   49,   24,   25,    0,   20,    0,    0,    0,    0,
  114,  122,   19,    0,   87,    0,    0,    0,   36,  124,
};
static const short yydgoto[] = {                         16,
   17,  143,   75,   57,   20,   21,   98,  283,  101,  251,
   99,   41,   59,   30,   58,   42,  149,  228,   31,   64,
   65,  176,   32,  109,  286,  223,  265,  263,  162,   23,
   24,   25,   26,   88,   27,  159,   76,  254,   67,   68,
   69,   46,  103,  169,  151,  152,  295,  153,  318,  154,
  155,  297,   47,  232,
};
static const short yysindex[] = {                       537,
  -36,  576,  -36,  -21,  576,  122,  157,  -36,   28,  576,
    0,  444,  548, -104, -284,    0,  -15,    0,    0,    0,
    0, -241,   24,    0, -266,  -28,    7,    0, -263, -226,
 -197, -215, -175,  -54, -201,    0,    0,  109,  109,    0,
  -54,   60,  131, -200,   79,    0,    0, -134,  600, -119,
  -36,  -36,  -21,  157,  -36,   65, -117, -101,  -54, -215,
  109,  109,  107,  -49,    0,   79,  -56,    0,  131,    0,
  -90,    0,    0,    0,  130,   82,  116,    0,    0,  537,
  681,    0,  576,  576,  -17,  -28,  -28,    0,  576,    0,
  576,  147,  600,  -36,  140,  576,  122,    0,    0,    0,
  148, -110,  152,  113,    0,  576,  -17,  131,   79,  131,
 -215,  576,  -36,  -36,  -21,  600,  -36,   90,  576,  -78,
  -54,  -54,  -62,  -54,  109,  164,  681,  600,    0,  168,
  178,  576,  109,  -17,  109,  -17,    0,  576,  576,    0,
  576,    0,    0,    0,    0,    0,  -17, -103,    0,    0,
    0,  -32, -215,    0,   94,    0,    0,  185,  212,  220,
  147,  221,    5,    0, -215,    0,    0,  109,    0,  131,
    0,    0,  -95,  204,  131,    0,    0,  232,   16,    4,
  -54,  -54,   17,  -54,  109,  228,   43,  600,    0,    0,
  600,    0,  233,  576,   53,   54,  -17,  576,   35,    0,
   61,    0,    0,    0,    0,  276,    0,  264,    0,  -17,
  -17,    0,    0,    0,  -17,  576,    0,    0,    0,    0,
  -54,  -91,   71,  148,  282,  -21,  -21,    0,  576,    0,
 -215,    0,  576,  600,    0,    0,  600,    0,  275,  576,
    0,   75,   78,  576,   35,   29,  -54,   93,   35,   63,
  -54,  109,   32,  230,  -17,    0,  311,  312,    0,    0,
  -17, -215,    0,  -36,    0,    0,  131,    0,    0,  -95,
  232,    0,   98,  100,  576,   35,  -54,  -54,   35,  -54,
  681,    0,    0,    0,  -36,    0,  -54,   73,    0,    0,
  297,    0,  322,  -17,    0,  -17,  326,  244,    0,    0,
    0,    0,    0,  -54,  -54,   35,  -54,    0,    0,  -54,
    0,    0,    0,    0,  109,  576,   59,  251,    0,  312,
    0,    0,    0,    0,  -54,    0,    0,  324,  276,  333,
    0,    0,    0,  576,    0,  -17,   35,  322,    0,    0,
};
static const short yyrindex[] = {                         0,
   85,    0,   85,    0,    0,    0,  121,   85,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  672,    0,  634,  505,    0,    0,    0,    0,
  172,    0,    0,    0,    0,    0,    0,  362,  313,    0,
    0,    0,    0,    0,  124,    0,    0,    0,  121,    0,
   85,   85,    0,  121,   85,    0,    0,    0,    0,    0,
    0,  362,    0,  132,    0,   87,   -2,    0,    0,  125,
    0,    0,    0,    0,  -16,    0,    0,    0,    0,  410,
    0,    0,    0,    0,    0,    0,  505,    0,    0,    0,
    0,  370,  150,   85,    0,    0,    0,    0,    0,    0,
   -6,   52,    0,    0,    0,    0,    0,   92,  208,    0,
    0,    0,   85,   85,    0,  121,   85,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  150,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  337,    0,    0,    0,    0,    0,  -25,    0,    0,
  370,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  574,    0,   92,    0,    0,  269,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  150, -245, -230,
  150, -218,    0,    0,    0,    0,    0,    0,  583,    0,
    0,    0,    0,    0,    0,  288,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   84,  433,   -6,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  150,    0,    0,  150,    0,    0,    0,
    0,    0,    0,    0,  583,    0,    0,  455,  583,    0,
    0,    0,    0,    0,    0,    0,  394,  371,    0,    0,
    0,    0,    0,   85,    0,    0,   92,    0,    0,  574,
  269,    0,    0,    0,    0,  583,    0,    0,  583,    0,
    0,    0,    0,    0,   85,    0,    0,    0,    0,    0,
    0,    0,  293,    0,    0,    0,    0,   84,    0,    0,
    0,    0,    0,    0,    0,  583,    0, -217, -206,    0,
 -195,    0,    0,    0,    0,    0,    0,    0,    0,  371,
    0,    0,    0,    0,    0,    0, -171,    0,  288,    0,
    0,    0,    0,    0,    0,    0,  583,  293,    0,    0,
};
static const short yygindex[] = {                       342,
    0,    0,    1,   14,    0,  401,  108,    0,   22,  201,
  -23,  272,  -38,  287,  143,    0,  667,  154,  167,  190,
  470, -151,   -8,   11,    0,  171,    0,  141,  284,    0,
  365,    0,    2,  367,    0,  -79,  -64,  127,    0,    0,
    0,  619,  418,  239,    0,    0,    0,    0,  126,    0,
    0,  149,   -1,  207,
};
#define YYTABLESIZE 1003
static const short yytable[] = {                         60,
   18,  136,   33,   29,   97,   48,   15,   70,  134,  211,
   71,   12,   73,   19,   45,   86,  124,  105,   38,   66,
   78,  209,  147,  230,   84,   23,  160,   87,  227,   16,
   63,   79,  262,   81,  105,  129,   70,   70,   89,  187,
   21,   89,   95,   80,   14,   86,   60,   90,   66,   66,
   91,   92,   22,   24,   70,  164,   15,   17,   89,   70,
   70,   93,   13,   45,   25,   89,   66,   62,   18,   39,
  130,   66,   66,   40,  205,   20,   84,  126,  184,   13,
   18,   85,  131,  144,  145,   60,  105,  281,   87,  158,
   89,   94,   93,   19,   14,   93,  166,  189,  190,   19,
  192,   37,   96,   12,   62,  148,  173,   22,   60,   93,
  100,  110,  179,   50,   22,  301,   70,  107,   39,  158,
  106,  178,   40,   70,  111,   45,  128,  131,   66,   62,
  131,   70,  199,   70,  214,   66,  259,  215,  204,  186,
  195,  206,   52,   66,  129,   66,  193,  131,   62,   42,
  112,  119,   42,  127,  200,   39,  202,  235,  236,   40,
  238,   22,  226,  129,  126,  132,   70,  132,  132,  128,
   62,  127,  138,  139,  140,  222,  141,  128,   66,  131,
   39,  128,  132,   70,   40,  132,  261,   22,   22,  224,
  161,  168,  171,   43,  245,   66,  123,  260,  249,   39,
  165,  170,    1,   40,  167,  172,  239,    3,  191,  188,
  133,   77,  208,    4,  129,  126,  158,  132,  129,  126,
   49,   39,  127,  284,  194,   40,  127,  289,  197,  270,
   35,    8,    9,  272,   22,  163,   45,   45,  198,   86,
  276,  271,   43,  216,  279,    6,  313,  131,  131,  131,
   70,  131,  217,  308,  309,  135,  311,   35,  183,  282,
  218,  220,   66,  314,  229,  131,  131,   11,  131,  221,
  196,  210,  222,  290,   36,  306,   60,  231,   28,  233,
  323,  324,   83,  326,   37,    1,  327,  237,  240,   34,
    3,  234,  250,  244,  312,   37,    4,  146,  131,   37,
  131,  333,  131,    7,   43,   84,   35,  241,  135,  135,
  135,   61,  135,   70,    8,    9,  329,  246,  247,  253,
  252,  255,  267,   36,  122,   66,  135,  135,  264,  135,
  242,  131,  131,  243,  337,  275,  328,  120,  121,  277,
   52,   52,  278,   35,   37,   52,  129,  291,  125,  288,
  285,   52,  294,   22,  292,  296,  315,  316,   52,  135,
   36,  135,  304,  135,  305,  317,  321,  262,   35,   52,
   52,   52,   52,  185,  330,  331,  273,  107,    1,  274,
  107,   37,  128,    3,  334,   36,  182,   35,   22,    4,
  336,   26,  135,  135,  107,  107,   49,  107,  131,  180,
  181,   55,  103,  128,   36,  103,   37,    8,    9,    3,
   57,  123,   88,   51,   26,   43,   43,  125,   52,  129,
  126,  142,   82,  302,   53,   37,   36,  127,   35,  107,
  300,   54,  299,   35,  121,  131,  132,  121,  322,   35,
  129,  126,   55,   56,  219,  280,   35,   37,  127,  287,
  156,  121,  121,  157,  121,  335,  104,   35,   35,   35,
  107,  107,  266,  340,  131,  131,  131,  131,  332,  131,
  131,  131,  131,   44,    0,  131,  307,  303,   15,  310,
    0,    0,  131,   12,   72,  131,  121,    0,    0,  131,
    0,   48,  131,  131,  131,  131,  131,  268,  269,    0,
    0,    0,    0,  131,    0,    0,  325,  102,    0,    0,
    0,  131,  108,   45,    0,    0,    0,  121,  121,  131,
    0,    0,   44,    0,  131,  135,  135,  135,  135,    0,
  135,  135,  135,  135,   13,    0,  135,  339,  137,    0,
    0,    0,    0,  135,    0,   70,  135,    0,   70,    0,
  135,    0,    0,  135,  135,  135,  135,  135,    0,    0,
    0,    0,   70,   70,  135,    0,   14,    0,    0,    0,
    0,   15,  135,    0,    0,    0,   12,  175,    0,  177,
  135,    0,   15,    0,   44,  135,    0,   12,    0,    0,
    0,    0,    0,  107,  107,  107,  107,   70,  107,  107,
  107,  107,    0,    0,  107,    0,    0,    0,    0,    0,
   15,  107,    0,    0,  107,   12,    0,    0,  107,    0,
    0,  107,  107,  107,  107,  107,    0,   13,   70,   70,
    0,    0,   33,    0,    0,    0,    0,    0,   13,  225,
   74,   37,    0,    0,  175,    0,    0,    0,  107,    0,
  121,  121,  121,  121,    0,  121,  121,  121,  121,   14,
    0,  121,    0,    0,    0,    0,   13,    0,  121,    0,
   14,  121,    0,    0,   67,  121,    0,   67,  121,  121,
  121,  121,  121,    0,    0,    0,    0,    0,    0,   48,
    0,   67,   67,    0,   48,   44,   44,    0,   14,    0,
   48,    0,    0,  150,    2,  121,    0,   48,    0,    0,
    0,   45,   61,    5,    0,   61,   45,    6,   48,   48,
   48,   48,   45,    0,    0,  150,   67,    0,    0,   45,
   61,    0,    0,   10,    0,    0,  175,    0,    0,   11,
   45,   45,   45,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  150,    0,  150,    0,    0,   67,   67,    0,
    0,   70,   70,   70,   61,  150,   70,   70,   70,   70,
  212,  213,   70,  174,    0,    0,    0,    0,    0,   70,
    0,    0,   70,    0,    0,    0,   70,    0,    0,   70,
   70,   70,    0,    1,    0,   61,   61,    2,    3,    0,
  201,    0,  203,    0,    4,    0,    5,    0,    2,    0,
    6,    7,    0,  207,    0,  150,   70,    5,    0,    0,
    0,    6,    8,    9,    0,    0,   10,    0,  150,  150,
   33,    0,   11,  150,    0,   33,    2,   10,    0,   37,
    0,   33,    0,   11,   37,    5,    0,    0,   33,    6,
   37,    0,    0,    0,    0,    0,  113,   37,    0,   33,
   33,  114,    0,  248,    0,   10,    0,  115,   37,   37,
    0,   11,    0,  150,  116,    0,  256,  257,    0,  150,
    0,  258,    0,    0,    0,  117,  118,    0,    0,    0,
   67,   67,   67,    0,    0,   67,   67,   67,   67,    0,
    0,   67,    0,    0,    0,    0,    0,    0,   67,    0,
    0,   67,  150,    0,  150,   67,    0,    0,   67,   67,
   67,  293,    0,    0,    0,    0,    0,  298,   61,   61,
    0,    0,    0,   61,   61,   61,   61,    1,    0,   61,
    0,    0,    3,    0,    0,    0,   61,    0,    4,   61,
    0,    0,    0,    0,  150,    7,   61,   61,   61,    0,
  319,    0,  320,    0,    0,    0,    8,    9,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  338,
};
static const short yycheck[] = {                          8,
    0,   58,    2,   40,   59,    5,   35,    9,   58,   42,
   10,   40,   12,    0,    4,   41,   55,   41,   40,    9,
  125,  125,   40,  175,   41,  271,   91,   26,  124,  275,
    9,  316,  124,  275,   41,   59,   38,   39,   41,  119,
  271,   44,   32,   59,  275,  312,   55,   41,   38,   39,
   44,  315,  271,  271,   56,   94,  275,  275,   61,   61,
   62,  288,   91,   53,  271,   59,   56,   40,  275,   91,
   60,   61,   62,   95,  139,  271,   93,   56,  117,  275,
   80,   58,   61,   83,   84,   94,   93,   59,   87,   89,
   93,  289,   41,   80,  123,   44,   96,  121,  122,  271,
  124,  317,  278,  275,   40,  123,  106,    0,  117,   58,
  312,  312,  112,    6,    7,  267,  118,   58,   91,  119,
   61,  111,   95,  125,   46,  115,   40,   41,  118,   40,
   44,  133,  132,  135,   41,  125,  216,   44,  138,  118,
  127,  141,   59,  133,   58,  135,  125,   61,   40,   58,
  285,  271,   61,  271,  133,   91,  135,  181,  182,   95,
  184,   54,  258,   40,   40,   41,  168,   61,   44,  271,
   40,   40,  263,   44,   93,  165,   61,   91,  168,   93,
   91,   95,   58,  185,   95,   61,  278,   80,   81,  168,
   44,   44,   41,    4,  194,  185,   54,  221,  198,   91,
   61,  312,  257,   95,   97,   93,  185,  262,  271,  288,
  260,  316,  316,  268,   91,   91,  216,   93,   95,   95,
  275,   91,   91,  247,   61,   95,   95,  251,   61,  229,
   59,  286,  287,  233,  127,   93,  226,  227,   61,  265,
  240,  231,   53,   59,  244,  274,  285,   40,   41,   42,
  252,   44,   41,  277,  278,  312,  280,  279,  116,  246,
   41,   41,  252,  287,   61,   58,   59,  296,   61,  265,
  128,  304,  262,  252,  296,  275,  285,   46,  315,  264,
  304,  305,  259,  307,  317,  257,  310,  271,   61,    3,
  262,  288,  258,   61,  281,  317,  268,  315,   91,  317,
   93,  325,   95,  275,  115,  282,  279,  265,   40,   41,
   42,  284,   44,  315,  286,  287,  316,  265,  265,   44,
  260,   58,   41,  296,   53,  315,   58,   59,  258,   61,
  188,  124,  125,  191,  334,   61,  315,   51,   52,  265,
  257,  258,  265,  279,  317,  262,  260,  316,  284,  287,
  258,  268,   42,  246,  125,   44,  284,   61,  275,   91,
  296,   93,  265,   95,  265,   44,   41,  124,  279,  286,
  287,  288,  289,  284,  316,  125,  234,   41,  257,  237,
   44,  317,  296,  262,   61,  296,  115,  279,  281,  268,
   58,  271,  124,  125,   58,   59,  275,   61,  312,  113,
  114,  317,   41,  317,  296,   93,  317,  286,  287,    0,
   41,   41,  125,  257,  265,  226,  227,  125,  262,  296,
  296,   80,   22,  270,  268,  317,  296,  296,  257,   93,
  264,  275,  262,  262,   41,  312,  312,   44,  298,  268,
  317,  317,  286,  287,  161,  245,  275,  317,  317,  249,
   86,   58,   59,   87,   61,  329,   39,  286,  287,  288,
  124,  125,  224,  338,  257,  258,  259,  260,  320,  262,
  263,  264,  265,    4,   -1,  268,  276,  271,   35,  279,
   -1,   -1,  275,   40,   41,  278,   93,   -1,   -1,  282,
   -1,   59,  285,  286,  287,  288,  289,  226,  227,   -1,
   -1,   -1,   -1,  296,   -1,   -1,  306,   38,   -1,   -1,
   -1,  304,   43,   59,   -1,   -1,   -1,  124,  125,  312,
   -1,   -1,   53,   -1,  317,  257,  258,  259,  260,   -1,
  262,  263,  264,  265,   91,   -1,  268,  337,   69,   -1,
   -1,   -1,   -1,  275,   -1,   41,  278,   -1,   44,   -1,
  282,   -1,   -1,  285,  286,  287,  288,  289,   -1,   -1,
   -1,   -1,   58,   59,  296,   -1,  123,   -1,   -1,   -1,
   -1,   35,  304,   -1,   -1,   -1,   40,  108,   -1,  110,
  312,   -1,   35,   -1,  115,  317,   -1,   40,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,   93,  262,  263,
  264,  265,   -1,   -1,  268,   -1,   -1,   -1,   -1,   -1,
   35,  275,   -1,   -1,  278,   40,   -1,   -1,  282,   -1,
   -1,  285,  286,  287,  288,  289,   -1,   91,  124,  125,
   -1,   -1,   59,   -1,   -1,   -1,   -1,   -1,   91,  170,
   93,   59,   -1,   -1,  175,   -1,   -1,   -1,  312,   -1,
  257,  258,  259,  260,   -1,  262,  263,  264,  265,  123,
   -1,  268,   -1,   -1,   -1,   -1,   91,   -1,  275,   -1,
  123,  278,   -1,   -1,   41,  282,   -1,   44,  285,  286,
  287,  288,  289,   -1,   -1,   -1,   -1,   -1,   -1,  257,
   -1,   58,   59,   -1,  262,  226,  227,   -1,  123,   -1,
  268,   -1,   -1,   85,  261,  312,   -1,  275,   -1,   -1,
   -1,  257,   41,  270,   -1,   44,  262,  274,  286,  287,
  288,  289,  268,   -1,   -1,  107,   93,   -1,   -1,  275,
   59,   -1,   -1,  290,   -1,   -1,  267,   -1,   -1,  296,
  286,  287,  288,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  134,   -1,  136,   -1,   -1,  124,  125,   -1,
   -1,  257,  258,  259,   93,  147,  262,  263,  264,  265,
  152,  153,  268,  107,   -1,   -1,   -1,   -1,   -1,  275,
   -1,   -1,  278,   -1,   -1,   -1,  282,   -1,   -1,  285,
  286,  287,   -1,  257,   -1,  124,  125,  261,  262,   -1,
  134,   -1,  136,   -1,  268,   -1,  270,   -1,  261,   -1,
  274,  275,   -1,  147,   -1,  197,  312,  270,   -1,   -1,
   -1,  274,  286,  287,   -1,   -1,  290,   -1,  210,  211,
  257,   -1,  296,  215,   -1,  262,  261,  290,   -1,  257,
   -1,  268,   -1,  296,  262,  270,   -1,   -1,  275,  274,
  268,   -1,   -1,   -1,   -1,   -1,  257,  275,   -1,  286,
  287,  262,   -1,  197,   -1,  290,   -1,  268,  286,  287,
   -1,  296,   -1,  255,  275,   -1,  210,  211,   -1,  261,
   -1,  215,   -1,   -1,   -1,  286,  287,   -1,   -1,   -1,
  257,  258,  259,   -1,   -1,  262,  263,  264,  265,   -1,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,  275,   -1,
   -1,  278,  294,   -1,  296,  282,   -1,   -1,  285,  286,
  287,  255,   -1,   -1,   -1,   -1,   -1,  261,  257,  258,
   -1,   -1,   -1,  262,  263,  264,  265,  257,   -1,  268,
   -1,   -1,  262,   -1,   -1,   -1,  275,   -1,  268,  278,
   -1,   -1,   -1,   -1,  336,  275,  285,  286,  287,   -1,
  294,   -1,  296,   -1,   -1,   -1,  286,  287,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  336,
};
#define YYFINAL 16
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 320
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'#'",0,0,0,0,"'('","')'","'*'",0,"','",0,"'.'",0,0,0,0,0,0,0,0,0,0,0,"':'",
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,
"']'",0,"'_'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'","'|'",
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ABSTYPE","AND","ANDALSO","AS","CASE","DATATYPE",
"DO","ELSE","END","EXCEPTION","FN","FUN","HANDLE","IF","IN","INFIX","INFIXR",
"LET","LOCAL","NONFIX","NOT","OF","OP","OPEN","OR","ORELSE","RAISE","REC",
"THEN","TYPE","VAL","WITH","WITHTYPE","WHILE","NUMBER","FLOAT","BOOL",
"VARIABLE","NEWLINE","CONSTANT","NE","GT","LE","LT","GE","ASSIGNMENT","\"=>\"",
"\"->\"","INFIXOP","FALSE","TRUE","COMPOUNDIDENT","IDENT","COMPOUNDNAME","NAME",
"INFIXOPERATOR","STRINGESCAPE","NUMERAL","TYPEVAR","LABEL","ALPHANUMERICIDENT",
"DIGIT","LETTER","COMMENT",
};
static const char *yyrule[] = {
"$accept : program",
"program : ToplevelDecl ';' programR",
"programR : program",
"programR :",
"ToplevelDecl : Expression",
"ToplevelDecl : ObjectDecl",
"ObjectDecl : ObjectDecl1",
"ObjectDecl : ObjectDecl2",
"ObjectDecl1 : Declaration ObjectDecl2",
"ObjectDecl2 : LOCAL ObjectDecl IN ObjectDecl END ObjectDeclR",
"ObjectDeclR : ';' ObjectDecl",
"ObjectDeclR : ObjectDecl",
"Declaration : VAL REC Pattern '=' Expression PatternExprR DeclarationR",
"Declaration : VAL Pattern '=' Expression PatternExprR DeclarationR",
"Declaration : FUN FunHeadingR DeclarationR",
"Declaration : TYPE TypeBinding DeclarationR",
"Declaration : DATATYPE DatatypeB1R DeclarationR",
"Declaration : ABSTYPE DatatypeB1R WITH Declaration1 END DeclarationR",
"Declaration : LOCAL Declaration1 IN Declaration1 END DeclarationR",
"Declaration1 : VAL REC Pattern '=' Expression PatternExprR DeclarationR",
"Declaration1 : VAL Pattern '=' Expression PatternExprR DeclarationR",
"Declaration1 : FUN FunHeadingR DeclarationR",
"Declaration1 : TYPE TypeBinding DeclarationR",
"Declaration1 : DATATYPE DatatypeB1R DeclarationR",
"Declaration1 : ABSTYPE DatatypeB1R WITH Declaration1 END DeclarationR",
"Declaration1 : LOCAL Declaration1 IN Declaration1 END DeclarationR",
"Declaration1 :",
"DeclarationR : ';' Declaration",
"DeclarationR : Declaration",
"FunHeadingR : FunHeading ':' Type '=' Expression FunExprR",
"FunHeadingR : FunHeading '=' Expression FunExprR",
"FunExprR : '|' FunHeadingR",
"FunExprR : AND FunHeadingR",
"FunExprR :",
"DatatypeB1R : DatatypeBinding WITHTYPE TypeBinding",
"DatatypeB1R : DatatypeBinding",
"PatternExprR : AND VAL REC Pattern '=' Expression PatternExprR",
"PatternExprR :",
"FunHeading : Name AtomicPattern AtomicPatternStar",
"FunHeading : '(' AtomicPattern INFIXOPERATOR AtomicPattern ')' AtomicPatternStar",
"FunHeading : AtomicPattern INFIXOPERATOR AtomicPattern",
"AtomicPatternStar : AtomicPattern AtomicPatternStar",
"AtomicPatternStar :",
"TypeBinding : TypeVarList Ident '=' Type TypeBindingR",
"TypeBindingR : AND TypeBinding",
"TypeBindingR :",
"DatatypeBinding : TypeVarList Ident '=' IdentOfType DatatypeBindingR",
"DatatypeBindingR : AND DatatypeBinding",
"DatatypeBindingR :",
"IdentOfType : Ident OF Type IdentOfTypeR",
"IdentOfType : Ident IdentOfTypeR",
"IdentOfTypeR : '|' IdentOfType",
"IdentOfTypeR :",
"TypeVarList : TYPEVAR",
"TypeVarList : '(' TYPEVAR TypeVarStar ')'",
"TypeVarList :",
"TypeVarStar : ',' TypeVarStar",
"TypeVarStar :",
"Expression : ExpressionY ':' Type",
"Expression : ExpressionY ANDALSO Expression",
"Expression : ExpressionY ORELSE Expression",
"Expression : ExpressionY",
"ExpressionY : InfixExpression",
"ExpressionY : IF Expression THEN Expression ELSE Expression",
"ExpressionY : WHILE Expression DO Expression",
"ExpressionY : CASE Expression OF Expression",
"InfixExpression : AtomicExpressionPlus INFIXOPERATOR InfixExpression",
"InfixExpression : AtomicExpressionPlus",
"AtomicExpressionPlus : AtomicExpression AtomicExpressionStar",
"AtomicExpressionStar : AtomicExpression AtomicExpressionStar",
"AtomicExpressionStar :",
"AtomicExpression : CONSTANT",
"AtomicExpression : '(' ')'",
"AtomicExpression : E2 ')'",
"AtomicExpression : E2 ';' ExpressionPlus2 ')'",
"AtomicExpression : E2 ',' ExpressionPlus1 ')'",
"AtomicExpression : '[' ExpressionPlus1 ']'",
"AtomicExpression : '[' ']'",
"AtomicExpression : '{' LABEL '=' Expression LabelExpressionR '}'",
"AtomicExpression : '{' '}'",
"AtomicExpression : '#' LABEL",
"AtomicExpression : LET Declaration IN ExpressionPlus2 END",
"E2 : '(' Expression",
"ExpressionPlus1 : Expression ',' ExpressionPlus1",
"ExpressionPlus1 : Expression",
"ExpressionPlus2 : Expression ';' ExpressionPlus2",
"ExpressionPlus2 : Expression",
"LabelExpressionR : ',' LABEL '=' Expression LabelExpressionR",
"LabelExpressionR :",
"Pattern : PatternX",
"Pattern : PatternY",
"PatternY : PatternX INFIXOPERATOR Pattern",
"PatternY : PatternX ':' Type",
"PatternX : AtomicPattern",
"PatternX : CompoundName AtomicPattern",
"PatternX : Name ':' Type AS Pattern",
"PatternX : Name AS Pattern",
"AtomicPattern : '_'",
"AtomicPattern : CompoundIdent",
"AtomicPattern : CONSTANT",
"AtomicPattern : '(' Patterns ')'",
"AtomicPattern : '[' Patterns ']'",
"Patterns : Pattern PatternR",
"Patterns :",
"PatternR : ',' Pattern PatternR",
"PatternR :",
"Type : TypeX",
"Type : TypeY",
"TypeX : TypeY CompoundIdent",
"TypeX : TypeY '*' Type SubTypeR",
"TypeX : TypeY \"->\" Type",
"TypeY : TYPEVAR",
"TypeY : CompoundIdent",
"TypeY : SubType CompoundIdent",
"TypeY : '{' LABEL ':' Type LabelTypeR '}'",
"TypeY : '{' '}'",
"TypeY : SingleType",
"SingleType : A ')'",
"A : '(' Type",
"SubType : A ',' Type SType ')'",
"SubTypeR : '*' Type",
"SubTypeR :",
"SType : ',' Type SType",
"SType :",
"LabelTypeR : ',' LABEL ':' Type LabelTypeR",
"LabelTypeR :",
"CompoundName : IdentPlus",
"CompoundName : Name",
"CompoundName : Ident",
"Name : Ident",
"Name : OP INFIXOPERATOR",
"CompoundIdent : Ident",
"CompoundIdent : IdentPlus",
"IdentPlus : Ident '.' Ident IdentStar",
"IdentStar : '.' Ident IdentStar",
"IdentStar :",
"Ident : ALPHANUMERICIDENT",

};
#endif
/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 326 "parser.y"

void yyerror(char *str)
{
	fprintf(stderr, "%s\n", str);
}

int main(void)
{
	yyparse();
	return 0 ;
}


#line 692 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (data->s_base != 0)
          ? (short *)realloc(data->s_base, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (data->l_base != 0)
          ? (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
