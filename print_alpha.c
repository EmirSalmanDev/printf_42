/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:23:18 by esalman           #+#    #+#             */
/*   Updated: 2026/02/02 16:12:39 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

static ssize_t	put_char(int c)
{
	unsigned char	casted_c;

	casted_c = (unsigned char)c;
	return (write(1, &casted_c, 1));
}

static ssize_t	put_str(char *str)
{
	ssize_t	count;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}

ssize_t	print_alpha(const char type, va_list *stack)
{
	ssize_t	count;

	count = 0;
	if (type == 'c')
		count = put_char(va_arg(*stack, int));
	else if (type == 's')
		count = put_str(va_arg(*stack, char *));
	return (count);
}
