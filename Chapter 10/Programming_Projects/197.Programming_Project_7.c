/**********************************************************************************
* Name: 197.Programming_Project_7.c     				  					  	  *
* Purpose: Solve Program 		 												  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>	/* C99 only */
#include <stdlib.h>

#define MAX_DIGITS 10

/* External Variables */
								// 0,1,2,3,4,5,6
	const int segments [10][7] = {{1,1,1,1,1,1,0},
								  {0,1,1,0,0,0,0},
								  {1,1,0,1,1,0,1},
								  {1,1,1,1,0,0,1},
								  {0,1,1,0,0,1,1},
								  {1,0,1,1,0,1,1},
								  {1,0,1,1,1,1,1},
								  {1,1,1,0,0,0,0},
								  {1,1,1,1,1,1,1},
								  {1,1,1,1,0,1,1},
								  };
	char digits [4][MAX_DIGITS*4];
	
/* prototypes */	
void clear_digits_array(void);
void process_digit(int digit, int position); 
void print_digits_array(void);

/**/
int main(void)
{
	return 0;
}


/*********************************************************
* clear_digits_array: will store blank characters into   *
* 					  all elements of the digits array   *
**********************************************************/
void clear_digits_array(void)
{
	int i,j;
	for(i = 0; i < 4; i++)
		for(j = 0; j < MAX_DIGITS * 4; j++)
			digits[i][j] = ' ';
}

/*********************************************************
* process_digit: will store the seven-segment 		     *
* 			     representation of digit into      		 *
* 				 a specified position in the             *
* 				 digits array 						     *
**********************************************************/
void process_digit(int digit, int position); 

/*********************************************************
* print_digits_array: will display the rows of the       *
* 					  digits array, each on a single     *
* 					  line								 *
**********************************************************/
void print_digits_array(void);