#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("enter a binary :");
  scanf("%d" ,&n);
  int decimal = 0;
  int i = 0;
  while (n > 0) {
    decimal += (n % 10) * pow(2, i);
    n /= 10;
    i++;
  }
  printf("%d\n", decimal);
  return 0;
}

