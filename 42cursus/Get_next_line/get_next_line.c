/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:17:43 by franalme          #+#    #+#             */
/*   Updated: 2023/01/18 13:17:43 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_write(char *buffer, char *stash)
{
	char	*temp;

	temp = ft_strjoin(buffer, stash);
	free(buffer);
	return (temp);
}

char	*readfd(int fd, char *out)
{
	char	*buffer;
	int		nbyte;

	nbyte = 1;
	if (!out)
		out = ft_calloc (1, 1);
	buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	while (nbyte > 1)
	{
		nbyte = read(fd, buffer, BUFFER_SIZE);
		if (nbyte == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[nbyte] = 0;
		out = ft_write(out, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (out);
}

char	*ft_writeline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line [i++] = '\n';
	return (line);
}

char	*ft_trimline(char	*buffer)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char		*buffer;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = readfd(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_writeline(buffer);
	buffer = ft_trimline(buffer);
	return (line);
}
