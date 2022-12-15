#include <stdio.h>
int main()
{
	int a;
	printf("enter a Temperature: ");
	scanf("%d" ,&a);
	
    if (a>0)
    	printf("Above the Freezing Point");
	
      else
    	printf("Below the Freezing Point");
	  
    return 0;
}
