



#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {  
            if(i<=j)
             printf("*"); 
            else
            printf(" ");
        }

        printf("\n");
    }
    return 0;











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
    
    //         for (int k = 0; k < n - a; k++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
    
}