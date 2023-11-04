#include<stdio.h>
#include<conio.h>
/* function declaration */
int max(int num1, int num2); // Formal parameters in function call
int main ()
{
/* local variable definition */
int a = 100;
int b = 200;
int ret; clrscr();
/* calling a function to get max value */
ret = max(a, b); // Actual parameters in function call
printf( "Max value is : %d\n", ret);
getch(); return 0;
}
/* function returning the max between two numbers */
int max(int a, int b)
{
/* local variable declaration */
int result;
if (a > b)
result = a;
else
result = b;
return result;
}