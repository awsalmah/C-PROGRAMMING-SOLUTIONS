/**********************************************************************************
* Name: 99.Programming_Project_9.c				      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i=1,number_of_payments;
	float loan, interest, monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&interest);
	interest = interest/100;
	printf("Enter monthly payment: ");
	scanf("%f",&monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d",&number_of_payments);

	while(number_of_payments > 0)
	{
		loan = loan - monthly_payment + (loan * (interest/12));
		printf("Balance remaining after payment #%d: $%.2f\n",i++,loan);	
		number_of_payments--;
	}	

	return 0;
}