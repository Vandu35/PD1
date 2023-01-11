#include <stdio.h>

float average(int num1, int num2, int num3, int num4, int num5) {
    return (num1 + num2 + num3 + num4 + num5) / 5.0;
}

int main() {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("Enter five integers to find their average: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    avg = average(num1, num2, num3, num4, num5);

    printf("The average of the integers is: %.2f\n", avg);
    return 0;
}

