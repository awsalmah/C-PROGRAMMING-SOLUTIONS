/**********************************************************************************
* Name: 146.Programming_Project_9.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int i,j,letter;
	char random_walk[SIZE][SIZE],alphabet=65;
	
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			random_walk[i][j]='.';
	
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%c ",random_walk[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	srand((unsigned) time(NULL));

	i=0;
	j=0;
	random_walk[i][j]=alphabet++;
			
	while(alphabet<=90)
	{			
		letter = rand() % 4;

		if(letter == 0 && i > 0 && random_walk[i-1][j] == '.')
		{
			--i;
			random_walk[i][j] = alphabet;
			alphabet++;
			continue;
		} 
		else if(letter == 1 && i < 9 && random_walk[i+1][j] == '.')
		{
			++i;
			random_walk[i][j] = alphabet;
			alphabet++;
			continue;				
		} 
		else if(letter == 2 && j < 9 && random_walk[i][j+1] == '.')
		{
			++j;
			random_walk[i][j] = alphabet;
			alphabet++;
			continue;
		} 
		else if(letter == 3 && j > 0 && random_walk[i][j-1] == '.')
		{
			--j;
			random_walk[i][j] = alphabet;
			alphabet++;
			continue;
		}
		if(i==0){
			if(j==0){ if((random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.')) break;}
			else if(j==9){ if((random_walk[i+1][j] != '.') &&(random_walk[i][j-1] != '.')) break;}
			else if((random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.') &&(random_walk[i][j-1] != '.')) break;
		}
		else if(i==9){
			if(j==0){ if((random_walk[i-1][j] != '.') && (random_walk[i][j+1] != '.')) break;}
			else if(j==9){ if((random_walk[i-1][j] != '.') &&(random_walk[i][j-1] != '.')) break;}
				else if((random_walk[i-1][j] != '.') && (random_walk[i][j+1] != '.') &&(random_walk[i][j-1] != '.')) break;
		}
		// if(i==0 && j==0) if((random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.')) break;
		// if(i==0 && j==9) if((random_walk[i+1][j] != '.') &&(random_walk[i][j-1] != '.')) break;
		// if(i==9 && j==0) if((random_walk[i-1][j] != '.') && (random_walk[i][j+1] != '.')) break;
		// if(i==9 && j==9) if((random_walk[i-1][j] != '.') &&(random_walk[i][j-1] != '.')) break;
		// if(i==0) if((random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.') &&(random_walk[i][j-1] != '.')) break;
		// if(i==9) if((random_walk[i-1][j] != '.') && (random_walk[i][j+1] != '.') &&(random_walk[i][j-1] != '.')) break;
		if(j==0) { if((random_walk[i-1][j] != '.') && (random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.')) break; }
		else if(j==9) { if((random_walk[i-1][j] != '.') && (random_walk[i+1][j] != '.') &&(random_walk[i][j-1] != '.')) break; }
		if((random_walk[i-1][j] != '.') && (random_walk[i+1][j] != '.') && (random_walk[i][j+1] != '.') &&(random_walk[i][j-1] != '.')) break;
		}

		for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%c ",random_walk[i][j]);
		}
		printf("\n");
	}

	return 0;
}