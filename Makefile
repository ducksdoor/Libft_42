# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 15:12:23 by lortega-          #+#    #+#              #
#    Updated: 2023/04/04 16:13:00 by lortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror 

SRCS =	ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_isascii.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c
 
SRCSB =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

LIB = ar -rcs

INCLUDE = libft.h

all: $(NAME)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB) $(INCLUDE)
	$(LIB) $(NAME) $(OBJSB)

$(NAME):	$(OBJS)
	$(LIB) $(NAME) $(OBJS)

.PHONY: all clean fclean re
