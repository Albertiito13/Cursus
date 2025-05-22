/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcamac <albcamac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:39:04 by albcamac          #+#    #+#             */
/*   Updated: 2025/05/23 00:56:27 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	has_invalid_percent(const char *format)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed;

	if (!format || has_invalid_percent(format))
		return (-1);
	va_start(args, format);
	i = 0;
	printed = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			printed += ft_format_dispatcher(format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}
