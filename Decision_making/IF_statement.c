#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main()
{
	/* using if statement */

	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	/* Body of code only executes if number is less than 0 */

	if (num < 0);{

	printf("%d is a negative integer.\n", num);
	}

	printf("This is always executed.\n");

	return (0);
}
