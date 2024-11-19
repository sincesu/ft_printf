/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:49:49 by saincesu          #+#    #+#             */
/*   Updated: 2024/11/17 20:01:38 by saincesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putchar(int c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int c);
int	ft_uputnbr(unsigned int c);
int	ft_putstr(char *str);
int	ft_hexadecimal(unsigned long int n, int x);
int	ft_adress(unsigned long int c);

#endif