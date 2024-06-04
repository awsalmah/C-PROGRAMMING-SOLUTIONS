/**********************************************************************************
* Name: 161.Exercises_2.c				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
	printf("%d\n",check(1,2,2));
	
	return 0;
}

int check(int x, int y, int n)
{
	if(x >= 0 && x <= n-1)
		if(y >= 0 && y <= n-1)
			return 1;

	return 0;
}