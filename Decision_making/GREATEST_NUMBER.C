#include <stdio.h>
/*
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	/* program prints the greatest of three integers numbers */

	int num1, num2, num3;
         printf("Enter three integer numbers\n");
	 printf("Enter the first integer: \n");
	 scanf("%d", &num1);
	 printf("Now enter the second integer: \n");
	 scanf("%d", &num2);
	 printf("Lastly enter the third integer: \n");
	 scanf("%d", &num3);

	 /* using and statement in the code */

	 if (num1 >= num2 && num1 >= num3)
	 {
		 printf("%d is greater than %d and %d\n", num1, num2, num3);
	 }
	 else if (num2 >= num1 && num2 >= num3)
	 {
		 printf("%d is greater than %d and %d\n", num2, num1, num3);
	 }
	 else {
		 printf("%d is greater than %d and %d\n", num3, num2, num1);
	 }
	 return (0);
}
