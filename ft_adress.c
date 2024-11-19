/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 05:05:33 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/15 15:02:19 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(unsigned long int c)
{
	int	l;
	int	ret;

	l = 0;
	ret = 0;
	if (c == 0)
		return (ft_putstr("(nil)"));
	ret = ft_putstr("0x");
	if (ret == -1)
		return (-1);
	l += ret;
	ret = ft_hexadecimal(c, 0);
	if (ret == -1)
		return (-1);
	l += ret;
	return (l);
}
