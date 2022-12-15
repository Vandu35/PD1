#include <stdio.h>
int main()
{
	int a,i;
	float b,c;	
	printf("enter number :");
	scanf("%d" ,&a);
	
	
	
	for(i=a;i>=2;i-=2){
		b=(float)1/i;
		c+=b;
	
	}
	printf("\nSum :%.3f" ,c);	
	return 0;
}
