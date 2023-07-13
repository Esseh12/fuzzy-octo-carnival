#include <stdio.h>
/**
 * main - Entry point
 *
 * Result: Always 0 (success)
 *
 */
int main(void)
{
	int num1, num2, result;

	printf("Enter an integer: \n");
	scanf("%d", &num1);
	printf("Enter an integer: \n");
	scanf("%d", &num2);

          result = num1 + num2;
	  printf("Addition_Result:%d\n", result);

	  result = num1 * num2;
	  printf("Multiplication_result:%d\n", result);

	 if (num1 > num2)
	 {
           result = num1 / num2;
		   printf("Division_result:%d\n", result);
	 }
	  else {
		  printf("Error\n");
	  }
	  
	  /* subtraction */
	  if (num1 > num2)
	  {
		  result = num1 - num2;
			  printf("Subtraction_result:%d\n", result);
	  }
	  else {
                 result = num2 - num1;
			 printf("subtraction_result:%d\n", result);
	  }
	  return (0);
}

	   
	  
