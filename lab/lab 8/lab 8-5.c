// Convert Temperature from Fahrenheit to Celsius.

#include<stdio.h>

int main(){
	
	float tF, tC;
	
	printf("Sicaklik(F) degeri giriniz: "); 
	scanf("%f", &tF);
	
	tC = ( 5*(tF-32) ) / 9;
	
	printf("Sonuc(C): %.2f", tC);
	
	return 0;
}
