/**********************************************************************************
* Name: 149.Programming_Project_12.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 26
int main(void)
{
	char ch;
	int i=0,val=0, scrabble[SIZE]={false};

	printf("Enter a word: ");
	while(ch!='\n')
	{
		ch=toupper(getchar());

		switch(ch){
			case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
				scrabble[ch-65]+=1;
				break;
			case 'D':case 'G':
				scrabble[ch-65]+=2;
				break;
			case 'B':case 'C':case 'M':case 'P':
				scrabble[ch-65]+=3;
				break;
			case 'F':case 'H':case 'V':case 'W':case 'Y':
				scrabble[ch-65]+=4;
				break;
			case 'K':
				scrabble[ch-65]+=5;
				break;
			case 'J':case 'X':
				scrabble[ch-65]+=8;
				break;
			case 'Q':case 'Z':
				scrabble[ch-65]+=10;
				break;
			default:
				break;
		}
	}

	for(i=0;i<SIZE;i++) val+=scrabble[i];
	printf("Scrabble value: %d\n", val);
	return 0;
}