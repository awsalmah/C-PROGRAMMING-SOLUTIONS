/**********************************************************************************
* Name: 35.Programming_Project_5.c		  							      		  *
* Purpose: Solve Project            											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	int num5, num6, num7, num8;
	int num9, num10, num11, num12;
	int num13, num14, num15, num16;
	int row_sum1, row_sum2, row_sum3, row_sum4;
	int col_sum1, col_sum2, col_sum3, col_sum4;
	int diagonal_sum1, diagonal_sum2;

	printf("Enter the numbers from 1 to 16 (in any order): ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);

	row_sum1 = num1 + num2 + num3 + num4;
	row_sum2 = num5 + num6 + num7 + num8;
	row_sum3 = num9 + num10 + num11 + num12;
	row_sum4 = num13 + num14 + num15 + num16;

	col_sum1 = num1 + num5 + num9 + num13;
	col_sum2 = num2 + num6 + num10 + num14;
	col_sum3 = num3 + num7 + num11 + num15;
	col_sum4 = num4 + num8 + num12 + num16;

	diagonal_sum1 = num1 + num6 + num11 + num16;
	diagonal_sum2 = num4 + num7 + num10 + num13;

	printf("%d %d %d %d\n",num1,num2,num3,num4);
	printf("%d %d %d %d\n",num5,num6,num7,num8);
	printf("%d %d %d %d\n",num10,num11,num12,num13);
	printf("%d %d %d %d\n",num13,num14,num15,num16);

	printf("Row sums: %d %d %d %d\n",row_sum1,row_sum2,row_sum3,row_sum4);
	printf("Column sums: %d %d %d %d\n",col_sum1,col_sum2,col_sum3,col_sum4);
	printf("Diagonal sums: %d %d\n",diagonal_sum1,diagonal_sum2);
	return 0;
}