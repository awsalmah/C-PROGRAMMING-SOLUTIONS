/**********************************************************************************
* Name: 53.Exercise_1.c						  						      		  *
* Purpose: Solve Exercise														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	//(a)
	int i=3,j=4,k=5;
	printf("%d ",i<j || ++j<k);
	printf("%d %d %d\n",i,j,k);

	//(b)
	i=7,j=8,k=9;
	printf("%d ",i - 7 && j++<k);
	printf("%d %d %d\n",i,j,k);

	//(c)
	i=7,j=8,k=9;
	printf("%d ",(i = j) || (j = k));
	printf("%d %d %d\n",i,j,k);

	//(d)
	i=7,j=1,k=1;
	printf("%d ",++i || ++j && ++k);
	printf("%d %d %d\n",i,j,k);

	return 0;
}