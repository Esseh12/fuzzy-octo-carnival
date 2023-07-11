#include <stdio.h>
/**
 *
 * main - Entry of program
 *
 * Return: Always 0 (success)
 *
 */
int main()
{
	int num1, num2, result;
	/* c program to add two integers */

	printf("Enter an integer: \n");
	scanf("%d", & num1);

	printf("Enter another integer: \n");
	scanf("%d", &num2);

	/* program adds two integers entered by user */

	result = num1 + num2;

	printf("Result: %d\n", result);

	return (0);
}


