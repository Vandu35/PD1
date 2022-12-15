#include <stdio.h>
int main ()
{
	int a,b,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0,i;
	
	printf("enter a number :");
	scanf("%d", &a);
	
	while (a>0){
		b=a%10;
		printf("%d\n" ,b);
		switch (b) {
		case 0 :a0++;
		break;
		case 1 :a1++;
		break;
		case 2 :a2++;
		break;
		case 3 :a3++;
		break;
		case 4 :a4++;
		break;
		case 5 :a5++;
		break;
		case 6 :a6++;
		break;
		case 7 :a7++;
		break;
		case 8 :a8++;
		break;
		case 9 :a9++;
		break;
		
		
	
		}
		a=a/10;
	}
	printf("0 dan %d tane var\n 1 den %d tane var\n  2 den %d tane var\n  3 ten %d tane var\n 4 ten %d tane var",a0,a1,a2,a3,a4);
		printf("\n5 ten %d tane var\n 6 dan %d tane var\n  7 den %d tane var\n  8 den %d tane var\n  9 dan %d tane var",a5,a6,a7,a8,a9);

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


