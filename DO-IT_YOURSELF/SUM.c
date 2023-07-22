#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num1, num2, result;


        printf("Enter two numbers\n");
	printf("Enter first number: \n");
	scanf("%d", &num1);

	printf("Enter second number: \n");
	scanf("%d", &num2);

	result = num1 + num2;
        printf("sum of number is\n");
	printf("Result: %d\n", result);

	return (0);
}
