/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:14:23 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/14 17:57:52 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;

	if ((!s1) || (!s2))
		return (NULL);
	p = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (p)
	{
		p = ft_strcpy(p, (char *)s1);
		p = ft_strcat(p, (char *)s2);
		return (p);
	}
	return (NULL);
}
