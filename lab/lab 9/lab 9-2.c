// Write a C program for computing factorial N (N!)

#include <stdio.h>

int main() {
    int N,i;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= N; i++) {
            factorial *= i;
        }
        printf("Factorial of %d: %lld", N, factorial);
    }

    return 0;
}

