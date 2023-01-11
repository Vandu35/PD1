// Write C code to find the largest of three numbers A, B, and C.

#include<stdio.h>

int main(){
	
	int A, B, C;
	printf("enter a number: "); scanf("%d", &A);
	printf("enter a number: "); scanf("%d", &B);
	printf("enter a number: "); scanf("%d", &C);
	
	if( A>B && A>C )
		printf("\n%d is max.", A);
	if( B>A && B>C )
		printf("\n%d is max.", B);
	if( C>A && C>B )
		printf("\n%d is max.", C);
	
	
	return 0;
}
