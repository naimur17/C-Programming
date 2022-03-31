#include<stdio.h>
int main()
{
    
    int age;
    printf("Enter the age \n");
    scanf("%d",&age);

    if(age>=90){
        printf( "age is greater then 90,Cannot Drive");
    }
    else{
        printf("Can Drive\n");
    }




    if(age==50){
        printf("Half century\n");
    }
   

    return 0;
}