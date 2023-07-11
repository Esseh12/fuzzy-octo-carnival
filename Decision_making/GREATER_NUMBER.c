#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num1, num2;
        
        printf("Enter two integers: \n");
printf("Enter the first integer: \n");
scanf("%d", &num1);

printf("Enter the second integer: \n");
scanf("%d", &num2);


	/* program to chcek which number is greater */

	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	}
	else if (num2 > num1)
	{
		printf("%d is greater than %d\n", num2, num1);
	}
	 else {
		 printf("%d is equal to %d", num1, num2);
	 }
	 
	 return (0);
}
