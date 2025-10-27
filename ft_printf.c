/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:01:16 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/27 18:38:56 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
				count = count + ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				count = count + ft_putstr(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                count = count + ft_putnbr(va_arg(args, int));
            else if (format[i] == 'u')
                count = count + ft_putnbr_unsigned(va_arg(args, int));
            else if	(format[i] == 'p')
				count = count + ft_putptr(va_arg(args, void *));
			else if(format[i] == 'x')
				count = count + ft_puthex_lower(va_arg(args, int));
			else if(format[i] == 'X')
				count = count + ft_puthex_upper(va_arg(args, int));
		}
		else
		{
			count = count + ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
