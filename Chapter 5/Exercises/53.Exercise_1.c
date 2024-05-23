/**********************************************************************************
* Name: 53.Exercise_1.c						  						      		  *
* Purpose: Solve Exercise														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i=2,j=3,k;
	k = i * j == 6;
	printf("%d\n",k);
	
	//(b)
	i=5,j=10,k=1;
	printf("%d\n",k > i < j);

	//(c)
	i=3,j=2,k=1;
	printf("%d\n",i < j == j < k);
	
	//(d)
	i=3,j=4,k=5;
	printf("%d\n",i%j+i<k);
	
	return 0;
}