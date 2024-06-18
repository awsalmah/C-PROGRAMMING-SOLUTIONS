/**********************************************************************************
* Name: 108.Programming_Project_2.c    			  								  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,n;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries in the table: ");
	scanf("%d",&n);

	for(i = 0; i <= n; i++){
		if(i%24 == 0)
		{
			printf("Press Enter to continue...");
			if(getchar() != '\n')
				break;
		}
		printf("%10d%10d\n",i,i*i);
	}

	return 0;
}