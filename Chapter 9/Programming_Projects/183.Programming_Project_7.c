/**********************************************************************************
* Name: 183.Programming_Project_7.c											  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x,n;

	printf("Enter the value of the number: ");
	scanf("%d",&x);
	printf("Enter the value of the power: ");
	scanf("%d",&n);

	printf("%d\n",power(x,n));

	return 0;
}

int power(int x, int n)
{
	if(n==0) return 1;
	else if (n%2==0) return power(x,n/2) * power(x,n/2);
	else return x * power(x,n-1);
}