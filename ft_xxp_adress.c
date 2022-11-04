/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_XXp_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:12:15 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:44:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_counter(unsigned long nb)
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

int	ft_hexxaa(unsigned long nb)
{
	char	*x;
	int		len ;

	len = hexa_counter(nb);
	x = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexxaa(nb / 16);
		ft_hexxaa(nb % 16);
	}
	else
		ft_putchar(x[nb]);
	return (len);
}

int	ft_xxp_adress(unsigned long nb)
{
	int	len;

	len = ft_putstr("0x");
	len += ft_hexxaa(nb);
	return (len);
}
