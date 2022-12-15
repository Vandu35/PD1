#include <stdio.h>
int main()
{
    int a, t=0, x, z;
    printf("Enter number = ");
    scanf("%d", &a);

    z = a % 10;
    
    while(a >= 10)
    {
        a = a / 10;
    }
    x = a;
    printf("first digit = %d and last digit = %d\n\n", x,z);
    return 0;
}
