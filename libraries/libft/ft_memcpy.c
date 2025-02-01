/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:25:49 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:14:40 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest_ptr);
}

/* int	main(void)
{
	char	src[100] = "Hello";
	char	dest[100];

	printf("%s", (char *)ft_memcpy(dest, src , 20));
} */