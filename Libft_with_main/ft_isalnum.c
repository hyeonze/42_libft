/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:23:31 by hann              #+#    #+#             */
/*   Updated: 2020/07/12 18:36:07 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int		main(void)
{
	int a = 'b';
	int d = '0';
	int g = '!';
	int b = ft_isalnum(a);
	int c = isalnum(a);
	int e = ft_isalnum(d);
	int f = isalnum(d);
	int h = ft_isalnum(g);
	int i = isalnum(g);

	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n%d\n", e, f);
	printf("%d\n%d\n", h, i);
	return (0);
}
