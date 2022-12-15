#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("enter a number :");
	scanf("%d" ,&a);
	
	printf("enter a number :");
	scanf("%d" ,&b);
	
	printf("enter a number :");
	scanf("%d" ,&c);
	
	if(a>b && a>c){
		printf("Largest :%d" ,a);

	}
    else{
    	if(b>c && b>a){
    		printf("Largest :%d" ,b);
		}
		else{
			printf("Largest :%d" ,c);
		}
    	
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
