#include <stdio.h>
#include <math.h>

double sum_series(double x) {
  int i;
  double sum = 0;
  double factorial = 1;
  int sign = 1;
  for (i = 0; i < 10; i++) {
    sum += sign * pow(x, 2 * i) / factorial;
    factorial *= (2 * i + 1) * (2 * i + 2);
    sign = -sign;
  }
  return sum;
}

int main() {
  double x = 2.0;
  double sum = sum_series(x);
  printf("Sum of series for x = %f is %f\n", x, sum);
  return 0;
}

