/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:30:24 by slazar            #+#    #+#             */
/*   Updated: 2022/11/02 05:00:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char *cr, va_list ptr)
{
	int count;
	
	count = 0;
	if (*cr == 'c')
		count += ft_putchar(va_arg(ptr, int));
	else if (*cr == 's')
		count += ft_putstr(va_arg(ptr, char *));
	else if (*cr == 'd')
		count += ft_putnbr(va_arg(ptr, int));
	// else if (*cr == 'p')
	// else if (*cr == 'i')
	// else if (*cr == 'x')

	return(count);
}

int	ft_printf(const char *s, ...)
{
	int				len;
	int				i;
	va_list			ptr;
	char 	*str;

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
			len += check(&str[i], ptr);
		}
		i++;
	}
	va_end(ptr);
	return (len);
}

// int main()
// {
// 	char *c = "okk";
// 	int t = ft_printf("  %s\n",c);
// 	printf("%d",t);
// }