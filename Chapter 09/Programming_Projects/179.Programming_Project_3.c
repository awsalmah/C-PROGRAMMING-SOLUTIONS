/**********************************************************************************
* Name: 179.Programming_Project_3.c  				    			  			  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
	char walk[SIZE][SIZE];

	generate_random_walk(walk);
	print_array(walk);

	return 0;
}


void generate_random_walk(char walk[10][10])
{
	int i,j,letter;
	char alphabet=65;
	
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			walk[i][j]='.';
	
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%c ",walk[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	srand((unsigned) time(NULL));

	i=0;
	j=0;
	walk[i][j]=alphabet++;
			
	while(alphabet<=90)
	{			
		letter = rand() % 4;

		if(letter == 0 && i > 0 && walk[i-1][j] == '.')
		{
			--i;
			walk[i][j] = alphabet;
			alphabet++;
			continue;
		} 
		else if(letter == 1 && i < 9 && walk[i+1][j] == '.')
		{
			++i;
			walk[i][j] = alphabet;
			alphabet++;
			continue;				
		} 
		else if(letter == 2 && j < 9 && walk[i][j+1] == '.')
		{
			++j;
			walk[i][j] = alphabet;
			alphabet++;
			continue;
		} 
		else if(letter == 3 && j > 0 && walk[i][j-1] == '.')
		{
			--j;
			walk[i][j] = alphabet;
			alphabet++;
			continue;
		}
		if(i==0){
			if(j==0){ if((walk[i+1][j] != '.') && (walk[i][j+1] != '.')) break;}
			else if(j==9){ if((walk[i+1][j] != '.') &&(walk[i][j-1] != '.')) break;}
			else if((walk[i+1][j] != '.') && (walk[i][j+1] != '.') &&(walk[i][j-1] != '.')) break;
		}
		else if(i==9){
			if(j==0){ if((walk[i-1][j] != '.') && (walk[i][j+1] != '.')) break;}
			else if(j==9){ if((walk[i-1][j] != '.') &&(walk[i][j-1] != '.')) break;}
				else if((walk[i-1][j] != '.') && (walk[i][j+1] != '.') &&(walk[i][j-1] != '.')) break;
		}
		if(j==0) { if((walk[i-1][j] != '.') && (walk[i+1][j] != '.') && (walk[i][j+1] != '.')) break; }
		else if(j==9) { if((walk[i-1][j] != '.') && (walk[i+1][j] != '.') &&(walk[i][j-1] != '.')) break; }
		if((walk[i-1][j] != '.') && (walk[i+1][j] != '.') && (walk[i][j+1] != '.') &&(walk[i][j-1] != '.')) break;
		}
}

void print_array(char walk[10][10])
{	
	int i,j;
		for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%c ",walk[i][j]);
		}
		printf("\n");
	}
}
