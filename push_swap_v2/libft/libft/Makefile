# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-ero <jose-ero@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 19:26:49 by jose-ero          #+#    #+#              #
#    Updated: 2024/04/27 19:26:53 by jose-ero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	./ft_atoi.c 		\
 		./ft_bzero.c		\
		./ft_calloc.c		\
 		./ft_isalnum.c 		\
 		./ft_isalpha.c 		\
 		./ft_isascii.c 		\
 		./ft_isdigit.c 		\
		./ft_isprint.c 		\
		./ft_itoa.c 		\
 		./ft_memchr.c 		\
 		./ft_memcmp.c 		\
 		./ft_memcpy.c 		\
 		./ft_memmove.c 		\
 		./ft_memset.c 		\
 		./ft_putchar_fd.c 	\
 		./ft_putendl_fd.c 	\
 		./ft_putnbr_fd.c 	\
 		./ft_putstr_fd.c 	\
		./ft_split.c		\
		./ft_strchr.c		\
		./ft_strdup.c		\
		./ft_striteri.c		\
		./ft_strjoin.c		\
		./ft_strlcat.c		\
		./ft_strlcpy.c		\
		./ft_strlen.c		\
		./ft_strmapi.c		\
		./ft_strncmp.c		\
		./ft_strnstr.c		\
		./ft_strrchr.c		\
		./ft_strtrim.c		\
		./ft_substr.c		\
		./ft_tolower.c		\
		./ft_toupper.c		\

SRC_BONUS =		./ft_lstnew.c			\
				./ft_lstadd_front.c 	\
				./ft_lstsize.c 			\
				./ft_lstlast.c 			\
				./ft_lstadd_back.c 		\
				./ft_lstdelone.c		\
				./ft_lstclear.c			\
				./ft_lstiter.c			\
				./ft_lstmap.c			\

OBJ = $(SRC:.c=.o)                                                                                                                                                                                                 
OBJ_BONUS = $(SRC_BONUS:.c=.o)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
CC = cc -Wall -Wextra -Werror

all: $(NAME)                                                                                                                                                                                                       
                                                                                                                                                                                                                   
$(NAME):	$(OBJ) $(OBJ_BONUS) 
		ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean:                                                                                                                                                                                                             
		rm -rf $(OBJ) $(OBJ_BONUS)                                                                                                                                                                                             
                                                                                                                                                                                                                   
fclean: clean                                                                                                                                                                                                      
		rm -rf $(NAME) 

re: fclean all                                                                                                                                                                                                     
                                                                                                                                                                                                                   
