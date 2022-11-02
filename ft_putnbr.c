/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 03:42:05 by slazar            #+#    #+#             */
/*   Updated: 2022/11/02 04:59:43 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int counter(int nb)
{
	int num;

	num = 0;
	if (nb < 0)
		num++;
	while (nb)
	{
		nb = nb/10;
		num++;
	}
	return (num);
}

int	ft_putnbr(int nb)
{
	int num;
	
	
	num = counter(nb);
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return(num);
}