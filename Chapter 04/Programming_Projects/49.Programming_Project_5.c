/**********************************************************************************
* Name: 49.Programming_Project_5.c			  						      		  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int input,d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%d",&input);
	
	d = input%10, i1 = input/10%10, i2 = input/100%10, i3 = input/1000%10,
	i4 = input/10000%10, i5 = input/100000%10, j1 = input/1000000%10,
	j2 = input/10000000%10,j3 = input/100000000%10, j4 = input/1000000000%10,
	j5 = input/1000/1000/1000/10%10;

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	
	printf("Check digit: %d\n",9 - ((total - 1) % 10));
	
	return 0;
}
