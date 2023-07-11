#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main()
{
	int num = 37, guessed_num;

	/* program welcomes user to game and tells user to input a number */

	printf("Welcome,rules of the game is quite simple try guessing the hidden number\n");
	printf("Enter your guess: \n");
	scanf("%d", &guessed_num);

	/* program prints error if user guesses a lower number */
	if (guessed_num > 37)
	{
		printf("opps, you are aiming too high..\n");
		printf("Try a smaller number: \n");
		scanf("%d", &guessed_num);
	}
	else if (guessed_num < 37)
	{
		printf("opps, thats a bit too low..\n");
		printf("Try a bigger number: \n");
		scanf("%d", &guessed_num);
	}
	else {
		printf("congratulations,You guessed correctly\n");
	}
	return (0);
}
