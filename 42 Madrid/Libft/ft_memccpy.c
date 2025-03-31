
#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
            return ((void *)(d + i +1));
        i++;
    }
    return (NULL);
}
