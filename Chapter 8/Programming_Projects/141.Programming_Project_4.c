/**********************************************************************************
* Name: 141.Programming_Project_4.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define N (int)(sizeof(a)/sizeof(a[0]))

int main(void)
{
	int a[10],i;

	printf("Enter %d numbers: ",N);
	for(i = 0;i<N;i++) scanf("%d",&a[i]);

	printf("In reverse order: ");
	for(i=N-1;i>=0;i--) printf(" %d",a[i]);
	printf("\n");
	return 0;
}