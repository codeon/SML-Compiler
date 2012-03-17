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
program : 
		ToplevelDecl ';' programR 
		;		

programR : 
		program 
		|
		;

ToplevelDecl :
		Expression 
		| ObjectDecl
		;
		
ObjectDecl	:
		Declaration  ObjectDeclR 
		| LOCAL ObjectDecl 	IN ObjectDecl END ObjectDeclR
		| ObjectDeclR
		;

ObjectDeclR :
		';' ObjectDecl
		| ObjectDecl
		;

Declaration :
		DeclarationR ';' Declaration
		| DeclarationR Declaration
		;
		
DeclarationR: 
		VAL REC Pattern '=' Expression PatternExprR
		| VAL Pattern '=' Expression PatternExprR
		| FUN FunHeading ':' Type 	'=' Expression FunExprR
		| FUN FunHeading '=' Expression FunExprR
		| TYPE TypeBinding
		| DATATYPE DatatypeBinding WITHTYPE TYPEBINDING
		| DATATYPE DatatypeBinding 
		| ABSTYPE  DatatypeBinding WITHTYPE TYPEBINDING WITH Declaration END
		| ABSTYPE  DatatypeBinding WITH Declaration END
		| LOCAL Declaration IN Declaration END 
		| 
		;
		
FunHeading : 
		Name AtomicPattern AtomicPatternR
		| '(' AtomicPattern InfixOperator AtomicPattern ')' AtomicPatternR 	
		| AtomicPattern InfixOperator AtomicPattern
		;

TypeBinding :
		TypeVarList Ident '=' Type TypeBindingR
		;

TypeBindingR : 
		AND TypeBinding
		| 
		;

DatatypeBinding :
		TypeVarList Ident '=' IdentOfType DatatypeBindingR
		;
		
DatatypeBindingR :		
		AND DatatypeBinding  
		|
		;
		
IdentOfType :
		Ident OF Type IdentOfTypeR
		| Ident IdentOfTypeR
		;

IdentOfTypeR : 
		'|' IdentOfType
		|
		;
		
TypeVarList : 
		| TypeVar
		| '(' TypeVar TypeVarR ')'
		|
		;

TypeVarR :
		',' TypeVar
		|
		;

Expression :
		InfixExpression
		| Expression ':' Type
		| Expression  ANDALSO Expression  
		| Expression  ORELSE Expression  
		| IF  Expression  THEN Expression ELSE Expression
		| WHILE  Expression DO Expression   
		| CASE Expression OF Expression  
		;

InfixExpression :
		InfixExpression InfixOperator InfixExpression
		| AtomicExpression AtomicExpressionR
		;
		
AtomicExpressionR :
		AtomicExpression AtomicExpressionR
		|
		;
		
AtomicExpression :
		Constant
		| '(' Expression ExpressionR1 ')'
		| '(' ')' 
		| '[' Expression ExpressionR1 ']'
		| '[' ']'
		| '{' Label '=' Expression LabelExpressionR '}'
		| '{' '}' 
		| '#' Label 
		| '(' Expression ExpressionR2 ')' 
		| LET Declaration IN ExpressionR2 END 
		;
		
ExpressionR1 :
		',' Expression 
		| 
		;
		
ExpressionR1 :
		';' Expression 
		| 
		;		
		
Type: 
		TypeVar
		| SubType CompoundIndent
		| Type '*' Type SubTypeR
		| Type '->' Type 
		| '{' Label ':' Type LabelTypeR '}'
		| '{' '}'
		| '(' Type ')'
		;
		
SubType :
		| Type 
		| '(' Type SType ')'
		|
		;
		
SubTypeR : 
		'*' Type 
		| 
		;

SType :
		',' Type SType
		| 
		;

LabelTypeR :
		',' Label ':' Type LabelTypeR
		| 
		;
		
CompoundIndent :
		Ident IdentR
		
IdentR :
		'.' Ident 
		|
		;

CompoundName :
		CompoundIndent
		| OP InfixOperator
		;
		
Name :
		Ident
		| OP InfixOperator
		;
	
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


