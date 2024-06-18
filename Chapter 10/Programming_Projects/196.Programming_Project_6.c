/**********************************************************************************
* Name: 196.Programming_Project_6.c     				  					  	  				 *
* Purpose: Solve Program 		 												  					 *
* Author: Aws Almahasneh 				  										 					 *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void stack_overflow()
{
   printf("Expression is too complex");
   exit(1); //this function exits the program. It is defined in stdlib.h
}

void stack_underflow()
{
   printf("Not enough operands in expression");
   exit(1); //this function exits the program. It is defined in stdlib.h
}

void push(int i)
{
	if(is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}
int main(void)
{
	char c;
	int x,y;
	
	while(1)
	{
		while((c = getchar()) != '\n')
		{	
			if(c == 'q') 
				exit(1);

			if(c >= 48 && c <= 57)
			push(c - 48);

			switch(c){
			case '+': 
					x = pop();
					y = pop();
					x+= y; 
					push(x);
					break;
			case '-':
					x = pop();
					y = pop();
					x = y - x; 
					push(x);
					break;
			case '*':
					x = pop();
					y = pop();
					x*= y; 
					push(x);
					break;
			case '/':
					x = pop();
					y = pop();
					x= y/x; 
					push(x);
					break;
			case '=':
					printf("%d\n",pop());
					make_empty();
					break;
			}
		}
	}

	return 0;
}