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

NAME = StupidIntern

SRCS = main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.hpp Form.cpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp Intern.cpp Intern.hpp

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -Wnoshadow -g3 -std=c++98

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
