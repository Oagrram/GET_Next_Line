/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:47:22 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/14 16:39:31 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*p;
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j = ft_strlen(s);
	j--;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (j <= 0)
		return (ft_strdup(""));
	p = ft_strnew(j - i + 1);
	if (!p)
		return (NULL);
	while (i <= j)
		p[c++] = s[i++];
	p[c] = '\0';
	return (p);
}
