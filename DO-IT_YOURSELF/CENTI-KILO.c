#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	float centimeter, kilometer, meter, result;
	float  num1 = 100000;
	float num2 = 100;

	/* program to convert centimeter to kilometer and meter */

	/* program asks user to input figure centimeter */

	printf("Enter number in centimeter: \n");
	scanf("%f", &centimeter);

	result = centimeter / num1;

	printf("kilometer: %f\n", result);

	result = centimeter / num2;
	printf("Meter: %f\n", result);

	return (0);
}
