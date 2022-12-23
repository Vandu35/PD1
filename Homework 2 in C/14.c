#include <stdio.h>
#include <math.h>

int main()
{
    int i,n, num, a, b, t, f, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d:\n", n);

    for (num = 1; num <= n; num++)
    {
        a = num;
        t = 0;
        d = 0;

        while (a != 0)
        {
            a /= 10;
            d++;
        }

        a = num;

        while (a != 0)
        {
            b = a % 10;
            f = 1;
            for (int i = 1; i <= b; i++)
            {
                f *= i;
            }
            t += f;
            a /= 10;
        }

        if (t == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}

