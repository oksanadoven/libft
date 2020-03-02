/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:48:58 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/25 15:27:15 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*join;
	unsigned	len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(join = ft_strnew(len)) || !s1 || !s2)
		return (0);
    join = ft_strcat(join, s1);
	join = ft_strcat(join, s2);
	return (join);
}
