#include <stdio.h>

void print_pascal_triangle(int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d ", a(i, j));
    }
    printf("\n");
  }
}

int a(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  }
  return a(n - 1, k - 1) + a(n - 1, k);
}

int main() {
  int n;
  printf("enter a number :");
  scanf("%d" ,&n);
  print_pascal_triangle(n);
  return 0;
}

