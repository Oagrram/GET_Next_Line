/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:58:05 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/15 00:38:16 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (n && *us1 == *us2)
	{
		us1++;
		us2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*us1 - *us2);
}
