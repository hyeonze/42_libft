/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:43:34 by hann              #+#    #+#             */
/*   Updated: 2020/07/09 23:03:52 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int		main(void)
{
	int a = 'b';
	int d = '0';
	int b = ft_isalpha(a);
	int c = isalpha(a);
	int e = ft_isalpha(d);
	int f = isalpha(d);

	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n%d\n", e, f);
	return (0);
}
*/
