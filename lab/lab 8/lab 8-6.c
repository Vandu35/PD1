// Write C code to convert the length in feet to centimeter.

#include<stdio.h>

int main(){
	
	float feet, cm;
	
	printf("enter length(cm): "); scanf("%f", &feet);
	
	cm = feet * 30.48 ;
	
	printf("\nLength :(feet): %.2f", cm);
	
	return 0;
}
