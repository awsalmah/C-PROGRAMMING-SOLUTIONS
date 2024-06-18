/**********************************************************************************
* Name: 148.Programming_Project_11.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#define SIZE 15

int main(void)
{
	char ch,input[SIZE];
	int i=0,j=0;

	printf("Enter phone number: ");
	while((ch=getchar())!='\n' && i < 15){
		ch=toupper(ch);
		switch(ch){
			case 'A':case 'B': case 'C':
				input[i] = '2';
				break;
			case 'D':case 'E': case 'F':
				input[i] = '3';
				break;
			case 'G':case 'H': case 'I':
				input[i] = '4';
				break;
			case 'J':case 'K': case 'L':
				input[i] = '5';
				break;
			case 'M':case 'N': case 'O':
				input[i] = '6';
				break;
			case 'P':case 'R': case 'S':
				input[i] = '7';
				break;
			case 'T':case 'U': case 'V':
				input[i] = '8';
				break;
			case 'W':case 'X': case 'Y':
				input[i] = '9';
				break;
			default:
				input[i]=ch;
				break;
		}
	i++;
	}

	printf("In numeric form: ");
	for(j=0;j<i;j++) printf("%c",input[j]);
	
	return 0;
}