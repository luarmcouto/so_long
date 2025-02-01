/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:10:49 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:15:50 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s;
	size_t	i;

	i = 0;
	s = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[s])
		{
			while (big[i + s] == little[s] && i + s < len)
			{
				if (little[s + 1] == '\0')
					return ((char *)big + i);
				s++;
			}
			s = 0;
		}
		i++;
	}
	return (NULL);
}
/* int	main(void)
{
	const char *big = "Hello, World";
	const char *little = "World";
	size_t len = 12;

	char *result = ft_strnstr(big, little, len);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return 0;
} */
