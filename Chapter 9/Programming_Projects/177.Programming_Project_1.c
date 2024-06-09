/**********************************************************************************
* Name: 177.Programming_Project_1.c 	    			  					  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
	int i=0, n;

	printf("How many numbers do you want to sort? ");
	scanf("%d",&n);

	int a[n];

	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}

	selection_sort(a, n);

	for(i=0;i<n;i++)
		printf("%d\n",a[i]);

	return 0;
}


void selection_sort(int a[], int n)
{
		if(n == 0)
		return;

		int i, max = 0;

		for(i = 0; i < n; i++)
			if(a[max] < a[i])
				max = i;

			int temp = a[max];
			a[max]=a[n-1];
			a[n-1]=temp;

			selection_sort(a,n-1);
}
