/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:54:43 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/25 12:01:51 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list *next;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		next = (*alst)->next;
		ft_lstdelone(*alst, del);
		*alst = next;
	}
	*alst = NULL;
}
