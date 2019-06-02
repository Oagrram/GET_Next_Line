/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 00:54:43 by oagrram           #+#    #+#             */
/*   Updated: 2019/05/05 03:21:10 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_line(const int fd, char **str, char **line)
{
	char	*tmp;
	int		j;

	j = 0;
	while (str[fd][j] != '\n' && str[fd][j] != '\0')
		j++;
	if (str[fd][j] == '\n')
	{
		*line = ft_strsub(str[fd], 0, j);
		tmp = ft_strdup(str[fd] + j + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
		return (1);
	}
	if (j > 0)
		*line = ft_strdup(str[fd]);
	ft_strdel(&str[fd]);
	return (j != 0);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str[4864];
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*to_del;

	if (!line || read(fd, buf, 0) < 0)
		return (-1);
	ret = 0;
	if (str[fd] == NULL || NULL == ft_strchr(str[fd], '\n'))
	{
		while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			if (str[fd] == NULL)
				str[fd] = ft_strnew(0);
			to_del = str[fd];
			str[fd] = ft_strjoin(str[fd], buf);
			ft_strdel(&to_del);
			if (ft_strchr(buf, '\n'))
				break ;
		}
	}
	if ((ret == 0 && str[fd] == NULL))
		return (0);
	return (get_line(fd, str, line));
}
