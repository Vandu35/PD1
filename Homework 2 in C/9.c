#include <stdio.h>
#include <math.h>

int main(void) {
  int num, digits, sum, digit;

 
  printf("Enter a number: ");
  scanf("%d", &num);

  digits = (int) log10(num) + 1;
  sum = 0;


  while (num > 0) {
    digit = num % 10;
    sum += pow(digit, digits);
    num /= 10;
  }

 
  if (sum == num) {
    printf("The number is an Armstrong number.\n");
  } else {
    printf("The number is not an Armstrong number.\n");
  }

  return 0;
}

