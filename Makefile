NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_atoi.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_memchr.c ft_isalnum.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c 
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
