/**********************************************************************************
* Name: 169.Exercise_12.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define SIZE 3

double inner_product(double a[], double b[], int n);

int main(void)
{
	double a[SIZE] = {2,0,1};
	double b[SIZE] = {1,-1,2};
	
	printf("%f\n",inner_product(a,b,SIZE));
	return 0;
}

double inner_product(double a[], double b[], int n)
{
	int i;
	double product=0;

	for(i = 0; i < n; i++)
		product+=a[i]*b[i];

	return product;
}