/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:29:30 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/27 11:35:35 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
	{
		count = count + ft_putchar(n + '0');
	}
	else
	{
		count = count + ft_putnbr_unsigned(n / 10);
		count = count + ft_putchar(n % 10 + '0');
	}
	return (count);
}
