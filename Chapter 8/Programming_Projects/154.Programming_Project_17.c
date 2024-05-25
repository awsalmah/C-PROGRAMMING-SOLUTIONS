/**********************************************************************************
* Name: 154.Programming_Project_17.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int size,i,j,k=1,x,y;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d",&size);

	int sqr[size][size];

	for(i=0;i<size;i++) for(j=0;j<size;j++) sqr[i][j]=0;

	while(k<=(size*size))
	{
		if(k==1) 
		{
			sqr[i=0][j=size/2] = k++;
			x=i;
			y=j;
		}
		else if(sqr[i][j] == 0)
		{ 
			sqr[i][j] = k++;
			x=i;
			y=j;
		}
		else
		{
			i=x;
			j=y;
			i++;
			sqr[i][j] = k++;
		}
			i = (i==0) ? size-1 : i-1;
			j= (j==(size-1)) ? 0:j+1;
	}

	for(i=0;i<size;i++){
		for(j=0;j<size;j++) printf("%4d",sqr[i][j]);
		printf("\n");
	}

	return 0;
}