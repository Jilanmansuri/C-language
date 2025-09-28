# include<stdio.h>
int main(){
    int n;
printf("Enter the number\n");
scanf("%d",&n);
int count=0;
for(int i=1; i<=n; i++){
    for(int k=1; k<=n-i; k++){
        printf("   ");
    }

    for(int j=1; j<=2*i-1; j++){
        count=count+1;
    printf("%2d ",count);
    }
            printf("\n");
    }



return 0;
}