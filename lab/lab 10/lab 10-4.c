//Write a program that takes a 10-element array from the keyboard and writes it in reverse to
//the screen

#include <stdio.h>

int main()
{
	int a;
	printf("Dizi Kac Sayidan olussun :");
	scanf("%d" ,&a);
	
	int arr[a],i;
	
	for (i = 1; i < a + 1; i++){
		printf("%d . sayiyi giriniz :" ,i);
		scanf(" %d" ,&arr[i]);
	}
	
	 int g,j = a,f;
	 
	 for (i = 1; i <= a / 2 ; i++){
	 	
	 	g = arr[i];
		f = arr[j];
		arr[i] = f;
		arr[j] = g;
		
		if(j > a / 2){
			
		j = j - 1;
			 	                                                                        	
		 }
     }
		for (i = 1; i < a + 1; i++){
		
		printf("\n");
		printf("%d . sayi :  %d"  ,i,arr[i]);
		
	}
	
	return 0;
}
