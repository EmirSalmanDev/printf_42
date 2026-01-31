/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:41 by esalman           #+#    #+#             */
/*   Updated: 2026/01/24 10:59:22 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_length;

	needle_length = ft_strlen(needle);
	i = 0;
	if (!needle[i])
		return ((char *)&haystack[i]);
	while ((i < len) && (haystack[i]))
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
				j++;
			if (j == needle_length)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
