/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:31:59 by hann              #+#    #+#             */
/*   Updated: 2020/07/13 17:10:37 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int minusflag;
	int ret;

	i = 0;
	minusflag = 0;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minusflag = 1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		ret = ret * 10 + str[i++] - '0';
	if (minusflag == 1)
		ret = ret * (-1);
	return (ret);
}

int		main(void)
{
	char str1[100] = "     +12a34ab1234";
	char str2[100] = "     -a1234ab1234";
	char str3[100] = "    +-a1234ab1234";
	char str4[100] = "    -+1234ab1234";
	char str5[100] = "    - 1234ab1234";
	char str6[100] = "  a -1234ab1234";
	char str14[100] = "\t\n\r\v\f  469 \n";
	char str18[100] = "\n\n\n  -46\b9 \n5d6";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n\n", atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n\n", atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n\n", atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n\n", atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("%d\n\n", atoi(str5));
	printf("%d\n", ft_atoi(str6));
	printf("%d\n\n", atoi(str6));
	printf("%d\n", ft_atoi(str14));
	printf("%d\n\n", atoi(str14));
	printf("%d\n", ft_atoi(str18));
	printf("%d\n\n", atoi(str18));
	return (0);
}
