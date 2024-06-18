/**********************************************************************************
* Name: 38.Exercise_1.c						  						      		  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i=5,j=3;
	printf("%d %d\n",i/j,i%j);

	//(b)
	i=2,j=3;
	printf("%d\n",(i+10)%j);

	//(c)
	int k;
	i=7,j=8,k=9;
	printf("%d\n",(i+10)%k/j);

	//(d)
	i=1,j=2,k=3;
	printf("%d\n",(i+5)%(j+2)/k);
	return 0;
}