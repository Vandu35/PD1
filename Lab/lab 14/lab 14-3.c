#include <stdio.h>
int vowctr(char str1[]){
	int ctr=0,i,j;
	char str2[6] = {'a','e','i','o','u'};
	for (i=0; str1[i] != '\0'; i++){
		for (j=0; j<5; j++){
			if (str1[i] == str2[j]){
				ctr++;
			}
		}
	}
	return ctr;
}

int main(){
	char str3[20];
	printf("enter a word :");
	gets(str3);
	printf("Number of Vowels : %d" ,vowctr(str3));
	
	return 0;
}
