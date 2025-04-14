/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcamac <albcamac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:15:11 by albcamac          #+#    #+#             */
/*   Updated: 2025/04/14 17:42:45 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	unsigned char	*ptr;
	size_t			i;

	if (size != 0 && count > 2147483647 / size)
		return (NULL);
	total = count * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return ((void *)ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// Este valor provoca un overflow silencioso si no se protege bien
	// SIZE_MAX = 18446744073709551615 (en 64 bits)
	// Aquí forzamos count * size > SIZE_MAX
	size_t count = (size_t)-1 / 2 + 10;
	size_t size = 100;

	void *ptr = ft_calloc(count, size);

	if (!ptr)
	{
		printf("✅ ft_calloc detectó correctamente el overflow\n");
	}
	else
	{
		printf("❌ ft_calloc NO detectó el overflow (malloc devolvió algo)\n");

		memset(ptr, 1, count * size);

		printf("❌ Acceso a memoria hecho tras overflow\n");
		free(ptr);
	}

	return (0);
}
	*/
