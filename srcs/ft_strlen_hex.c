/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:48:49 by lde-alen          #+#    #+#             */
/*   Updated: 2022/01/28 16:24:51 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_strlen_hex(unsigned long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		i++;
		nb /= 16;
	}
	return (i);
}
