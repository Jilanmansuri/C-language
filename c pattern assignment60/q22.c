
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=1;
        for (int j = 1; j <= n; j++)
        {
            if(i<=j)
            printf("%d",count++);
            else
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}




// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int a = 0; a <= n; a++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             printf(" ");
//         }

//         for (int k = 1; k <= n - a; k++)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }