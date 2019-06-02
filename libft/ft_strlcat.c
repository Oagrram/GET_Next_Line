/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:02:40 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/18 20:15:32 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_size;
	size_t	src_size;
	size_t	res;

	i = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size == 0)
		return (src_size);
	res = (dst_size < size) ? dst_size + src_size : size + src_size;
	while (src[i] && dst_size < size - 1)
	{
		dst[dst_size] = src[i];
		i++;
		dst_size++;
	}
	dst[dst_size++] = '\0';
	return (res);
}
