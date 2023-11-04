
// C program to print ODD numbers from 1 to N using while loop
#include <stdio.h>

int main()
{
	int number;
	int n;
	clrscr();
	number=1;
	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Odd Numbers from 1 to %d:\n",n);

	while(number<=n)
	{
		if(number%2 == 0)
			printf("%d ",number);
	
		number++;
	}
	getch();
	return 0;
}
