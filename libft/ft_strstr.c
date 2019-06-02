/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:55:09 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 20:00:13 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	const char	*p;
	int			i;

	i = 0;
	while (haystack[i] != '\0')
	{
		p = haystack + i;
		if (needle[0] == haystack[i])
		{
			if (search_in(p, needle) == 1)
				return ((char *)p);
		}
		i++;
	}
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	return (NULL);
}
