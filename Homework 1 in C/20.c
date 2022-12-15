#include <stdio.h>
int main()
{
	int a,i,b=0;
	printf("enter a number :");
	scanf("%d" ,&a);
	i=a;
	while (i>0){
		i=i/10;
		b++;
	}
	printf("number of digits :%d\n" ,b);

	
	
	
return 0;	
}
