#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */

void addnumbers(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	printf("%d\n", sum);
}

int main()
{
	int n1 = 6;
		int n2 = 5;
		addnumbers(n1, n2);
			 
			return (0);
}
