#include <stdio.h>
#include <math.h>

double sum_series(double x, int n) {
  int i;
  double sum = 0;
  int sign = 1;
  for (i = 0; i <= n; i++) {
    sum += sign * pow(x, 2 * i + 1);
    sign = -sign;
  }
  return sum;
}

int main() {
  double x = 2.0;
  int n;
  printf("enter a number");
  scanf("%d" ,&n);
  double sum = sum_series(x, n);
  printf("Sum of series for x = %f and n = %d is %f\n", x, n, sum);
  return 0;
}

