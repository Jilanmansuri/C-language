#include <stdio.h>

int main()
{
   
   
   int n;
   scanf("%d",&n);
   for(int i=1;i<=2*n-1;i++){
       int count=0;
       for(int j=1;j<=2*n-1;j++){
           if(i+j>=n+1 && i-j<=n-1 && j-i<=n-1 && i+j<=3*n-1)
               if(j<=n)
                   printf("%d",++count);
               
               else
                   printf("%d",--count);
               
               else{
                   printf(" ");
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
//     printf("Enter n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int space = 1; space <= n - i; space++)
//         {
//             printf("  ");
//         }

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

//     for (int i = n - 1; i >= 1; i--)
//     {

//         for (int space = 1; space <= n - i; space++)
//         {
//             printf("  ");
//         }

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