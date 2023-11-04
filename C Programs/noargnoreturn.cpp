#include<stdio.h>
#include<conio.h>
void checkIsEven(); //Function declaration or prototype
int main()
{
clrscr();
checkIsEven(); // argument is not passed
getch(); return 0;
}
void checkIsEven() // return type is void meaning doesn't return any value
{
int n;
printf("Enter a positive integer: ");
scanf("%d",&n);
if(n%2 == 0)
printf("\n %d is an even number.", n);
else
printf("\n %d is not an even number.", n);
}