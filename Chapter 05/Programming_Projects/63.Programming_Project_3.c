/**********************************************************************************
* Name: 63.Programming_Project_3.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int number_of_shares;
	float commission, rival_commission, value, price_per_share;

	printf("Enter the number of shares: ");
	scanf("%d",&number_of_shares);
	printf("Enter the price per share: ");
	scanf("%f",&price_per_share);

	value = number_of_shares * price_per_share;

	if(value < 2500.00f) commission = 30.00f + .017f * value;
	else if(value < 6250.00f) commission = 56.00f + .0066f * value;
	else if(value < 20000.00f) commission = 76.00f + .0034f * value;
	else if(value < 50000.00f) commission = 100.00f + .0022f * value;
	else if(value < 500000.00f) commission = 155.00f + .0011f * value;
	else commission = 255.00f + .0009f * value;
	if(commission < 39.00f) commission = 39.00f;

	if(number_of_shares < 2000) rival_commission = 33.00f + 0.03f * number_of_shares;
	else rival_commission = 33.00f + 0.02f * number_of_shares;
	
	printf("The first broker receives a commission of: $%.2f\n",commission);
	printf("Whereas the second broker receives a commission of: $%.2f\n",rival_commission);
	return 0;
}