#include <stdio.h>
/**
 * main - factorials
 *
 * Return: Always 0 (success)
 */
unsigned int factorial(unsigned int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n-1);
}int main()
{
	    unsigned int number = 5;
	        unsigned int result = factorial(number);
		    printf("%u\n", result);
		        return 0;
}
