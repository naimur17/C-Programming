#include<stdio.h>
int main()
{
    
    int i=5;
    // printf("After apply i++ we get %d \n",i++);
    //  printf("After apply i we get %d \n",i);

    // i++ ----> first apply then increment
    // ++i ----> first increment then apply

    //  printf("After apply ++i we get %d \n",++i);
    //   printf("After apply i we get %d \n",i);

      i+=100;
       printf("After apply i we get %d \n",i);

    return 0;
}