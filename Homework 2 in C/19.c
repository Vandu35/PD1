#include <stdio.h>
#include <math.h>

double sum_series(double x) {
  int i;
  double sum = 0;
  double factorial = 1;
  for (i = 0; i < 10; i++) {
    sum += pow(x, i) / factorial;
    factorial *= (i + 1);
  }
  return sum;
}

int main() {
  double x;
  printf("enter a number");
  scanf("%lf" ,&x);
  double sum = sum_series(x);
  printf("Sum of series for x = %f is %f\n", x, sum);
  return 0;
}

