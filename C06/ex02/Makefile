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

NAME = identifytype

INCLUDES = Base.hpp

SRCS = main.cpp Base.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -std=c++20 $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $<

clean:
	rm -f *.o
	rm -f *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
