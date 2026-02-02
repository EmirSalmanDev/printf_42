/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:22:18 by esalman           #+#    #+#             */
/*   Updated: 2026/02/02 16:31:49 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);

ssize_t	print_alpha(const char type, va_list *stack);
ssize_t	print_num(const char type, va_list *stack);
ssize_t	print_hex(const char type, va_list *stack);

#endif
