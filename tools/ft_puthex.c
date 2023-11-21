#include "tools.h"

int ft_puthex(int nb, char p)
{
    int count;
    char *base;

    count = 0;
    if (p == 'x')
        base = "0123456789abcdef";
    if (p == 'X')
        base = "0123456789ABCDEF";
    if (nb >= 16)
        count += ft_puthex(nb / 16, p);
    count += ft_putchar(base[nb % 16]);
    return (count);
}