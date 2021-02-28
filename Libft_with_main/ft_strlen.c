/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:37:08 by hann              #+#    #+#             */
/*   Updated: 2020/07/15 17:27:47 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlen(const char *s)
{
	const char	*ss;
	size_t		ret;

	ss = s;
	ret = 0;
	while (*ss != '\0')
	{
		ss++;
		ret++;
	}
	return (ret);
}
/*
int		main(void)
{
	const char s[100] = "abcd";
	size_t a = ft_strlen(s);
	int b = (int)a;

	printf("%d\n", b);
	return (0);
}
*/
