/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:16:14 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/21 05:50:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		t;
	int		i;
	char	**tab;

	t = -1;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * c_words(s, c) + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			i = c_char(s, c);
			tab[++t] = ft_strsub(s, 0, i);
			s = s + i;
		}
		else
			s++;
	}
	tab[++t] = 0;
	return (tab);
}
