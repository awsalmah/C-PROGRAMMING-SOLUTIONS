/**********************************************************************************
* Name: 144.Programming_Project_7.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int main(void)
{
	int input[SIZE][SIZE],i,j,row_sums[SIZE]={false},col_sums[SIZE]={false};

	for(i=0;i<SIZE;i++){
		printf("Enter row %d: ",i+1);
		for(j=0;j<SIZE;j++){
			scanf("%d",&input[i][j]);
			row_sums[i]+=input[i][j];
		}
	}


	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			col_sums[i]+=input[j][i];
	
	printf("\nRow totals:    "); for(i=0;i<SIZE;i++) printf("%d ",row_sums[i]);
	printf("\nColumn totals: "); for(j=0;j<SIZE;j++) printf("%d ",col_sums[j]);
	
	return 0;
}