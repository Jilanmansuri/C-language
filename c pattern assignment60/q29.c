#include <stdio.h>
   int main()
   {
int n,i,j,star;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
         for (int star = 1; star <=2*i-1; star++) {
            printf("*");
        }
        printf("\n");

    }

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int star = 1; star <= 2 * (n - i) - 1; star++)
        {

            printf("*");
        }
        printf("\n");
    }


    return 0;
   }
