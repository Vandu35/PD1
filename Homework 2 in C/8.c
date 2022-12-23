#include <stdio.h>
#include <math.h>

int main(void) {
  int n, i, a, b, total = 0;


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
      total += i;
    }
  }

 
  printf(" sum : %d", total);

  return 0;
}

