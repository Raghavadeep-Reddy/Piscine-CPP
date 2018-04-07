# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/06 19:36:53 by omiroshn          #+#    #+#              #
#    Updated: 2018/04/06 19:36:54 by omiroshn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
FILES = main Peon Sorcerer Victim
HDRS = Peon.hpp Sorcerer.hpp Victim.hpp
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
