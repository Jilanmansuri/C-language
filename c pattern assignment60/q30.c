// #include <stdio.h>

// int main() {
//     int i, j;
//     int n; 
//     scanf("%d",&n);

   
//     for(i = 1; i <= n; i++) {
        
//         for(j = 1; j <= n - i; j++)
//             printf(" ");

        
//         for(j = 0; j < i; j++)
//             printf("%c", 'A' + j);

       
//         for(j = i - 2; j >= 0; j--)
//             printf("%c", 'A' + j);

//         printf("\n");
//     }

    
//     for(i = n - 1; i >= 1; i--) {
        
//         for(j = 1; j <= n - i; j++)
//             printf(" ");

    
//         for(j = 0; j < i; j++)
//             printf("%c", 'A' + j);

        
//         for(j = i - 2; j >= 0; j--)
//             printf("%c", 'A' + j);

//         printf("\n");
//     }

//     return 0;
// }






// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int count=0;
//         for (int j = 1; j <= n; j++)
//         {
//             if((i+j)>n){
               
//                 printf("%c ",count+'@');
//             }
//             else{
            
//             printf(" ");
//         }
//     }
//         for(int j=1;j<n;j++){
//             if((i-j)>=j){
//                 printf("%c",count+'A');
//             }
//             else{
//                 printf(" ");
//             }
        
        
//     }
//         printf("\n");
//     }
//     return 0;




}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        for (int j = 1; j <= n; j++)
        {
            if((i+j)>n){
               
                printf("%c ",count+'@');
            }
            else{
            
            printf(" ");
        }
    }
        for(int j=1;j<n;j++){
            if((i-j)>=j){
                printf("%c",count+'A');
            }
            else{
                printf(" ");
            }
        
        
    }
        printf("\n");
    }
    return 0;
}


























// #include <stdio.h>

// int main() {
//     int i, j;
//     int n; 
//     scanf("%d",&n);

   
//     for(i = 1; i <= n; i++) {
//         int count =0;
        
//         for(j = 1; j <=2*n; j++){
//             if((j<=n) && (i+j)>=n+1)
//             {
//                 if(count<i)
//                 {count++;
//                     printf("%d",count);
//             }
//             else{
//                 count --;
//                 printf("%c",count);
//             }
//             else if()
//         }
//             printf(" ");

        
//         for(j = 0; j < i; j++)
//             printf("%c", 'A' + j);

//     }
    

//     return 0;
// }