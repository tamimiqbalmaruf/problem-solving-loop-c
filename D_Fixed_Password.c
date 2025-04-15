#include <stdio.h>

int main()
{
    int pass;
    scanf("%d", &pass);

    while (pass != 1999)
    {
        printf("Wrong\n");
        scanf("%d", &pass);
    }
    
    printf("Correct");

    return 0;
};