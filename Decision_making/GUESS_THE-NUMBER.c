#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num = 39, guessed;

	/* print error if the user enters the wrong number */
	printf("Guess the number from (1-50): \n");
	scanf("%d", &guessed);

	/* if user guess is larger print error */

	if ( guessed > num )
	{
		printf("opps, you are aiming too high.\n");
	}
	else if ( guessed < num)
	{
		printf("opps, thats a bit too low.\n");
	}
		else {
			printf("Congratulations, you guessed the correct number!!!\n");
	                   	
	}
	
		return (0);
	}
