#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (success)
 *
 */
int main(void)
{
	double number;

	printf("Enter a number: ");
	scanf("%lf", &number);

	while (number >= 0.0)
	{
		printf("You entered %.2lf\n", number);

		printf("Enter a number: ");
		scanf("%lf", &number);
	}
	return (0);
}
