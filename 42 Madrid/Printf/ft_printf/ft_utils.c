
#include "ft_printf.h"
int ft_putchar(char c)
{
    return write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return ft_putstr("(null)");
    while (*str)
        ft_putchar(*str++);
    return (i);
}

int ft_putnbr(int n)
{
    int count;

    count = 0;
    if (n == -2147483648)
        return ft_putstr("-2147483648");
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    count += ft_putchar((n % 10) + '0');
    return (count);
}

