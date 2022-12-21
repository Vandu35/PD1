#include <stdio.h>

float yuzde(int a, int b){
	
	
float result = (a * b)/100;

return result;
}

int main()
{
	int a,b,c;
	float result;
	printf("sayýyý girin :" ,a);
	scanf("%d" ,&a);
	printf("yüzdesini girin : :" ,b);
	
	scanf("%d" ,&b);
	
	
	result = yuzde(a,b);
	printf("%f" ,result);
	
	
	
	return 0;
}




