/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 00:03:49 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/19 18:36:20 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst == NULL)
		return ;
	while (*alst != NULL)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
		*alst = tmp;
	}
}
