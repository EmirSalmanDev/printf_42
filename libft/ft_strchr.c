/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:23 by esalman           #+#    #+#             */
/*   Updated: 2026/01/23 23:45:48 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	casted_c;

	casted_c = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (casted_c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (casted_c == s[i])
		return ((char *)&s[i]);
	return (0);
}
