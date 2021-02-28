/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:14:12 by hann              #+#    #+#             */
/*   Updated: 2020/07/12 19:26:01 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(void)
{
	int a = 'A';
	int b = 'a';
	int c = ft_toupper(a);
	int d = toupper(a);
	int e = ft_toupper(b);
	int f = toupper(b);

	printf("%c\n%c\n%c\n%c\n", c, d, e, f);
	return (0);
}
