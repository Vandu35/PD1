// Write a program that puts the characters in the string sent to the function in alphabetical order.

#include <stdio.h>

void rule(char a[]){
	char b[100];
	int i,j,k,t=0;
	for (i=65,j=97; i<=90,j<=122; i++,j++){
		for (k=0; a[k] != '\0'; k++){
			if(a[k] == ' ' && (b[k-1] >= 65) && (b[k-1] <= 90)){
				b[t] = ' ';
				t++;
			}
			else{
				if (a[k] == i || a[k] == j){
				b[t++] = a[k];
			}
			}
			
		}
	}
	b[t] = '\0';
	printf("\n%s" ,b);
}

int main(){
	char str1[100];
	printf("write something :");
	gets(str1);
	rule(str1);
	
	return 0;
}
