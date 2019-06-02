/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:55:12 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/08 23:22:02 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	unsigned char ch;

	ch = (unsigned char)c;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n)
	{
		*pdst = *psrc;
		if (*psrc == ch)
			return (pdst + 1);
		pdst++;
		psrc++;
		n--;
	}
	return (NULL);
}
