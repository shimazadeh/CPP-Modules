# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shabibol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 17:41:06 by shabibol          #+#    #+#              #
#    Updated: 2022/07/02 17:41:08 by shabibol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalBrain

SRCS = main.cpp Animal.cpp Animal.hpp Cat.cpp Cat.hpp Dog.cpp Dog.hpp Brain.cpp Brain.hpp

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -Wnoshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.c
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
