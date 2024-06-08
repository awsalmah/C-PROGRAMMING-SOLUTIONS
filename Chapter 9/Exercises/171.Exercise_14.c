/**********************************************************************************
* Name: 171.Exercise_14.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/
#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
	int i;

	for(i = 0; i < n; i++)
		if(a[i]==0)
			return true;

	return false;
}

/*
The originial(incorrect) function is:

bool has_zero(int a[], int n)
{
	int i;

	for(i = 0; i < n; i++)
		if(a[i]==0)
			return true;
			else return false;
}

This function is incorrect because it returns false 
if any element of the array has a nonzero value.
*/