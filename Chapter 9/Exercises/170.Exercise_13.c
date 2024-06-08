/**********************************************************************************
* Name: 170.Exercise_13.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define SIZE 8

int evaluate_position(char board[8][8]);

int main(void)
{
	char board[SIZE][SIZE]={{'k',' ',' ',' ',' ',' ',' ',' '},
							{' ',' ',' ',' ',' ','Q',' ',' '},
							{' ','q',' ',' ','K',' ',' ',' '},
							{' ',' ',' ',' ',' ',' ',' ',' '},
							{' ',' ','r',' ',' ','N',' ',' '},
							{' ',' ','b',' ',' ','P',' ',' '},
							{' ',' ','n',' ',' ',' ',' ',' '},
							{' ',' ',' ',' ',' ','P',' ',' '}};
	
	printf("%d\n",evaluate_position(board));
	
	return 0;
}

int evaluate_position(char board[8][8])
{
	int i,j,difference=0;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			switch(board[i][j]){
				case 'Q':
					difference+=9;
					break;
				case 'R':
					difference+=5;
					break;
				case 'B':
					difference+=3;
					break;
				case 'N':
					difference+=3;
					break;
				case 'P':
					difference+=1;
					break;
				case 'q':
					difference-=9;
					break;
				case 'r':
					difference-=5;
					break;
				case 'b':
					difference-=3;
					break;
				case 'n':
					difference-=3;
					break;				
				case 'p':
					difference-=1;
					break;
				default:
					break;
			}
		}
	}
	return difference;
}