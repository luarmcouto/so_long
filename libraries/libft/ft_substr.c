/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:20:17 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:16:06 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (0);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/* int main()
{
	char str[] = "gremio gigantesco";
	printf("substring encontrada:%s\n", ft_substr(str, 6, 11));
	return (0);
} */