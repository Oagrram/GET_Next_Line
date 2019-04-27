/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 22:22:37 by oagrram           #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char buffer[BUFF_SIZE + 1];
	static char *after, *tmp;
	int r;
	int i;

	//buffer[BUFF_SIZE] = '\0';
	i = 0;
	//*line = ft_strdup("\0");
		*line = after ? ft_strdup(after) : ft_strdup("");
		after ? ft_strdel(&after) : 0;
	while ((r = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		i = 0;
		while(buffer[i] != '\n' && i < BUFF_SIZE)
			i++;
		tmp = *line;
		*line = ft_strjoin(*line,ft_strsub(buffer, 0, i));
		free(tmp);
		if(i < BUFF_SIZE)
			break ;
	}
	if(i <= BUFF_SIZE)
		after = ft_strsub(buffer, i, BUFF_SIZE);
	//if(r == -1)
	return (*line && **line);
}

int main ()
{
	//char buufe[6];
	char *line;
	int fd = open("test.txt" , O_RDONLY);
	int i = 0;
	/*while (read(fd, buufe,3) > 0)
	  {
	  printf("buffer == %s\n",buufe);
	  }
	  int ret = read(fd, buufe,8);
	  printf("fd == %i \n ret of read == %d \n",fd, ret);
	  */
	//while(1)
	//{
		while(get_next_line(fd, &line) > 0)
		{
			printf("%s\n",line);
			free(line);
		}
		
	//}
	
	//get_next_line(fd, &line);
	//printf ("line = %s\n",line);
}
