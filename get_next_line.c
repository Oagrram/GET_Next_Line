/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 00:54:43 by oagrram           #+#    #+#             */
/*   Updated: 2019/05/02 00:55:33 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	help(const int fd, char **str, int j, char **line)
{
	char *tmp;

	if (str[fd][j] == '\n')
	{
		*line = ft_strsub(str[fd], 0, j);
		tmp = ft_strdup(str[fd] + j + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][j] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
}

int			get_next_line(const int fd, char **line)
{
	static char		*str[4863];
	int				ret;
	char			buf[BUFF_SIZE + 1];
	int				j;

	if (!line || read(fd, buf, 0) < 0)
		return (-1);
	j = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(0);
		str[fd] = ft_strjoin(str[fd], buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	while (str[fd][j] != '\n' && str[fd][j] != '\0')
		j++;
	help(fd, str, j, line);
	return (1);
}
