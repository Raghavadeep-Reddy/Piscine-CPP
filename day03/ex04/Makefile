# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 23:37:48 by omiroshn          #+#    #+#              #
#    Updated: 2018/04/05 23:37:49 by omiroshn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
FILES = main FragTrap ScavTrap ClapTrap NinjaTrap SuperTrap
HDRS = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp SuperTrap.hpp
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)
%.o: %.cpp $(HDRS)
	clang++ -o $@ $(FLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
