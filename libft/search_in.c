/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:59:19 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 19:59:52 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		search_in(const char *str, const char *sstr)
{
	size_t	c;
	int		i;

	i = 0;
	c = 0;
	while (sstr[i] != '\0')
	{
		if (sstr[i] == str[i])
			c++;
		else
			break ;
		i++;
	}
	if (ft_strlen(sstr) == c)
		return (1);
	return (0);
}
