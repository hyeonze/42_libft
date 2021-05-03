/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 21:31:23 by                   #+#    #+#             */
/*   Updated: 2020/07/08 22:01:58 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*strrchr(const char *s, int c)
{
	int i;
	int slen;

	i = 0;
	while (s[i])
		i++;
	slen = i;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s +  i);
		i--;
	}
	return (0);
}

int		main(void)
{
	const char a[100] = "abcabbbbbbcabbbbbbc";
	int b = 'b';
	int c = 'a';
	int d = '0';
	const char e[100] = "";

	printf("%s\n", strrchr(a, b));
	printf("%s\n", strrchr(a, c));
	printf("%s\n", strrchr(a, d));
	printf("%s\n", strrchr(e, b));
	return (0);
}
