/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:43:30 by hann              #+#    #+#             */
/*   Updated: 2020/07/15 18:11:08 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	ret = ft_substr((char *)s1, 0, s1_len + 1);
	return (ret);
}

int		main(void)
{
	char const s1[100] = "abcdef";
	char const set[100] = "abfe";
	char *ret = ft_strtrim(s1, set);

	printf("%s\n", ret);
	return (0);
}