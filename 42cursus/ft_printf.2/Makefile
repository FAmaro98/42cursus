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
SRC =  ft_printf.c ft_putchar.c ft_putnbr_xX.c ft_putnbr.c ft_putpointer.c ft_putstr.c

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
