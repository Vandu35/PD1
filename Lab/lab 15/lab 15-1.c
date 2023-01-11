#include <stdio.h>
#define SIZE 5

void myprint(int c, int f){
	printf("\n1st MAX :%d\n" ,c);
	printf("2nd MAX :%d" ,f);	
}

void max2(int a[]){
	int c=a[0],b[2],i,f=a[0];
	for (i=0; i<10; i++){
		if (a[i] > c){
			c = a[i];
		}
		else{
			if (a[i] > f){
				f = a[i];
			}
		}
	}
	myprint(c,f);
}
int main(){
	int a[10],i;
	
	for(i=0; i<10; i++){
		printf("\nenter numbers :");
		scanf("%d" ,&a[i]);	
	}
	max2(a);
	return 0;
}
