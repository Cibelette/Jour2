#include <stdio.h>
#include "function.h"
int main(void)
{
    ft_print_comb();
    return (0);
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    char d;
 
    a = '0';
    b = '0';
    c = '0';
    d = '0';

while (a <='9' || b <='9')
{
    while (c<='9' || d<='9')
    {
        d = '0';
        while (d<='9')
        {
            putchar(a);
            putchar(b);
            putchar(c);
            putchar(d);
            putchar(',');
            d++;
        }
        c++;
        
    }

  while (b<='9')
  {
      c = '0';
      d = '2';
      while (c<='9' || d<='9')
      {
        d = '0';
        while (d<='9')
        {
            putchar(a);
            putchar(b);
            putchar(c);
            putchar(d);
            putchar(',');
            d++;
        }
        c++;
        
       }
      b++;
    }
    a++;
}
}

 