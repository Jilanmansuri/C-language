#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int star = 0; star < n - i; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}