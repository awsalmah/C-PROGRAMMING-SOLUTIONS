/**********************************************************************************
* Name: 107.Programming_Project_1.c    			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	short i1;
	// int i;
	long i,ii;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d",&n);

	for(i = 0; i <= n; i++)
		// printf("%10hd%10hd\n",i,i*i);
		// printf("%10d%10d\n",i,i*i);
		printf("%10ld%10ld\n",i,i*i);


/*
short (16 bits) 	181 is the highest value before failure
int (32 bits) 		46340 is the highest value before failure
long (64 bits) 		x is the highest value before failure

short int values are usually stored in 16 bits, causing failure at 182. int values are usually stored in 32 bits, with failure occurring at 46341.long int values are usually stored in 63 bits, with failure occurring at x.
*/
	return 0;
}