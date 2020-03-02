/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osolodov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:32:59 by osolodov          #+#    #+#             */
/*   Updated: 2020/02/25 14:30:43 by osolodov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int		ft_abs(int n)
{
	return (n > 0 ? n : -n);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		i;

	len = ft_num_len(n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	if (n == 0)
		str[i] = '0';
	if (n < 0)
		str[i] = '-';
	str[len--] = '\0';
	while (n)
	{
		str[len--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
