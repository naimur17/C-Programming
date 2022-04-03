#include <stdio.h>
int main()
{

    int i, n = 8, sum = 0;

    for (i = 1; i <= 10; i++)
    {

        printf("the 8 X %d is = %d \n", i, 8 * i);

        sum += 8 * i;
    }
    printf("the sum of table is = %d", sum);

    return 0;
}