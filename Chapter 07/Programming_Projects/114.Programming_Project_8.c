/**********************************************************************************
* Name: 114.Programming_Project_8.c    			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hour, minute, input_time, d1, d2, d3, d4, d5, d6, d7, d8,min;
	char indicator;

	printf("Enter a 12-hour time (HH:MM AM/PM): ");
	scanf("%d :%d %c",&hour,&minute,&indicator);

	indicator=toupper(indicator);
	
	if(indicator == 'A') input_time = hour * 60 + minute;
	else if(indicator == 'P') input_time = (12 + hour) * 60 + minute;
	
	d1 = 8 * 60 + 00;
	d2 = 9 * 60 + 43;
	d3 = 11 * 60 + 19;
	d4 = 12 * 60 + 47;
	d5 = (2+12) * 60 + 00;
	d6 = (3+12) * 60 + 45;
	d7 = (7+12) * 60 + 00;
	d8 = (9+12) * 60 + 45;

	d1-= input_time;
	if(d1<0) d1*=-1;
	d2-= input_time;
	if(d2<0) d2*=-1;
	d3-= input_time;
	if(d3<0) d3*=-1;
	d4-= input_time;
	if(d4<0) d4*=-1;
	d5-= input_time;
	if(d5<0) d5*=-1;
	d6-= input_time;
	if(d6<0) d6*=-1;
	d7-= input_time;
	if(d7<0) d7*=-1;
	d8-= input_time;
	if(d8<0) d8*=-1;
	
	min = d1;
	if(d2 < min) min = d2;
	if(d3 < min) min = d3;
	if(d4 < min) min = d4;
	if(d5 < min) min = d5;
	if(d6 < min) min = d6;
	if(d7 < min) min = d7;
	if(d8 < min) min = d8;

	if(min == d1) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	else if(min == d2) printf("Closest departure time is  9:43 a.m., arriving at 11:52 a.m.\n");
	else if(min == d3) printf("Closest departure time is  11:19 a.m., arriving at 1:31 p.m.\n");
	else if(min == d4) printf("Closest departure time is  12:47 p.m., arriving at 3:00 p.m.\n");
	else if(min == d5) printf("Closest departure time is  2:00 p.m., arriving at 4:08 p.m.\n");
	else if(min == d6) printf("Closest departure time is  3:45 p.m., arriving at 5:55 p.m.\n");
	else if(min == d7) printf("Closest departure time is  7:00 p.m., arriving at 9:20 p.m.\n");
	else if(min == d8) printf("Closest departure time is  9:45 p.m., arriving at 11:58 p.m.\n");
	
	return 0;
}