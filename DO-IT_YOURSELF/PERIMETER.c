#include <stdio.h>
/**
 * main - Entry point of a program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	double lenght, width, result;

	/* program to calculate perimeter of rectangle */

	printf("Enter the lenght of a rectangle: \n");
	scanf("%lf", &lenght);

	printf("Enter the width of a rectangle: \n");
	scanf("%lf", &width);

	/* program takes input from user to calculate perimeter */

	result = (2 * lenght + 2 * width);

	printf("perimeter of a rectangle: %lf\n", result);
	return (0);
}
