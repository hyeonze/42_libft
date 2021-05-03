/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 21:44:01 by                   #+#    #+#             */
/*   Updated: 2020/07/14 21:39:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = dst;
	ptr2 = (char *)src;
	i = 0;
	while (i < n)
	{
		*(ptr1 + i) = *(ptr2 + i);
		i++;
	}
	return (dst);
}
/*
int		main(void)
{
	char dst[100] = "abcdefg";
	char src[100] = "1234567";

	ft_memcpy(dst, src, 4);
	printf("%s\n", dst);
	return (0);
}
*/
