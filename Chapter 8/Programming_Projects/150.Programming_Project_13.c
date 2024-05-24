/**********************************************************************************
* Name: 150.Programming_Project_13.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#define SIZE 20

int main(void)
{
	int i=0,j=0;
	char ch1,ch2,lname[SIZE];

	printf("Enter a first and last name: ");
	scanf(" %c",&ch1);
	ch1 = toupper(ch1);
	
	while(getchar() != ' ') continue;

	while((ch2 = getchar()) != '\n' && ch2 != ' ')
		lname[i++]=ch2;

	while(j<i) printf("%c",lname[j++]);
    printf(", %c.\n", ch1);
	
	return 0;
}