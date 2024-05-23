/**********************************************************************************
* Name: 45.Programming_Project_1.c			  						      		  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	// int digit_1,digit_2;

	// printf("Enter a two-digit number: ");
	// scanf("%1d%1d",&digit_1,&digit_2);
	// printf("%d%d\n",digit_2,digit_1);
	
	int number;

	printf("Enter a two-digit number: ");
	scanf("%d",&number);
	printf("%d%d\n",number%10,number/10);
	
	return 0;
}