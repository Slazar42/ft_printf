/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:30:24 by slazar            #+#    #+#             */
/*   Updated: 2022/11/04 17:45:32 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char cr, va_list ptr)
{
	int	count;

	count = 0;
	if (cr == 'c')
		count += ft_putchar(va_arg(ptr, int));
	else if (cr == 's')
		count += ft_putstr(va_arg(ptr, char *));
	else if (cr == 'd' || cr == 'i')
		count += ft_putnbr(va_arg(ptr, int));
	else if (cr == 'u')
		count += ft_unsigned_putnbr(va_arg(ptr, unsigned int));
	else if (cr == '%')
		count += ft_putchar('%');
	else if (cr == 'x' || cr == 'X')
		count += ft_hexxa(va_arg(ptr, unsigned int), cr);
	else if (cr == 'p')
		count += ft_xxp_adress(va_arg(ptr, unsigned long));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int				len;
	int				i;
	char			*str;
	va_list			ptr;

	str = (char *)s;
	va_start(ptr, s);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			i++;
			len += check(str[i], ptr);
		}
		i++;
	}
	va_end(ptr);
	return (len);
}
