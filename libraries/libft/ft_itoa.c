/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:29:15 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:13:52 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len ++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (len-- > 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/* int	main(void)
{
	int	i = 49348;
	printf("%d\n", ft_intlen(i));
	printf("%s\n", ft_itoa(i));
}*/
