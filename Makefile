# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:12:13 by kaheinz           #+#    #+#              #
#    Updated: 2022/02/21 03:59:00 by kaheinz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = libft.h

SRCS = ft_isdigit.c ft_memset.c ft_isprint.c\
ft_strlcat.c ft_atoi.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
ft_strdup.c ft_toupper.c ft_memchr.c ft_isalnum.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_calloc.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
