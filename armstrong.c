
// Armstrong number -> 153 = 1*1*1 + 5*5*5 + 3*3*3

#include <stdio.h>
#include<math.h>

int main() {
    int num, originalNum, remainder, result = 0;
    clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
	//result += remainder * remainder * remainder;
	 result += pow(remainder,3);
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    
    getch();
    return 0;
}
