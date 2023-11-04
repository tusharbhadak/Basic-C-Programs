// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int v[3] = { 10, 100, 200 }, i;
	// Declare pointer variable
	int* ptr;
	clrscr();
	// Assign the address of v[0] to ptr
	ptr = v;

	for (i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Address of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
	getch();
	return 0;
}
