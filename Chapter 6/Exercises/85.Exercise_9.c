/**********************************************************************************
* Name: 85.Exercise_9.c		  						      		  				  *
* Purpose: Solve Exercise 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i = 10;
	
	while(i >= 1) 
		{
			printf("%d\n",i++);
			i/=2;
		}

		return 0;
}