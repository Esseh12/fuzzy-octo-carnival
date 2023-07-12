#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{ 
	int age = 18, salary = 950, result;

	/* using the || operator for two true operands */

	result = age >= 18 || salary >= 950;

	printf("Result_1: %d\n", result);

	/* using the || operator for one true statement */

	result = age <= 12 || salary <= 950;

	printf("Result_2: %d\n", result);

	/* using the || operator for two false statement */

	result = age <= 12 || salary <= 100;

	printf("Result_3: %d\n", result);

	/* code result should give (1,1,0) */

	return (0);
}
