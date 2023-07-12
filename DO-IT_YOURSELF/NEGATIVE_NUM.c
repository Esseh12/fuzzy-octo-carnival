#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	while (num >= 0)
	{
		printf("you entered %d\n", num);
                printf("Enter another number\n");
		scanf("%d", &num);
	}

	printf("you entered a negative integer\n");

	return (0);
}
