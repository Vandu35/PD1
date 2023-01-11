//Write a C program to find the largest of three numbers A, B, and C given
//from keyboard. 

#include <stdio.h>

int main() {
    int A, B, C;
    int max;

    printf("Enter three integers: ");
    scanf("%d%d%d", &A, &B, &C);

    max = A; 

    if (B > max) {
        max = B;
    }

    if (C > max) {
        max = C;
    }

    printf("The largest number is: %d", max);

    return 0;
}

