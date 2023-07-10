#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	/* Using if...else statement */

	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	/* code executes if number is positive */
	 
	if (num > 0){
		printf("%d is a positive integer\n", num);
		printf("Body of if is executed\n");
	}
	else {
	      printf("%d is a negative integer\n", num);
	      printf("Body of else is executed\n");
	}
	      return (0);
	}
