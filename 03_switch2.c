#include<stdio.h>
int main()
{
    

    int marks;
    
    printf("Enter the number \n");
    scanf("%d",&marks);

    switch(marks/10){
        case 10:
        case 9:
        printf("The grade is A");
        break;
         case 8:
        printf("The grade is B");
        break;
         case 7:
        printf("The grade is C");
        break;
         case 6:
        printf("The grade is D");
        break;
         default:
        printf("The grade is F");
        break;

    }
    return 0;
}