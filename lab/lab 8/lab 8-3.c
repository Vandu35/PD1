// Determine and Output Whether Number N is Even or Odd.

#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter a number: "); 
	scanf("%d", &n);
	
	if( n%2==0 )
		printf("EVEN.");
	else
		printf("ODD.");
		
	return 0;
}
