# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/05/24 13:53:08 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCS		= ./ex01.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
C++			= clang++

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

test: re
	./phonebook


.PHONY: all clean fclean re .cpp.o test
