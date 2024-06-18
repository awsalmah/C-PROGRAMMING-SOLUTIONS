/**********************************************************************************
* Name: 120.Programming_Project_14.c   			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <math.h>
int main(void)
{
	double x,oldy=0.0,y=1.0,xy;

	printf("Enter a positive number: ");
	scanf("%lf",&x);

	printf("   x         y        x/y     avg(x&y)\n");
	while(fabs(y-oldy)>0.00001)
	{
		oldy=y;
		xy=x/y;
		y=(y+xy)/2;
		printf("%.5f%10.5f%10.5f%10.5f\n\n\n",x,oldy,xy,y);
	}

	return 0;
}