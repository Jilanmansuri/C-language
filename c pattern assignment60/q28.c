#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < 2 * (n - a) - 1; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }

    return 0;
}