#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;
	int ans1, ans2, ans3, ans4, ans5;
	int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
	int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
	int total1, total2, total3;
	 
	printf("Hello, welcome to the game \n");
	printf("< Enter 1 to continue \n");
	printf("< Enter 0 to quit \n");

	/* user input */
	scanf("%d", &i);

	if (i == 0)
	{
		printf("GAME HAS ENDED\n");
		return (0);
	}

	else {
		printf("The game has started\n");
	
	
		
		printf("What object does a male peguin gifts to the female peguin: \n");
		printf("1) Pebble\n");
		printf("2) Fish\n");
		printf("3) Feather\n");
		printf("4) Snowball\n");

		printf("Enter your answer: \n");
	}	scanf("%d", &ans1);
	
		if (ans1 == 1){
		       printf("You have answered correctly\n");
	       point1 = 5;
printf("you have scored %d point\n", point1);
		}
		else {
			printf("You have answered wrongly\n");
			point1 = 0;
				printf("You have scored %d point\n", point1);
		}

		printf("What number is a bakers dozen\n");
		printf("1) 12\n");
		printf("2) 10\n");
		printf("3) 13\n");
		printf("4) 24\n");

		printf("Enter your answer: \n");
		scanf("%d", &ans2);

		if (ans2 == 3)
		{
			printf("You have answered correctly\n");
		       point2 = 5;
	       printf("you have scored %d point\n", point2);
		}
		else {
	printf("you have entered wrongly\n"); 
point2 = 0;
printf("you have scored %d point\n", point2);
		}
 
printf("In which board game do you have a Dagger as a game piece: \n");
printf("1) Monopoly\n");
printf("2) Snakes and Ladder\n");
printf("3) Life\n");
printf("4) clue\n");

printf("Enter your answer: \n");
scanf("%d", &ans3);

if (ans3 == 4){
	printf("You have answered correctly\n");
	point3 = 5;
	 printf("you have scored %d point\n", point3);
}
else {
	printf("you have entered wrongly\n");
	point3 = 0;
	printf("you have scored %d point\n", point3);

}

printf("How many senses do humans have: \n");
printf("1) 5\n");
printf("2) 7\n");
printf("3) 9\n");
printf("4) 3\n");

printf("Enter your answer: \n");
scanf("%d", &ans4);

if (ans4 == 1)
{
	printf("You have answered correctly\n");
	point4 = 5;
	printf("you have scored %d point\n", point4);
}
else
{
printf("you have entered wrongly\n");
point4 = 0;
printf("you have scored %d point\n", point4);
}

return (0);

}
