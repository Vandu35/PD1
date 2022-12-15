#include <stdio.h>
int main ()
{
	int L,H,S,i;
	printf("enter low :");
	scanf("%d" ,&L);
	
	printf("enter high :");
	scanf("%d" ,&H);
	
	for(i=L; i<=H; i++) {
		S=i+S;
	}
	
	printf("SUM :%d" ,S);
	
	
	
	
	
	
	return 0;
}
