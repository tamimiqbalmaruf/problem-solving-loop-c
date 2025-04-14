#include <stdio.h>

int main()
{
    int x = 10;
    x++;
    int y = ++x;

    printf("%d %d", x, y);
    return 0;
};