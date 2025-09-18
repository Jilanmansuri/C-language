#include <stdio.h>
   int main()
   {
int n;
    scanf("%d",&n);
    int count=0;
    for(int a=1;a<=n;a++){
        for(int j=1;j<=a;j++){
            printf("%c ",count+'A');
            count++;
        }
        printf("\n");
    }
    return 0;
   }