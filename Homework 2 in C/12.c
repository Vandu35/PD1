#include <stdio.h>

int main()
{
    int n, num, i, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d:\n", n);

    for (num = 2; num <= n; num++)
    {
        sum = 0;

        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}

