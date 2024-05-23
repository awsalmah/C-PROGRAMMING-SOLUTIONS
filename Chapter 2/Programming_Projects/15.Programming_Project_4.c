/**********************************************************************************
* Name: 15.Programming_Project_5.c		  							      		  *
* Purpose: Solve Programming Project											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define TAX 5.0f/100.0f

int main(void)
{
	float amount;

	printf("Enter an amount: ");
	scanf("%f",&amount);
	printf("With tax added: $ %.2f", amount * TAX + amount);

	return 0;

}