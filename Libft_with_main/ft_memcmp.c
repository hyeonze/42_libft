/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:15:30 by                   #+#    #+#             */
/*   Updated: 2020/07/06 23:00:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char *s1s;
	unsigned char *s2s;

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

int		main(void)
{
	const char a1[100] = "abcda";
	const char a2[100] = "abcdb";
	int a = ft_memcmp(a1, a2, 5);
	
	printf("%d\n", a);
	return (0);
}
