#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }else if (n <= 1)
        {
            printf("%d", -1);
        }
        
    }
    return 0;
};