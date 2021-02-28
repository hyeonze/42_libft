/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hann <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:31:59 by hann              #+#    #+#             */
/*   Updated: 2020/08/17 18:19:04 by hann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cnt_minus(const char *str)
{
	if (*str == '-')
		return (-1);
	else if (*str == '+')
		return (1);
	return (0);
}

int	is_space(const char *str)
{
	if (*str >= 7 && *str <= 13)
		return (1);
	if (*str == 32)
		return (1);
	else
		return (0);
}

int	is_num(const char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

int	calc_num(char *str, int len, int flag)
{
	long long result;
	long long digit;

	result = 0;
	digit = 1;
	while (len > 0)
	{
		if (len > 20 || result + (digit * (str[len - 1] - '0')) < 0)
		{
			if (flag % 2 != 1)
				return (-1);
			return (0);
		}
		result += digit * (str[len - 1] - '0');
		digit = digit * 10;
		len--;
	}
	if (flag % 2 == 1)
		result = -result;
	return (int)(result);
}

int	ft_atoi(const char *str)
{
	int	flag;
	int	len;

	len = 0;
	flag = 0;
	while (is_space(str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag++;
		str++;
	}
	while (is_num(str))
	{
		str++;
		len++;
	}
	if (len == 0)
		return (0);
	str -= len;
	return (calc_num((char *)str, len, flag));
}
