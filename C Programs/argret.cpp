#include<stdio.h>
#include<conio.h>
int addnumbers(int num1, int num2); //Function declaration or prototype
int main()
{
int var1, var2,sum;
clrscr();
printf("Enter number 1: ");
scanf("%d",&var1);
printf("Enter number 2: ");
scanf("%d",&var2);
sum = addnumbers (var1, var2); // function calling
printf("Output: %d", sum);
getch();
return 0;
}
int addnumbers (int num1, int num2) // Function definition
{
int result;
result = num1+num2; // Arguments are used here
return result; // function return int value
}
