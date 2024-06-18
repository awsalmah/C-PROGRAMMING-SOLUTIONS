/**********************************************************************************
* Name: 119.Programming_Project_13.c   			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	float word_count=0, letter_count=0;
	char ch,prev_char=' ';

	printf("Enter a sentence: ");
	
	while(ch != '\n')
	{	
		ch = getchar();
		ch=toupper(ch);

		if((ch == ' ' || ch == '\n')&&prev_char!=ch) word_count++;
		else if(ch >= 'A' && ch <= 'Z') letter_count++;
		prev_char=ch;
	}
	if(letter_count==0)word_count--;
	
	printf("Average word length %.1f\n",letter_count/word_count);
	return 0;
}