/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slargo-b <slargo-b@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:51:49 by slargo-b          #+#    #+#             */
/*   Updated: 2025/02/07 15:33:51 by slargo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + ft_format(args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>

int	main()
{
	//printf(" NULL %s NULL ", NULL);
	// ft_printf("a ve que imprime: %s\n", "hello world");
	//return 0;
	//esto es para hacer mi comit en git :3
}
*/