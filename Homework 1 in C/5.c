#include <stdio.h>
int main()
{
	int f;
	float c;
	printf("enter a  Fahrenheit: ");
	scanf("%d" ,&f);
	
	c=((f-32)*5)/9;
	
	printf("Celsius : %.2f" ,c);
	
    
    return 0;
}
