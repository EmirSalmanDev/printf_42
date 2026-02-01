/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:37:51 by esalman           #+#    #+#             */
/*   Updated: 2026/02/01 21:20:06 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

ssize_t	ft_router(const char type, va_list *args)
{
	ssize_t	count;

	count = 0;
	if (type == 'c' || type == 's')
		count = print_alpha(type, args);
	else if (type == 'd' || type == 'i' || type == 'u')
		count = print_num(type, args);
	else if (type == '%')
		count = write(1, "%", 1); // %%
	return (count);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			count += ft_router(input[i + 1], &args);
			i++;
		}
		else
		{
			count += write(1, &input[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
