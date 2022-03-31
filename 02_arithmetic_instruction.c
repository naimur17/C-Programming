#include <stdio.h>
#include <math.h>
int main()
{

    int a = 4;
    int b = 8;
    int z;
    z = a * b; // legal
    // a*b=z; //illegal
    printf("the value of z is %d\n", z);
    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value of a/b is %d\n", a / b);

    printf("5 divided by 2 gets reminder %d\n", 5 % 2);
    printf("-5 divided by 2 gets reminder %d\n", -5 % 2);
    printf("5 divided by -2 gets reminder %d\n", 5 % -2);

    // No operator is assumed to be prersent
    printf("the multiplication of 4*5 is %d\n", 4 * 5);
    // printf("the multiplication of 4*5 is %d\n",4.5); -> will not return 20
    // printf("the multiplication of 4*5 is %d\n",(4)(5)); -> will not return 20

    // there is no operator to perform exponentiation in C
    // printf("the equation of 4^5 is %d\n",4^5);-> will not return exact value
    printf(" 4 to the power 5 is %f\n", pow(4, 5));

    printf("the value of 6+5 is %d\n",6+5);
    printf("the value of 6+5.6 is %f\n",6+5.6);
    printf("the value of 6.1+5.6 is %f\n",6.1+5.6);

    printf("the value of 5/2 is %d\n",5/2);
    printf("the value of 3.0/9 is %f\n",3.0/9);


    return 0;
}