/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:48:31 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:46:21 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_unsigned_putnbr(unsigned int nb);
int		ft_xxp_adress(unsigned long nb);
int		ft_hexxa(unsigned int nb, char c);

#endif