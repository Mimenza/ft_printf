/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:21:20 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 13:15:53 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;
	t_list	*aux;

	if (!lst)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	tmp = res;
	aux = lst;
	lst = lst->next;
	while (lst)
	{
		res->next = ft_lstnew(f(lst->content));
		if (res->next == NULL)
			ft_lstclear(&aux, del);
		res = res->next;
		lst = lst->next;
	}
	return (tmp);
}
