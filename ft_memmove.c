/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:08:08 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/28 10:05:56 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*tmp;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((tmp = (unsigned char *)malloc(sizeof(char) * n)))
	{
		i = 0;
		while (i < n)
		{
			tmp[i] = s[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			d[i] = tmp[i];
			i++;
		}
	}
	return (dest);
}
