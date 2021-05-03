/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 22:17:24 by                   #+#    #+#             */
/*   Updated: 2020/07/05 22:36:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dstc;
	unsigned char *srcc;
	unsigned char temp[len];

	if (dst == NULL && src == NULL)
		return (NULL);
	srcc = (unsigned char *)src;
	dstc = (unsigned char *)dst;
	ft_memcpy(temp, srcc, len);
	ft_memcpy(dstc, temp, len);
	return (dst);
}

int		main(void)
{
	char dst[100] = "abcdefg";
	char src[100] = "qwertyu";
	ft_memmove(dst, src, 4);
	printf("%s\n", dst);
	return (0);
}
