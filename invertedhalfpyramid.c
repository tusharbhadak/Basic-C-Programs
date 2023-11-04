// Inverted Half Pyramid of '*'

#include <stdio.h>

int main() 
{
   int n, i, j;
   clrscr();
   printf("Enter the value of n: ");
   scanf("%d", &n);
   for (i = n; i >= 1; --i)
   {
	for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
   }
   getch();
   return 0;
}

