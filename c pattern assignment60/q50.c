#include <stdio.h>
   int main()
   {

    int n;
    int count=15;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(count>=10)
            printf("%d ",count);
            else
            printf("%d  ",count);

        
       
        count=count-1;}
        printf("\n");
    }
    return 0;
   }