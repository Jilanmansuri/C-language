//  #include <stdio.h>
//    int main()
//    {
// int n;
//     scanf("%d", &n);
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = 1; j <= n-i; j++){
//     //         printf(" ");
//     //     }
//     //      for (int star = 1; star <=2*i-1; star++) {
//     //         printf("*");
//     //     }
//     //     printf("\n");

//     // }
//     return 0;
//     }

   

#include <stdio.h>
   int main()
   {
int n;
    scanf("%d",&n);
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=n-1){
                printf("*");}
                else{
                    printf(" ");
                }}
                for(int j=0;j<n-1;j++){
                    if((i-1)>=j){
                        printf("*");}
                        else{
                            printf(" ");
                        }
                    }
                
                    printf("\n");
            }
        
    
    return 0;
   }








    // for (int i = 1; i <= n; i++) {
    //     if()
    //     printf(" ");
    //     else
    //     printf("*");
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }