/**********************************************************************************
* Name: 116.Programming_Project_10.c    			  							  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int count=0;
	char ch;

	printf("Enter a sentence: ");
	
	while(ch!='\n')
	{
		ch = getchar();
		ch=toupper(ch);

		switch(ch)
		{
		case 'A':case 'E':case 'I':case 'O':case 'U': count++;
		default: continue;
		}
	}

	printf("Your sentence contains %d vowels\n",count);

	return 0;
}