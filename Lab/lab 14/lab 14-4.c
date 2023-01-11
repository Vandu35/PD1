#include <stdio.h>
void agt(int a[7], int c){
	int i,j,temp,k,t;
	for(i=0; i<6; i++){
		if(c > a[i] && c < a[i+1]){
			t=i;
			for(k=6; k>i; k--){
			a[k+1] = a[k];				
			}
			
		}
		
	}
	
	for(j=0; j<7; j++){
		printf("\n%d" ,a[j]);
	}
	
}
int main(){
	int i,c,a[7];
	for(i=0; i<6; i++){
		printf("\nenter a number : ");
		scanf("%d" ,&a[i]);
	}
	
	printf("\nplace a number :");
	scanf("%d" ,&c);
	
	agt(a,c);
	
	return 0;
}
