/**********************************************************************************
* Name: 135.Exercise_9.c					    			  					  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define DAYS 30
#define HOURS 24
int main(void)
{
	double temperature_readings[DAYS][HOURS],Avg_temp=0.0;
	for(int i=0;i<DAYS;i++) 
		for(int j=0;j<HOURS;j++) 
			Avg_temp+=temperature_readings[i][j];

	Avg_temp/=(HOURS*DAYS);
	
	return 0;
}