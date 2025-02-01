/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:59:21 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:13:28 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

/* int	main(void)
{
	printf("%s(linha vazia)\n", (char *)ft_calloc(5, 6));
	printf("%s(linha vazia)\n", (char *)calloc(5, 6));
	return (0);
} */
