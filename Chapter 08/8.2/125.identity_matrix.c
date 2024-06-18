/**********************************************************************************
* Name: 125.identity_matrix.c 					    			  				  *
* Purpose: Prints the identity matrix						 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define N 10

int main(void)
{
	double ident[N][N]={0};
	int row,col;

	for(row=0;row<N;row++)
		for(col=0;col<N;col++)
			if(row == col) ident[row][col] = 1.0;

	for(row=0;row<N;row++){
		for(col=0;col<N;col++){
			printf("%6.2f",ident[row][col]);
		}
		printf("\n");
	}

	return 0;
}