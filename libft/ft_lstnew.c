/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 20:11:02 by oagrram           #+#    #+#             */
/*   Updated: 2019/04/16 16:42:09 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = (void *)malloc(content_size);
	if (!node->content)
		return (NULL);
	node->next = NULL;
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
		return (node);
	}
	ft_memcpy(node->content, content, content_size);
	node->content_size = content_size;
	return (node);
}
