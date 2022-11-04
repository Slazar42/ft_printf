/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:38:00 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:49:47 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	counteru(unsigned int nb)
{
	int	num;

	num = 0;
	if (nb <= 0)
		num++;
	while (nb)
	{
		nb = nb / 10;
		num++;
	}
	return (num);
}

int	ft_unsigned_putnbr(unsigned int nb)
{
	int	num;

	num = counteru(nb);
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (num);
}
