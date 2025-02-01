/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:58:23 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:12:10 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int nb)
{
	int	cnt;

	cnt = 0;
	if (nb > 9)
	{
		cnt += ft_putnbr(nb / 10);
	}
	cnt += ft_putchar(nb % 10 + 48);
	return (cnt);
}
