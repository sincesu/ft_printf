/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 04:06:25 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/17 19:59:58 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long int n, int x)
{
	char	*y;
	int		l;
	int		ret;

	l = 0;
	ret = 0;
	y = "0123456789abcdef";
	if (x == 1)
		y = "0123456789ABCDEF";
	if (n >= 16)
	{
		ret = ft_hexadecimal((n / 16), x);
		if (ret == -1)
			return (-1);
		l += ret;
	}
	if (ft_putchar(y[(n % 16)]) == -1)
		return (-1);
	return (l + 1);
}
