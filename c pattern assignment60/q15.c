#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        

        for (int j = 0; j <= 2*i-1; j++)
        {
            if (j>= n-i+1)
            {
                 printf(" %c",'A'+j);
                
            }
            else
            {  
                printf(" ");
            }
        }
    
            
            
            printf("\n");
        }
        
        return 0;
    }




//  #include <stdio.h>
//    int main()
//    {
//  int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++){
//             printf(" ");
//         }
//         for (int k = 0; k <2*i+1; k++) {
//             printf("%c",'A'+k);
//         }
//         printf("\n");

//     }
//     return 0;
//    }
