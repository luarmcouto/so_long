/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:18:32 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:15:58 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last);
}

/* int	main(void)
{
	const char	s[] = "Hello, World!";
	int	c;

	c = 'o';
	printf ("%s\n", ft_strrchr(s, c));
} */
