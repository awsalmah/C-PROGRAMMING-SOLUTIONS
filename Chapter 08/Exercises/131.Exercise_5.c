/**********************************************************************************
* Name: 131.Exercise_5.c					    			  					  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define LENGTH 40

int main(void)
{
	int fib_numbers[LENGTH]={0,1};/* code */
	for(int i=2;i<LENGTH;i++) fib_numbers[i]=fib_numbers[i-1]+fib_numbers[i-2];
	
	return 0;
}