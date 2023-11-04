// C program to print all uppercase alphabets using while loop
#include <stdio.h>

int main()
{
	
	char alphabet;
	
	alphabet='A';

	printf("Uppercase alphabets:\n");

	while(alphabet<='Z')
	{
		printf("%c ",alphabet);
		alphabet++;
	}
	getch();
	return 0;
}