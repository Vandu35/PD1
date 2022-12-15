#include <stdio.h>
int main()
{
	int a,b,c=1;
	
	printf("enter number :");
	scanf("%d" ,&a);

	
	for (b=a; b>0; b--){
		c=c*b;
	}
	printf("Factorail :%d" ,c);
	
	
	
	
	
	
	return 0;
}
