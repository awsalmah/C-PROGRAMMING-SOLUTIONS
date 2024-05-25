/**********************************************************************************
* Name: 153.Programming_Project_16.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 26

int main(void)
{
	int i=0,letter[SIZE]={false};
	char ch;

	printf("Enter first word: ");
	while((ch=getchar())!='\n')
		if(isalpha(ch)) letter[toupper(ch)-65]+=1;

	printf("Enter second word: ");
	while((ch=getchar())!='\n')
		if(isalpha(ch)) letter[toupper(ch)-65]-=1;

	for(i=0;i<SIZE;i++) if(letter[i]!=0) break;
	if(i!=26) printf("The words are not anagrams.\n");
	else printf("The words are anagrams.\n");
	return 0;
}