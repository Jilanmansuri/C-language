#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mid = n / 2 +1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || (i == mid && i==j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); 
    }
    return 0;
}