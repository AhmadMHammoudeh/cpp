# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/05/31 13:43:46 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sed
SRCS		= ./main.cpp 
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
OS	= $(shell uname)
ifeq ($(OS), Linux)
	C++			= g++
else
	C++			= clang++
endif

.cpp.o:
	${C++} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${C++} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all clean fclean re .cpp.o test
