#include <stdio.h>

int main(void) {
  double num1, num2;
  char operation;

  printf("L�tfen ilk say�y� girin: ");
  scanf("%lf", &num1);

  printf("L�tfen ikinci say�y� girin: ");
  scanf("%lf", &num2);

  printf("L�tfen bir i�lem t�r� girin (+, -, * veya /): ");
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
    printf("Ge�ersiz i�lem t�r� girdiniz. L�tfen tekrar deneyin.\n");
    return 1;
  }

  printf("Sonu�: %lf\n", result);
  return 0;
}

