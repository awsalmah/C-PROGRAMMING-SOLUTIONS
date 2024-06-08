/**********************************************************************************
* Name: 167.Exercise_10.c  				    			  					  	  *
* Purpose: Solve Exercise 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#define N 4

// (a) //
int largest(int a[],int n);
// (b) //
float avg(int a[],int n);
// (c) //
int num_of_pos(int a[],int n);

int main(void)
{
	int a[N]={-3,-1,-43,-2};
	
	printf("%d\n",largest(a,N));
	printf("%.2f\n",avg(a,N));
	printf("%d\n",num_of_pos(a,N));
	
	return 0;
}

// (a) //
int largest(int a[],int n)
{
	int i,largest_val=a[0];

	for(i = 0; i < N; i++)
		if(largest_val < a[i]) 
			largest_val = a[i]; 

	return largest_val;
}

// (b) //
float avg(int a[],int n)
{
	int i;
	float sum=0;

	for(i=0;i<N;i++)
		sum+= a[i];

	return sum/n;
}

// (c) //
int num_of_pos(int a[],int n)
{
	int i, pos_num=0;

	for(i = 0; i < N; i++)
		if(a[i]>=0)
			pos_num++;
	
	return pos_num;
}
