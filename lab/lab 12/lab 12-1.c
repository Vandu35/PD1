//Write C Program to Concatenate Two Strings.
#include <stdio.h>
#include <string.h>
int main(){
	int d,f,i,j,k,y;
	char a[20],b[20],c[20];
	
	printf("enter first string :");
	scanf("%s" ,a);
	
	printf("enter second string :");
	scanf("%s" ,b);
	
	d = strlen(a);
	f = strlen(b);
	y = d+f;
	
	for(i=0; i<d; i++){
		c[i] = a[i];
	} 
	for (j=d,k=0; j<y,k<f; j++,k++){
		c[j] = b[k];
		
	}
	c[y] = '\0';
	printf("%s" ,c);
	
	return 0;
}
