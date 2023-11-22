# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:49:28 by phudyka           #+#    #+#              #
#    Updated: 2023/11/22 10:49:19 by phudyka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = Classe_abstraite

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =		main.cpp Cure.cpp Ice.cpp 					\
			IMateriaSource.cpp MateriaSource.cpp 		\
		 	AMateria.cpp ICharacter.cpp Character.cpp 	\

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
