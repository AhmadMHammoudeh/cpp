# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/07/05 14:57:04 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat
SRCS		= ./Bureaucrat.cpp ./main.cpp ./Intern.cpp ./Form.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp ./PresidentialPardonForm.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
SHRUB		= *_shrubbery
OS	= $(shell uname)
ifeq ($(OS), Linux)
	C++			= g++
else
	C++			= c++
endif

$(NAME): ${OBJS}
	${C++} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
	
fclean+: fclean
	$(RM) $(SHRUB)
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)

	
re: fclean all

.PHONY: all clean fclean re .cpp.o test
