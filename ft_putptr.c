/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slargo-b <slargo-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:28:07 by slargo-b          #+#    #+#             */
/*   Updated: 2025/02/07 15:25:12 by slargo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len = ft_putstr("(nil)");
		return (len);
	}
	else
	{
		len += write(1, "0x", 2);
		len += ft_puthex((unsigned long)ptr, 'p');
	}
	return (len);
}
