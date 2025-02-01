/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:40:41 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:11:53 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	cnt;

	cnt = 0;
	if (nb == -2147483648)
		cnt += ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			cnt += ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			cnt += ft_putnbr(nb / 10);
		}
		cnt += ft_putchar(nb % 10 + 48);
	}
	return (cnt);
}
