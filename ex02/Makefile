# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 11:05:04 by mgayout           #+#    #+#              #
#    Updated: 2024/09/03 11:05:04 by mgayout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
FLAG	= -Wall -Wextra -Werror -std=c++98 -g
SRC		= main.cpp

all: $(NAME)

$(NAME):
			c++ $(FLAG) $(SRC) -o $(NAME)

fclean:
			rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re