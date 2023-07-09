#include <stdio.h>
#include <string.h>
int main (void)
{
	int Data = 500;
	char App [] = "c programming app";
	printf("This application is called %s\n", App);
	printf("and it is so fun\n");
	printf("i downloaded it for %d mb\n", Data);
        Data = 300;
	printf("but femi said he downloaded it for %d mb\n", Data);
	printf("then i cannot always trust femi due to some personal reasons\n");
	strcpy(App, "C and learning");
	printf("he might be talking about the other app %s\n", App);
	printf("femi can be silly sometimes\n");

	return (0);
}
