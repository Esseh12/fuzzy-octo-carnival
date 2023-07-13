#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void){
	float num1, num2, result;

	/* user input num1 */

	printf("Enter a decimal number: \n");
	scanf("%f", &num1);

	/* user input num2 */

	printf("Enter the second decimal number: \n");
	scanf("%f", &num2);

	result = num1 * num2;

	printf("Result: %f\n", result);

	return (0);
}
