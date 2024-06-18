/**********************************************************************************
* Name: 42.Exercise_11.c					  						      		  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i = 1;
	printf("%d ",i++ - 1);
	printf("%d\n",i);
	
	//(b)
	i =10;
	int j = 5;
	printf("%d ",i++ - ++j);
	printf("%d %d\n",i,j);

	//(c)
	i = 7;
	j = 8;
	printf("%d ",i++ - --j);
	printf("%d %d\n",i,j);

	//(d)
	i = 3;
	j = 4;
	int k = 5;
	printf("%d ", i++ - j++ + --k);
	printf("%d %d %d\n",i,j,k);
	
	return 0;
}