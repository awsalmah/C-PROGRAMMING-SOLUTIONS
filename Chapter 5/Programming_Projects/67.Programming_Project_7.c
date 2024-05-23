/**********************************************************************************
* Name: 67.Programming_Project_7.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int num1,num2,num3,num4,min1,min2,max1,max2,min,max;
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	if (num1 > num2) // 1
	{
	    max1 = num1;
	    min1 = num2;
	}
	else
	{
	    max1 = num2;
	    min1 = num1;
	}

	if (num3 > num4) // 2
	{
	    max2 = num3;
	    min2 = num4;
	}
	else
	{
	    max2 = num4;
	    min2 = num3;
	}

	if (max1 > max2) // 3
	    max = max1;
	else
	    max = max2;

	if (min1 < min2) // 4
	    min = min1;
	else
	    min = min2;

	printf("Largest: %d\nSmallest: %d\n",max,min);
	return 0;
}