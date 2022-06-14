# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/06/14 18:05:17 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Fixed
SRCS		= ./Fixed.cpp ./main.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
OS	= $(shell uname)
ifeq ($(OS), Linux)
	CXX			= g++
else
	CXX			= c++ 
endif

$(NAME): ${OBJS}
	${CXX} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all clean fclean re .cpp.o test
