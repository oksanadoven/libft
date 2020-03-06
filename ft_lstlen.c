/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 11:10:20 by osolodov          #+#    #+#             */
/*   Updated: 2020/03/06 11:15:40 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *head)
{
	size_t	len;

	len = 0;
	if (head)
	{
		while (head->next != 0)
		{
			len++;
			head = head->next;
		}
		len++;
	}
	return (len);
}
