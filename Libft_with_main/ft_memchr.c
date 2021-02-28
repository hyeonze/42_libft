/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 23:09:12 by hann              #+#    #+#             */
/*   Updated: 2020/07/06 19:57:32 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	const char s[100] = "Hello world";
	int c = 'l';

	void *a = ft_memchr(s, c, 3);
	printf("%s\n", a);
	return (0);
}
