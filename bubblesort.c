#include <stdio.h>

int main() {
  int n = 5, temp, i, j;
  int arr[5] = {44, 33, 11, 22, 55};
  //array of size 5
   clrscr();
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
	//checking and swapping adjacent elements when left_elem > right_elem
	temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
      }
    }
  }
  printf("Array after implementing Bubble sort: ");
  for (i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  getch();
  return 0;
}
