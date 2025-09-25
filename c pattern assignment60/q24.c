

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j<=i){
                count ++;
                printf("%d ",count);
            }
            else{
            count --;
            printf( "%d ",count);
        }
    }

        printf("\n");
    }
    return 0;
}









// #include <stdio.h>
// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
        
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }

       
//         for (int j = i - 1; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }