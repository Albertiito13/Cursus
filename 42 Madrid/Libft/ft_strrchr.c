/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcamac <albcamac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:25:16 by albcamac          #+#    #+#             */
/*   Updated: 2025/04/08 22:13:36 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *str = "Hola mundo loco!";

	printf("Última 'o' encontrada en: %s\n", strrchr(str, '\0'));
        printf("Última 'o' encontrada en: %s\n", ft_strrchr(str, '\0'));

    return 0;
}
*/
