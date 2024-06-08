/**********************************************************************************
* Name: 174.Exercise_17.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

/**********************************************************************************
* Name: 173.Exercise_16.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int fact(int n)
{	
	double factorial=1;
	
	while(n>=1)
	{
		factorial*=n;
		n--;
	}

	return factorial;
}

int main(void)
{
	return 0;
}