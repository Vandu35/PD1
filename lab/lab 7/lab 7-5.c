#include<stdio.h>

int main(){
	
	int sayi=0, yuz=0, elli=0, yirmi=0, on = 0;
	
	
	printf("10'un kati bir sayi giriniz: ", sayi);
	scanf("%d", &sayi);
	
	if(sayi>=100){
		yuz = sayi/100;
		sayi = sayi % 100;	
	}
	if(sayi>=50){
		elli = sayi/50;
		sayi = sayi % 50;
	}
	if (sayi>=20){
		yirmi = sayi/20;
		sayi = sayi % 20;
	}
	if(sayi>=10){
		on = sayi/10;
		sayi = sayi % 10;		
	}
	
	
	printf("\n100 TL adeti: %d", yuz);
	printf("\n50 TL adeti: %d", elli);	
	printf("\n20 TL adeti: %d", yirmi);
	printf("\n10 TL adeti: %d", on);
		

			
	return 0;
	
}
