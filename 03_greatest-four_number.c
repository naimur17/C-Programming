#include<stdio.h>
int main()
{
    
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<=100 &&  num>75 ){
        printf("the number is great from all\n");
    }
    else if(num<75 && num>50) {
        printf("the number is 2nd great\n");
    }
    else if(num<50 &&  num>25) {
        printf("the number is 3rd great\n");
    }
    else if(num<25 &&  num>0) {
        printf("the number is lowest great\n");
    }
    else{
        printf("Nothing of all \n");
    }



    
    return 0;
}