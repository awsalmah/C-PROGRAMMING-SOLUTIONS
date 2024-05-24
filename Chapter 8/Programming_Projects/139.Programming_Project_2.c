/**********************************************************************************
* Name: 139.Programming_Project_2.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h> /*C99 only*/

int main(void)
{
	int digit_seen[10] = {false};
	int i, digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld",&n);

	while(n>0)
	{
		digit = n % 10;
		digit_seen[digit] += true;
		n/=10;
	}
	
	printf("Digit:      ");
	for(i =0;i<=9;i++) printf("%3d",i);
	printf("\n");
	printf("Occurences: ");	
	for(i =0;i<=9;i++) printf("%3d",digit_seen[i]);
	
	return 0;
}