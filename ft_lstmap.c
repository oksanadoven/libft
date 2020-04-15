/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:20:10 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/25 14:32:03 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_del(void *data)
{
	if (!data)
		return ;
	free(data);
	data = NULL;
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_content = (*f)(lst->content);
	if (!(new = ft_lstnew(new_content)))
		return (NULL);
	head = new;
	lst = lst->next;
	while (lst)
	{
		new_content = (*f)(lst->content);
		if (!(new->next = ft_lstnew(new->content)))
		{
			ft_lstclear(&head, ft_del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (head);
}
