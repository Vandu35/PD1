//Write C Program to Remove all Characters in a String Except Alphabet

#include <stdio.h>

int main(){
	
	int i,k=0,j;
	char a[20],b[20];
	
	printf("enter something :");
	scanf("%s" ,a);
	 while (a[i] != '\0'){
	 	i++;
	 }
	 
	 for (j=0; j<i; j++){
	 	if((a[j] >=65 && a[j] <= 90)|| a[j] >= 97 && a[j] <= 122){
		 
	 b[k] = a[j];
	 k++;
	 }
	 else{
	 }
	 
	 }
	 b[k] = '\0';
	 printf("%s" ,b);

	return 0;
}
