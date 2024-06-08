/**********************************************************************************
* Name: 165.Exercise_6.c				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int digit(int n, int k);

int main(void)
{
	printf("The kth digit is: %d\n",digit(829,1));
	printf("The kth digit is: %d\n",digit(829,2));
	printf("The kth digit is: %d\n",digit(829,3));
	printf("The kth digit is: %d\n",digit(829,4));
	return 0;
}

int digit(int n, int k)
{
	int i=1;

	while(i < k)
	{
		i++;
		n/=10;	
	}
	return n%10;
}