#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char name [100];
	int age;
	char feel;

	printf("Welcome to shoprite\n");
	printf("Enter your name: \n");
	scanf("%99s", name);
	printf("Welcome to shoprite %s\n", name);
         
	printf("Enter your age: \n");
	scanf("%d", &age);
	if ( age >= 18)
	{
		printf("Okay %s,what would you like to order today: \n", name);
	}
	else {
		printf("opps,too young to be here\n");
	}
	return (0);
}

	
