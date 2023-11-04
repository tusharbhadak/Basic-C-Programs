#include<stdio.h>
#include<conio.h>

struct health
{
int age;
int height;
};
int main()
{
clrscr();
struct health h1 ={23,6};
printf("%d %d \n",h1.height, h1.age);
getch();
return 0;
}