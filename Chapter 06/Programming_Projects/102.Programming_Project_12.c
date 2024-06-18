/**********************************************************************************
* Name: 102.Programming_Project_12.c				      			  			  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int n;
	float sum=0,denom=1,epsilon,term=0;

	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("Enter the value of ε: ");
	scanf("%f",&epsilon);
	
	for(int i=0; i<=n; i++,denom=1)
	{
		if(i == 0 || i == 1) term=1;

		else{
			for(int j=i; j>=1; j--){
				denom*=j;
			}
			term=(1/denom);
		}
		if(term < epsilon) break;
		sum+=term;
	}

	printf("%.2f",sum);
	
	return 0;
}