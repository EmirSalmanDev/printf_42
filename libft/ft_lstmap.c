/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:47:41 by esalman           #+#    #+#             */
/*   Updated: 2026/01/24 00:01:20 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*root;
	void	*p;

	if (!lst || !f || !del)
		return (NULL);
	root = NULL;
	while (lst)
	{
		p = f(lst->content);
		new_node = ft_lstnew(p);
		if (!new_node)
		{
			del(new_node->content);
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, new_node);
		lst = lst->next;
	}
	return (root);
}
