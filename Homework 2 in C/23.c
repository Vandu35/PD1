#include <stdio.h>

void decimal_to_binary(int n) {
  if (n == 0) {
    return;
  }
  decimal_to_binary(n / 2);
  printf("%d", n % 2);
}

int main() {
  int n;
  printf("enter a number :");
  scanf("%d" ,&n);
  decimal_to_binary(n);
  printf("\n");
  return 0;
}

