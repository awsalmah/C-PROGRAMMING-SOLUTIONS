/**********************************************************************************
* Name: 138.Programming_Project_1.c			    			  					  *
* Purpose: Solve Project 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h> /*C99 only*/

int main(void)
{
	bool rep_digits[10]={false},digit_seen[10] = {false};
	int digit,i;
	long n;

	printf("Enter a number: ");
	scanf("%ld",&n);

	while(n>0)
	{
		digit = n % 10;
		
		if(digit_seen[digit]) rep_digits[digit] = true;
		
		digit_seen[digit] = true;
		n/=10;
	}

	printf("Repeated digit(s): ");
	for(i =0;i<=9;i++) 
		if(rep_digits[i]==true)
			printf("%d ",i);
		
	return 0;
}