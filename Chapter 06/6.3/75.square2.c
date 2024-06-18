/**********************************************************************************
* Name: 75.square2.c		  						      		  				  *
* Purpose: Prints a table of squares using a for statement	 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,n;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d",&n);

	for(i = 0; i <= n; i++)
		printf("%10d%10d\n",i,i*i);

	return 0;
}