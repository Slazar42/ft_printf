/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HeXxa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:50:26 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:38:21 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_count(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count++;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int	ft_hexxa(unsigned int nb, char c)
{
	char	*x;
	int		len ;

	len = hexa_count(nb);
	if (c == 'X')
		x = "0123456789ABCDEF";
	else
		x = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexxa(nb / 16, c);
		ft_hexxa(nb % 16, c);
	}
	else
		ft_putchar(x[nb]);
	return (len);
}
