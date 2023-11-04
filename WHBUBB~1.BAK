#include <stdio.h>

int main() {
  int n = 5, temp;
  int arr[5] = {20, 40, 10, 25, 44};
  int i = 0, j;
  clrscr();
  while (i < n - 1) { //Implementing Bubble Sort using while-loop
    int j = 0;
    while (j < n - i - 1) {
      if (arr[j] < arr[j + 1]) {
	temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
      }
      j++;
    }
    i++;
  }
  printf("Array after implementing Bubble sort: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  getch();
  return 0;
}
