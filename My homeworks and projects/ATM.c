#include <stdio.h>
int main()
{
	int a,b=1000,c,d,e;
	
	printf("��lemi Se�iniz\n 1.Bakiye G�sterme\n 2.Para �ekme\n 3.Para Yat�rma\n 4.Havale\n ");
	scanf("%d" ,&a);
	
	
	switch(a) {
		case 1 : 
		printf("Bakiyeniz :%d" ,b);
		break;
		
		case 2 :
			printf("�ekmek �stedi�iniz Tutar� Girin :");
			scanf("%d" ,&c);
			b=b-c;
			printf("Kalan Tutar :%d\n" ,b);
			printf("G�nderilen Tutar :%d" ,c);
			break;
			
		case 3 :
			printf(	"Yat�rmak �stedi�iniz Tutar� Girin :");
			scanf("%d" ,&d);
			b=b+d;
			printf("Bakiyeniz :%d" ,b);

			break;
			
		case 4 :
			printf("Bakiyeniz :%d\n" ,b);
			printf("Havale yapmak iste�iniz Miktar� Girin :");
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
