/**********************************************************************************
* Name: 53.Exercise_1.c						  						      		  *
* Purpose: Solve Exercise														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
 _Bool teenager = 0;
 int age =13;
 teenager = (age >= 13 && age <=19) ? 1 : 0;
 printf("%d\n",teenager );
 return 0;
}