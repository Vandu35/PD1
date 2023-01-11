//Write a program that transfers the numbers given until -1 is entered from the keyboard, and
//then prints the square of each element to the screen. 

#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0,a[10],p;
	
	for(i = 0; i < 10; i++){
		printf("\n%d . sayiyi girniz :" ,i + 1);
		scanf("%d"  ,&a[i]);
		if (a[i] != -1){
			p = pow(a[i],2);
			printf("\n%d\n" ,p);
			
		}
		else{
			a[i] = 0;
			return 0;
		}
		
	}

	return 0;
}
