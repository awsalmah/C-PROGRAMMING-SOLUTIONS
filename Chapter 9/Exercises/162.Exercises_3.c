/**********************************************************************************
* Name: 162.Exercises_3.c				    			  					  	  *
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
	int rem;

		while(n != 0)
	{
		rem = m%n;
		m = n;
		n = rem;
	}

	return m;
}