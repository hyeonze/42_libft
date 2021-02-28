/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:49:26 by hann              #+#    #+#             */
/*   Updated: 2020/07/15 17:46:13 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		str_len(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	if (s == 0)
		return (0);
	i = 0;
	if (c == 0)
		return ((char *)s + str_len(s));
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
/*
int		main(void)
{
	const char a[100] = "abcdefg";
	int b = 'e';
	int c = '0';
	const char d[100] = "";
	
	printf("%s\n", ft_strchr(a, b));
	printf("%s\n", ft_strchr(a, c));
	printf("%s\n", ft_strchr(d, b));
	return (0);
}
*/
