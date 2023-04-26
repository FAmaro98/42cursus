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

// ft_write adds buffer content to a temporary var, and frees buffer memory 
char	*ft_write(char *buffer, char *stash)
{
	char	*temp;

	if (*stash == '\0')
		return (buffer);
	temp = ft_strjoin(buffer, stash);
	if (temp == NULL)
		return (NULL);
	free(buffer);
	return (temp);
}

// readfd allocates memory to 'out', reads from the text file using read
// function for BUFFERSIZE length, until reaching a '\n', and uses ft_write 
// to add buffer to 'out.
char	*readfd(int fd, char *out)
{
	char	*buffer;
	int		nbyte;

	if (!out)
		out = ft_calloc (1, 1);
	buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	nbyte = 1;
	while (nbyte > 0)
	{
		nbyte = read(fd, buffer, BUFFER_SIZE);
		if (nbyte == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[nbyte] = '\0';
		out = ft_write(out, buffer);
		if (out == NULL)
		{
			free(buffer);
			return (NULL);
		}
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (out);
}

//ft_writeline transfers the line from the buffer to the 'line'.
//calloc + 2 because of dif from position and length + '\n'. 
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
	if (buffer[i] == '\n')
	{
		line [i] = buffer[i];
		i++;
	}
	line [i] = '\0';
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
	{
		return (NULL);
	}
	buffer = readfd(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_writeline(buffer);
	buffer = ft_trimline(buffer);
	if (buffer == 0)
		free(buffer);
	return (line);
}


