/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:      <            >                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:54:18 by                   #+#    #+#             */
/*   Updated: 2020/07/09 23:02:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int		main(void)
{
	int a = '8';
	int b = 'a';
	int c = ft_isdigit(a);
	int d = isdigit(a);
	int e = ft_isdigit(b);
	int f = isdigit(b);

	printf("%d %d %d %d", c, d, e, f);
	return (0);
}
*/
