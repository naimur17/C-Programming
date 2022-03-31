#include <stdio.h>
int main()
{

    int x = 2;
    int y = 3;
    printf("the value of 3*x-8*y %d\n",3*x-8*y);
     printf("the value of 8*y/3*x %d\n",8*y/3*x);
    
    // 8*y/3*x=24/6 will give the wrong ans
    // 24/3*2
    // 8*2=16
    printf("the value of 8*y/3*x %d\n",(8*y)/(3*x));
    // this is exact for paranthesis
    return 0;
}