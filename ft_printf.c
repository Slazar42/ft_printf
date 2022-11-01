/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:30:24 by slazar            #+#    #+#             */
/*   Updated: 2022/11/01 18:47:13 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(unsigned char *cr, va_list ptr)
{
	int count;
	
	count = 0;
	if (*cr == 'c')
		count += ft_putchar(va_arg(ptr, int));
	return(count);
}


int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	unsigned char *str;
	va_list	ptr;
	
	
	i = 0;
	str = (unsigned char *)s;

	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			i++;
			check(str[i], ptr);
		i++;
		}
	}
	va_end(ptr);
	return (len);
}
int main()
{
	char t = 'c';
	ft_printf("salah age is %c",t);
}