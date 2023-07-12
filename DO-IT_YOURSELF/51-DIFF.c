#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int input;
	int num = 51;
	int result;

	printf("Enter an integer: \n");
	scanf("%d", &input);

	if (input > num){
		result = input - num;
			printf("The difference is: %d\n", result);
	}
	else {
		result = num - input;
			printf("The difference is: %d\n", result);
	}
	return (0);

}
