#include <stdio.h>
int main()
{
    int i=0, n = 7, fac = 1;

    for (i=1 ; i <= n; i++)
    {

        fac*= i;
        printf("%d is %d \n", i, fac);
    }

    return 0;
}