/**********************************************************************************
* Name: 176.Exercise_19.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

/* The function pb prints the binary representation of the integer n */
void pb(int n) 
{
	if(n != 0){
		pb(n/2);
		putchar('0'+n%2);
	}
}

int main(void)
{
	pb(10);
	return 0;
}