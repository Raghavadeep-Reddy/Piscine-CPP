# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 20:35:19 by omiroshn          #+#    #+#              #
#    Updated: 2018/03/26 20:35:20 by omiroshn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = $(addsuffix .cpp, $(NAME))
OBJ = $(addsuffix .o, $(NAME))
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)
%.o: %.cpp
	clang++ -o $@ $(FLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all