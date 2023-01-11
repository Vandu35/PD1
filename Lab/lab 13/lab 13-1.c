#include <stdio.h>
#include <math.h>

double square_area(double side) {
    return pow(side, 2);
}

int main() {
    double side, area;

    printf("Enter the side length of the square: ");
    scanf("%lf", &side);

    area = square_area(side);

    printf("Area of the square: %lf\n", area);
    return 0;
}

