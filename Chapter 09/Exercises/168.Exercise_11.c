/**********************************************************************************
* Name: 168.Exercise_11.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#define N 4

float compute_GPA(char grades[],int n);

int main(void)
{
	char grades[N] = {'A', 'A', 'B', 'a'};

	printf("Your GPA is: %.2f\n",compute_GPA(grades,N));
}

float compute_GPA(char grades[],int n)
{	
	int i;
	float gpa=0;

	for(i = 0; i < n; i++)
	{
		switch(toupper(grades[i]))
		{
			case 'A':
				gpa+=4;
				break;
			case 'B':
				gpa+=3;
				break;
			case 'C':
				gpa+=2;
				break;
			case 'D':
				gpa+=1;
				break;
			default:
				gpa+=0;
				break;
		}
	}

	return gpa/n;
}