/**********************************************************************************
* Name: 93.Programming_Project_3.c				      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int num, denom, rem, n, m;

	printf("Enter a fraction: ");
	scanf("%d /%d",&num,&denom);

	n = num;
	m = denom;

	while(m != 0)
	{
		rem = n%m;
		n = m;
		m = rem;
	}

	printf("In lowest terms: %d/%d",num/n,denom/n);
	return 0;
}
