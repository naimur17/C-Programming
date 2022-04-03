#include<stdio.h>
int main()
{
    
    int i=1,n=5,fac=1;
    
    while(i<=n){
        i++;
        fac*=i;

        printf("%d is %d \n",i,fac);
    }
    return 0;
 }