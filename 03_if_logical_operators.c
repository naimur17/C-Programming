#include<stdio.h>
int main()
{
    
    int age;
int vippass=0;
vippass=1;

    printf("Enter the Age\n");
    scanf("%d",&age);

    if((age<=70 && age>=18) || !(vippass==1) ) {
        printf("Age above 18 and below 70,can drive\n");

    }
    else{
        printf("Cannot drive");
    }
    return 0;
}