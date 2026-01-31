/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:43 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:35:18 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	casted_c;

	casted_c = (unsigned char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((unsigned char)s[len] == casted_c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
