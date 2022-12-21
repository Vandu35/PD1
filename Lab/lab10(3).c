#include <stdio.h>
int main ()
{
	int a,n,i=0,j,k=-1;
	int x[5];
	
	printf("Bir Sayi Giriniz :");
	scanf("%d" ,&n);
	
	while (n > 0){
	
	a = n % 10;
	x[i] = a;
	n = n / 10;
	i = i + 1;
	}
	
	for (j = i - 1; j >= 0; j--){
		k++;
		printf("\na[%d] = %d" ,k,x[j]);
		}
		
		
	
	
	return 0;
}
