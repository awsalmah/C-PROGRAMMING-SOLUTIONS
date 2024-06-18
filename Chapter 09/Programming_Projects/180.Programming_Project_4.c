/**********************************************************************************
* Name: 180.Programming_Project_4.c		    			  					  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
	int i, counts1[SIZE]={false}, counts2[SIZE]={false};
	char ch;

	printf("Enter first word: ");
	read_word(counts1);

	printf("Enter second word: ");
	read_word(counts2);

	i = equal_array(counts1,counts2);

	if(i == false) printf("The words are not anagrams.\n");
	else printf("The words are anagrams.\n");
	
	return 0;
}


void read_word(int counts[26])
{
	char ch;
	while((ch=getchar())!='\n')
		if(isalpha(ch)) counts[toupper(ch)-65]+=1;
}


bool equal_array(int counts1[26], int counts2[26])
{
	int i=0;

	for(i = 0; i < SIZE; i++)
		if(counts1[i] != counts2[i]) return false;

	return true;
	
}
