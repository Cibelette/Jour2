#include <stdio.h>
#include "function.h"


int main(void)
{
    int n;

    ft_is_negative(n);
    return (0);
}

void ft_is_negative(int n)
{
    n=3;

    if(n>=0)
    {
        putchar ('P');
    }

    if(n<=0)
    {
        putchar('N');
    }
}