/**********************************************************************************
* Name: 163.Exercises_4.c				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void)
{
	printf("%d\n",day_of_year(3,22,2024));

	return 0;
}

int day_of_year(int month, int day, int year)
{
	int i = 1, day_count=day;

	if (year % 4 == 0 && month > 2) day_count++;

	while(i<=month)
	{
		if(i==3) day_count+=28;
		else if(i==2 || i==4 || i==6 || i==8 || i==9 || i==11) day_count+=31;
		else if(i==5 || i==7 || i==10 || i==12) day_count+=30;
		i++;
	}
	return day_count;
}
