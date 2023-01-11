# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 00:59:26 by adiouane          #+#    #+#              #
#    Updated: 2023/01/11 18:22:20 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := a.out

SRC := main.cpp  \

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(CFLAGS) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean : clean
	@rm -f $(NAME)

re : fclean all
