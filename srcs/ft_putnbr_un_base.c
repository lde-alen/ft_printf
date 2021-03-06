/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:49:06 by lde-alen          #+#    #+#             */
/*   Updated: 2022/01/28 16:24:57 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_un_base(unsigned int nb, char *base)
{
	unsigned int	a;
	unsigned int	len_str;

	len_str = ft_strlen(base);
	a = nb % len_str;
	nb /= len_str;
	if (nb > 0)
		ft_putnbr_un_base(nb, base);
	ft_putchar(base[a]);
	return (nb);
}
