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

#include "libft/libft.h"
//#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
# define BUFF_SIZE 2

static char *after;

char	**buff_cat(char *buffer,char **line)
{
	int index;

	index = 0;
	while(index++ < BUFF_SIZE)
	{
		if(buffer[index] == '\n')
			break ;
	}
	printf ("index == %d \n",index);
	if(index < BUFF_SIZE)
	{
		buffer = ft_strsub(buffer, 0, index);
		printf ("buffer == %s\n",buffer);
		ft_memcpy(*line, buffer,index);
		return (line);
	}	
	//printf ("line == %s\n",*line);
	buffer[index] = 0;
	*line = strdup(buffer);
	printf ("line = %s\n",*line);
	return (line);
}

int		get_next_line(const int fd, char **line)
{
	char buffer[BUFF_SIZE + 1];
	buffer[BUFF_SIZE] = '\0';
	int r;

	//printf ("ret read == %d \n ",(int)read(fd, buffer, BUFF_SIZE));
	//printf("buffer  == %s\n",buffer);
	while ((r = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		printf("buffer  == %s\n",buffer);
		buff_cat(buffer,line);
		printf ("FIN WHILE\n");
	}
	return 0;
}

int main ()
{
	//char buufe[6];
	char *line;
	int fd = open("test.txt" , O_RDONLY);
	printf("fd == %d\n",fd);
	/*while (read(fd, buufe,3) > 0)
	  {
	  printf("buffer == %s\n",buufe);
	  }
	  int ret = read(fd, buufe,8);
	  printf("fd == %i \n ret of read == %d \n",fd, ret);
	  */
	get_next_line(fd, &line);
	printf ("line = %s\n",line);
}
