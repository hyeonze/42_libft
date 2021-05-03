/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:14:36 by                   #+#    #+#             */
/*   Updated: 2020/08/18 21:20:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_free2d(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return ;
}

static int	ft_count_words(const char *s, char c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++i;
		while (*s != c && *s)
			++s;
	}
	return (i);
}

static int	ft_count_len(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
		++s;
	while (s[i] != c && s[i])
		++i;
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char		**str;
	int			words;
	int			i;

	i = 0;
	words = ft_count_words(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c)
			++s;
		if (!(str[i] = ft_substr(s, 0, ft_count_len(s, c))))
		{
			ft_free2d(str);
			return (NULL);
		}
		while (*s && *s != c)
			++s;
		++i;
	}
	str[i] = 0;
	return (str);
}
