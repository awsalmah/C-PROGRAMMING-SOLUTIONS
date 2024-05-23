/**********************************************************************************
* Name: 92.Programming_Project_2.c	  						      			  	  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int num1, num2, rem;

	printf("Enter two integers: ");
	scanf("%d %d",&num1,&num2);
	
	while(num2 != 0)
	{
		rem = num1%num2;
		num1 = num2;
		num2 = rem;
	}

	printf("Greatest common divisor: %d\n",num1);
	return 0;
}