/**********************************************************************************
* Name: 184.Programming_Project_8.c		    			  					  	  *
* Purpose: Solve Program 														  *
* Author: Aws Almahasneh 				  										  *
**********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int i=0,win=0,loss=0;
	char ch;

	srand((unsigned) time(NULL));
	
	while(true)
	{	
		i = play_game();
		
		if(i == 1) 
		{
			printf("You win!\n");
			win++;
		}
		else
		{
			printf("You lose!\n");
			loss++;
		}

		printf("\nPlay again? ");
		scanf(" %c",&ch);
		
		if(toupper(ch)!='Y')
		{
			printf("\nWins: %d  Losses: %d",win,loss);
			break;
		}
	}

	return 0;
}

int roll_dice(void)
{
	int die;
	die = rand()%6+1;
	die += rand()%6+1;
	return die;
}

bool play_game(void)
{
	int roll,point=0;
	while(true)
	{
		roll=roll_dice();

		printf("You rolled: %d\n",roll);
		if(point == 0)
		{
			if(roll == 7 || roll == 11) return true;
			else if(roll == 2 || roll == 3 || roll == 12) return false;
			else {
				point = roll;
				printf("Your point is %d\n",point);
			}
		}
		else
		{
			if(roll == 7) return false;
			else if(roll == point) return true;
			else continue;
		}
	}
}
