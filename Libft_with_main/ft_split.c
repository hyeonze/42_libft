/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 19:52:09 by hann              #+#    #+#             */
/*   Updated: 2020/07/16 21:15:15 by hann             ###   ########.fr       */
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

int		ft_wdcnt(char const *s, char c)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			cnt++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cnt);
}

int		ft_wdlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ret;

	if (!s || !(ret = (char **)malloc(sizeof(char*) * (ft_wdcnt(s, c) + 1))))
            return (NULL);
	i = 0;
	j = 0;
	while (i < ft_wdcnt(s, c))
	{
		k = 0;
		if (!(ret[i] = ft_mkstr(ft_wdlen(&s[j], c) + 1)))
			ret[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			ret[i][k++] = s[j++];
		ret[i][k] = '\0';
		i++;
	}
	ret[i] = 0;
	return (ret);
}
