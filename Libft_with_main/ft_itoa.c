/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 21:23:01 by hann              #+#    #+#             */
/*   Updated: 2020/07/16 21:41:17 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mkstr(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

size_t	get_str_len(int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	nn;

	str_len = get_str_len(n);
	nn = n;
	if (n < 0)
	{
		nn = -n;
		str_len++;
	}
	if (!(str = ft_mkstr(str_len)))
		return (NULL);
	str[--str_len] = nn % 10 + '0';
	while (nn /= 10)
		str[--str_len] = nn % 10 + '0';
	if (n < 0)
		*(str) = '-';
	return (str);
}
