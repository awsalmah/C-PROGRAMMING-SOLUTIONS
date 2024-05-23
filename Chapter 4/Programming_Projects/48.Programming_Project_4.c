/**********************************************************************************
* Name: 48.Programming_Project_4.c			  						      		  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int input;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d",&input);
	int d5 = input%8;
	input=input/8;
	int d4 = input%8;
	input=input/8;
	int d3 = input%8;
	input=input/8;
	int d2 = input%8;
	input=input/8;
	int d1 = input%8;
	printf("%d%d%d%d%d",d1,d2,d3,d4,d5);
	return 0;
}