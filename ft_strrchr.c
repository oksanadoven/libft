/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:30:17 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/28 10:10:02 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_oc;

	last_oc = NULL;
	while (*s)
	{
		if (*s == c)
			last_oc = (char *)s;
		s++;
	}
	if (*s == c)
		last_oc = (char *)s;
	return (last_oc);
}
