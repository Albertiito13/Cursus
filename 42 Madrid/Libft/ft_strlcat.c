
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dlen;
    size_t  slen;
    size_t  i;
    size_t  j;

    dlen = 0;
    while (dst[dlen] && dlen < dstsize)
        dlen++;
    slen = 0;
    while (src[slen])
        slen++;
    if (dlen == dstsize)
        return (dstsize + slen);
    i = dlen;
    j = 0;
    while (src[j] && i < dstsize - 1)
        dst[i++] = src[j++];
    if (i < dstsize)
        dst[i] = '\0';
    return (dlen + slen);
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dest1[50] = "Hello";
    char src1[] = " World";
    size_t ret1;

    // Caso 1: Buffer suficientemente grande
    printf("Caso 1:\n");
    printf("dest1 antes: \"%s\"\n", dest1);
    ret1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("dest1 después: \"%s\"\n", dest1);
    printf("Valor retornado (longitud total teórica): %zu\n\n", ret1);

    // Caso 2: Buffer pequeño que provoca truncamiento
    char dest2[10] = "Hi";
    char src2[] = " there, friend!";
    size_t ret2;
    printf("Caso 2:\n");
    printf("dest2 antes: \"%s\"\n", dest2);
    ret2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("dest2 después: \"%s\"\n", dest2);
    printf("Valor retornado (longitud total teórica): %zu\n\n", ret2);

    // Caso 3: dstsize es menor o igual a la longitud inicial de dest
    char dest3[15] = "Testing";
    char src3[] = "12345";
    size_t ret3;
    printf("Caso 3:\n");
    printf("dest3 antes: \"%s\"\n", dest3);
    ret3 = ft_strlcat(dest3, src3, 4);  // dstsize menor que la longitud de "Testing"
    printf("dest3 después (sin modificación esperada): \"%s\"\n", dest3);
    printf("Valor retornado: %zu\n", ret3);

    return 0;
}
