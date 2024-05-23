/**********************************************************************************
* Name: 14.Programming_Project_3.c		  							      		  *
* Purpose: Solve Programming Project											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define DIV 4.0f/3.0f
#define PI 3.14f

int main(void)
{
	float radius;
	printf("Enter the radius of the sphere: ");
	scanf("%f",&radius);
	printf("%f",DIV * PI * radius * radius * radius);
	return 0;
}