
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
            if(i>j)
            printf(" ");
            else
            printf("%d",count++);
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
    //     for (int i = 0; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             printf(" ");
    //         }
    
    //         for (int k = 1; k <= n - i; k++)
    //         {
    //             printf("%d",k);
    //         }
    //         printf("\n");
    //     }
    
    //     return 0;
    // }
    
