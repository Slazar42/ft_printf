/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 03:18:28 by slazar            #+#    #+#             */
/*   Updated: 2022/11/02 06:13:20 by slazar           ###   ########.fr       */
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
		while (*str)
		{
			len += ft_putchar(*str);
			str++;
		}
	return (len);
}
// int main()
// {
// 	char *t = "tesnthnfnt";
// 	int a = ft_putstr(t);
// 	printf("\n %d",a);
// }