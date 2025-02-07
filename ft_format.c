/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slargo-b <slargo-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:28:49 by slargo-b          #+#    #+#             */
/*   Updated: 2025/02/07 15:23:24 by slargo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len = ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len = ft_put_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = ft_putchar('%');
	return (len);
}
