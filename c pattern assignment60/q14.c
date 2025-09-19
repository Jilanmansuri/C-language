//  #include <stdio.h>
//    int main()
//    {
// int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++){
//             printf("  ");
//         }                    
//          for (int k = 1; k <=2*i-1; k++) {
//             printf("%d ",k);
//         }
//         printf("\n");

//     }
//     return 0;
//    }









#include <stdio.h>
   int main()
   {
int n;
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i+j>=n){
                printf("%d",2*i-1);}
                else{
                    printf(" ");
                }}
                for(int j=1;j<=n;j++){
                    if(i>=j){
                        printf("%d",2*(n-i));}
                        else{
                            printf(" ");
                        }
                    }
                
                    printf("\n");
            }
        
    
    return 0;
   }
