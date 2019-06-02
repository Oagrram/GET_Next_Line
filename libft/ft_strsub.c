/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:38:16 by oagrram           #+#    #+#             */
/*   Updated: 2019/05/04 18:46:32 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (i < len)
			p[i++] = s[start++];
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
