#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    int x,z,n;

    
    printf("Enter any number: ");
    scanf("%d", &a);

    
    z  = a % 10;

    
    n= (int)log10(a); 

    
    x= (int)(a / pow(10, n)); 

    b  = z;
    b *= (int) pow(10, n);
    b += a % ((int) pow(10, n));
    b -= z;
    b += x;

    printf("Original number = %d\n", a);
    printf("swapped number: %d\n", b);

    return 0;
}
