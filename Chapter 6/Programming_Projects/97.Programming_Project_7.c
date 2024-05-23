/**********************************************************************************
* Name: 97.Programming_Project_7.c				      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d",&n);

	square = 1;
	odd = 3;
	for(i = 1; i <= n; odd+=2,++i)
	{
		printf("%10d%10d\n",i, square);
		square+=odd;
	}

	return 0;
}