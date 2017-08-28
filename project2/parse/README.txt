Isaac Staugaard
CS160 Fall 2016
Project 2

For this project, we had to build a scanner and a parser again.
The scanner part was very simple, we had to look for certain symbols or words in the file and then tokenize them and pass the tokens to the parser.  Most of these were just very straightforward, but some
were a bit more difficult, like the integers, strings, and comments.  However, most of these had very similar problems with solutions online that could be changed to fit our language.
The parser was also not that bad, but very, very tedious.  I had to get help on some of the precedence from friends with the %left and %right.  It was very difficult making sure that
the grammar was working as intended.  The grammar was not too bad because of the manual, but there were many intricacies and weird cases. The hardest part was getting used to flex/bison and learning
how to use the output files that they produce to fix the shift-reduce errors.  Also, it took a long time to make a test file that could test all the corner cases. My project works well right now, but
some of my implementations might make it a bit difficult to do the typechecking later on.
