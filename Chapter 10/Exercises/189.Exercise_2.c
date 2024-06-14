/**********************************************************************************
* Name: 189.Exercise_2.c    		    				  					  	  *
* Purpose: Solve Exercise 		 												  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

/*
Question 2

(a) (the local) b, c, d

(b) the answer depends on in which part of the function we are in.
    initially:
    a, b, (local c)
    inside the int a, d block:
    (local a), b, c, (local d)
    after exiting the block:
	a, b, (local c)

(c) (local a), b, c, (local d)

(d) b, (local c), (local d)
*/