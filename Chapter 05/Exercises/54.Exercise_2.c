/**********************************************************************************
* Name: 53.Exercise_1.c						  						      		  *
* Purpose: Solve Exercise														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i=10,j=5;
	printf("%d\n",!i<j);

	//(b)
	i=2,j=1;
	printf("%d\n",!!i+!j);

	//(c)
	int k;
	i=5,j=0,k=-5;
	printf("%d\n",i&&j||k);

	//(d)
	i=1,j=2,k=3;
	printf("%d\n",i<j||k);
	return 0;
}