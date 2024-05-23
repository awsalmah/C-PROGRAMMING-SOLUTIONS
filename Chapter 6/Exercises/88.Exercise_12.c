/**********************************************************************************
* Name: 88.Exercise_12.c	  						      		  				  *
* Purpose: Solve Exercise 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int d,n;

	for(d = 2; d*d <= n; d++)
		if(n % d == 0)
			break;

	return 0;
}