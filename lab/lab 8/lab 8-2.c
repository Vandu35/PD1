// Calculate the area of a circle with given radius.

#include<stdio.h>

int main(){
	
	float pi = 3.14, area = 0;
	
	int r;
	printf("enter radius: "); 
	scanf("%d", &r);
	
	area = pi*r*r;
	
	printf("\nAlan: %.2f", area);
	
	return 0;
}
