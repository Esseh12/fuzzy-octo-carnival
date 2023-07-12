#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return 0 (success)
 *
 */
int main(void)
{
	int num1, num2, temp;

	printf("Enter an integer: \n");
	scanf("%d", &num1);

	printf("Enter another integer: \n");
	scanf("%d", &num2);
	 
	  temp = num1;
		  num1 = num2;
		  num2 = temp;

		  printf("After swapping,first input is %d\n", num1);
		  printf("And second input is %d\n", num2);
                
                return (0);
}
