/**********************************************************************************
* Name: 182.Programming_Project_6.c											  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int compute_polynomial(int x);

int main(void)
{
	int x;

	printf("Enter the value of x: ");
	scanf("%d",&x);

	printf("%d\n",compute_polynomial(x));

	return 0;
}

int compute_polynomial(int x)
{
	int res = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) 
	- 5 * (x * x * x) - (x * x) + 7 * x - 6;

	return res;
}