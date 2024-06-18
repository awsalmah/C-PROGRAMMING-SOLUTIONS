/**********************************************************************************
* Name: 121.Programming_Project_15.c    			  							  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	long double input,val=1;
	printf("Enter a positive integer: ");
	scanf("%Lf",&input);

	while(input > 1) val*=input--;
	printf("%Lf",val);
}

/*
(a) n = 7
(b) n = 12
(c) n = 20
(d) n = 20
(e) n = 34
(f) n = 170
(g) n = 1754
*/