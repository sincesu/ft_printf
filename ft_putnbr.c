/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:10:03 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/17 20:01:51 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	int	l;
	int	ret;

	l = 0;
	ret = 0;
	if (c == -2147483648)
		return (ft_putstr("-2147483648"));
	if (c < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		c = -c;
		l++;
	}
	if (c > 9)
	{
		ret = ft_putnbr(c / 10);
		if (ret == -1)
			return (-1);
		l += ret;
	}
	if (ft_putchar((c % 10) + '0') == -1)
		return (-1);
	return (l + 1);
}
