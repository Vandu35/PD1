#include<stdio.h>



int main(){
	
	float pi, yaricap, sayi, cevre, alan;
	
	pi = 3.14;
	
	printf("Bir sayi giriniz: ");
	scanf("%f", &sayi);
	
		if(sayi==1){
		
			printf("Yaricap giriniz: ");	
			scanf("%f", &yaricap);
			cevre = 2*pi*yaricap;
			printf("Cevre: %.2f", cevre);
		}
			
		else if(sayi==2){
		
			printf("Yaricap giriniz: ");
			scanf("%f,", &yaricap);
			alan= 2*pi*yaricap*yaricap;
			printf("%.2f", alan);
		}
		else
			printf("Yanlis giris.");
		
		
	return 0;	
	
}
