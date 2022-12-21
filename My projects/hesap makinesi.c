#include <stdio.h>

int main(void) {
  double num1, num2;
  char operation;

  printf("Lütfen ilk sayýyý girin: ");
  scanf("%lf", &num1);

  printf("Lütfen ikinci sayýyý girin: ");
  scanf("%lf", &num2);

  printf("Lütfen bir iþlem türü girin (+, -, * veya /): ");
  scanf(" %c", &operation);

  double result;
  if (operation == '+') {
    result = num1 + num2;
  } else if (operation == '-') {
    result = num1 - num2;
  } else if (operation == '*') {
    result = num1 * num2;
  } else if (operation == '/') {
    result = num1 / num2;
  } else {
    printf("Geçersiz iþlem türü girdiniz. Lütfen tekrar deneyin.\n");
    return 1;
  }

  printf("Sonuç: %lf\n", result);
  return 0;
}

