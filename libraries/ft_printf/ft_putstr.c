/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:32:54 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:12:04 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str)
		cnt += ft_putstr("(null)");
	else
	{
		while (str[cnt])
		{
			ft_putchar(str[cnt]);
			cnt++;
		}
	}
	return (cnt);
}
