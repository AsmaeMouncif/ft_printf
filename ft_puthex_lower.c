/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmounci <asmounci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:00 by asmounci          #+#    #+#             */
/*   Updated: 2025/10/27 18:01:42 by asmounci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_puthex_lower(n / 16);
	count = count + ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}
