/**********************************************************************************
* Name: 32.Programming_Project_2.c		  							      		  *
* Purpose: Solve Project            											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int month, day, year, item_num;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d",&item_num);

	printf("Enter unit price: ");
	scanf("%f",&unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d / %d / %d",&month,&day,&year);

	printf("Item			Unit 			Purchase\n			Price 			Date\n");
	printf("%-d			$%7.2f 		%-.2d/%-.2d/%-d\n",item_num,unit_price,month,day,year);
	
	return 0;
}