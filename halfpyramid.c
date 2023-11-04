// Half Pyramid of '*'

#include <stdio.h>

int main() {
   int n, i, j;
    clrscr();
    printf("Enter the value of n: ");
   scanf("%d", &n);
   for (i = 1; i <= n; ++i)
   {
	for (j = 1; j <= i; ++j)
        {
	    printf("%d ", j);
        }
       printf("\n");
   }

   getch();
   return 0;
}
