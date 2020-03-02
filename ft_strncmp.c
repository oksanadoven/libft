/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:42:10 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/27 11:33:54 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && s1)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
		if (!s1)
			return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
