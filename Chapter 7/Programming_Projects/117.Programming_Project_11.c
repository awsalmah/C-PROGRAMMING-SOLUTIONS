/**********************************************************************************
* Name: 117.Programming_Project_11.c    			  							  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1,ch2;

	printf("Enter a first and last name: ");
	scanf(" %c",&ch1);
	ch1 = toupper(ch1);
	
	while(getchar() != ' ') continue;

	while((ch2 = getchar()) != '\n' && ch2 != ' ')
	{
	    putchar(ch2);
    }

    printf(", %c.\n", ch1);
	
	return 0;
}