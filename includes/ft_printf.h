/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen < lde-alen@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:44:51 by lde-alen          #+#    #+#             */
/*   Updated: 2021/12/21 16:44:54 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_putnbr(long int nb);
int			ft_printf_hexa(va_list ap);
int			ft_printf_hexo(va_list ap);
int			ft_printf_percentage(va_list ap);
int			ft_strlen_hex(unsigned long nb);
int			ft_printf_ptr(va_list ap);
int			ft_printf_putchar(va_list ap);
int			ft_printf_putstr(va_list ap);
int			ft_printf_putnbr(va_list ap);
int			ft_printf_putnbr_u(va_list ap);
int			ft_putnbr_un_base(unsigned int nb, char *base);
int			ft_printf(const char *format, ...);
char		*ft_asc_to_hex(char *str, int i, unsigned long int nb, int hex);

#endif
