/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:46:22 by esalman           #+#    #+#             */
/*   Updated: 2026/02/01 21:30:12 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

static ssize_t	put_nbr(long nbr)
{
	ssize_t	count;
	char	c;

	count = 0;
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += put_nbr(nbr / 10);
	c = nbr % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}

static ssize_t	put_nbr_u(unsigned int nbr)
{
	int		count;
	char	c;

	count = 0;
	if (nbr >= 10)
		count += put_nbr_u(nbr / 10);
	c = nbr % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}

ssize_t	print_num(const char type, va_list *stack)
{
	ssize_t	count;

	count = 0;
	if (type == 'd' || type == 'i')
		count = put_nbr(va_arg(*stack, int));
	else if (type == 'u')
		count = put_nbr_u(va_arg(*stack, unsigned int));
	return (count);
}
