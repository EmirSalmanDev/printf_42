/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:08 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:04:35 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		new_c;
	const unsigned char	*p;

	i = 0;
	new_c = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (new_c == p[i])
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
