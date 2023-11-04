// Linear Search in C

#include <stdio.h>
int main() {
  int array[4] = {10,5,8,3};
  int n, i, count = 0;
  clrscr();
  printf("Enter the element you want to search: - \n");
  scanf("%d", &n);
  for(i=0; i<4; i++)
  {
    if(array[i] == n)
    {
      printf("%d is at %d index position. \n", n, i);
      count++;
    }
  }
  if(count == 0)
  {
  printf("%d not found.",n);
  }
  getch();
  return 0;
}