#include <stdio.h>
#include <math.h>

int main() {
  int n, i, a, b;


  printf("Enter a number: ");
  scanf("%d", &n);


  for (i = 2; i <= n; i++) {
   
    b = 1;

   
    for (a = 2; a <= sqrt(i); a++) {
      if (i % a == 0) {
      
        b = 0;
        break;
      }
    }

   
    if (b) {
      printf("%d\n", i);
    }
  }

  return 0;
}

