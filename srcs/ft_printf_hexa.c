/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:49:50 by lde-alen          #+#    #+#             */
/*   Updated: 2022/01/28 16:25:15 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_hexa(va_list ap)
{
	unsigned int	hex;
	char			*base;
	unsigned int	count;

	hex = va_arg(ap, unsigned int);
	base = "0123456789abcdef";
	count = ft_strlen_hex(hex);
	ft_putnbr_un_base(hex, base);
	return (count);
}
