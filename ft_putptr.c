/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:02:31 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/27 17:40:55 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_puthex(n / 16);
	count = count + ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	count = count + ft_putchar('0');
	count = count + ft_putchar('x');
	if (address == 0)
	{
		count = count + ft_putchar('0');
	}
	else
	{
		count = count + ft_puthex(address);
	}
	return (count);
}
