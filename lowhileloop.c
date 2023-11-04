// Example of while loop using logical operator
#include <stdio.h>
int main()
{
   int i=1, j=1;
   clrscr();
   while (i <= 4 && j <= 3)
   {
	printf("%d %d\n",i, j);
	i++;
	j++;
   }
   getch();
   return 0;
}