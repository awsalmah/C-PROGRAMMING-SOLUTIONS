/**********************************************************************************
* Name: 101.Programming_Project_11.c			      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int n;
	float sum=0,denom=1;

	printf("Enter the value of n: ");
	scanf("%d",&n);

	for(int i=0; i<=n; i++,denom=1)
	{
		if(i == 0 || i == 1) sum+=1;

		else{
			for(int j=i; j>=1; j--){
				denom*=j;
			}
			sum+=(1/denom);
		}
	}

	printf("%.2f",sum);
	
	return 0;
}