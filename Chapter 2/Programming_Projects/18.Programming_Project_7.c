/**********************************************************************************
* Name: 18.Programming_Project_7.c		  							      		  *
* Purpose: Solve Programming Project											  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int amount;

	printf("Enter a dollar amount: ");
	scanf("%d",&amount);

	int amount_20 = amount / 20,val_20 = amount_20 * 20;
	amount = amount - val_20;
	
	int amount_10 = amount / 10,val_10 = amount_10 * 10;
	amount = amount - val_10;
	
	int amount_5 = amount /5,val_5 = amount_5 * 5;
	amount = amount - val_5;
	
	int amount_1 = amount;
	
	printf("$20 bills: %d\n",amount_20);
	printf("$10 bills: %d\n",amount_10);
	printf(" $5 bills: %d\n",amount_5);
	printf(" $1 bills: %d\n",amount_1);

	return 0;
}