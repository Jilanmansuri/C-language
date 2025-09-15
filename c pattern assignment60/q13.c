 #include <stdio.h>
   int main()
   {
int n;
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
    return 0;
   }
