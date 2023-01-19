# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 11:45:47 by rcruz-an          #+#    #+#              #
#    Updated: 2023/01/19 14:59:11 by rcruz-an         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = libftprintf.a
SCRIPTS = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_strchr.c ft_itoa.c

OBJS = $(SCRIPTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all