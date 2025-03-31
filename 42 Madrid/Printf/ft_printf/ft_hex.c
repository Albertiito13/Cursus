
#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += ft_putnbr_unsigned(n / 10);
    count += ft_putchar((n % 10) + '0');
    return (count);
}

int ft_puthex(unsigned long n, int uppercase)
{
    int count;
    char *base;

    count = 0;
    if (uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if (n >= 16)
        count += ft_puthex(n / 16, uppercase);
    count += ft_putchar(base[n % 16]);
    return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	count = 0;
	addr = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	count += ft_puthex(addr, 0);
	return (count);
}
