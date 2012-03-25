%{
#include <stdlib.h> 
#include "include.h" 
#include "y.tab.h"
void yyerror(char *);
int temp; 
%}

Digit ([0-9])
Letter ([a-zA-Z])
AlphaNumericIdent {Letter}(({Letter})|({Digit})|([_']))*
Label (({Ident})|({Digit})*)
TypeVar [\']+[_]?{AlphaNumericIdent}
Numeral [~]?{Digit}*
InfixOperator [+*/^\-><]
StringEscape ([nt\"\\])|([\^][@ A-Z\[\]\\\^_])|({Digit}{Digit}{Digit})
Constant ({Numeral}([\.]{Digit}+)?([E]{Numeral})?)|([\"]([^\\\"]|([\\]{StringEscape}))+[\"])

%%
\(\*[^)]*\*\) 			printf("comments\n");
abstype					printf("abstype\n"); return ABSTYPE; 
type					printf("type\n"); return TYPE;
andalso					printf("andalso\n"); return ANDALSO; 
and						printf("and\n"); return AND; 
case					printf("case\n"); return CASE; 
as						printf("as\n"); return AS; 
do						printf("do\n"); return DO; 
else					printf("else\n"); return ELSE; 
end						printf("end\n"); return END; 
exception				printf("exception\n"); return EXCEPTION; 
fn						printf("fn\n"); return FN; 
fun						printf("fun\n"); return FUN; 
handle					printf("handle\n"); return HANDLE; 
if						printf("if\n"); return IF; 
in						printf("in\n"); return IN; 
infixr					printf("infixr\n"); return INFIXR; 
infix					printf("infix\n"); return INFIX; 
let						printf("let\n"); return LET; 
local					printf("local\n"); return LOCAL; 
nonfix					printf("nonfix\n"); return NONFIX; 
not						printf("not\n"); return NOT; 
of						printf("of\n"); return OF; 
op						printf("op\n"); return OP; 
orelse					printf("orelse\n"); return ORELSE; 
or						printf("or\n"); return OR; 
open					printf("open\n"); return OPEN; 
raise					printf("raise\n"); return RAISE; 
rec						printf("rec\n"); return REC; 
then					printf("then\n"); return THEN; 
val						printf("val\n"); return VAL; 
with					printf("with\n"); return WITH; 
withtype				printf("withtype\n"); return WITHTYPE; 
while					printf("while\n"); return WHILE; 
datatype				printf("datatype\n"); return DATATYPE; 
int						printf("int\n"); return TYPEVAR; 
[|]						printf("pipe\n"); return *yytext;
{TypeVar} 				printf("TypeVar\n");return TYPEVAR;
{AlphaNumericIdent}		printf("AI\n");return ALPHANUMERICIDENT;
{Constant} 					printf("Constant\n");return CONSTANT;
{InfixOperator}				printf("InfixOperator\n");return INFIXOPERATOR;
[=]						printf("pointer");return *yytext;	
(->)						printf("pointer2");return *yytext;
(<=)						printf("less than equals to\n"); return LE;
(>=)						printf("greater than equals to\n"); return GE;
(<>)						printf("not equal to\n"); return NE;
(:=)						printf("assignment operator\n"); return ASSIGNMENT;
[\t ]+ 						printf("whitespaces\n");
[\n]+ 						printf("newline\n"); return NEWLINE;
[\(\)]						printf("Parenthesis %c\n", *yytext); return *yytext;
[\{\}]						printf("Curly Parenthesis %c\n", *yytext); return *yytext;
[\[\]]						printf("Square Parenthesis %c\n", *yytext); return *yytext;
[\#\_\:\;\,@]				printf("Special Character %c\n", *yytext); return *yytext;
[+*\/\^-]						printf("airthmatic operator %c\n", *yytext); return *yytext;
[><=]						printf("relational operator %c\n", *yytext); return *yytext;
.							printf("Unkown Symbol\n");
%%

int yywrap()
{
	return 1;
}
