// Write C code to add two numbers entered by user.

#include<stdio.h>

int main(){
	
	int a, b, sum = 0;
	printf("enter a number : "); 
	scanf("%d", &a);
	printf("enter a number: "); 
	scanf("%d", &b);
	
	sum = a + b;
	
	printf("\nSUM: %d", sum);
	
	return 0; 
}
