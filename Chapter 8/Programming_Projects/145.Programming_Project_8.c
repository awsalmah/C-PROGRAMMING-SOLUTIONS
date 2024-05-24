/**********************************************************************************
* Name: 145.Programming_Project_8.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int main(void)
{
	int input[SIZE][SIZE],i,j,student_totals[SIZE]={false},quiz_totals[SIZE]={false},min,max;

	for(i=0;i<SIZE;i++){
		printf("Enter the grades for student %d:\n",i+1);
		for(j=0;j<SIZE;j++){
			printf("Enter the grade for quiz %d: ",j+1);
			scanf("%d",&input[i][j]);
			student_totals[i]+=input[i][j];
		}
	}

	for(i=0;i<SIZE;i++) printf("Student %d has a total score of %d, and an average score of %.2f\n",i,student_totals[i],(float) (student_totals[i])/SIZE);

	for(i=0;i<SIZE;i++){
		min=100;
		max=0;
		for(j=0;j<SIZE;j++){
			if(input[j][i] > max) max = input[j][i];
			if(input[j][i] < min) min = input[j][i];
			quiz_totals[i]+=input[j][i];
		}
		printf("Quiz %d has a total score of %d, a min score of: %d, and a MAX score of %d\n",i+1,quiz_totals[i],min,max);
	}
	
	return 0;
}