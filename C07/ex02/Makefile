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

NAME = array

SRCS = main.cpp Array.hpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -g3 -std=c++20

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $<

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
