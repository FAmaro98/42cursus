# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: franalme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 14:51:08 by franalme          #+#    #+#              #
#    Updated: 2023/01/27 14:51:09 by franalme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Aliases

CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf


# Source Files
SRC =  ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c ft_memchr.c\


# Object Files
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)	
 
re: fclean all
