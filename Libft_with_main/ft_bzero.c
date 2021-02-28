/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 22:36:14 by hann              #+#    #+#             */
/*   Updated: 2020/07/07 22:23:32 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	if (n == 0)
		return ;
	ptr = s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = 0;
		i++;
	}
}

int		main(void)
{
	char str[30];

	ft_bzero(str, 29);
	printf("%s\n", str);
	return (0);
}
