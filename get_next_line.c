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
# define BUFF_SIZE 5


char	**buff_cat(char *buffer,char **line)
{
	static char *after;
	int index;
	int c;

	c = 0;
	index = 0;
	while(index++ < BUFF_SIZE)
	{
		if(buffer[index] == '\n')
			break ;
	}
	printf ("index == %d \n",index);
//	buffer = ft_strsub(buffer, 0, index);	
//	*line = strdup(buffer);
	printf ("line == %s\n",*line);
	printf ("buffer == %s\n BUFF === %d\n",buffer,BUFF_SIZE);
	if(index < BUFF_SIZE)
	{	
		while(index <= BUFF_SIZE)
		{
			//ft_memcpy(*line, buffer,index);
			after[c++] = buffer[index++];
			printf("after == %s\n",after);
		}
	}	
	//printf ("line == %s\n",*line);
	//buffer[index] = 0;	
	//*line = strdup(buffer);
	printf ("line = %s\n",*line);
	return (line);
}

int		get_next_line(const int fd, char **line)
{
	char buffer[BUFF_SIZE + 1];
	static char *after;
	int r;
	int i;

	buffer[BUFF_SIZE] = '\0';
	i = 0;
	*line = ft_strdup("\0");
	if(after)
		*line = ft_strjoin(*line,after);
	while ((r = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		i = 0;
		//printf("buffer == %s\n",buffer);
		while(buffer[i] != '\n' && i < BUFF_SIZE)
			i++;
		//printf("index == %d\n",i);
		*line = ft_strjoin(*line,ft_strsub(buffer, 0, i));
		//printf("line == %s\n -----------\n",*line);
		if(i < BUFF_SIZE)
			break ;
	}
	if(i <= BUFF_SIZE)
		after = ft_strsub(buffer, i, BUFF_SIZE);
	if(r == -1)
	printf("after == %s\n",after);
	return 0;
}

int main ()
{
	//char buufe[6];
	char *line;
	int fd = open("test.txt" , O_RDONLY);
	/*while (read(fd, buufe,3) > 0)
	  {
	  printf("buffer == %s\n",buufe);
	  }
	  int ret = read(fd, buufe,8);
	  printf("fd == %i \n ret of read == %d \n",fd, ret);
	  */
	get_next_line(fd, &line);
	printf("line == %s\n",*line);
	printf("++++++++++2\n");
	get_next_line(fd, &line);
	printf("line == %s\n",*line);
	printf("++++++++++3\n");
	//get_next_line(fd, &line);
	//printf ("line = %s\n",line);
}
