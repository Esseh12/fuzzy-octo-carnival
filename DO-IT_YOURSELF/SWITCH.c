#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char operator;
	int n1 = 20;
       	int n2 = 10; 
	int result;

	printf("Enter an operator:(+, _, /, *)\n");
	scanf("%s", &operator);

	switch (operator)
	{
		case '+':
			result = n1 + n2;
           printf("Result: %d\n", result);
	break;
		case '-':
	result = n1 - n2;
	printf("Result: %d\n", result);
	break;
		case '/':
	result = n1 / n2;
	printf("Result: %d\n", result);
	break;
		case '*':
	result = n1 * n2;
	printf("Result: %d\n", result);
	break;

		default:
	printf("Error! operator is invalid");
	}
	return (0);
}
