/**********************************************************************************
* Name: 115.Programming_Project_9.c    			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int hour,min;
	char indicator;

	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c",&hour,&min,&indicator);

	indicator=toupper(indicator);

	switch(indicator)
	{
		case 'A':
			if(hour == 12) hour-=12;
			break;
		case 'P':
			if(hour!=12) hour+=12;
			break;
	}

	printf("Equivalent 24-hour time: %.2d:%.2d\n",hour,min);

	return 0;
}