/**********************************************************************************
* Name: 106.Exercises_1_to_15.c	      			  								  *
* Purpose: Solve Exercise 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

/*
// Question 1 //
(a) 077 (octal) = 7 x 8 ^ 1 + 7 x 8 ^ 0 = 56 + 7 = 63 (decimal)
(b) 0x77 (hexadecimal) = 7 x 16 ^ 1 + 7 x 16 ^ 0 = 112 + 7 = 119 (decimal)
(c) 0xABC (hexadecimal) = A x 16 ^ 2 + B x 16 ^ 1 + C x 16 ^ 0 = 10 x 16 ^ 2 + 11 x 16 ^ 1 + 12 x 16 ^ 0 =  2560 + 176 + 12 = 2748
*/

/*
// Question 2 //
(a) Legal
(b) Legal
(c) Illegal, this is because this is an octal number as indicated by  the 0 at the beginning, but it has a 9 which is impossible
(d) Illegal, this is because no number can have an underscore('_') in it
(e) Legal
*/

/*
// Question 3 //
(a) Legal
(b) Illegal
(c) Legal
(d) Legal
*/

/*
// Question 4 //
(a) Legal
(b) Legal
(c) Legal
(d) Illegal, as printf requires a string and not a char as its first argument
*/

/*
// Question 5 //
(a) Legal
(b) Legal
(c) Illegal, as 0101 is in octal and it doesn't equal 65 when converted to decimal
(d) Legal
*/

/*
// Question 6 //
(a) char
(b) short
(c) short
(d) long
*/

/*
// Question 7 //
(a)\010
(b)\012
(c)\015
(d)\011
*/

/*
// Question 8 //
(a)\x08
(b)\x0a
(c)\x0d
(d)\x09
*/

/*
// Question 9 //
int
*/

/*
// Question 10 //
unsigned int
*/

/*
// Question 11 //
double
*/

/*
// Question 12 //
i will be converted to float, the summation of i and f will be float, and then it will be converted to double
*/

/*
// Question 13 //
(a) value: -3		type: int
(b) value: 7		type: long
(c) value: 6.5		type: float
(d) value: 3.75		type: double
(e) value: -1.0		type: double
(f) value: 6		type: int
*/

/*
// Question 14 //
No, sometimes the value stored in float might be larger than the largest value an int can take
*/

/*
// Question 15 //
typedef int8_t Int8
typedef int16_t Int16
typedef int32_t Int32
*/

#include <stdio.h>
#include <stdint.h>
typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void)
{
	Int8 x;
	Int16 y;
	Int32 z;
	printf("%zu\n%zu\n%zu\n",sizeof(x),sizeof(y),sizeof(z));
	return 0;
}