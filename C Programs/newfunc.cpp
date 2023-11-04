#include<stdio.h>
#include<conio.h>
/* function declarations */
float pi();
float cal_area(float rad);
int main ()
{
/* local variable definition */
float r,area; clrscr();
printf("Enter Radius value : ");
scanf("%f",&r);
area = cal_area(r);
printf( "Area of circle is : %f \n", area );
getch(); return 0;
}
float pi()
{
const float pi=3.14;
return pi;
}
float cal_area(float rad)
{ /* local variable declaration */
float result;
result = pi() * rad * rad ; // calling function from other function
return result;
}