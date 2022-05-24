# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:49:50 by ahhammou          #+#    #+#              #
#    Updated: 2022/05/24 13:50:46 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCS		= ./megaphone.cpp
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
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all clean fclean re .cpp.o test
