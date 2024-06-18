/**********************************************************************************
* Name: 40.Exercise_9.c						  						      		  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i=7,j=8;
	i*= j + 1;
	printf("%d %d\n",i,j);
	
	//(b)
	int k;
	i=j=k=1;
	i+= j+= k;
	printf("%d %d %d\n",i,j,k);
	
	//(c)
	i = 1;
	j = 2;
	k = 3;
	i-= j-= k;
	printf("%d %d %d\n",i,j,k);

	//(d)
	i=2;
	j=1;
	k=0;
	i*= j*= k;
	printf("%d %d %d\n",i,j,k);
	
	return 0;
}