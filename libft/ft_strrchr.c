/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:18:06 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/14 18:04:16 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = ft_strlen(s);
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return (&((char *)s)[i]);
		i--;
	}
	if (ch == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}
