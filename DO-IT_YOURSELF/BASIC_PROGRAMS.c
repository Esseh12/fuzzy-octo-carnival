#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char name[100];
	int order_no;
	char complaint[99];

	printf("Welcome to chowdeck\n");
	printf("Enter your name: \n");
	scanf("%99s", name);

	printf("Enter your order number: \n");
	scanf("%d", &order_no);

	printf("Your order number is %d\n", order_no);

	printf("Hello %s, how may i help you today: \n", name);
	scanf("%98s", complaint);

	printf("We are really sorry for this %s\n", name);
	printf("Redirecting to a customer service agent\n");

	return (0);
}
