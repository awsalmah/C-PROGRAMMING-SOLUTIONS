/**********************************************************************************
* Name: 61.Programming_Project_1.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d",&input);

	if(input <= 9) printf("The number %d has 1 digit\n",input);
	else if(input <= 99) printf("The number %d has 2 digits\n",input);
	else if(input <= 999) printf("The number %d has 3 digits\n",input);
	else if(input <= 9999) printf("The number %d has 4 digits\n",input);

	return 0;
}