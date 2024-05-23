/**********************************************************************************
* Name: 118.Programming_Project_12.c   			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	float num=0,total=0.0;
	char ch;

	printf("Enter an expression: ");
	scanf(" %f",&total);

	while((ch = getchar()) !='\n')
	{
		switch(ch)
		{
			case '+':
			scanf(" %f",&num);
			total+=num;
			break;
			case '-':
			scanf(" %f",&num);
			total-=num;
			break;
			case '*':
			scanf(" %f",&num);
			total*=num;
			break;
			case '/':
			scanf(" %f",&num);
			total/=num;
			break;
		}
	}
	printf("Value of expression: %f\n",total);

	return 0;
}