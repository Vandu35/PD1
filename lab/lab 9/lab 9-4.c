//Write a C program to check whether a given number from keyboard is
//Palindrome number or not.

#include <stdio.h>
#include <string.h>

int main() {
    int num, originalNum, reversedNum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.", originalNum);
    } else {
        printf("%d is not a palindrome number.", originalNum);
    }

    return 0;
}

