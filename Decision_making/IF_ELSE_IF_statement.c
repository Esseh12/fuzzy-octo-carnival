#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	/* using if..else..if statement */
	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	if (num > 0) {
		printf("%d is a positive integer\n", num);
	}
	
	else if (num == 0){
		printf("%d is zero\n", num);
	}
	else {
		printf("%d is a negative integer\n", num);
                }
	return (0);
}

