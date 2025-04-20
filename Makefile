# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 15:12:23 by lortega-          #+#    #+#              #
#    Updated: 2023/04/07 12:35:43 by lortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS =	ft_isalpha.c \
		ft_clean_line.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_compare_char.c \
		ft_get_next_line.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strcmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_free.c \
		ft_chrstr.c \
		ft_get_rgba.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstiter.c \

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCSBONUS:.c=.o)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

bonus: $(OBJS_BONUS) $(OBJS)
	@$(AR) $(NAME) $(OBJS_BONUS) $(OBJS)

clean:
	@$(RM) $(OBJS_BONUS) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all 

.PHONY: re all clean fclean
