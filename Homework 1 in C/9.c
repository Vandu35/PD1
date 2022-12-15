#include <stdio.h>
int main ()
{
	int L,H,n,i;
	printf("enter low :");
	scanf("%d" ,&L);
	
	printf("enter high :");
	scanf("%d" ,&H);
	
	printf("enter a number :");
	scanf("%d" ,&n);
	
	for (i=L; i<=H; i++)
	if (i%n==0){
	
	   printf("%d\n" ,i);
    }
	
	   
	
	
	
return 0;	
}
