Isaac Staugaard
CS160 Fall 2016
Professor Kruegel

Scanner
	Implemeted a scanner that reads in one character at a time from the input file and then makes a queue.  The queue values are enumerated and turned into tokens.		
	I was unable to get all of the test cases to work properly for mismatch_error. The one that I couldn't fix was the single open parenthesis, and double close parentheses.
	I drew out the full parsetree and realized that the second close parentheses will be skipped. It will instead eat_token(T_period), which will pop the '(' from the queue.  This will leave
	a period at the front of the queue, which will then be evaluated to epsilon.  I also had lots of issues with the line counter. I couldn't figure out a way to stop counting the lines only when you
	reach on an error, rather it would keep counting how many total lines in the input file.  It would read the error on the correct line and output it where it occured in terms of the syntax, but not
	in terms of the correct line. Overall, I believe my scanner and parser work 100% correctly with good input, and the scanner works most of the time with bad input (barring a few special cases
	I couldn't determine).
	
Parser
	It took a bit of review to make sure it handled precedence correctly and was LL(1). Once we got the grammar down, we just implemented each function so that it handled it as seen in the grammar.
	The most difficult part was understanding what every function did and how to use them for our purpose. Once we understood the rough idea of the other methods, it was pretty simple. 

	