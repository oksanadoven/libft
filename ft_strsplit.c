/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 10:26:30 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/25 15:48:39 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char		*ft_fill_arr(char const *s, char c, int *start_index)
{
	char	*new;
	char	*start;
	int		i;
	size_t 	len;

	i = *start_index;
	while (s[i] && s[i] == c)
		i++;
	start = (char *)s + i;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	new = ft_strsub(start, 0, len);
    new[len] = '\0';
	*start_index = i;
	return (new);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nwords;
	int		i;
	int		start_index;
	char	**arr;
	
	if (!s)
		return (NULL);
	i = 0;
	start_index = 0;
	nwords = ft_count_words(s, c);
	if ((arr = (char**)malloc(sizeof(char*) * (nwords + 1))))
	{	
		while (i < nwords)
		{
			arr[i] = ft_fill_arr(s, c, &start_index);
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}
