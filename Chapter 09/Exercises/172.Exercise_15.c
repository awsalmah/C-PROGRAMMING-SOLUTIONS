/**********************************************************************************
* Name: 172.Exercise_15.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

double median(double x, double y, double z)
{
	if((y<=x && x<=z) || (z<=x && x<=y))
		return x;
	else if((x<=y && y<=z) || (z<=y && y<=x))
		return y;
	else 
		return z;
}