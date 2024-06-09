/**********************************************************************************
* Name: 178.Programming_Project_2.c  				    			  		  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

float guns_n_taxes(float income);

int main(void)
{
	float income, due_tax;

	printf("Enter your income: ");
	scanf("%f",&income);

	due_tax = guns_n_taxes(income);

	printf("Tax Due: %.2f\n",due_tax);
	
	return 0;
}

float guns_n_taxes(float income)
{
	if(income < 750.00f) income = 0.01f * income;
	else if(income < 2250.00f) income = 7.50f + 0.02f * (income - 750.00f);
	else if(income < 3750.00f) income = 37.50f + 0.03f * (income - 2250.00f);
	else if(income < 5250.00f) income = 82.50f + 0.04f * (income - 3750.00f);
	else if(income < 7000.00f) income = 142.50f + 0.05f * (income - 5250.00f);
	else income = 230.00f + 0.06f * (income - 7000.00f);
	
	return income;

}
