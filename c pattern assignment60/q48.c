#include <stdio.h>
   int main()
   {

    int n;
    int count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           
            printf(" %d",count);
           
              count++; 
            }
        printf("\n");
    }
    return 0;
   }










// #include <stdio.h>
//    int main()
//    {

//     int n;
//     int count=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(count<=9)
//             printf("  %d",count);
//             else
//             printf(" %d",count);
        
       
//        count++; }
//         printf("\n");
//     }
//     return 0;
//    }