/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:15:11 by franalme          #+#    #+#             */
/*   Updated: 2023/01/17 18:15:12 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

void	*ft_bzero(void *str, int n);
char	*ft_strchr(const char *str, int c);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *c);
char	*get_next_line(int fd);
char	*ft_write(char *buffer, char *stash);
char	*readfd(int fd, char *out);
char	*ft_writeline(char *buffer);
char	*ft_trimline(char	*buffer);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup( const char *str1 );

#endif
