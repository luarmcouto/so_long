/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:19:23 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:14:01 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	
	ft_lstadd_front(&lst, node1);
	node1->next = node2;
	node2->next = NULL;
	while(lst)
	{
		printf("%s||\n", (char *)lst->content); // imprime o conteudo do no atual
		lst = lst->next; // avanca para o proximo no
	}
	free(node1);
	free(node2);
}  */
