/**********************************************************************************
* Name: 98.Programming_Project_8.c				      			  				  *
* Purpose: Solve Project 									 					  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>

int main(void)
{
	int number_of_days, starting_day,count=0;

	printf("Enter number of days in month: ");
	scanf("%d",&number_of_days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&starting_day);

	for (int i = 1; i < starting_day; i++) printf("   ");

	for(int i=1;i<=number_of_days;i++) 
 	{
    printf("%3d", i);
    if ((starting_day + i - 1) % 7 == 0)
      printf("\n");
  }

  return 0;
}
