# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 18:24:41 by nazouz            #+#    #+#              #
#    Updated: 2024/08/29 17:41:41 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Forms

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
							RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRCS			=			main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
							RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
