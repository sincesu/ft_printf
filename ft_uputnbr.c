/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:57:33 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/17 20:02:32 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uputnbr(unsigned int c)
{
	int	l;
	int	ret;

	l = 0;
	ret = 0;
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
