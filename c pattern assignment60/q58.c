#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1) {
                printf("%d", j );
            } 
            
            else if (j == n / 2 + 1) {
                printf("%d", n / 2 + 1 );
            } 
            
            else {
               
                printf(" ");
            }
               
        }
        printf("\n");
    }

    return 0;
}









// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     int mid = n / 2+1;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == mid) {
//                 printf("%d", j );
//             } 
            
//             else if (j == mid) {
//                 printf("%d", mid );
//             } 
            
//             else {
               
//                 printf(" ");
//             }
               
//         }
//         printf("\n");
//     }

//     return 0;
// }