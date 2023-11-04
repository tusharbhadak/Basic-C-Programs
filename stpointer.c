#include<stdio.h>

int main() {
    // creating a character array to store the value of
    // our string, notice the size of array is 
    // 11 = length("HelloWorld") + 1
    char str[11] = "HelloWorld";
    // pointer variable
     char *ptr = str;
     clrscr();
    // creating a while loop till we don't find
    // a null character in the string
    while (*ptr != '\0') {
        // the current character is not \0
        // so we will print the character
	printf("%p \n",ptr);

        // move to the next character.
        ptr++;
    }
    getch();
    return 0;
}
