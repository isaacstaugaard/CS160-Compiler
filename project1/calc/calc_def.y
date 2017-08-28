
%{
	#include <stdio.h>
	int yylex(void);
	void yyerror(char *);
%}


%%
 
 /*
List   : Expr '.' R {printf("parsed expression\n");}
R      : Expr '.' R 
        | ' '
        ;
Expr   : Term ExprP;
ExprP  : '+' Term ExprP
        | '-' Term ExprP
        | ' '
        ;
Term   : Factor TermP;
TermP  : '*' Factor TermP
        | '%' Factor TermP
        | ' '
        ;
Factor : 'n'
        | '(' Expr ')'
        ;
 */

 /*
 //This is the new correct precedence grammar
List   : List Expr '.' {printf("parsed expression\n");}
        | Expr '.' {printf("parsed expression\n");}
        ;

Expr   : Expr '+' Term
        | Expr '-' Term
        |Term
        ;

Term   : Term '*' Factor
        | Term '%' Factor
        | Factor 
        ;

Factor : 'n'
        | '(' Expr ')'
        ;
 */

 
 List    : List Expr '.' {printf("parsed expresion\n");}
	| Expr '.' {printf("parsed expresion\n");}
        ;

Expr    : Expr '*' Expr 
        | Expr '+' Expr 
        | Expr '-' Expr
        | Expr '%' Expr
        | 'n'
        | '(' Expr ')'
        ;

%%

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
	return;
}

int main(void) {
	yyparse();
	return 0;
}
