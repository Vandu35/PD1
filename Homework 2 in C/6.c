#include <stdio.h>

int main() {
  int num1, num2, lcm, i;

  
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

 
  int larger = (num1 > num2) ? num1 : num2;

  
  for (i = larger; ; i += larger) {
    if (i % num1 == 0 && i % num2 == 0) {
      lcm = i;
      break;
    }
  }

  
  printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

  return 0;
}

