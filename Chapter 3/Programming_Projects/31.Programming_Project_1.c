/**********************************************************************************
* Name: 31.Programming_Project_1.c		  							      		  *
* Purpose: Solve Project            											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int month,day,year;

	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d / %d / %d",&month,&day,&year);
	printf("You entered the date %d%.2d%.2d",year,month,day);

	return 0;
}