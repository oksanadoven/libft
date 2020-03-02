/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:07:02 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/27 10:46:49 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = (char *)dest;
	source = (const char *)src;
	if (!dest || !src)
		return (NULL);
	while (n--)
	{
		*destination = *source;
		destination++;
		source++;
	}
	return (dest);
}
