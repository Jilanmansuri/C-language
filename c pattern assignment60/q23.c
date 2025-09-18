#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int a = 0; a <= n; a++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("  ");
        }

        for (int k = 0; k <= n - a; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}