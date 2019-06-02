/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:19:57 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 19:37:08 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (*needle == '\0')
		return ((char*)(haystack));
	while (haystack[i] != '\0' && i < len)
	{
		if ((haystack[i] == needle[0]) && if_int(haystack, needle, i, len))
			return ((char*)(haystack + i));
		i++;
	}
	return (0);
}
