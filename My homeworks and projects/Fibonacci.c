#include <stdio.h>
int main()
{
	int i,b;
	float a[5];
	
	for (i=0; i<5; i++){
		printf("Bir sayi Giriniz :\n");
		scanf("%f" ,&a[i]);
	}
	
	printf("istek :\n");
	scanf("%d" ,&b);
	printf("%f" ,a[b]);
	
	
	
	
	
	return 0;
}
