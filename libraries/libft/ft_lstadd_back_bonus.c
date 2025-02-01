/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:49:02 by luarodri          #+#    #+#             */
/*   Updated: 2025/02/01 12:13:56 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/* int main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	
	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	node2->next = NULL;
	while(lst)
	{
		printf("%s||\n", (char *)lst->content); // imprime o conteudo do no atual
		lst = lst->next; // avanca para o proximo no
	}
	free(node1);
	free(node2);
} */