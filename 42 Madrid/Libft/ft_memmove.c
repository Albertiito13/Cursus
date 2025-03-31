
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;

    if (!dst && !src)
        return (dst);
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (d < s)
    {
        i = 0;
        while ( i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return (dst);
}
