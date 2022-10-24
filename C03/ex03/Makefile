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

NAME = DiamondTrap

SRCS = main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.hpp ScavTrap.cpp FragTrap.cpp FragTrap.hpp DiamondTrap.hpp DiamondTrap.cpp

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -Wnoshadow -g3

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(OBJS) -o $(NAME)

%.o: %.c
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
