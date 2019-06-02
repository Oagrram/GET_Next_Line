/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:59:50 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/14 18:03:10 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	p = (char *)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size + 1);
	return (p);
}
