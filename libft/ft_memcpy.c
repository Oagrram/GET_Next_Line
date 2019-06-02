/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:03:44 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/15 00:16:15 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *pdst;
	char *psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	while (n)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
		n--;
	}
	return (dst);
}
