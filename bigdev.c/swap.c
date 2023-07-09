#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 * 
 */
   int main(void)
{
   int a = 5, b = 10, temp;
   /* swap two numbers */
           temp = a;
	   a = b;
	   b = temp;

	   printf("a = %d, b = %d \n", a, b);

	   return (0);
}    
   
