/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:55:39 by esalman           #+#    #+#             */
/*   Updated: 2026/02/02 16:31:53 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	put_hex(unsigned long n, char *base)
{
	ssize_t	count;

	count = 0;
	if (n >= 16)
		count += put_hex(n / 16, base);
	count += write(1, &base[n % 16], 1);
	return (count);
}

static ssize_t	put_ptr(void *ptr)
{
	ssize_t	count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += put_hex((unsigned long)ptr, "0123456789abcdef");
	return (count);
}

ssize_t	print_hex(const char type, va_list *stack)
{
	ssize_t	count;

	count = 0;
	if (type == 'x')
		count = put_hex(va_arg(*stack, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		count = put_hex(va_arg(*stack, unsigned int), "0123456789ABCDEF");
	else if (type == 'p')
		count = put_ptr(va_arg(*stack, void *));
	return (count);
}
