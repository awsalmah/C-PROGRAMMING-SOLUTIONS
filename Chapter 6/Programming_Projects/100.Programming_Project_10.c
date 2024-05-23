/**********************************************************************************
* Name: 100.Programming_Project_10.c			      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int month_1, day_1, year_1;
	int month_2, day_2, year_2;
	_Bool flag = 0;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d",&month_1,&day_1,&year_1);

	while(1)
	{	
		if(flag == 1)
		{
			month_1 = month_2; 
			day_1 = day_2;
			year_1 = year_2;
			flag = 0;
		}

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d",&month_2,&day_2,&year_2);
		
		if(month_2 == 0 && day_2 == 0 && year_2 == 0) break;

		if(year_1 < year_2) continue;
		else if(year_2 < year_1) {flag = 1; continue;}
		else if(year_2 == year_1){
			if(month_1 < month_2) continue;
			else if(month_2 < month_1) {flag = 1; continue;}
			else if(month_2 == month_1){
				if(day_1 < day_2) continue;
				else if(day_2 < day_1) {flag = 1; continue;}
				else if(day_2 == day_1) continue;
			}
		}
	}

	printf("%.2d/%.2d/%.2d is the earliest date\n",month_1,day_1,year_1);
	return 0;
}