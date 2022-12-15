#include <stdio.h>

int main()
{
    int i, a, b, min, t=1;

    
    printf("Enter any two numbers : ");
    scanf("%d%d", &a, &b);

    
    min = (a<b) ? a : b;

    for(i=1; i<=min; i++)
    {
        
        if(a%i==0 && b%i==0)
        {
            t = i;
        }
    }

    printf("ebob :%d\n" ,t);

    return 0;
}
