#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Answer 0 (success)
 */
int main (void)
{
	int age;
	int sex;
	
	printf("Enter your age: ");
	scanf("%d", &age);
        
	printf("Enter a positive integer for male and negative integer for female: ");
	scanf("%d",  &sex);

	if (sex < 1) 
{
	printf("sex :female\n");
}
        else if (sex >= 1)
{
	printf("sex: male\n");
}
	return(0);
}
	
