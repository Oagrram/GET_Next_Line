/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymhabib <aymhabib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 23:50:41 by aymhabib          #+#    #+#             */
/*   Updated: 2019/05/23 10:57:12 by aymhabib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_table(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
	return ;
}

void	print_table_x2(char ***doubletable)
{
	int i;

	i = 0;
	while (doubletable[i])
	{
		print_table(doubletable[i]);
		i++;
	}
}
