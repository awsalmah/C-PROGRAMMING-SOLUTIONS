/**********************************************************************************
* Name: 151.Programming_Project_14.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define SIZE 100

int main(void)
{
	int i=0,j=0,k;
	char ch,end_char,input[SIZE];

	printf("Enter a sentence: ");
	while(1)
	{
		ch = getchar();
		if(ch == '.' || ch == '?' || ch == '!')
		{
			end_char=ch;
			break;
		}
		else if(ch == '\n') break;
		else input[i++]=ch;
	}

	printf("Reversal of sentence: ");
	while(i>=0)
	{
	for(j=i-1;j>=0;j--) if(input[j] == ' ') 
	{
		j++;
		break;
	}
	for(k=j;k<i;k++) printf("%c",input[k]);
	j--;
	if(j>=0 && input[j]==' ') printf(" ");
	i=j;
	}
	printf("%c\n",end_char);

	return 0;
}