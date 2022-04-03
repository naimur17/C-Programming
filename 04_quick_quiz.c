#include<stdio.h>
int main()
{
    
    int i=0;
    printf("Enter the number\n");
    scanf("%d",&i);
    while(i<=20 && i>=10){
        
        printf("The natural number is %d\n",i);
        i++;
    }
    return 0;
}