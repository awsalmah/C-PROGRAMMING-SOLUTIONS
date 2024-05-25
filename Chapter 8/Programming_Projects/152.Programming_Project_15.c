/**********************************************************************************
* Name: 152.Programming_Project_15.c		    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#define SIZE 80

int main(void)
{
	int i=0,j=0,shift;
	int ch,message[SIZE];

	printf("Enter message to be encrypted: ");
	while((ch=getchar())!='\n') message[i++] = ch;

	printf("Enter shift amount(1-25): ");
	scanf("%d",&shift);
	
	while(j<i){
		if(isalpha(message[j]))
		{
			if(message[j] >= 65 && message[j] <= 90)
				message[j]=((message[j] - 'A') + shift)%26 + 'A';
			else
				message[j]=((message[j] - 'a') + shift)%26 + 'a';
		}
	j++;
	}

	j=0;
	printf("Encrypted message: ");
	while(j<i) printf("%c",message[j++]);
	
	return 0;
}