#include <stdio.h>
int main()
{
	int a,b,c,i;
	
	printf("enter low :");
	scanf("%d" ,&a);
	
	printf("enter high :");
	scanf("%d" ,&b);
	
	printf("enter step :");
	scanf("%d" ,&c);
	
	
	
	for (i=a; i<=b; i=i+c){
		printf("%d\n" ,i);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return ;
}
