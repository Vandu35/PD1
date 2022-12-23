#include <stdio.h>
#include <math.h>

int main()
{
    int num, a, b, t = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;

    while (a != 0)
    {
        a /= 10;
        ++n;
    }

    a = num;

    while (a != 0)
    {
        b = a % 10;
        t += pow(b, n);
        a /= 10;
    }

    if (t == num)
    {
        printf("%d is a strong number\n", num);
    }
    else
    {
        printf("%d is not a strong number\n", num);
    }

    return 0;
}

