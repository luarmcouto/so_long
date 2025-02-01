/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:16:15 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:14:44 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest_ptr, src_ptr, n);
	else if (dest > src)
	{
		while (n > 0)
		{
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return (dest_ptr);
}

/* int main ()
{
	char src[20] = "gremio maior do sul";
	char dest[20] = "fodase";
	printf("resultado: %s\n", (char *)ft_memmove(dest, src, 3));
	return (0);
} */
