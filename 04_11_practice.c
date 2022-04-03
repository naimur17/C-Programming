#include <stdio.h>
int main()
{

    int n = 4, i, prime = 1;
    printf("enter the number-->  ");
    scanf("%d", &n);
    while (i = 2, i < n)
    {
        i++;
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf(" this is not a prime number ");
    }
    else
    {
        printf("this is a prime number \n ");
    }

    return 0;
}