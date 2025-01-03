# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 18:56:01 by sarosa-b          #+#    #+#              #
#    Updated: 2024/11/12 13:23:36 by sarosa-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
SRCS		= ft_printf.c ft_printf_text.c ft_printf_numbers.c
OBJS		= $(SRCS:.c=.o)
RM 			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all
