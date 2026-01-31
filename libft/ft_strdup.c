/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:27 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:04:56 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*loc;

	i = 0;
	length = ft_strlen(s1) + 1;
	loc = malloc(1 * length);
	if (!loc)
		return (0);
	while (s1[i] != '\0')
	{
		loc[i] = s1[i];
		i++;
	}
	loc[i] = '\0';
	return (loc);
}
