/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:17:11 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 12:27:11 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds the node ’new’ at the end of the list.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst)
	{
		node = ft_lstlast(*lst);
		node -> next = new;
	}
	else
		ft_lstadd_front(lst, new);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	**test;

// 	lst = 0;
// 	test = &(lst);
// 	ft_lstadd_back(test, ft_lstnew("lst1"));
// 	ft_lstadd_back(test, ft_lstnew("lst2"));
// 	ft_lstadd_back(test, ft_lstnew("lst3"));
// 	ft_lstadd_back(test, ft_lstnew("lst4"));
// 	printf("El ultimo nodo de la lista es %s \n", (ft_lstlast(lst))->content);
// }