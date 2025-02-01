/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:01:43 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:15:21 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* char   upper_case(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
	return c;
}
int main()
{
    char str[] = "GREMIO, gigante!";
    printf("Antes: %s\n", str);
    ft_striteri(str, upper_case);
    printf("Depois: %s\n", str);
    return (0);
} */