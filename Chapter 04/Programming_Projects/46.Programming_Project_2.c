/**********************************************************************************
* Name: 46.Programming_Project_2.c			  						      		  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a three-digit number: ");
	scanf("%d",&number);
	printf("%d%d%d\n",number%10,number/10%10,number/100);
	
	return 0;
}