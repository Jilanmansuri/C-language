#include <stdio.h>
int main()
{

    int n, j;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if((j*i)<10)
            printf("  %d",j * i);
            else
            printf(" %d", j * i);
        }

        printf("\n");
    }

    return 0;
}