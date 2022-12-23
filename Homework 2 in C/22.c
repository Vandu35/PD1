#include <stdio.h>

void find_divisible_by_9(int start, int end) {
  int count = 0;
  int sum = 0;
  int i;
  for (i = start; i <= end; i++) {
    if (i % 9 == 0) {
      count++;
      sum += i;
    }
  }
  printf("Number of integers between %d and %d divisible by 9: %d\n", start, end, count);
  printf("Sum of integers between %d and %d divisible by 9: %d\n", start, end, sum);
}

int main() {
  find_divisible_by_9(100, 200);
  return 0;
}

