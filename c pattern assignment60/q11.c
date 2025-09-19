 #include <stdio.h>
   int main()
   {
int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       int count=1;

       for(int j=1;j<=n;j++){
       if(i+j<=n)
       printf(" ");
       else
       printf("%d",count++);}
       printf("\n");
    }
    return 0;
   }
