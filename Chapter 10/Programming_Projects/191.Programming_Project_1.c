/**********************************************************************************
* Name: 191.Programming_Project_1.c     				  					  	  *
* Purpose: Solve Program 		 												  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
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
   printf("Stack Overflow! The program will crash!");
   exit(1); //this function exits the program. It is defined in stdlib.h
}

void stack_underflow()
{
   printf("Stack Underflow! The program will crash!");
   exit(1); //this function exits the program. It is defined in stdlib.h
}

void push(char i)
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
	char ch,hc;
	bool matched = false;

	printf("Enter parentheses and/or braces: ");
	
	while((ch = getchar()) != '\n'){
		if(ch == '(' || ch == '{') 
		{
			push(ch);
		}
		else if(ch == ')' || ch == '}')
		{
			hc = pop();
			if((hc == '(' && ch == ')') || (hc == '{' && ch == '}')) 
				matched = true;
			else 
				matched = false;
		}
	}

	if(is_empty() && matched) 
		printf("Parentheses/braces are nested properly\n");
	else 
		printf("Parentheses/braces are NOT nested properly\n");

	return 0;
}