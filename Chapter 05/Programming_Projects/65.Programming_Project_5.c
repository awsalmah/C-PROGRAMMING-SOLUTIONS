/**********************************************************************************
* Name: 65.Programming_Project_5.c			  						      		  *
* Purpose: Solve Project														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	float income;

	printf("Enter your income: ");
	scanf("%f",&income);

	printf("Tax Due: ");
	if(income < 750.00f) printf("%.2f\n",0.01f * income);
	else if(income < 2250.00f) printf("%.2f\n",7.50f + 0.02f * (income - 750.00f));
	else if(income < 3750.00f) printf("%.2f\n",37.50f + 0.03f * (income - 2250.00f));
	else if(income < 5250.00f) printf("%.2f\n",82.50f + 0.04f * (income - 3750.00f));
	else if(income < 7000.00f) printf("%.2f\n",142.50f + 0.05f * (income - 5250.00f));
	else printf("%.2f\n",230.00f + 0.06f * (income - 7000.00f));
	return 0;
}