/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:29 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:05:07 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;

	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	s = 0;
	while ((i + s < dstsize - 1) && (src[s] != '\0'))
	{
		dst[i + s] = src[s];
		s++;
	}
	dst[i + s] = '\0';
	return (i + ft_strlen(src));
}
