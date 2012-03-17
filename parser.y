%{
#include "include.h"
int yylex(void);
void yerror(char *);
%}
%token ABSTYPE AND ANDALSO AS CASE DATATYPE DO ELSE END EXCEPTION FN FUN HANDLE IF IN INFIX INFIXR 
%token LET LOCAL NONFIX NOT OF OP OPEN OR ORELSE RAISE REC THEN TYPE VAL WITH WITHTYPE WHILE
%token NUMBER FLOAT BOOL VARIABLE NEWLINE
%token NE GT LE LT GE ASSIGNMENT '=>' '->'
%token FALSE TRUE 
%token NUMBER

%union {
	char* value;
	TokenType tokentype; 
};

%%
stmtlist
expr :	
	expr airth_opr expr 		//printf("got Number \n");}
	| NUMBER		//printf("Root %s\n", $1.value);}
	| VARIABLE		//printf("Root %s\n", $1.value);}
	;
airth_opr : '*'|'-'|'+'|'/'|'^';
%%

void yyerror(char *str)
{
	fprintf(stderr, "%s\n", str);
}

int main(void)
{
	yyparse();
	return 0 ;
}


