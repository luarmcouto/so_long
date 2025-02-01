/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:35:28 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:11:59 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long str)
{
	int	cnt;

	cnt = 0;
	if (!str)
		return (ft_putstr("(nil)"));
	cnt += ft_putstr("0x");
	cnt += ft_puthex(str, 'x');
	return (cnt);
}
