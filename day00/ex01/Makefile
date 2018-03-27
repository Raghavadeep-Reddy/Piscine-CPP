# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 21:04:31 by omiroshn          #+#    #+#              #
#    Updated: 2018/03/26 21:04:32 by omiroshn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FILES = main Contact Phonebook
HDRS = Contact.h Phonebook.h
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))
# FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(OBJ) -o $(NAME)
%.o: %.cpp $(HDRS)
	g++ -o $@ $(FLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
