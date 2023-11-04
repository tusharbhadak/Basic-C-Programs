#include<stdio.h>
#include<conio.h>
int fibonacci(int i)
{
if(i == 0)
{
return 0;
}
if(i == 1)
{
return 1;
}
return fibonacci(i-1) + fibonacci(i-2);
}
int main()
{
int i; clrscr();
for (i = 0; i < 10; i++)
{
printf("%d \t", fibonacci(i));
}
getch(); return 0;
}