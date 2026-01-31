/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:37:51 by esalman           #+#    #+#             */
/*   Updated: 2026/01/31 13:36:01 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

ssize_t	router(const char type, va_list args)
{
	ssize_t	count;

	return (count);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, count);
	while (*input)
	{
		while (*input != '%' && *input)
			input++;
		if (*input == '%')
		{
			input++;
			if (*input == '%')
				count = write(1, input, 1);
			else if (*input == 'c' || *input == 's')
				router('A', args);
			else if (*input == 'd' || *input == 'i' || *input == 'u')
				router('N', args);
			else if (*input == 'p' || *input == 'x' || *input == 'X')
				router('H', args);
		}
		input++;
	}
	return (count);
}
