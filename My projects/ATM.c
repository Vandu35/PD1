#include <stdio.h>
int main()
{
	int a,b=1000,c,d,e;
	
	printf("Ýþlemi Seçiniz\n 1.Bakiye Gösterme\n 2.Para Çekme\n 3.Para Yatýrma\n 4.Havale\n ");
	scanf("%d" ,&a);
	
	
	switch(a) {
		case 1 : 
		printf("Bakiyeniz :%d" ,b);
		break;
		
		case 2 :
			printf("Çekmek Ýstediðiniz Tutarý Girin :");
			scanf("%d" ,&c);
			b=b-c;
			printf("Kalan Tutar :%d\n" ,b);
			printf("Gönderilen Tutar :%d" ,c);
			break;
			
		case 3 :
			printf(	"Yatýrmak Ýstediðiniz Tutarý Girin :");
			scanf("%d" ,&d);
			b=b+d;
			printf("Bakiyeniz :%d" ,b);

			break;
			
		case 4 :
			printf("Bakiyeniz :%d\n" ,b);
			printf("Havale yapmak isteðiniz Miktarý Girin :");
			scanf("%d" ,&e);
			b=b-e;
			printf("Havale Edilen Tutar :%d\n" ,e);
			printf("Kalan :%d" ,b);
			break;
			
			default:
			
			return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
