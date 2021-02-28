/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:59:14 by hann              #+#    #+#             */
/*   Updated: 2020/07/14 20:45:32 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n && (s1[i] || s2[i]))
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}

int		main(void)
{
	/*
	const char s1[100] = "ab";
	const char s2[100] = "abcd";
	const char s3[100] = "ab";
	const char s4[100] = "abcd";
	size_t n = 4;
	printf("COM>>%d\n", strncmp(s1, s2, n));
	printf("ME>>>%d\n", ft_strncmp(s1, s2, n));
	*/
	const char s1[100] = "aest\200";
	const char s2[100] = "best\0";
	size_t n = 6;
	printf("COM>>%d\n", strncmp(s1, s2, n));
	printf("ME>>>%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
