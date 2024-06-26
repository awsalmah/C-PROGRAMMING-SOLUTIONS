/**********************************************************************************
* Name: 76.square3.c		  						      		  				  *
* Purpose: Prints a table of squares using a for statement	 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d",&n);

	i = 1;
	odd = 3;
	for(square = 1; i <= n; odd+=2)
	{
		printf("%10d%10d\n",i, square);
		++i;
		square+=odd;
	}

	return 0;
}