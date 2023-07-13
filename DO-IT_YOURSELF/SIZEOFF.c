#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	printf("size of char: %zu byte\n", sizeof(char));
	printf("size of int: %zu byte\n", sizeof(int));
	printf("size of double: %zu byte\n", sizeof(double));
	printf("size of long: %zu byte\n", sizeof(long));
	printf("size of float: %zu byte\n", sizeof(float));

	return (0);
}
