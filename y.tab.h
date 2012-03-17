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
#define NE 296
#define GT 297
#define LE 298
#define LT 299
#define GE 300
#define ASSIGNMENT 301
#define FALSE 302
#define TRUE 303
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char* value;
	TokenType tokentype; 
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
