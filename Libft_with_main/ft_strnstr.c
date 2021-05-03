/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:12:53 by                   #+#    #+#             */
/*   Updated: 2020/07/09 19:00:11 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	const char *haystack1 = "abcdefg";
	const char *needle1 = "de";
	char *res_my1 = ft_strnstr(haystack1, needle1, 5);
	char *res_com1 = strnstr(haystack1, needle1, 5);
	char *res_my2 = ft_strnstr(haystack1, "dz", 5);
	char *res_com2 = strnstr(haystack1, "dz", 5);
	char *res_my3 = ft_strnstr(haystack1, "", 5);
	char *res_com3 = strnstr(haystack1, "", 5);
	char *res_my4 = ft_strnstr(haystack1, needle1, 4);
	char *res_com4 = strnstr(haystack1, needle1, 4);

	printf("test1\nhaystack1 = abcdefg | needle = de | len = 5\n");
	printf("MY>>>%s\n", res_my1);
	printf("COM>>%s\n\n", res_com1);

	printf("test2\nhaystack2 = abcdefg | needle = dz | len = 5\n");
	printf("MY>>>%s\n", res_my2);
	printf("COM>>%s\n\n", res_com2);

	printf("test3\nhaystack2 = abcdefg | needle = | len = 5\n");
	printf("MY>>>%s\n", res_my3);
	printf("COM>>%s\n\n", res_com3);

	printf("test3\nhaystack2 = abcdefg | needle = de | len = 4\n");
	printf("MY>>>%s\n", res_my4);
	printf("COM>>%s\n\n", res_com4);
	return(0);
}
