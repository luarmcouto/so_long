/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:06:45 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:15:31 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dest_len;
	size_t		src_len;
	size_t		total_len;
	size_t		i;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (total_len);
}

/* int	main(void)
{
	char dst[20] = "Hello";
	const char src[] = ", World!";

	printf("Before: %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("After: %s\n", dst);
	return (0);
} */
