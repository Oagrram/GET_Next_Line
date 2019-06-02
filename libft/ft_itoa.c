/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 02:30:02 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 18:18:06 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*p;
	long int	dev;
	long int	mod;
	int			i;

	i = get_int_size(n);
	dev = n;
	mod = 0;
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	if (n == 0)
		p[--i] = '0';
	while (dev != 0)
	{
		mod = dev % 10;
		if (n < 0)
			mod = mod * -1;
		p[--i] = mod + 48;
		dev = dev / 10;
	}
	if (n < 0)
		p[--i] = '-';
	return (p);
}
