%option yylineno
%pointer

%{
    #include <stdlib.h>
    #include <string.h>
    #include "parser.hpp"

    void yyerror(const char *);
%}

/** WRITE ME:
 *  Put any definitions you need here. Add your own regular expressions
 *  below for ALL tokens defined in the manual. You can choose not to use
 *  definitions here.
 */

/** The example below is very simple, but it shows almost everything you will
 *  need to do for this first part. The syntax is as follows:
 *
 *  regular_expression      {  c code  }
 *
 * The lexer will try to match each regular expression. When it does it will
 * execute the corresponding C code.
*/
%x comment

%%

"boolean"   { return T_BOOL;    }
"char"      { return T_CHAR;    }
"integer"   { return T_INT;     }
"string"    { return T_STR;     }
"intptr"    { return T_INTPTR;  }
"charptr"   { return T_CHARPTR; }
"if"        { return T_IF;      }
"else"      { return T_ELSE;    }
"while"     { return T_WHILE;   }
"var"       { return T_VAR;     }
"procedure" { return T_PROC;    }
"return"    { return T_RET;     }
"null"      { return T_NULL;    }


"&&"     { return T_AND;      }
"/"      { return T_FSLASH;   }
"="      { return T_EQ;       }
"=="     { return T_EQEQ;     }
">"      { return T_GT;       }
">="     { return T_GTE;      }
"<"      { return T_LT;       }
"<="     { return T_LTE;      }
"!"      { return T_NOT;      }
"!="     { return T_NOTEQ;    }
"||"     { return T_OR;       }
"-"      { return T_MINUS;    }  
"+"      { return T_PLUS;     }  
"*"      { return T_TIMES;    }  
"&"      { return T_ADDRESS;  }
"^"      { return T_DEREF;    }

"true"                { return T_TRUE;   }
"false"               { return T_FALSE;  }
[0-1]+b               { return T_INTBIN; }
0[0-7]+               { return T_INTOCT; }
0|[1-9]+[0-9]*        { return T_INTDEC; }
0[x|X][0-9a-fA-F]+    { return T_INTHEX; }
[\(\)\.\%\;\:\{\}\,\/\[\]\|]  { return *yytext; }
[\"][^\"]*[\"]        { return T_STRING; }
[\'][[:print:]]?[\']        { return T_CHARACTER; }
[a-zA-Z][a-zA-Z0-9_]* { return T_ID; }
[ \t\n]             ; /* skip whitespace */

"/%" BEGIN( comment );
<comment>[^%]*		
<comment>"%"+[^%/\n]*  	
<comment>"%"+"/" {BEGIN( INITIAL );}
<comment><<EOF>> {yyerror("DANGLING COMMENT");}


.                   yyerror((char *) "invalid character");
%%

/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

int yywrap(void) {
    return 1;
}
