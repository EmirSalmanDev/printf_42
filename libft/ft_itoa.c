/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:00:39 by esalman           #+#    #+#             */
/*   Updated: 2026/01/23 23:53:40 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_length(int n)
{
	int		length;
	long	nbr;

	if (n == 0)
		return (1);
	length = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		length++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		length++;
	}
	length += 1;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = count_length(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}
