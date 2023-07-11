#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	/* c program to print all natural numbers from 1-n) */
	int n, i;

	printf("Enter an integer: \n");
	scanf("%d", &n);
	printf("Natural numbers from 1 - %d\n", n);


	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
