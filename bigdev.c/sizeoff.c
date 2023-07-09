#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int intType;
	float floatType;
	char charType;
	double doubleType;

	/* sizeof gives the size in bytes */
	printf("int: %zu\n", sizeof (intType));
	printf("float: %zu\n", sizeof (floatType));
	printf("char: %zu\n", sizeof (charType));
	printf("double: %zu\n", sizeof (doubleType));

	return (0);
}
