#include <stdio.h>
#include <math.h>

int sum_series(int n) {
  int i;
  int sum = 0;
  for (i = 1; i <= n; i++) {
    sum += (int) pow(10, i - 1) * i;
  }
  return sum;
}

int main() {
	int n;
	printf("enter a number");
	scanf("%d" ,&n);
  
  	int sum = sum_series(n);
  	printf("Sum of series for n = %d is %d\n", n, sum);
 	 return 0;
}

