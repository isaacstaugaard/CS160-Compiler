Isaac Staugaard
CS160 Project 3
November 8, 2016

In this project, we used our lexer and parser from project 2 to create an AST. We had to manipulate the lexer to create a yylval for the literal lexemes.  This was pretty straightforward, except for
the strings and chars, in which we had to strip the quotes off before duplicating.  For the parser, it was very tedious.  Understanding all of the ast classes also took quite a while.  Once a couple
nonterminals were done, it became a lot easier to understand how it worked. Debugging was tedious and required a lot of print statements because I don't like GDB.  An issue was changing the grammar a
bit from project 2 to make it fit the project 3 better.  One of the big issues was getting the correct ordering on the tree building. I also did not see the piazza post about the updated cdef file until
very late and had to work around that (although I realized I could have just used pushfront instead). I think the project works fine, but it may have some errors on corner cases (it worked on test1,2,3). 
