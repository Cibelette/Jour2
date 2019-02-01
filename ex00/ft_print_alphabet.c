#include <stdio.h>
#include "function.h"

int main(void)
{
    ft_print_alphabet();
    return (0);
}

void ft_print_alphabet(void)
{
    char letter;
    letter = 'A';
     while (letter <= 'Z')
     {
         putchar(letter);
         letter++;
     }
}