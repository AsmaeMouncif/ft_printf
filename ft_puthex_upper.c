/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:00:13 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/27 18:30:11 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_puthex_upper(n / 16);
	count = count + ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}
