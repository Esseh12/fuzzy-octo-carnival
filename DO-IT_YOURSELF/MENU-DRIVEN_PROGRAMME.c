#include <stdio.h>
/**
 * main - Entry point of a programme 
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int radius1, length, width, radius2, opt;
	double result;
	double pi = 3.14;

	printf("< Press 1 to calculate 'Area of a circle'\n");
	printf("< Press 2 to calculate 'Area of a square'\n");
	printf("< Press 3 to calculate 'Area of a sphere'\n");

	printf("Enter your choice: \n");
	scanf("%d", &opt);
	
	switch (opt)
	{
		case '1':
			printf("Enter the radius of the circle: \n");
			scanf("%d", &radius1);
			 
			result = pi * radius1 * radius1;
			printf("Area of circle: %lf\n", result);
			break;
	
	case '2':
	printf("Enter the length of the square:\n");
	scanf("%d", &length);

	printf("Enter the width of the square:\n");
	scanf("%d", &width);

	result = length *  width;
	printf("Area of square: %lf\n", result);
	break;
	
	case '3':
	printf("Enter the radius of sphere:\n");
	scanf("%d", &radius2);

	result =  4 * pi * radius2 * radius2;
	printf("Area of Sphere: %lf\n", result);
       break;
	default:
printf("Error!! Invalid option\n");
	}
	return (0);
}

