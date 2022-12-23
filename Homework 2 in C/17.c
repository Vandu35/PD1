#include <stdio.h>

void harmonic_series(int n) {
  int i;
  double sum = 0;
  for (i = 1; i <= n; i++) {
    sum += 1.0 / i;
    printf("1/%d ", i);
    if (i < n) {
      printf("+ ");
    }
  }
  printf("= %.3f\n", sum);
}

int main() {
	int n;
	scanf("%d" ,&n);
  
  harmonic_series(n);
  return 0;
}

