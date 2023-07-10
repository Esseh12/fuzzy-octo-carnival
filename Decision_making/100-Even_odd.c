#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main()
{
	/* program below would check whether a number is even or odd */

	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	/* if a number is divisible by 2 means it is an even number */
	if (num / 2 == 0){
		printf("%d is an even number\n", num);

	}
	else {
		printf("%d is an odd number\n", num);
	}
		return (0);
}
