/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:05:05 by osolodov          #+#    #+#             */
/*   Updated: 2020/03/03 09:42:04 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (!dst)
		return (0);
	if (!src)
		return (1);
	i = size;
	d = dst;
	s = src;
	if (i != 0)
	{
		while (i-- != 1)
			if ((*d++ = *s++) == '\0')
				break ;
	}
	if (i-- == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s)
			s++;
	}
	return ((size < ft_strlen(src)) ? ft_strlen(src) : (s - src - 1));
}