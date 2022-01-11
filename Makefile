# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 19:07:59 by ahazim            #+#    #+#              #
#    Updated: 2022/01/11 16:10:37 by ahazim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = ft_printf.h

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME):$(OBJ) $(INCLUDES)
		ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all