/**********************************************************************************
* Name: 164.Exercise_5.c				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int num_digits(int n);

int main(void)
{
	printf("%d\n",num_digits(1111111));

	return 0;
}

int num_digits(int n)
{
	int count=0;

	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}