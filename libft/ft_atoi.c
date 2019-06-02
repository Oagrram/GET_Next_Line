/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:57:07 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 12:52:48 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	as_to_in(const char *str)
{
	int long	res;

	res = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res = res * 10 + *str - '0';
		else
			return (res);
		str++;
	}
	return (res);
}

int			ft_atoi(const char *str)
{
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v'
				|| *str == '\f' || *str == ' ' || *str == '\r')
			str++;
		else
			break ;
	}
	if (*str == '+' || *str == '-')
		str++;
	if (as_to_in(str) != 0)
	{
		if (*(str - 1) == '-')
			return ((int)as_to_in(str) * -1);
		return ((int)as_to_in(str));
	}
	return (0);
}
