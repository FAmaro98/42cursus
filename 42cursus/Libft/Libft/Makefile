# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: franalme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 19:50:42 by franalme          #+#    #+#              #
#    Updated: 2023/01/09 19:50:52 by franalme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Aliases

NAME = libft.a 
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf


# Source Files
SRC1 =  ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c ft_memchr.c\
        ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
		ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c\

 SRC2 =  ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
         ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c ft_itoa.c\

# Object Files
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)

all: $(NAME)

$(NAME): $(OBJ1) $(OBJ2)
	ar rcs $(NAME) $(OBJ1) $(OBJ2)

clean:
		$(RM) $(OBJ1) $(OBJ2)

fclean: clean
		$(RM) $(NAME)	
 
re: fclean all