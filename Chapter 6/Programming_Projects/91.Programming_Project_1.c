/**********************************************************************************
* Name: 91.Programming_Project_1.c	  						      			  	  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	float input, max;

	printf("Enter a number: ");
	scanf("%f",&input);
	max = input;

	while(input > 0)
	{
		printf("Enter a number: ");
		scanf("%f",&input);
		if(input > max) max = input;
	}

	printf("The largest number entered was %.2f",max);

	return 0;
}