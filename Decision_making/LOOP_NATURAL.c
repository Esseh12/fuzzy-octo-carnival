#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum = sum + i;
	}
	printf("sum is %d\n", sum);
	return (0);
}
