// #include <stdio.h>
//    int main()
//    {
//  int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n*2-1;j++){
//             if(i==1 || j==1 || i==n || j==n*2-1)
//             printf("%d",j);
//             else
//             printf(" ");
//     }
//     printf("\n");
//     }
//     return 0;
//    }





   
#include <stdio.h>

int main() {
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            
            if (i == 1 || i == m || j == 1 || j == n) {
                printf("%d",j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}