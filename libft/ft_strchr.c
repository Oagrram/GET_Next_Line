/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:06:28 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 10:38:32 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (NULL);
}
