#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;

    printf("Entre number :");
    scanf("%d" , &a);
    
   while (a>0){
   	b=a%2;
    a=a/2;
    printf("Tersten okuyunuz !%d\n" ,b);
   }
   




return 0;
}
