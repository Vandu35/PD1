#include <stdio.h>
#include <math.h>

int main(void) {
  int n, i, j, num, digits, sum, digit;

 
  printf("Enter a number: ");
  scanf("%d", &n);


  for (i = 1; i <= n; i++) {
    num = i;
    digits = (int) log10(num) + 1;
    sum = 0;

  
    while (num > 0) {
      digit = num % 10;
      sum += pow(digit, digits);
      num /= 10;
    }


    if (sum == i) {
      printf("%d\n", i);
    }
  }

  return 0;
}
