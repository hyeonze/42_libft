/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 21:50:45 by                   #+#    #+#             */
/*   Updated: 2020/07/13 18:44:38 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_mkdst(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len + 1 >= dstsize)
		return (dst);
	else if (dst_len + 1 < dstsize)
	{
		j = 0;
		while ((dstsize = dst_len > 1) && (src[j] != '\0'))
		{
			dst[dst_len + j] = src[j];
			j++;
			dstsize--;
		}
		dst[dst_len + j] = '\0';
		return (dst);
	}
	else
		return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	ft_mkdst(dst, src, dstsize);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
		return (src_len + dst_len);
}

int		main(void)
{
/*
	char dest[100] = "aa";
	char dest2[100] = "aa";
	const char src[100] = "bbb";
	const char src2[100] = "bbb";
	size_t ret = ft_strlcat(dest, src, 7);
	size_t comret = strlcat(dest2, src2, 7);

	printf("my ret>>>%zu\n", ret);
	printf("my dest>>%s\n", dest);
	printf("COMret>>>%zu\n", comret);
	printf("COMdest>>%s\n", dest2);
*/

	char dest5_1[100] = "rrrrrr000000000";
	char dest5_2[100] = "rrrrrr000000000";
	dest5_1[10] = 'a';
	dest5_2[10] = 'a';

	printf("my ret>>>%zu\n", ft_strlcat(dest5_1, "lorem_ipsum_dolor_sit_amet", 0));
	printf("my dest>>%s\n", dest5_1);
	printf("COMret>>>%zu\n", strlcat(dest5_2, "lorem_spsum_dolor_sit_amet", 0));
	printf("my dest>>%s\n\n", dest5_1);

	char dest3_1[100] = "rrrrrr000000000";
	char dest3_2[100] = "rrrrrr000000000";
	dest3_1[0] = '\0';
	dest3_2[0] = '\0';
	dest3_1[11] = 'a';
	dest3_2[11] = 'a';

	printf("my ret>>>%zu\n", ft_strlcat(dest3_1, "lorem_ipsum", 15));
	printf("my dest>>%s\n", dest3_1);
	printf("COMret>>>%zu\n", strlcat(dest3_2, "lorem_spsum", 15));
	printf("COMdest>>%s\n\n", dest3_2);

	char dest4_1[100] = "rrrrrr000000000";
	char dest4_2[100] = "rrrrrr000000000";
	dest4_1[14] = 'a';
	dest4_2[14] = 'a';

	printf("my ret>>>%zu\n", ft_strlcat(dest4_1, "lorem_ipsum_dolor_sit_amet", 15));
	printf("my dest>>%s\n", dest4_1);
	printf("COMret>>>%zu\n", strlcat(dest4_2, "lorem_spsum_dolor_sit_amet", 15));
	printf("COMdest>>%s\n\n", dest4_2);

	return (0);
}
