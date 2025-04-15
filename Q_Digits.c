#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int reNum = n;

        if (reNum == 0)
        {
            printf("%d", reNum);
        }

        while (reNum != 0)
        {
            printf("%d ", reNum % 10);
            reNum = reNum / 10;
        }
        printf("\n");
    };

    return 0;
};