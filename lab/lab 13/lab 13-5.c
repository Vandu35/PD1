 //Girilen cümleyi parametre olarak alýp içerisindeki kelime sayýsýný bulan fonksiyonu yazýnýz
 
#include <stdio.h>
int wordctr(char a[100]){
	int i,ctr=1;
	for (i=0; a[i] != '\0'; i++){
		if (a[i] == ' ' && a[i+1] != ' '){
			ctr++;
		}
	}
	return ctr;
}

int main (){
	char str1[100];
	printf("write something :");
	gets(str1);
		
	printf("Number of Words : %d" ,wordctr(str1));
	
	return 0;
}
