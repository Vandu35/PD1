#include<stdio.h>

int main(){
	
	
	int vize, final, not;	

		printf("Vize notu: ");
		scanf("%d", &vize);
	
		printf("Final notu: ");
		scanf("%d", &final);
	
	not = vize*0.40 + final*0.60;
		
		if( not < 50)
			printf("Kaldi");
		else
			printf("Gecti");
			
		return 0;
	
	
}
