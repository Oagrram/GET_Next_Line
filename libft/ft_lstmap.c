/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 23:15:10 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/21 05:45:27 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fraiche;
	t_list *flist;

	if (!lst || !f)
		return (NULL);
	fraiche = f(lst);
	if (fraiche == NULL)
		return (NULL);
	flist = fraiche;
	while (lst->next)
	{
		if (!(fraiche->next = f(lst->next)))
		{
			ft_lstdel(&flist, &ft_del);
			return (NULL);
		}
		fraiche = fraiche->next;
		lst = lst->next;
	}
	return (flist);
}
