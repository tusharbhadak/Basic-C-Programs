#include<stdio.h>
#include<conio.h>

int main()
{
int a[2][2], b[2][3], result[2][2], i,j,k;
clrscr();

//Matrix A
printf("Enter the Elements in Matrix A: \n");
for(i=0; i<2; i++){
for(j=0;j<2;j++){
printf("Enter a[%d][%d]: ", i,j);
scanf("%d", &a[i][j]);
}
}

//Printing Matrix A
printf("Matrix A: \n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
{
printf("%d \t", a[i][j]);
}
}

//Matrix B
printf("\n Enter the Elements in Matrix B: \n");
for(i=0; i<2; i++){
for(j=0;j<3;j++){
printf("Enter b[%d][%d]: ", i,j);
scanf("%d", &b[i][j]);
}
}

//Printing Matrix B
printf("Matrix B: \n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d \t", b[i][j]);
}
}

//Multiplying 2 Matrices
for(i=0; i<2; i++){
for(j=0;j<2;j++){
result[i][j]=0;
for(k=0; k<2; k++)
{
result[i][j] = result[i][j] + ( a[i][k] * b[k][j]) ;
}
}
}



//Printing resultant matrix
printf("Resultant Matrix: \n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
{
printf("%d \t", result[i][j]);
}
}

getch();

return 0;
}