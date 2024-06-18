/**********************************************************************************
* Name: 22.sample.c					  								      		  *
* Purpose: Prints escape characters												  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("\"Hello!\"");
	printf("\"Hello!\a");
	printf("\\"); /* prints one \ character */
	return 0;
}