#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct emp
{
int id;
char name[10];
}sta;

int main()
{
sta record;
clrscr();
record.id = 7;
strcpy(record.name,"Mr Bond");
printf("Employee id:- %d\n", record.id);
printf("Employee name:- %s\n", record.name);
getch();
return 0;
}