#include <stdio.h>
#include "function.h"

int main(void)
{
    ft_print_numbers();
    return (0);
}

void ft_print_numbers(void)
{
    char number;
    number = '1';
     while (number <= '9')
     {
         putchar(number);
         number++;
     }
}