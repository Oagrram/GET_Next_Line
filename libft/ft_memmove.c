/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:41:29 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 19:16:51 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
		return (dst);
	}
	return ((void *)ft_strncpy((char *)dst, (char *)src, len));
}
