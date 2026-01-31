/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:43:54 by esalman           #+#    #+#             */
/*   Updated: 2026/01/21 20:40:30 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*loc;
	size_t	total;

	if (num != 0 && size > ((size_t)-1 / num))
		return (NULL);
	total = (num * size);
	loc = malloc(total);
	if (!loc)
		return (NULL);
	ft_bzero(loc, total);
	return (loc);
}
