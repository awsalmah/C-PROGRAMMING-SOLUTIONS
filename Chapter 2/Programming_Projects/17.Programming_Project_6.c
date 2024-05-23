/**********************************************************************************
* Name: 17.Programming_Project_6.c		  							      		  *
* Purpose: Solve Programming Project											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a value for x: ");
	scanf("%f",&x);

	float polynomial = ((((3*x + 2)* x - 5)* x - 1)* x + 7) * x - 6;

	printf("3x^5 +2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f",polynomial);
}
