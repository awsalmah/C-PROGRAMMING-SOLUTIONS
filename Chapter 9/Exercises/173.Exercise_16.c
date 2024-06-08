/**********************************************************************************
* Name: 173.Exercise_16.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int fact(int n)
{
	return n <= 1 ? 1: n * fact(n-1);
}

int main(void)
{
	return 0;
}