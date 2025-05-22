/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcamac <albcamac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:44:58 by elengarc          #+#    #+#             */
/*   Updated: 2025/05/19 18:23:31 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/* int	main(void)
{
	int	ret1, ret2;
	char	c = 'A';
	char	null_c = '\0';
	int		num = 42;
	char	*str = "Hola 42";
	char	*null_str = NULL;
	void	*p = &num;
	void	*null_p = NULL;

	printf("\n--- STRING NORMAL ---\n");
	ret1 = printf("O: Hola soy Alberto!\n");
	ret2 = ft_printf("P: Hola soy Alberto!\n");
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %c
	printf("--- CHAR COMO ARGUMENTO ---\n");
	ret1 = printf("O: char = %c\n", c);
	ret2 = ft_printf("P: char = %c\n", c);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("O: null char = %c\n", null_c);
	ret2 = ft_printf("P: null char = %c\n", null_c);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %d
	printf("--- DECIMAL (d) COMO ARGUMENTO ---\n");
	ret1 = printf("O: maxint = %d, minint = %d, 0 = %d, neg = %d, pos = %d\n", 2147483647 , (int)-2147483648 , 0, -123, 123);
	ret2 = ft_printf("P: maxint = %d, minint = %d, 0 = %d, neg = %d, pos = %d\n", 2147483647, (int)-2147483648, 0, -123, 123);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %i
	printf("--- DECIMAL (i) COMO ARGUMENTO ---\n");
	ret1 = printf("O: maxint %i, minint = %i, 0 = %i, neg = %i, pos = %i\n", 2147483647, (int)-2147483648, 0, -123, 123);
	ret2 = ft_printf("P: maxint %i, minint = %i, 0 = %i, neg = %i, pos = %i\n", 2147483647, (int)-2147483648, 0, -123, 123);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %s
	printf("--- STRING COMO ARGUMENTO ---\n");
	ret1 = printf("O: str = %s, null = %s\n", str, null_str);
	ret2 = ft_printf("P: str = %s, null = %s\n", str, null_str);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %p
	printf("--- PUNTERI COMO ARGUMENTO ---\n");
	ret1 = printf("O: ptr = %p, null = %p\n", p, null_p);
	ret2 = ft_printf("P: ptr = %p, null = %p\n", p, null_p);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %%
	printf("--- IMPRIMIR SIGNO PORCENTAJE ---\n");
	ret1 = printf("O: Porcentaje = %%\n");
	ret2 = ft_printf("P: Porcentaje = %%\n");
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %u
	printf("--- UNSIGNED COMO ARGUMENTO ---\n");
	ret1 = printf("O: maxint = %u, 0 = %u, pos = %u, neg = %u\n", 2147483647, 0, 123, -123); // El ultimo no se como se va a comportar
	ret2 = ft_printf("P: maxint = %u, 0 = %u, pos = %u, neg = %u\n", 2147483647, 0, 123, -123); // El ultimo no sé como se va a comportar
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %x
	printf("--- NÚMERO A HEXADECIMAL (MINUSCULA) ---\n");
	ret1 = printf("O: x = %x, maxint = %x, 0 = %x, neg = %x\n", 305441741, 147483647, 0, -123); // El último no sé como se va a comportar
	ret2 = ft_printf("P: x = %x, maxint = %x, 0 = %x, neg = %x\n", 305441741, 147483647, 0, -123);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// %X
	printf("--- NUMERO A HEXADECIMAL (MAYUSCULA) ---\n");
	ret1 = printf("O: x = %X, maxint = %X, 0 = %X, neg = %X\n", 305441741, 147483647, 0, -123); // El último no sé como se va a comportar
	ret2 = ft_printf("P: x = %X, maxint = %X, 0 = %X, neg = %X\n", 305441741, 147483647, 0, -123);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// Dos argumentos seguidos
	printf("--- ARGUMENTOS SEGUIDOS  ---\n");
	ret1 = printf("O: %c%d\n", 'a', 100);
	ret2 = ft_printf("P: %c%d\n", 'a', 100);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	// Varios argumentos
	printf("--- VARIOS ARGUMENTOS ---\n");
	ret1 = printf("O: cadena %s numero %d hexadecimal %x caracter %c\n", "Hola", 123, 255, 'X');
	ret2 = ft_printf("P: cadena %s numero %d hexadecimal %x caracter %c\n", "Hola", 123, 255, 'X');
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);


	// Dos punteros nulos seguidos
	printf("--- Dos punteros nulos seguidos ---\n");
	ret1 = printf(" %p %p ", NULL, NULL);
	ret2 = ft_printf(" %p %p ", NULL, NULL);
	printf("Return printf: %d | Return ft_printf: %d\n\n", ret1, ret2);

	return (0);
}
 */

#define INT_MAX 2147483647
#define INT_MIN -2147483648


int	main(void)
{
	int x = 42;
	int p1;
	int p2;
	p1 = ft_printf("HOla que tal1 %% %s %i %x %p %u\n%", "Yo fran", 345, 10, (void*)&x, -3, 7);
	write(1, "\n", 1);
	p2 = printf("HOla que tal2 %% %s %i %x %p %u\n%", "Yo fran", 345, 10, (void*)&x, -3, 7);
	write(1, "\n", 1);
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	write(1, "\n", 1);
	p1 = ft_printf("HOla que tal1 %% %c %s %i %i %i %u %X %X %d %d %x %X %p %p %u %j \n", 'c', "Yo fran", 345, 0, INT_MIN, 0, INT_MIN - 1009008907, INT_MAX + 34904309, -32, INT_MAX, 10, 10, (void*)&x, NULL, 5);
	write(1, "\n", 1);
	p2 = printf("HOla que tal2 %% %c %s %i %i %i %u %X %X %d %d %x %X %p %p %u %j \n", 'c', "Yo fran", 345, 0, INT_MIN, 0, INT_MIN - 1009008907, INT_MAX + 34904309, -32, INT_MAX, 10, 10, (void*)&x, NULL, 5);
	write(1, "\n", 1);
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	write(1, "\n", 1);
	p1 = ft_printf("Mio1 %%%", 89);
	write(1, "\n", 1);
	p2 = printf("Mio2 %%%", 89);
	printf("\n");
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);

	p1 = ft_printf("%s\n", NULL);
	write(1, "\n", 1);
	p2 = printf("%s\n", NULL);
	printf("\n");
	printf("Printf mio: %d \nPrintf no mio: %d \n", p1, p2);


	return (0);
}

