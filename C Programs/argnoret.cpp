#include<stdio.h>
#include<conio.h>
void GetEven(int n); //Function declaration or prototype
void main()
{
int num;
clrscr();
printf("Enter a positive integer: ");
scanf("%d",&num);
GetEven(num); // num(argument) is passed to the function
getch();
}
void GetEven(int n) // function return type is void meaning doesn't return any value
{
if(n%2 == 0)
printf("\n %d is an even number.", n);
else
printf("\n %d is not an even number.", n);
}