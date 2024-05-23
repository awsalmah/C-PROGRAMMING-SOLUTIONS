/**********************************************************************************
* Name: 62.Programming_Project_2.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int hour,minute;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&hour,&minute);
	
	printf("Equivalent 12-hour time: ");

	if(hour == 24 || hour < 12)
	{
		if(hour == 24) hour-=12;
		printf("%d:%.2d AM\n",hour,minute);
	}
	else if(hour >= 12)
	{
	if(hour >= 13) hour-=12;
	printf("%d:%.2d PM\n",hour,minute);
	}

	return 0;
}