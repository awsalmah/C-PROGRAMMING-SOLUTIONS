/**********************************************************************************
* Name: 143.Programming_Project_6.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main(void)
{
	int i=0,count=0;
	char ch,b1ff[SIZE];

	printf("Enter message: ");
	while((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		b1ff[count++]=ch;
	}
	
	while(i < count)
	{
		switch(b1ff[i])
		{
		case 'A':
			b1ff[i] = '4';
			break;		
		case 'B':
			b1ff[i] = '8';
			break;
		case 'E':
			b1ff[i] = '3';
			break;		
		case 'I':
			b1ff[i] = '1';
			break;
		case 'O':
			b1ff[i] = '0';
			break;		
		case 'S':
			b1ff[i] = '5';
			break;
		}
		i++;
	}
	
	
	printf("In B1FF-speak: ");
	i=0;
	while(i < count) 
		printf("%c",b1ff[i++]);
	printf("!!!!!!!!!!");

	return 0;

}