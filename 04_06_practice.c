#include<stdio.h>

int main()
{
    int i=1, sum=0,n=10;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    printf("The sum is: %d\n",sum);
    
    return 0;
}