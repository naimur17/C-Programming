#include <stdio.h>
int main()
{

    int a;
    int b = a;
    int v = 3 ^ 3;
    char dt = '21 dec 2022';
    float d = 3.0 / 8 - 2;
    printf("%f", d);
    printf("%d", v);

    // q3-> write a program whether a number is divisible byn 97 or not?
    int num;


    printf("Enter the number \n");

    scanf("%d", &num);
    printf("divisibility of number: %d\n", num%97);


// q4 3*x/y-z+k
    int x=2,y=3,z=3,k=1;
    int result = 3*x/y-z+k+34;
    // 6/3-3+1
    // 2-3+1
    // 0
    printf("%d",result);


    return 0;
}