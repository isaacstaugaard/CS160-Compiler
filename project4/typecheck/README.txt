Isaac Staugaard
CS160 - Fall 2016
November 22, 2016

Project 4

This project took a really long time. It was difficult to tell where the errors were coming from, and to debug all the possible corner cases. There were a bunch of the same errors being called in different
locations as well as errors dating back to project 3 in the parser.ypp file.  There was a lot of looking up info in the .cpp and .hpp files.  Once I understood how the symtab files worked, it became a lot
easier to just get started on the actual coding.  The actual coding itself was pretty straightforward with the exception of a couple cases like nested blocks and the check_call functions.  I had difficult
with opening and closing scopes, but I think it works fine now.  The hardest one to debug was the recursive function call. It was also a hassle making sure all of the children were passed up correctly, and
not overwritten by a separate child. Also, figuring out where the problem was and commenting it out to allow the creation of the asttree was a pain.  However, I feel like I learned a lot about
typechecking because of this project and it being hands-on.  
