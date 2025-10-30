/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:02:31 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/30 09:31:41 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_puthex(n / 16);
	count = count + ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	count = 0;
	count = count + ft_putchar('0');
	count = count + ft_putchar('x');
	count = count + ft_puthex(address);
	return (count);
}
