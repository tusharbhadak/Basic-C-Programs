#include<stdio.h>
#include<conio.h>
int main () {

   /* local variable definition */
   int a = 10;
   clrscr();
   /* while loop execution */
   while( a < 20 ) {
      if(a==16)
      break;
      printf("value of a: %d\n", a);
      a++;
   }
   getch();
   return 0;
}