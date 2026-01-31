/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:34:41 by esalman           #+#    #+#             */
/*   Updated: 2026/01/23 23:53:26 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_free_split(char **tab, int count)
{
	while (count > 0)
	{
		count--;
		free(tab[count]);
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill_array(char **str_array, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str_array[j] = ft_substr(s, start, i - start);
			if (!str_array[j])
				return (ft_free_split(str_array, j));
			j++;
		}
		else
			i++;
	}
	str_array[j] = NULL;
	return (str_array);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;

	if (!s)
		return (NULL);
	str_array = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!str_array)
		return (NULL);
	return (ft_fill_array(str_array, s, c));
}
