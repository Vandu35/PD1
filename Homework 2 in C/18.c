#include <stdio.h>

void print_floyd_triangle(int n) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      if ((i + j) % 2 == 0) {
        printf("0");
      } else {
        printf("1");
      }
    }
    printf("\n");
  }
}

int main() {
  int n = 5;
  print_floyd_triangle(n);
  return 0;
}

