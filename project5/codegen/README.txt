Isaac Staugaard
Project 5
CS160 Fall 2016

For this project, it was split into 5 main parts.  I finished the arithmetic, boolean, and only parts of the rest.  It was difficult to do the project becasue I had to go home to deal with a family
emergency and was also doing other projects/finals.  I was able to complete the easier parts.  Partial credit explanations are below:

1) Arithmetic
   For this part, it was difficult to get back into using assembly code.  Making sure we used all the proper registers and that we implemented it correctly was a bit tedious, but not that bad.
   The actual code wasn't particularly difficult and there are lots of resources online for basic arithmetic.  It was a bit problematic understanding why we had to use specific registers like
   eax, ebx, etc.  I believe that my code works completely fine for this part though.

   
2) Booleans
   This part was pretty similar to the arithmetic.  It is very straightforward after brushing up on assembly language.  


3) Procedure Calls
   I attempted this part but could not get it to work.  It was very difficult to get the right amount of allocation and then to subsequently pop and push onto the stack at the correct time.  I tried
   to loop through the decl/symname lists to count the number of variables and types, but it was difficult.  I needed to dynamically cast the variables to the right type and then on top of that
   set the variables to the right amount of allocation.  To round up to the nearest 4bits, I tried using a modulo operator and then adding the remainder onto it so that it would be a mulitple of 4.
   However, even after getting some progress with this, I could not get it to push/pop on the stack without it messing up the return values.  


4) Control Flow
   I wasn't able to attempt this part as I ran out of time.  This part would require lots of difficult assembly language calls such as the j* instructions and call/ret.  The if statements are difficult
   because you have to jump to the right locations and then return to the right locations.  Small mistakes will be very costly and hard to debug.  


5) Arrays
   I talked to many people about this part and everyone had trouble.  It is very difficult to get the strings (character arrays) to work properly as the allocation was hard.  There were issues with
   overflow and getting the right destination and sources.

My code essentially works for very, very basic functions that use arithmetic and booleans for their return values.  I unfortunately ran out of time and could only attempt parts of the project.  I'll probably
try to get the rest of it to work after break just for my own benefit.  
