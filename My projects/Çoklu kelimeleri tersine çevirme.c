#include <stdio.h>

int len(char a[]) {
	
	int len = 0,i;
	for (i = 0; a[i] != '\0'; i++){
		len++;
		
	}
	return len;
}

void reverse(char a[]){
	
	int j,s,g,p;
	
	s = len(a);
	
	for (j = 0; j < s / 2; j++){
		
		p = a[j];
		a[j] = a[s - 1 -j];
		a[s- 1 -j] = p; 
			
	}
		
}

int main()
{

	char a[100];
	
	printf("Terse Cevirilecek Kelimeleri Girin : ");
	
	while (scanf("%s", a) == 1) {
		reverse(a);
		printf("%s ", a);
	}
	
	printf("\n");
	
	return 0;
}
