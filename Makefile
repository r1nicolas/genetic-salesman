#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/20 20:57:36 by aguilbau          #+#    #+#              #
#    Updated: 2015/02/10 20:17:49 by rnicolas         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CXX			=	g++
CPPFLAGS	=	-Wall -Werror -Wextra -g
SRCS		=	Map.class.cpp \
				Organism.class.cpp \
				Vertex.class.cpp \
				main.cpp
OBJS		=	$(SRCS:%.cpp=%.o)
NAME		=	genetic-salesman

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
