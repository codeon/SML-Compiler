%{
#include "include.h"
#define YYDEBUG 1
int yylex(void);
void yerror(char *);
%}
%token ABSTYPE AND ANDALSO AS CASE DATATYPE DO ELSE END EXCEPTION FN FUN HANDLE IF IN INFIX INFIXR 
%token LET LOCAL NONFIX NOT OF OP OPEN OR ORELSE RAISE REC THEN TYPE VAL WITH WITHTYPE WHILE
%token NUMBER FLOAT BOOL VARIABLE NEWLINE CONSTANT
%token NE GT LE LT GE ASSIGNMENT '=>' '->' INFIXOP
%token FALSE TRUE 
%token NUMBER

%token COMPOUNDIDENT IDENT COMPOUNDNAME NAME INFIXOPERATOR CONSTANT STRINGESCAPE NUMERAL TYPEVAR IDENT LABEL ALPHANUMERICIDENT DIGIT LETTER COMMENT 

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
		
ObjectDecl:
		ObjectDecl1
		| ObjectDecl2
		;
		
ObjectDecl1:
		Declaration  ObjectDecl2
		;
		
ObjectDecl2	:
		LOCAL ObjectDecl IN ObjectDecl END ObjectDeclR
		;

ObjectDeclR :
		';' ObjectDecl
		| ObjectDecl
		;

Declaration: 
		VAL REC Pattern '=' Expression PatternExprR DeclarationR
		| VAL Pattern '=' Expression PatternExprR DeclarationR
		| FUN FunHeadingR DeclarationR
		| TYPE TypeBinding DeclarationR
		| DATATYPE DatatypeB1R DeclarationR
		| ABSTYPE  DatatypeB1R WITH Declaration1 END DeclarationR
		| LOCAL Declaration1 IN Declaration1 END DeclarationR 
		;
		
Declaration1: 
		VAL REC Pattern '=' Expression PatternExprR DeclarationR
		| VAL Pattern '=' Expression PatternExprR DeclarationR
		| FUN FunHeadingR DeclarationR
		| TYPE TypeBinding DeclarationR
		| DATATYPE DatatypeB1R DeclarationR
		| ABSTYPE  DatatypeB1R WITH Declaration1 END DeclarationR
		| LOCAL Declaration1 IN Declaration1 END DeclarationR 
		|
		;

DeclarationR :
		 ';' Declaration
		| Declaration 
		
		;
		
FunHeadingR :
		FunHeading ':' Type '=' Expression FunExprR
		| FunHeading '=' Expression FunExprR
		;
		
FunExprR :
		'|' FunHeadingR
		| AND FunHeadingR
		|
		;		

DatatypeB1R	:
		DatatypeBinding WITHTYPE TypeBinding
		| DatatypeBinding 
		;
	
PatternExprR:
		AND VAL REC Pattern '=' Expression PatternExprR
		|
		;
		

FunHeading : 
		Name AtomicPattern AtomicPatternStar
		| '(' AtomicPattern INFIXOPERATOR AtomicPattern ')' AtomicPatternStar 	
		| AtomicPattern INFIXOPERATOR AtomicPattern
	
		;
AtomicPatternStar :
		AtomicPattern AtomicPatternStar
		|
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
		 TYPEVAR
		| '(' TYPEVAR TypeVarStar ')'
		|
		;

TypeVarStar :
		',' TypeVarStar
		|
		;

Expression:
		ExpressionY ':' Type
		| ExpressionY  ANDALSO Expression  
		| ExpressionY  ORELSE Expression  
		| ExpressionY
		;
		
ExpressionY :
		InfixExpression
		| IF  Expression  THEN Expression ELSE Expression
		| WHILE  Expression DO Expression   
		| CASE Expression OF Expression  
		;

InfixExpression :
		AtomicExpressionPlus INFIXOPERATOR InfixExpression
		| AtomicExpressionPlus
		;

AtomicExpressionPlus :
		AtomicExpression AtomicExpressionStar
		;
		
AtomicExpressionStar :
		AtomicExpression AtomicExpressionStar
		|
		;
		
AtomicExpression :
		CONSTANT
		| '(' ')'
		| E2 ')'
		| E2 ';' ExpressionPlus2 ')'
		| E2 ',' ExpressionPlus1 ')'
		| '[' ExpressionPlus1 ']'
		| '[' ']'
		| '{' LABEL '=' Expression LabelExpressionR	'}'
		| '{' '}' 
		| '#' LABEL 
		| LET Declaration IN ExpressionPlus2 END 
		;

E2 :
		'(' Expression
		;

ExpressionPlus1:
		Expression ',' ExpressionPlus1
		| Expression
		;
		
ExpressionPlus2:
		Expression ';' ExpressionPlus2
		| Expression
		;
				
LabelExpressionR :
		',' LABEL '=' Expression LabelExpressionR
		|
		;
		
Pattern :
		PatternX 
		| PatternY
		;
		
PatternY:
		PatternX INFIXOPERATOR Pattern
		| PatternX ':' Type 

PatternX:
		AtomicPattern
		| CompoundName AtomicPattern
		| Name ':' Type AS Pattern
		| Name AS Pattern
		;

AtomicPattern : 
		'_'
		| CompoundIdent
		| CONSTANT
		| '(' Patterns ')'
		| '[' Patterns ']'
		;
		
Patterns :
		Pattern PatternR
		| 
		;

PatternR : 
		',' Pattern PatternR
		| 
		;
		
		
Type: 
		TypeX
		| TypeY
		;
		
TypeX:
		TypeY CompoundIdent
		| TypeY '*' Type SubTypeR
		| TypeY '->' Type 
		;
		
TypeY:
		TYPEVAR
		| CompoundIdent
		| SubType CompoundIdent
		| '{' LABEL ':' Type LabelTypeR '}'
		| '{' '}'
		| SingleType
		;
		
SingleType:
		A ')'
		;
		
A:
		'(' Type 
		;
		
SubType :
		A ',' Type SType ')'
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
		',' LABEL ':' Type LabelTypeR
		| 
		;
		
CompoundName : 
		IdentPlus
		| Name
		| Ident
		;
		
Name : 
		Ident
		| OP INFIXOPERATOR
		;

CompoundIdent : 
		Ident 
		| IdentPlus
		;

IdentPlus:
		Ident '.' Ident IdentStar
		;

IdentStar:
		'.' Ident IdentStar
		|
		;

Ident : 
		ALPHANUMERICIDENT
		;
		
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


