/**********************************************************************************
* Name: 181.Programming_Project_5.c		    			  					  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>

void creat_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
int main(void)
{
	int size,i,j,k=1,x,y;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d",&size);

	char sqr[size][size];

	creat_magic_square(size,sqr);
	print_magic_square(size,sqr);

	return 0;
}


void creat_magic_square(int n, char magic_square[n][n])
{
	int i,j,k=1,x,y;

	for(i=0;i<n;i++) 
		for(j=0;j<n;j++) 
			magic_square[i][j]=0;

	while(k<=(n*n))
	{
		if(k==1) 
		{
			magic_square[i=0][j=n/2] = k++;
			x=i;
			y=j;
		}
		else if(magic_square[i][j] == 0)
		{ 
			magic_square[i][j] = k++;
			x=i;
			y=j;
		}
		else
		{
			i=x;
			j=y;
			i++;
			magic_square[i][j] = k++;
		}
			i = (i==0) ? n-1 : i-1;
			j= (j==(n-1)) ? 0:j+1;
	}
}


void print_magic_square(int n, char magic_square[n][n])
{
	int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{ 
				printf("%4d",magic_square[i][j]);
			}
			printf("\n");
		}
}