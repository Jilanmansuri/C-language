#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int count=64;
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j<=i){
                count ++;
                printf("%c ",count);
            }
            else{
            count --;
            printf( "%c ",count);
        }
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

//         for (int j = 0; j < i; j++)
//         {
//             printf("%c ", 'A' + j);
//         }

//         for (int j = i - 2; j >= 0; j--)
//         {
//             printf("%c", 'A' + j);
//         }
//         printf("\n");
//     }

//     return 0;
// }