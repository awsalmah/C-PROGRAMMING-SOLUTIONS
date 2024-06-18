/**********************************************************************************
* Name: 95.Programming_Project_5.c				      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	
	int number;

	printf("Enter a positive number: ");
	scanf("%d",&number);

	do
	{
		printf("%d",number%10);
		number/=10;
	}while(number!=0);
	
	return 0;
}