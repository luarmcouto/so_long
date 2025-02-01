/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:01:06 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:11:45 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char str)
{
	char	*hex;
	int		cnt;

	cnt = 0;
	if (str == 'X')
		hex = "0123456789ABCDEF";
	else if (str == 'x')
		hex = "0123456789abcdef";
	if (nb > 15)
	{
		cnt += ft_puthex(nb / 16, str);
		cnt += ft_puthex(nb % 16, str);
	}
	else if (nb < 16)
		cnt += ft_putchar(hex[nb]);
	return (cnt);
}
