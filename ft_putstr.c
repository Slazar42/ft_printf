/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:18:28 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:51:12 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else
	{
		while (*str)
		{
			len += ft_putchar(*str);
			str++;
		}
	}
	return (len);
}
