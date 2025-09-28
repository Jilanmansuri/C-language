
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=65;
        for (int j = 1; j <= n; j++)
        {
            if(i>j)
            printf(" ");
            else
            printf("%c",count++);
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }

//         for (int k = 0; k <= n - i; k++)
//         {
//             printf("%c",'A'+k);
//         }
//         printf("\n");
//     }

//     return 0;
// }