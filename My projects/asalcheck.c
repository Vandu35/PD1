#include <stdio.h>

int asalcheck(int a){
	
	int i;
	
	for (i = 2 ; i < a ; i++){
		if (a % i == 0) 
			return 0;
			{
				
			}
		
	}
	
	
	return 1;
	
}
		
int main() { 

	int a;
	
	printf("Bir sayi Giriniz :");
	scanf("%d" ,&a);
	
	if (asalcheck(a) == 0) {
		printf("Bu sayi Asal Degildir.");
	}
	else{
		printf("Bu sayi Asaldir.");
	}
	
	return 0;
}
