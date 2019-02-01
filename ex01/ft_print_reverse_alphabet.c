#include <stdio.h>
#include "function.h"

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}

void ft_print_reverse_alphabet(void)
{
    char letter;
    letter ='Z';
     while (letter >='A')
     {
         putchar (letter);
         letter--;
     }
}