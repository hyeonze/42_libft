/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:15:30 by hann              #+#    #+#             */
/*   Updated: 2020/07/07 16:54:11 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1s;
	unsigned char	*s2s;

	if (n == 0)
		return (0);
	s1s = (unsigned char *)s1;
	s2s = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (s1s[i] != s2s[i])
			return (s1s[i] - s2s[i]);
		i++;
	}
	return (s1s[i] - s2s[i]);
}
