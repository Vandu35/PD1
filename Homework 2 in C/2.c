#include <stdio.h>
#include <math.h>


int main()
{
	double a,b,c,D,x1,x2,x3;
	
	printf("Enter the a section :");
	scanf("%lf" ,&a);
	printf("Enter the b section :");
	scanf("%lf" ,&b);
	printf("Enter the c section :");
	scanf("%lf" ,&c);
	
	D = b * b - (4 * a* c);
	
	if (D < 0){
		printf("No roots ");
	} 
	else if (D == 0) {
		x3 = -b / 2 * a;
		printf("Only onr root exist :");
	}
	else {
		x1 = -(-b + sqrt(D)) / (2 * a);
   		x2 = -(-b - sqrt(D)) / (2 * a);
   		printf(" First Root :%lf\n" ,x1);
   		printf(" Second Root :%lf" ,x2);
		
	}
	
return 0;		
}
	
	


