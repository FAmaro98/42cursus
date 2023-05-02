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

char	*mem_handler(int res, char *buf, char *s_buf)
{
	if (res == 0)
	{
		free(buf);
		return (s_buf);
	}
	else
	{
		free(buf);
		free(s_buf);
		s_buf = 0;
		return (s_buf);
	}
}

char	*trim_buffer(char *buf)
{
	char	*str;

	if (!buf)
		return (0);
	if (ft_strchr(buf, '\n') == 0)
		return (0);
	if (ft_strlen(ft_strchr(buf, '\n')) - 1 == 0)
	{
		free(buf);
		return (0);
	}
	str = malloc(sizeof(char) * (ft_strlen(ft_strchr(buf, '\n'))));
	ft_memcpy(str, buf + ft_strlen(buf)
		- ft_strlen(ft_strchr (buf, '\n'))
		+1, ft_strlen(ft_strchr(buf, '\n')) - 1);
	str[ft_strlen(ft_strchr(buf, '\n')) - 1] = '\0';
	if (buf)
		free(buf);
	return (str);
}

char	*extract_buffer(char *buf)
{
	char	*str;

	if (!buf)
		return (0);
	if (ft_strchr(buf, '\n') == 0)
		return (buf);
	str = malloc(sizeof(char) * (ft_strlen(buf)
				- ft_strlen(ft_strchr(buf, '\n')) + 2));
	ft_memcpy(str, buf, (ft_strlen(buf)
			- ft_strlen(ft_strchr(buf, '\n')) + 1));
	str[ft_strlen(buf) - ft_strlen(ft_strchr(buf, '\n')) + 1] = '\0';
	return (str);
}

char	*start_buffer(int fd, char *s_buf)
{
	char	*buf;
	char	*buf2;
	int		res;

	buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	res = read(fd, buf, BUFFER_SIZE);
	if (res <= 0)
	{
		s_buf = mem_handler(res, buf, s_buf);
		return (s_buf);
	}
	buf[res] = '\0';
	if (!s_buf)
		s_buf = ft_strdup(buf);
	else
	{
		buf2 = ft_strdup(s_buf);
		free(s_buf);
		s_buf = ft_strjoin(buf2, buf);
		free(buf2);
	}
	free(buf);
	if (!ft_strchr(s_buf, '\n'))
		s_buf = start_buffer(fd, s_buf);
	return (s_buf);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*str;

	if (fd < 0)
		return (0);
	if (buf == 0 || ft_strchr(buf, '\n') == 0)
		buf = start_buffer(fd, buf);
	str = extract_buffer(buf);
	buf = trim_buffer(buf);
	if (buf == 0)
		free(buf);
	return (str);
}
