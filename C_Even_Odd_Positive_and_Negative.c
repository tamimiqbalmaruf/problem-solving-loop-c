#include <stdio.h>

int main()
{
    int n, x, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }

        if (x > 0)
        {
            pos = pos + 1;
        }
        else if (x < 0)
        {
            neg = neg + 1;
        }
    };

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d", neg);

    return 0;
};