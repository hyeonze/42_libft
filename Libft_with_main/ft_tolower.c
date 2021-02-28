/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:14:12 by hann              #+#    #+#             */
/*   Updated: 2020/07/12 19:35:28 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int		main(void)
{
	int a = 'A';
	int b = 'a';
	int c = ft_tolower(a);
	int d = tolower(a);
	int e = ft_tolower(b);
	int f = tolower(b);

	printf("%c\n%c\n%c\n%c\n", c, d, e, f);
	return (0);
}
