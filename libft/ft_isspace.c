/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymhabib <aymhabib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 22:51:42 by aymhabib          #+#    #+#             */
/*   Updated: 2019/05/20 22:51:44 by aymhabib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}