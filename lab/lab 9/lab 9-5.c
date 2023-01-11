// Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

#include <stdio.h>

int main() {
    float x, sum = 1, term = 1;
    int i, n;
    float fact = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
        term = term * x / fact;
        sum += term;
    }

    printf("Sum of the series = %f", sum);

    return 0;
}

