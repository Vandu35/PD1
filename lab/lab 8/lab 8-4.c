// Determine Whether a Temperature is Below or Above the Freezing Point.

#include<stdio.h>

int main(){
	
	int t;
	printf("enter tempature: "); 
	scanf("%d", &t);

	if( t > 0 )
		printf("\nAbove the freezing point.");
	else
		printf("\nbelow the freezing point.");
		
	return 0;
}
