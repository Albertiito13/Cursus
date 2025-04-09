/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcamac <albcamac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:33:28 by albcamac          #+#    #+#             */
/*   Updated: 2025/04/07 17:05:17 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int s)
{
	if (s >= 'a' && s <= 'z')
		s = s - 32;
	return (s);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char s = 'h';
	printf("%c \n", toupper(s));
	printf("%c ", ft_toupper(s));

}
*/
