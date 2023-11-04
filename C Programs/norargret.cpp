#include<stdio.h>
#include<conio.h>
int GetInteger(); //Function declaration or prototype
int main()
{
int num;
clrscr();
num=GetInteger(); // argument is not passed
if(num%2 == 0)

printf("\n %d is an even number.", num);

else
printf("\n %d is not an even number.", num);
getch();
return 0;
}
int GetInteger() // returns integer entered by the user
{
int n;
printf("Enter a positive integer: ");
scanf("%d",&n);
return n;
}