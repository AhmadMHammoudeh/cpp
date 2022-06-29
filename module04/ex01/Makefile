# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/06/27 17:19:18 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Animal
SRCS		= ./Animal.cpp ./cat.cpp ./main.cpp ./Brain.cpp ./dog.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98 
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
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all clean fclean re .cpp.o test
