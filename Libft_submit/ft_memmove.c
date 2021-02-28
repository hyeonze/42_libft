/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 22:17:24 by hann              #+#    #+#             */
/*   Updated: 2020/07/05 22:36:08 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d_temp;
	char *s_temp;

	d_temp = (char *)dst;
	s_temp = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		while (len--)
		{
			*d_temp = *s_temp;
			d_temp++;
			s_temp++;
		}
	}
	else
	{
		d_temp += len;
		s_temp += len;
		while (len--)
			*--d_temp = *--s_temp;
	}
	return (dst);
}
