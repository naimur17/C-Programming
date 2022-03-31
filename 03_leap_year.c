#include<stdio.h>
int main()
{
    
    int year; //leap=0;
    // leap=1;
    printf("Enter the year\n");
    scanf("%d",&year);

    if (year% 400==0 ){
        printf("%d This is leap year \n",year);

    }
    else if(year% 100==0) {
        printf(" %d Not leap year\n");
    }
    else if(year% 4==0){
        printf("%d This is leap year \n");
    }
    else{
        printf("%d Not leap year\n");
    }
    return 0;
}