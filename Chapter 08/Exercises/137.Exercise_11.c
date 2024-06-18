/**********************************************************************************
* Name: 137.Exercise_11.c					    			  					  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define SIZE 8

int main(void)
{	
	int i,j;
	char chess_board[SIZE][SIZE];

	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			chess_board[i][j]=(((i+j)%2) == 0 ? 'B' : 'R');


	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++) printf("%c ",chess_board[i][j]);
		printf("\n");
	}
	
	return 0;
}