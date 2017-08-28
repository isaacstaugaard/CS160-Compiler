#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>

using namespace std;


/*** Enums and Print Functions for Terminals and Non-Terminals  **********************/

#define MAX_SYMBOL_NAME_SIZE 25

//all of the terminals in the language
typedef enum {
	T_eof = 0,	// 0: end of file
	T_num,		// 1: numbers
	T_plus,		// 2: +
	T_minus,	// 3: - 
	T_times,	// 4: *
	T_period,	// 5: .
	T_modulo, 	// 6: % 
	T_openparen,	// 7: (
	T_closeparen 	// 8: )
} token_type;

//this function returns a string for the token.  It is used in the parsetree_t
//class to actually dump the parsetree to a dot file (which can then be turned
//into a picture).  Note that the return char* is a reference to a local copy
//and it needs to be duplicated if you are a going require multiple instances
//simultaniously
char* token_to_string(token_type c) {
	static char buffer[MAX_SYMBOL_NAME_SIZE];
	switch( c ) {
		case T_eof: strncpy(buffer,"eof",MAX_SYMBOL_NAME_SIZE); break;
		case T_num: strncpy(buffer,"num",MAX_SYMBOL_NAME_SIZE); break;
		case T_plus: strncpy(buffer,"+",MAX_SYMBOL_NAME_SIZE); break;
		case T_minus: strncpy(buffer,"-",MAX_SYMBOL_NAME_SIZE); break;
		case T_times: strncpy(buffer,"*",MAX_SYMBOL_NAME_SIZE); break;
		case T_period: strncpy(buffer,".",MAX_SYMBOL_NAME_SIZE); break;
		case T_modulo: strncpy(buffer,"%",MAX_SYMBOL_NAME_SIZE); break;
		case T_openparen: strncpy(buffer,"(",MAX_SYMBOL_NAME_SIZE); break;
		case T_closeparen: strncpy(buffer,")",MAX_SYMBOL_NAME_SIZE); break;
		default: strncpy(buffer,"unknown_token",MAX_SYMBOL_NAME_SIZE); break;
	}
	return buffer;
}

//all of the non-terminals in the grammar (you need to add these in
//according to your grammar.. these are used for printing the thing out)
//please follow the convention we set up so that we can tell what the heck you
//are doing when we grade
typedef enum {
	epsilon = 100,
	NT_List,
	NT_ListPrime,
	NT_Expr,
	NT_ExprPrime,
	NT_Term,
	NT_TermPrime,
	NT_Factor
	//WRITEME: add symbolic names for you non-terminals here
} nonterm_type;

//this function returns a string for the non-terminals.  It is used in the parsetree_t
//class to actually dump the parsetree to a dot file (which can then be turned
//into a picture).  Note that the return char* is a reference to a local copy
//and it needs to be duplicated if you are a going require multiple instances
//simultaniously. 
char* nonterm_to_string(nonterm_type nt)
{
  static char buffer[MAX_SYMBOL_NAME_SIZE];
  switch( nt ) {
  case epsilon: strncpy(buffer,"e",MAX_SYMBOL_NAME_SIZE); break;
  case NT_List: strncpy(buffer,"List",MAX_SYMBOL_NAME_SIZE); break;
  case NT_ListPrime: strncpy(buffer,"ListPrime",MAX_SYMBOL_NAME_SIZE); break;
  case NT_Expr: strncpy(buffer,"Expr",MAX_SYMBOL_NAME_SIZE); break;
  case NT_ExprPrime: strncpy(buffer,"ExprPrime",MAX_SYMBOL_NAME_SIZE); break;
  case NT_Term: strncpy(buffer,"TermPrime",MAX_SYMBOL_NAME_SIZE); break;
  case NT_TermPrime: strncpy(buffer,"TermPrime",MAX_SYMBOL_NAME_SIZE); break;
  case NT_Factor: strncpy(buffer,"Factor",MAX_SYMBOL_NAME_SIZE); break;
  default: strncpy(buffer,"unknown_nonterm",MAX_SYMBOL_NAME_SIZE); break;
  }
  return buffer;
}

/*** Scanner Class ***********************************************/

class scanner_t {
  public:

	//eats the next token and prints an error if it is not of type c
	void eat_token(token_type c);

	//peeks at the lookahead token
	token_type next_token();

        //peeks at the dupe lookahead token
        token_type dupe_next_token();
  
	//return line number for errors
	int get_line();

	//constructor - inits g_next_token
	scanner_t();

  private:
        queue <string> tokenqueue;
        queue <string> dupetokenqueue;

        int openparen_c;
        int closeparen_c;
        int nums_c;
        int lines_c;
        int operators_c;
  
        
	//WRITEME: Figure out what you will need to write the scanner
	//and to implement the above interface.  It does not have to
	//be a state machine or anything fancy.  Just read in the
	//characters one at a time (using getchar would be a good way)
	//and group them into tokens.  All of the tokens in this calculator
	//are trivial except for the numbers, so it should not be that bad
	//(10 lines or so)
        

	//This is a bogus member for implementing a useful stub, it should
	//be cut out once you get the scanner up and going.
	token_type bogo_token;

	//error message and exit if weird character
	void scan_error(char x);
	//error message and exit for mismatch
	void mismatch_error(token_type c);

};

token_type scanner_t::next_token()
{
  if( tokenqueue.empty())
    return T_eof;
   //The string will hold the front of the queue
  string front = tokenqueue.front();
  const char *c = front.c_str();
  if( isdigit(*c) )
    return T_num;
  else if( *c == '+' )
    return T_plus;
  else if ( *c == '-' )
    return T_minus;
  else if ( *c == '*' )
    return T_times;
  else if ( *c == '%' )
    return T_modulo;
  else if ( *c == '(' )
    return T_openparen;
  else if ( *c == ')' )
    return T_closeparen;
  else if ( *c == '.' )
    return T_period;
  else if ( *c == '\n' ){
    lines_c++;
  }
  else
    printf("illegal character input '%c'\n", *c);
}


token_type scanner_t::dupe_next_token()
{
  if( dupetokenqueue.empty())
    return T_eof;
  
  string front = dupetokenqueue.front();
  const char *c = front.c_str();
  if( isdigit(*c) )
    return T_num;
  else if( *c == '+' )
    return T_plus;
  else if ( *c == '-' )
    return T_minus;
  else if ( *c == '*' )
    return T_times;
  else if ( *c == '%' )
    return T_modulo;
  else if ( *c == '(' )
    return T_openparen;
  else if ( *c == ')' )
    return T_closeparen;
  else if ( *c == '.' )
    return T_period;
  else if ( *c == '\n' ){
    lines_c++;
  }
  else
    printf("illegal character input '%c'\n", *c);
}


void scanner_t::eat_token(token_type c)
{
  //c is the curren token, d is the next token
  dupetokenqueue.pop();
  token_type d = dupe_next_token();

  //if currenttoken is openparen, then increment the counter. if the next token is not num or openparen, then throw an error
  if ( c == T_openparen ){
    if ( closeparen_c > openparen_c )
      mismatch_error(c);
    openparen_c++;
    if ( d == T_closeparen || d  == T_plus || d == T_minus || d == T_times || d == T_modulo || d == T_period )
      mismatch_error(d);
    else{}
    
  }else if ( c == T_closeparen ){
    closeparen_c++;
    if( closeparen_c > openparen_c ){
      mismatch_error(c);
    }
    if ( d == T_openparen || d == T_num )
      mismatch_error(d);
    else{}
      
    
  }else if ( c == T_plus || c == T_minus || c == T_times || c == T_modulo ){
    operators_c++;
    //not sure if ever called
    if ( nums_c != 1 && operators_c > 1 ){
      mismatch_error(c);
    }
    else if ( d == T_closeparen || d  == T_plus || d == T_minus || d == T_times || d == T_modulo || d == T_period ){
      mismatch_error(d);
    }
        else{}
    //reset num counter to 0
    nums_c = 0;
    
  }else if ( c == T_num ){
    nums_c++;
    if ( nums_c > 1 ){
      mismatch_error(c);
    }
    else if ( d == T_num || d == T_openparen )
      mismatch_error(d);
    else{}
    operators_c = 0;
    
  }else if ( c == T_period ){
    if ( openparen_c != closeparen_c ){
      mismatch_error(c);      
    }
    if ( operators_c != 0)
      mismatch_error(c);
    openparen_c = 0, closeparen_c = 0, nums_c = 0, operators_c = 0;
  }
  else{
    //ofstream outfiles("newtest.txt");
    //outfiles << "hello" << endl;
    //outfiles.close();
  }
  tokenqueue.pop();
}


scanner_t::scanner_t()
{
  //Sets all the counters to be zero
  openparen_c = 0, closeparen_c = 0, nums_c = 0, operators_c = 0;
  //Linecounter starts at 1
  lines_c = 1; 
  string newToken;
  char c = getchar();
  while(c != EOF){
    if( isdigit(c) ){
      newToken = newToken + c;
    }
    else if( c == ' ' ){
      if(!newToken.empty()){
	tokenqueue.push(newToken);
	dupetokenqueue.push(newToken);
	newToken.clear();
      }
    }
    else if (c == '\n'){
      lines_c = lines_c + 1;
    }
    else if( c == '.' || c == '(' || c == ')'){
      if(!newToken.empty()){
	tokenqueue.push(newToken);
	dupetokenqueue.push(newToken);
	newToken.clear();
      }
      newToken = newToken + c;
      tokenqueue.push(newToken);
      dupetokenqueue.push(newToken);
      newToken.clear();
    }
    else { //c is another symbol (e.g. +, -, *, %)
      if(!newToken.empty()){
	tokenqueue.push(newToken);
	dupetokenqueue.push(newToken);
	newToken.clear();
      }
      newToken = newToken + c;
      tokenqueue.push(newToken);
      dupetokenqueue.push(newToken);
      newToken.clear();
    }
    c = getchar();
  }
    
    //The below makes sure that the scanner works properly by printing to an outfile.
    /* ofstream outfile("tq.txt");
       while(!tokenqueue.empty()){
       outfile << tokenqueue.front() << endl;
       tokenqueue.pop();
       }
       outfile.close();
       
       ofstream outfile3("dtq.txt");
       while(!dupetokenqueue.empty()){
       outfile3 << dupetokenqueue.front() << endl;
       dupetokenqueue.pop();
       }
       outfile3.close();*/
    
}
  
  int scanner_t::get_line()
{
  return lines_c;
}

void scanner_t::scan_error (char x)
{
  printf("scan error: unrecognized character '%c'\n",x);  
  exit(1);
  
}

void scanner_t::mismatch_error (token_type x)
{
  printf("syntax error: found %s ", token_to_string(x));
   printf("expecting %s - line %d\n", token_to_string(next_token()), get_line());
  exit(1);
}


/*** ParseTree Class **********************************************/

//just dumps out the tree as a dot file.  The interface is described below
//on the actual methods.  This class is full and complete.  You should not
//have to touch a thing if everything goes according to plan.  While you don't
//have to modify it, you will have to call it from your recursive decent
//parser, so read about the interface below.
class parsetree_t {
  public:
	void push(token_type t);
	void push(nonterm_type nt);
	void pop();
	void drawepsilon();
	parsetree_t();
  private:
	enum stype_t{
		TERMINAL=1,
		NONTERMINAL=0,
		UNDEF=-1
	};

	struct stuple { 
		nonterm_type nt;
		token_type t;
		stype_t stype; 
		int uniq;
	};
	void printedge(stuple temp); //prints edge from TOS->temp
	stack<stuple> stuple_stack;
	char* stuple_to_string(const stuple& s); 
	int counter;
};


//the constructer just starts by initializing a counter (used to uniquely
//name all the parse tree nodes) and by printing out the necessary dot commands
parsetree_t::parsetree_t()
{
	counter = 0;
	printf("digraph G { page=\"8.5,11\"; size=\"7.5, 10\"\n");
}

//This push function taken a non terminal and keeps it on the parsetree
//stack.  The stack keeps trace of where we are in the parse tree as
//we walk it in a depth first way.  You should call push when you start
//expanding a symbol, and call pop when you are done.  The parsetree_t
//will keep track of everything, and draw the parse tree as you go.
//This particular function should be called if you are pushing a non-terminal
void parsetree_t::push(nonterm_type nt)
{
	counter ++;
	stuple temp;
	temp.nt = nt;
	temp.stype = NONTERMINAL;
	temp.uniq = counter;
	printedge( temp );
	stuple_stack.push( temp );
}

//same as above, but for terminals
void parsetree_t::push(token_type t)
{
	counter ++;
	stuple temp;
	temp.t = t;
	temp.stype = TERMINAL;
	temp.uniq = counter;
	printedge( temp );
	stuple_stack.push( temp );
}

//when you are parsing a symbol, pop it.  That way the parsetree_t will
//know that you are now working on a higher part of the tree.
void parsetree_t::pop()
{
	if ( !stuple_stack.empty() ) {
		stuple_stack.pop();
	}

	if ( stuple_stack.empty() ) {
		printf( "}\n" );
	}
}

//draw an epsilon on the parse tree hanging off of the top of stack
void parsetree_t::drawepsilon()
{
	push(epsilon);
	pop();
}

// this private print function is called from push.  Basically it
// just prints out the command to draw an edge from the top of the stack (TOS)
// to the new symbol that was just pushed.  If it happens to be a terminal
// then it makes it a snazzy blue color so you can see your program on the leaves 
void parsetree_t::printedge(stuple temp)
{
	if ( temp.stype == TERMINAL ) {
		printf("\t\"%s%d\" [label=\"%s\",style=filled,fillcolor=powderblue]\n",
		  stuple_to_string(temp),
		  temp.uniq,
		  stuple_to_string(temp));
	} else {
		printf("\t\"%s%d\" [label=\"%s\"]\n",
		  stuple_to_string(temp),
		  temp.uniq,
		  stuple_to_string(temp));
	}

	//no edge to print if this is the first node
	if ( !stuple_stack.empty() ) {
		//print the edge
		printf( "\t\"%s%d\" ", stuple_to_string(stuple_stack.top()), stuple_stack.top().uniq ); 
		printf( "-> \"%s%d\"\n", stuple_to_string(temp), temp.uniq );
	}
}

//just a private utility for helping with the printing of the dot stuff
char* parsetree_t::stuple_to_string(const stuple& s) 
{
	static char buffer[MAX_SYMBOL_NAME_SIZE];
	if ( s.stype == TERMINAL ) {
		snprintf( buffer, MAX_SYMBOL_NAME_SIZE, "%s", token_to_string(s.t) );
	} else if ( s.stype == NONTERMINAL ) {
		snprintf( buffer, MAX_SYMBOL_NAME_SIZE, "%s", nonterm_to_string(s.nt) );
	} else {
		assert(0);
	}

	return buffer;
}


/*** Parser Class ***********************************************/

//the parser_t class handles everything.  It has and instance of scanner_t
//so it can peek at tokens and eat them up.  It also has access to the
//parsetree_t class so it can print out the parse tree as it figures it out.
//To make the recursive decent parser work, you will have to add some
//methods to this class.  The helper functions are described below

class parser_t {
  private:
	scanner_t scanner;
	parsetree_t parsetree;
	void eat_token(token_type t);
	void syntax_error(nonterm_type);

  void List();
  void ListPrime();
  void Expr();
  void ExprPrime();
  void Term();
  void TermPrime();
  void Factor();
  
	//WRITEME: fill this out with the rest of the 
	//recursive decent stuff (more methods)

  public:	
	void parse();
};


//this function not only eats the token (moving the scanner forward one
//token), it also makes sure that token is drawn in the parse tree 
//properly by calling push and pop.
void parser_t::eat_token(token_type t)
{
	parsetree.push(t);
	scanner.eat_token(t);
	parsetree.pop();
}

//call this syntax error wehn you are trying to parse the
//non-terminal nt, but you fail to find a token that you need
//to make progress.  You should call this as soon as you can know
//there is a syntax_error. 
void parser_t::syntax_error(nonterm_type nt)
{
	printf("syntax error: found %s in parsing %s - line %d\n",
		token_to_string( scanner.next_token()),
		nonterm_to_string(nt),
		scanner.get_line() ); 
	exit(1); 
}


//One the recursive decent parser is set up, you simply call parse()
//to parse the entire input, all of which can be dirived from the start
//symbol
void parser_t::parse()
{
	List();
}


//WRITEME: the List() function is not quite right.  Right now
//it is made to parse the grammar:  List -> '+' List | EOF
//which is not a very interesting language.  It has been included
//so you can see the basics of how to structure your recursive 
//decent code.

//Here is an example
void parser_t::List()
{
  //push this non-terminal onto the parse tree.
  //the parsetree class is just for drawing the finished
  //parse tree, and should in should have no effect the actual
  //parsing of the data
  parsetree.push(NT_List);
  
  switch( scanner.next_token() ) 
    {
      
    case T_num: case T_openparen:
      Expr();
      eat_token(T_period);
      ListPrime();
      break;
      
    case T_eof:
      parsetree.drawepsilon();
      break;
      
    default:
      syntax_error(NT_List);
      break;
    }
  
  //now that we are done with List, we can pop it from the data
  //stucture that is tracking it for drawing the parse tree
  parsetree.pop();
}
 
//WRITEME: you will need to put the rest of the procedures here

 void parser_t::ListPrime()
 {
   parsetree.push(NT_ListPrime);

   switch ( scanner.next_token() )
     {
    case T_plus: case T_minus: case T_times: case T_modulo: case T_closeparen: case T_period:
      parsetree.drawepsilon();
      break;
      
    case T_num: case T_openparen:
      Expr();
      eat_token(T_period);
      ListPrime();
      break;
      
    case T_eof:
      parsetree.drawepsilon();
      break;
      
    default:
      syntax_error(NT_ListPrime);
      break;
    }
   
   //now that we are done with ListPrime, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }
 
 void parser_t::Expr()
 {
   parsetree.push(NT_Expr);

   switch ( scanner.next_token() )
     {
     case T_num: case T_openparen:
       Term();
       ExprPrime();
       break;
        
     case T_eof:
       parsetree.drawepsilon();
       break;
       
     default:
       syntax_error(NT_Expr);
      break;
     }
   
   //now that we are done with Expr, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }

 void parser_t::ExprPrime()
 {
   parsetree.push(NT_ExprPrime);

   switch ( scanner.next_token() )
     {
     case T_plus:
       eat_token(T_plus);
       Term();
       ExprPrime();
       break;

     case T_minus:
       eat_token(T_minus);
       Term();
       ExprPrime();
       break;

     case T_period: case T_times: case T_modulo: case T_openparen: case T_closeparen: 
       parsetree.drawepsilon();
       break;
      
     case T_eof:
       parsetree.drawepsilon();
       break;
       
     default:
       syntax_error(NT_List);
      break;
     }
   
   //now that we are done with ExprPrime, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }

 void parser_t::Term()
 {
   parsetree.push(NT_Term);

   switch ( scanner.next_token() )
     {
     case T_num: case T_openparen:
       Factor();
       TermPrime();
       break;
         
     case T_eof:
       parsetree.drawepsilon();
       break;
       
     default:
       syntax_error(NT_Term);
      break;
     }
   
   //now that we are done with Term, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }

 void parser_t::TermPrime()
 {
   parsetree.push(NT_TermPrime);

   switch ( scanner.next_token() )
     {
     case T_times:
       eat_token(T_times);
       Factor();
       TermPrime();
       break;

     case T_modulo:
       eat_token(T_modulo);
       Factor();
       TermPrime();
       break;

     case T_plus: case T_minus: case T_period: case T_openparen: case T_closeparen:
       parsetree.drawepsilon();
       break;       
       
     case T_eof:
       parsetree.drawepsilon();
       break;
       
     default:
       syntax_error(NT_TermPrime);
      break;
     }
   
   //now that we are done with TermPrime, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }

 void parser_t::Factor()
 {
   parsetree.push(NT_Factor);
   
   switch ( scanner.next_token() )
     {
     case T_num:
       eat_token(T_num);
       break;

     case T_openparen:
       eat_token(T_openparen);
       Expr();
       eat_token(T_closeparen);
       break;   
       
     case T_eof:
       parsetree.drawepsilon();
       break;
       
     default:
       syntax_error(NT_Factor);
       break;
     }
   
   //now that we are done with Factor, we can pop it from the data
   //stucture that is tracking it for drawing the parse tree
   parsetree.pop();
 }
 


/*** Main ***********************************************/

int main()
{
	parser_t parser;
	parser.parse();
	return 0;
}
