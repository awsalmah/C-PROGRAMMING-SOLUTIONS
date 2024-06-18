/**********************************************************************************
* Name: 70.Programming_Project_10.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d",&grade);
	
	printf("Letter grade: ");

	grade/=10;
	
	switch(grade)
	{
		case 10: case 9: printf("A\n"); break;
		case 8: printf("B\n"); break;
		case 7: printf("C\n"); break;
		case 6: printf("D\n"); break;
		default: printf("F\n"); break;
	}

	return 0;
}