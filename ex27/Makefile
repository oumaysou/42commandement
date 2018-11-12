# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 16:18:32 by oumaysou          #+#    #+#              #
#    Updated: 2018/11/12 17:01:34 by oumaysou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_display.c

OBJ = main.o ft_display.o

HEADER = ft_display.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -I.$(HEADER) $(SRC) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
