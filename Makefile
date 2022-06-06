# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:12:13 by kaheinz           #+#    #+#              #
#    Updated: 2022/06/07 00:36:18 by kaheinz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = libft.h

SRCS = ft_putchar_fd.c ft_striteri.c ft_isdigit.c ft_memset.c ft_isprint.c\
ft_strtrim.c ft_strjoin.c ft_substr.c ft_strlcat.c ft_atoi.c\
ft_putendl_fd.c ft_split.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
ft_strmapi.c ft_itoa.c ft_strdup.c ft_toupper.c ft_memchr.c ft_isalnum.c\
ft_putstr_fd.c ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_putnbr_fd.c ft_calloc.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c\
conversions_hexa.c conversions_icsu.c ft_printf.c libft_tools.c\
get_next_line.c get_next_line_utils.c\

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = ${BONUS:.c=.o}

CC = gcc

CFLAGS = -Werror -Wextra -Wall

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:	${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all: $(NAME)

clean:
	rm -f $(OBJS) ${OBJSBONUS}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
