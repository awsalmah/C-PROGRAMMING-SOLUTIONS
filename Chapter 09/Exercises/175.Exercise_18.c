/**********************************************************************************
* Name: 175.Exercise_18.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	printf("%d\n",gcd(60,36));
	
	return 0;
}

int gcd(int m, int n)
{
		return n == 0 ? m : gcd(n,m%n);
}
