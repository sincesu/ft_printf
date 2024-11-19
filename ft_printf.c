/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:47:21 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/19 18:01:53 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_checker(const char format, va_list args)
{
	int	ret;

	ret = -1;
	if ((format == 'd') || (format == 'i'))
		ret = ft_putnbr(va_arg(args, int));
	else if (format == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (format == 's')
		ret = ft_putstr(va_arg(args, char *));
	else if (format == 'u')
		ret = ft_uputnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		ret = ft_hexadecimal(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		ret = ft_hexadecimal(va_arg(args, unsigned int), 1);
	else if (format == 'p')
		ret = ft_adress(va_arg(args, unsigned long int));
	else if (format == '%')
		ret = ft_putchar('%');
	return (ret);
}

int	ft_handle(const char *format, va_list args)
{
	int	i;
	int	len;
	int	ret;

	i = 0;
	len = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ret = ft_checker(format[i++], args);
			if (ret == -1)
				return (-1);
			len += ret;
		}
		else if (format[i])
		{
			if (ft_putchar(format[i++]) == -1)
				return (-1);
			len++;
		}
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	len = ft_handle(format, args);
	va_end(args);
	return (len);
}
