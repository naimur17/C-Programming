#include<stdio.h>
int main()
{
    
    int i,n=10,mul=1;
    // printf("Ener the number \n");
    // scanf("%d",&n);
    for(i=1;i<=n;i++){
        mul *=i;
        // printf("n X %d = %d",i,n*i);
    }
    printf("%d",mul);
    return 0;
}