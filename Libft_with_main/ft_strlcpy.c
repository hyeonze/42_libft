/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:36:17 by hann              #+#    #+#             */
/*   Updated: 2020/07/14 19:56:07 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	srcsize = 0;
	i = 1;
	while (src[srcsize] != '\0')
		srcsize++;
	if (dstsize == 0)
		return (srcsize);
	while (dstsize > i && srcsize >= i)
	{
		dst[i - 1] = src[i - 1];
		i++;
	}
	while (dstsize > i)
	{
		dst[i - 1] = '\0';
		i++;
	}
	dst[i - 1] = '\0';
	return (srcsize);
}

int		main(void)
{
	size_t ret;
	int i;
	ret =0;
	char dest[100] = "rrrrrr000000000";
	char dest2[100] = "rrrrrr000000000";
	const char src[] = "";
	size_t size = 15;
	ret = ft_strlcpy(dest, src, size);
	i = (int)ret;
	printf("%s\n", dest);
	printf("%d\n", i);
	printf("%s\n%lu\n", dest2, strlcpy(dest2, src, size));
	return (0);
}
